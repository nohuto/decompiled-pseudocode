/*
 * XREFs of NtQuerySection @ 0x1406D6230
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     MmGetSectionInformation @ 0x1405DB7B0 (MmGetSectionInformation.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
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
  NTSTATUS v12; // edi
  SECTION_INFORMATION_CLASS v13; // edx
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
    v13 = SectionInformationClass;
    v14 = (struct _DMA_ADAPTER *)Object;
    v12 = MmGetSectionInformation((__int64)Object, v13, (__int64)SectionInformation);
    if ( v12 >= 0 )
    {
      if ( ReturnLength )
        *ReturnLength = v11;
    }
    HalPutDmaAdapter(v14);
  }
  return v12;
}
