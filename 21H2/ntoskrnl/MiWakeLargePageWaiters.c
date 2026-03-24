/*
 * XREFs of MiWakeLargePageWaiters @ 0x140557D7C
 * Callers:
 *     MiInsertLargePageChain @ 0x1402FE784 (MiInsertLargePageChain.c)
 *     MiInsertLargePageInNodeList @ 0x1402FEA50 (MiInsertLargePageInNodeList.c)
 *     MiLargePageMovesComplete @ 0x1403F6D20 (MiLargePageMovesComplete.c)
 * Callees:
 *     KeSignalGate @ 0x1402C2B70 (KeSignalGate.c)
 */

__int64 __fastcall MiWakeLargePageWaiters(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v4 = (_QWORD *)*a1;
      result = KeSignalGate((__int64)(a1 + 1), 1LL, a3, a4);
      a1 = v4;
    }
    while ( v4 );
  }
  return result;
}
