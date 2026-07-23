/*
 * XREFs of NtRemoveIoCompletion @ 0x1406D36D0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IoRemoveIoCompletion @ 0x1402A8D10 (IoRemoveIoCompletion.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtRemoveIoCompletion(
        HANDLE IoCompletionHandle,
        PVOID *KeyContext,
        PVOID *ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER Timeout)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  LARGE_INTEGER *v14; // rbx
  NTSTATUS result; // eax
  NTSTATUS v16; // edi
  ULONG v17; // [rsp+44h] [rbp-64h] BYREF
  LARGE_INTEGER *v18; // [rsp+48h] [rbp-60h]
  __int64 v19; // [rsp+50h] [rbp-58h] BYREF
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  __int128 v21; // [rsp+60h] [rbp-48h] BYREF
  __int128 v22; // [rsp+70h] [rbp-38h]
  PLIST_ENTRY v23; // [rsp+88h] [rbp-20h] BYREF

  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v17 = 0;
  v19 = 0LL;
  v18 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = (__int64)ApcContext;
    if ( (unsigned __int64)ApcContext >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    v11 = (__int64)KeyContext;
    if ( (unsigned __int64)KeyContext >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    v12 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    v13 = (__int64)Timeout;
    if ( Timeout )
    {
      v18 = (LARGE_INTEGER *)&v19;
      if ( (unsigned __int64)Timeout >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      v19 = *(_QWORD *)v13;
    }
    v14 = v18;
  }
  else
  {
    v14 = v18;
    if ( Timeout )
      v14 = Timeout;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v16 = IoRemoveIoCompletion((struct _KQUEUE *)Object, (__int64)&v21, &v23, 1u, &v17, PreviousMode, v14, 0);
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    if ( !v16 )
    {
      *KeyContext = (PVOID)v21;
      *ApcContext = (PVOID)*((_QWORD *)&v21 + 1);
      *(_OWORD *)&IoStatusBlock->Status = v22;
    }
    return v16;
  }
  return result;
}
