/*
 * XREFs of MiWakeLargePageWaiters @ 0x140557FBC
 * Callers:
 *     MiInsertLargePageChain @ 0x1403094D4 (MiInsertLargePageChain.c)
 *     MiInsertLargePageInNodeList @ 0x1403097A0 (MiInsertLargePageInNodeList.c)
 *     MiLargePageMovesComplete @ 0x1403F6D20 (MiLargePageMovesComplete.c)
 * Callees:
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 */

__int64 __fastcall MiWakeLargePageWaiters(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = KeSignalGate((__int64)(a1 + 1), 1);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
