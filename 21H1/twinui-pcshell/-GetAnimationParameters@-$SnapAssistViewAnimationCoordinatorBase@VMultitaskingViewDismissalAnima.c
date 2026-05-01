/*
 * XREFs of ?GetAnimationParameters@?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@UEAA?AUMultitaskingViewAnimationParameters@MultitaskingViewAnimationCoordinatorBase@@XZ @ 0x18037CBC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

_OWORD *__fastcall SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>::GetAnimationParameters(
        __int64 a1,
        _OWORD *a2)
{
  __int128 v3; // xmm0
  _OWORD *result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  *a2 = MultitaskingViewDismissalAnimationCoordinator::animationParameters;
  a2[1] = xmmword_1804CD520;
  a2[2] = xmmword_1804CD530;
  a2[3] = xmmword_1804CD540;
  v3 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 168LL))(a1, v5);
  result = a2;
  *a2 = v3;
  return result;
}
