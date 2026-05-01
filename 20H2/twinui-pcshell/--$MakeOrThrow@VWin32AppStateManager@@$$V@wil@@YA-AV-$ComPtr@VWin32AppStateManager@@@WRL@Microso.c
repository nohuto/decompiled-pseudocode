/*
 * XREFs of ??$MakeOrThrow@VWin32AppStateManager@@$$V@wil@@YA?AV?$ComPtr@VWin32AppStateManager@@@WRL@Microsoft@@XZ @ 0x18045AA40
 * Callers:
 *     ??0AppUsageTracker@@QEAA@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@W4ViewTrackingOption@3456@@Z @ 0x180456F4C (--0AppUsageTracker@@QEAA@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@AppLimits@FamilyS.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800938C0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VWin32AppStateManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWin32AppStateManager@@@12@XZ @ 0x18045A96C (--$Make@VWin32AppStateManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VWin32AppStateManager@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeOrThrow<Win32AppStateManager,>(__int64 *a1)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::Details::Make<Win32AppStateManager,>(a1);
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      56LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v2);
    __debugbreak();
  }
  return a1;
}
