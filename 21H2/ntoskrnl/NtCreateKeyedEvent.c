/*
 * XREFs of NtCreateKeyedEvent @ 0x1407C5730
 * Callers:
 *     <none>
 * Callees:
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateKeyedEvent(
        PHANDLE KeyedEventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  char PreviousMode; // cl
  NTSTATUS result; // eax
  char *v8; // rcx
  _DMA_OPERATIONS **p_DmaOperations; // rax
  __int64 v10; // rdx
  char *v11; // [rsp+20h] [rbp-68h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-30h] BYREF
  unsigned __int64 v13[5]; // [rsp+60h] [rbp-28h] BYREF

  DmaAdapter = 0LL;
  v13[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && ((unsigned __int8)KeyedEventHandle & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  *KeyedEventHandle = 0LL;
  if ( Flags )
    return -1073741582;
  result = ObCreateObjectEx(
             PreviousMode,
             ExpKeyedEventObjectType,
             (__int64)ObjectAttributes,
             PreviousMode,
             v11,
             1536,
             0,
             0,
             &DmaAdapter,
             0LL);
  if ( result >= 0 )
  {
    v8 = (char *)DmaAdapter;
    p_DmaOperations = &DmaAdapter->DmaOperations;
    v10 = 64LL;
    do
    {
      *(p_DmaOperations - 1) = 0LL;
      p_DmaOperations[1] = (_DMA_OPERATIONS *)p_DmaOperations;
      *p_DmaOperations = (_DMA_OPERATIONS *)p_DmaOperations;
      p_DmaOperations += 3;
      --v10;
    }
    while ( v10 );
    result = ObInsertObjectEx(v8, 0LL, DesiredAccess, 0, 0, 0LL, v13);
    if ( result >= 0 )
      *KeyedEventHandle = (HANDLE)v13[0];
  }
  return result;
}
