/*
 * XREFs of MiWakeLargePageWaiters @ 0x1405528DC
 * Callers:
 *     MiInsertLargePageChain @ 0x1403168A8 (MiInsertLargePageChain.c)
 *     MiInsertLargePageInNodeList @ 0x140316B80 (MiInsertLargePageInNodeList.c)
 *     MiLargePageMovesComplete @ 0x1403F1070 (MiLargePageMovesComplete.c)
 * Callees:
 *     KeSignalGate @ 0x140350B20 (KeSignalGate.c)
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
