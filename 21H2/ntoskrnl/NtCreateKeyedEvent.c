/*
 * XREFs of NtCreateKeyedEvent @ 0x1407C5210
 * Callers:
 *     <none>
 * Callees:
 *     ObCreateObjectEx @ 0x140704810 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtCreateKeyedEvent(__int64 *a1, ACCESS_MASK a2, __int64 a3, int a4)
{
  char PreviousMode; // cl
  __int64 result; // rax
  char *v8; // rcx
  _DMA_OPERATIONS **p_DmaOperations; // rax
  __int64 v10; // rdx
  char *v11; // [rsp+20h] [rbp-68h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-30h] BYREF
  unsigned __int64 v13[5]; // [rsp+60h] [rbp-28h] BYREF

  DmaAdapter = 0LL;
  v13[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && ((unsigned __int8)a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  *a1 = 0LL;
  if ( a4 )
    return 3221225714LL;
  result = ObCreateObjectEx(PreviousMode, ExpKeyedEventObjectType, a3, PreviousMode, v11, 1536, 0, 0, &DmaAdapter, 0LL);
  if ( (int)result >= 0 )
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
    result = ObInsertObjectEx(v8, 0LL, a2, 0, 0, 0LL, v13);
    if ( (int)result >= 0 )
    {
      *a1 = v13[0];
      return (unsigned int)result;
    }
  }
  return result;
}
