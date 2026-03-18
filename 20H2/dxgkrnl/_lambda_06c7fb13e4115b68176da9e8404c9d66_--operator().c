/*
 * XREFs of _lambda_06c7fb13e4115b68176da9e8404c9d66_::operator() @ 0x1C02E41B0
 * Callers:
 *     ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02E4368 (-BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONN.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall lambda_06c7fb13e4115b68176da9e8404c9d66_::operator()(unsigned int **a1, __int64 a2)
{
  _DWORD *v2; // r8
  int v4; // edi
  unsigned int *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int *result; // rax

  v2 = *a1;
  v4 = a2;
  v5 = a1[1];
  v6 = **a1;
  if ( (unsigned int)v6 <= *v5 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, a2);
    WdLogEvent5_WdAssertion(v7);
    v2 = *a1;
    LODWORD(v6) = **a1;
  }
  *v2 = v6 - 1;
  result = a1[2];
  *(_DWORD *)(*(_QWORD *)result + 4LL * (unsigned int)(v6 - 1)) = v4;
  return result;
}
