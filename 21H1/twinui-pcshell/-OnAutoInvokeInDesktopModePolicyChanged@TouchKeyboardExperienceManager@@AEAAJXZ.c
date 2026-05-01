/*
 * XREFs of ?OnAutoInvokeInDesktopModePolicyChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18032BD08
 * Callers:
 *     wistd::__function::__func__lambda_c88c54755657800e9df79df7bffee175__void___cdecl(void)_::operator() @ 0x1800A21D0 (wistd--__function--__func__lambda_c88c54755657800e9df79df7bffee175__void___cdecl(void)_--operato.c)
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800A3EB4 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180331F10 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     wil::details::ScopeExitFn__lambda_66b4e300c3163a31cf9d0abe91c36451___::_ScopeExitFn__lambda_66b4e300c3163a31cf9d0abe91c36451___ @ 0x1800A0ECC (wil--details--ScopeExitFn__lambda_66b4e300c3163a31cf9d0abe91c36451___--_ScopeExitFn__lambda_66b4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnAutoInvokeInDesktopModePolicyChanged(
        TouchKeyboardExperienceManager *this)
{
  _DWORD v3[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v4; // [rsp+30h] [rbp-18h] BYREF
  char v5; // [rsp+38h] [rbp-10h]
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 86) )
  {
    v3[0] = 1;
    v3[1] = 2;
    v6 = 0LL;
    v4 = &v6;
    v5 = 1;
    if ( (int)PolicyManager_GetPolicy(L"TextInput", L"EnableTouchKeyboardAutoInvokeInDesktopMode", v3, &v6) >= 0 )
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 86) + 104LL) + 511LL) = *(_DWORD *)(v6 + 16) != 0;
    wil::details::ScopeExitFn__lambda_66b4e300c3163a31cf9d0abe91c36451___::_ScopeExitFn__lambda_66b4e300c3163a31cf9d0abe91c36451___((__int64)&v4);
  }
  return 0LL;
}
