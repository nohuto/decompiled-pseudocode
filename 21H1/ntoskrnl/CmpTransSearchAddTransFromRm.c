/*
 * XREFs of CmpTransSearchAddTransFromRm @ 0x1407504F4
 * Callers:
 *     CmpTransSearchAddTransFromHive @ 0x140656950 (CmpTransSearchAddTransFromHive.c)
 *     CmpTransInitializeTransaction @ 0x1407507FC (CmpTransInitializeTransaction.c)
 *     CmpRecoverEnlistment @ 0x140870774 (CmpRecoverEnlistment.c)
 *     CmpRmAnalysisPhase @ 0x140870EC0 (CmpRmAnalysisPhase.c)
 *     CmpRmReDoPhase @ 0x140871100 (CmpRmReDoPhase.c)
 * Callees:
 *     CmpTransSearchAddTrans @ 0x14075056C (CmpTransSearchAddTrans.c)
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
