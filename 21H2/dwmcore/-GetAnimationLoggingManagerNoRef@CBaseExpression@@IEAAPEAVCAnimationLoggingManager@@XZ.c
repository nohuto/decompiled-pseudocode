/*
 * XREFs of ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x1802289B0
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800422CC (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x180049E40 (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARG.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180051C60 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x180052BA0 (-NotifyAnimationStarted@CBaseExpression@@IEAAXXZ.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180211050 (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
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
  result = *(struct CAnimationLoggingManager **)(v1 + 64);
  if ( !result )
    return 0LL;
  return result;
}
