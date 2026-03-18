/*
 * XREFs of MiWakeLargePageWaiters @ 0x1405562AC
 * Callers:
 *     MiInsertLargePageChain @ 0x1402F1AEC (MiInsertLargePageChain.c)
 *     MiInsertLargePageInNodeList @ 0x1402F1DC0 (MiInsertLargePageInNodeList.c)
 *     MiLargePageMovesComplete @ 0x1403F5584 (MiLargePageMovesComplete.c)
 * Callees:
 *     KeSignalGate @ 0x1403331D0 (KeSignalGate.c)
 */

char __fastcall MiWakeLargePageWaiters(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v4; // rbx
  char result; // al

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
