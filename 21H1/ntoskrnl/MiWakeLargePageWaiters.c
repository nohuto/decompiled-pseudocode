/*
 * XREFs of MiWakeLargePageWaiters @ 0x14055228C
 * Callers:
 *     MiInsertLargePageChain @ 0x140345BE8 (MiInsertLargePageChain.c)
 *     MiInsertLargePageInNodeList @ 0x140345EC0 (MiInsertLargePageInNodeList.c)
 *     MiLargePageMovesComplete @ 0x1403EFD10 (MiLargePageMovesComplete.c)
 * Callees:
 *     KeSignalGate @ 0x1403247B0 (KeSignalGate.c)
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
