/*
 * XREFs of RtlTraceDatabaseDestroy @ 0x1801029D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x180010FC0 (RtlDeleteCriticalSection.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     RtlpTraceDatabaseFree @ 0x180102C8C (RtlpTraceDatabaseFree.c)
 */

bool __fastcall RtlTraceDatabaseDestroy(__int64 a1)
{
  _QWORD *v2; // rbx
  char v3; // si
  _QWORD *v4; // rdi

  RtlDeleteCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  v2 = *(_QWORD **)(a1 + 16);
  if ( !v2 )
    return 1;
  v3 = 0;
  do
  {
    v4 = (_QWORD *)v2[2];
    if ( !v4 )
      v2 -= 24;
    if ( !(unsigned __int8)RtlpTraceDatabaseFree(v2) )
    {
      DbgPrint("Trace database: failed to release segment %p \n", v2);
      v3 = 1;
    }
    v2 = v4;
  }
  while ( v4 );
  return !v3;
}
