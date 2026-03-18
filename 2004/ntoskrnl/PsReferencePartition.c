/*
 * XREFs of PsReferencePartition @ 0x14057EEB8
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsReferencePartition(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
