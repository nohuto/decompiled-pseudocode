/*
 * XREFs of CmpFindExtraParameterInBlock @ 0x1405CAFAC
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1405C9FF0 (VrpPostOpenOrCreate.c)
 *     VrpPreOpenOrCreate @ 0x1405CA2E0 (VrpPreOpenOrCreate.c)
 *     CmRetrieveExtraParameter @ 0x1405CAF68 (CmRetrieveExtraParameter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpFindExtraParameterInBlock(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *i; // r9
  __int64 v5; // r10

  for ( i = (_QWORD *)*a1; ; i = (_QWORD *)*i )
  {
    if ( i == a1 )
      return 3221225524LL;
    v5 = i[2] - *a2;
    if ( !v5 )
      v5 = i[3] - a2[1];
    if ( !v5 )
      break;
  }
  *a3 = i;
  return 0LL;
}
