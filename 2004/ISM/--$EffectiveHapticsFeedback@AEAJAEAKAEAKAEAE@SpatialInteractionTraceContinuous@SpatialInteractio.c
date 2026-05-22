/*
 * XREFs of ??$EffectiveHapticsFeedback@AEAJAEAKAEAKAEAE@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAXAEAJAEAK1AEAE@Z @ 0x1801681BC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_a8bf174a58f89e727d2f8f2640ee39aa__void_unsigned_char_::_Do_call @ 0x180170210 (std--_Func_impl_no_alloc__lambda_a8bf174a58f89e727d2f8f2640ee39aa__void_unsigned_char_--_Do_call.c)
 * Callees:
 *     ?IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D01E0 (-IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D41EC (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 *     ?EffectiveHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXJKKE@Z @ 0x18016B934 (-EffectiveHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXJKK.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::EffectiveHapticsFeedback<long &,unsigned long &,unsigned long &,unsigned char &>(
        int *a1,
        unsigned int *a2,
        unsigned int *a3,
        char *a4)
{
  __int64 v8; // rcx
  SpatialInteractionDevices::SpatialInteractionTraceContinuous *v9; // rcx

  if ( SpatialInteractionDevices::SpatialInteractionTraceContinuous::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
      v8,
      _lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTraceContinuous::EffectiveHapticsFeedback_(v9, *a1, *a2, *a3, *a4);
  }
}
