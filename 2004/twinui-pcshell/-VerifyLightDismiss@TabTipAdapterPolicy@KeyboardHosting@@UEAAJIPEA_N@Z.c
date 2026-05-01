/*
 * XREFs of ?VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEA_N@Z @ 0x18036B040
 * Callers:
 *     ?OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJI@Z @ 0x180360758 (-OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJI@Z.c)
 * Callees:
 *     ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z @ 0x1803693A0 (-IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::VerifyLightDismiss(RTL_SRWLOCK *this, int a2, bool *a3)
{
  *a3 = 0;
  if ( KeyboardHosting::TabTipAdapterPolicy::IsViewShown(this - 2, a2) )
    *a3 = 1;
  return 0LL;
}
