/*
 * XREFs of CmpTransSearchAddTransFromHive @ 0x140656950
 * Callers:
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 * Callees:
 *     CmpTransSearchAddLightWeightTrans @ 0x140656A44 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTransFromRm @ 0x1407504F4 (CmpTransSearchAddTransFromRm.c)
 */

__int64 __fastcall CmpTransSearchAddTransFromHive(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5)
{
  if ( !a1 )
    return 3221225485LL;
  if ( (a2 & 1) != 0 )
    return CmpTransSearchAddLightWeightTrans(a2, a1, a4, a5);
  return CmpTransSearchAddTransFromRm(*(_QWORD *)(a1 + 4192), a2, a3, a4, a5);
}
