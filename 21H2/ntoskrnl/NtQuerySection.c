/*
 * XREFs of NtQuerySection @ 0x140607190
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     MmGetSectionInformation @ 0x14068ABA0 (MmGetSectionInformation.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtQuerySection(
        HANDLE SectionHandle,
        SECTION_INFORMATION_CLASS SectionInformationClass,
        PVOID SectionInformation,
        SIZE_T SectionInformationLength,
        PSIZE_T ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v10; // rcx
  SIZE_T v11; // rbx
  int v12; // edi
  __int64 v13; // rdx
  struct _DMA_ADAPTER *v14; // rsi
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(SectionInformation, SectionInformationLength, 4u);
    if ( ReturnLength )
    {
      v10 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v10 = (__int64)ReturnLength;
      *(_QWORD *)v10 = *(_QWORD *)v10;
    }
  }
  if ( SectionInformationClass )
  {
    if ( SectionInformationClass == SectionImageInformation )
    {
      v11 = 64LL;
    }
    else
    {
      if ( SectionInformationClass != SectionRelocationInformation
        && SectionInformationClass != SectionOriginalBaseInformation )
      {
        return -1073741821;
      }
      v11 = 8LL;
    }
  }
  else
  {
    v11 = 24LL;
  }
  if ( SectionInformationLength < v11 )
    return -1073741820;
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(SectionHandle, 1u, MmSectionObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = (unsigned int)SectionInformationClass;
    v14 = (struct _DMA_ADAPTER *)Object;
    v12 = MmGetSectionInformation(Object, v13, SectionInformation);
    if ( v12 >= 0 )
    {
      if ( ReturnLength )
        *ReturnLength = v11;
    }
    HalPutDmaAdapter(v14);
  }
  return v12;
}
