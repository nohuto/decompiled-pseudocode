/*
 * XREFs of NtRemoveIoCompletionEx @ 0x1405F7CD0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     IoRemoveIoCompletion @ 0x14020F000 (IoRemoveIoCompletion.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     IopVerifierExAllocatePool_2 @ 0x1405019EC (IopVerifierExAllocatePool_2.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtRemoveIoCompletionEx(
        HANDLE IoCompletionHandle,
        PFILE_IO_COMPLETION_INFORMATION IoCompletionInformation,
        ULONG Count,
        PULONG NumEntriesRemoved,
        PLARGE_INTEGER Timeout,
        BOOLEAN Alertable)
{
  __int64 v7; // rdi
  PLARGE_INTEGER v10; // r15
  KPROCESSOR_MODE PreviousMode; // si
  PLIST_ENTRY *Pool_2; // r14
  NTSTATUS v13; // ebx
  __int64 v15; // rcx
  ULONG v16; // [rsp+44h] [rbp-F4h] BYREF
  LARGE_INTEGER *v17; // [rsp+48h] [rbp-F0h]
  LARGE_INTEGER v18; // [rsp+50h] [rbp-E8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-E0h] BYREF
  _BYTE P[128]; // [rsp+70h] [rbp-C8h] BYREF

  v7 = Count;
  v10 = Timeout;
  memset(P, 0, sizeof(P));
  v18.QuadPart = 0LL;
  v16 = 0;
  if ( (unsigned int)(v7 - 1) > 0x7FFFFFE )
    return -1073741811;
  v17 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(IoCompletionInformation, 32 * v7, 8u);
    v15 = (__int64)NumEntriesRemoved;
    if ( (unsigned __int64)NumEntriesRemoved >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    if ( Timeout )
    {
      v17 = &v18;
      if ( (unsigned __int64)Timeout >= 0x7FFFFFFF0000LL )
        v10 = (PLARGE_INTEGER)0x7FFFFFFF0000LL;
      v18 = *v10;
    }
    v10 = v17;
  }
  else if ( !Timeout )
  {
    v10 = v17;
  }
  if ( (unsigned int)v7 > 0x10 )
  {
    Pool_2 = (PLIST_ENTRY *)IopVerifierExAllocatePool_2(0LL, 8 * v7);
    if ( Pool_2 )
      goto LABEL_7;
    LODWORD(v7) = 16;
  }
  Pool_2 = (PLIST_ENTRY *)P;
LABEL_7:
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( v13 >= 0 )
  {
    v13 = IoRemoveIoCompletion(
            (struct _KQUEUE *)Object,
            (__int64)IoCompletionInformation,
            Pool_2,
            v7,
            &v16,
            PreviousMode,
            v10,
            Alertable);
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  }
  if ( Pool_2 != (PLIST_ENTRY *)P )
    ExFreePoolWithTag(Pool_2, 0);
  if ( v13 >= 0 )
    *NumEntriesRemoved = v16;
  return v13;
}
