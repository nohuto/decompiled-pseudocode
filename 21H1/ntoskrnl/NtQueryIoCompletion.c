/*
 * XREFs of NtQueryIoCompletion @ 0x1408901A0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQueryIoCompletion(
        HANDLE IoCompletionHandle,
        IO_COMPLETION_INFORMATION_CLASS IoCompletionInformationClass,
        PVOID IoCompletionInformation,
        ULONG IoCompletionInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  PULONG v11; // rbx
  int v12; // esi
  int v13; // r14d
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF

  if ( IoCompletionInformationClass )
    return -1073741821;
  if ( IoCompletionInformationLength != 4 )
    return -1073741820;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)IoCompletionInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = 0x7FFFFFFF0000LL;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoCompletionInformation < 0x7FFFFFFF0000LL )
      v10 = (__int64)IoCompletionInformation;
    *(_BYTE *)v10 = *(_BYTE *)v10;
    *(_BYTE *)(v10 + 3) = *(_BYTE *)(v10 + 3);
    v11 = ReturnLength;
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v9 = (__int64)ReturnLength;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    v11 = ReturnLength;
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(IoCompletionHandle, 1u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = *((_DWORD *)Object + 1);
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    if ( PreviousMode )
    {
      *(_DWORD *)IoCompletionInformation = v13;
      if ( v11 )
        *v11 = 4;
    }
    else
    {
      *(_DWORD *)IoCompletionInformation = v13;
      if ( v11 )
        *v11 = 4;
    }
  }
  return v12;
}
