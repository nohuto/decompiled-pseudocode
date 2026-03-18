/*
 * XREFs of MiWakeLargePageWaiters @ 0x1405B05A0
 * Callers:
 *     MiGetLargePage @ 0x140267060 (MiGetLargePage.c)
 *     MiInsertLargePageInNodeList @ 0x1402BEEA0 (MiInsertLargePageInNodeList.c)
 *     MiInsertLargePageChain @ 0x1402C15F0 (MiInsertLargePageChain.c)
 * Callees:
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 */

__int64 __fastcall MiWakeLargePageWaiters(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (__int64 *)*a1;
      result = KeSignalGate((_DWORD *)a1 + 2, 1);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
