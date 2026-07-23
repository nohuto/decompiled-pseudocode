/*
 * XREFs of CmpTransSearchAddTransFromRm @ 0x140766F74
 * Callers:
 *     CmpTransSearchAddTransFromHive @ 0x1405DED40 (CmpTransSearchAddTransFromHive.c)
 *     CmpTransInitializeTransaction @ 0x14076727C (CmpTransInitializeTransaction.c)
 *     CmpRecoverEnlistment @ 0x140874FEC (CmpRecoverEnlistment.c)
 *     CmpRmAnalysisPhase @ 0x140875740 (CmpRmAnalysisPhase.c)
 *     CmpRmReDoPhase @ 0x140875980 (CmpRmReDoPhase.c)
 * Callees:
 *     CmpTransSearchAddTrans @ 0x140766FEC (CmpTransSearchAddTrans.c)
 */

__int64 __fastcall CmpTransSearchAddTransFromRm(_QWORD *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // r9
  __int64 result; // rax

  if ( !a1 || a1 != CmRmSystem && !a1[10] )
    return 3222863877LL;
  if ( !a2 && !a3 )
    return 3222863874LL;
  LODWORD(v6) = qword_140C01170;
  if ( a1 != CmRmSystem )
    v6 = a1[10];
  result = CmpTransSearchAddTrans(a2, a3, (_DWORD)a1, v6, a4, a5);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
