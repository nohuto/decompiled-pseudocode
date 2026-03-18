/*
 * XREFs of ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x1801D927C
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180024E90 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x18006F9B8 (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARG.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18007EE20 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x1800D06A8 (-NotifyAnimationStarted@CBaseExpression@@IEAAXXZ.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801BD244 (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     <none>
 */

struct CAnimationLoggingManager *__fastcall CBaseExpression::GetAnimationLoggingManagerNoRef(CBaseExpression *this)
{
  __int64 v1; // rax
  struct CAnimationLoggingManager *result; // rax

  v1 = *((_QWORD *)this + 6);
  if ( !v1 )
    return 0LL;
  result = *(struct CAnimationLoggingManager **)(v1 + 56);
  if ( !result )
    return 0LL;
  return result;
}
