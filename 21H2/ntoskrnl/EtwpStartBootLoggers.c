/*
 * XREFs of EtwpStartBootLoggers @ 0x140865108
 * Callers:
 *     EtwpInitialize @ 0x140B0433C (EtwpInitialize.c)
 * Callees:
 *     EtwpStartBootLogger @ 0x1409EC6F0 (EtwpStartBootLogger.c)
 */

__int64 __fastcall EtwpStartBootLoggers(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx

  if ( !a1 )
    return 3221225485LL;
  v1 = (_QWORD *)(a1 + 8);
  for ( i = *(_QWORD **)(a1 + 8); i != v1; i = (_QWORD *)*i )
    EtwpStartBootLogger(i);
  return 0LL;
}
