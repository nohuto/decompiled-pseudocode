/*
 * XREFs of _ToastNotification::ActivityToastNotificationCallback::LaunchUriWithFallback_::_1_::dtor$7 @ 0x1800D3ECE
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18000769C (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall ToastNotification::ActivityToastNotificationCallback::LaunchUriWithFallback_::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 40) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference((Microsoft::WRL::Wrappers::HStringReference *)(a2 + 104));
  }
}
