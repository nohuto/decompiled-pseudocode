/*
 * XREFs of ?PerformDelayedActivation@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEAUIDelayedAppActivation@@PEAUISplashScreen@@@Z @ 0x1803CB710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CSwitchController::PerformDelayedActivation(
        CSwitchController *this,
        struct IImmersiveApplication *a2,
        struct IDelayedAppActivation *a3,
        struct ISplashScreen *a4)
{
  return CSwitchController::_PerformDelayedActivationInternal(this, a2, a3, a4);
}
