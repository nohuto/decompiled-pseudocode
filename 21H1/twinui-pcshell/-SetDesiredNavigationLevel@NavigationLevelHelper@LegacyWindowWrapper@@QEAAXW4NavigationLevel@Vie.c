/*
 * XREFs of ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802BA9B8
 * Callers:
 *     ?v_SetDesiredNavigationLevel@LegacyWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802B93E0 (-v_SetDesiredNavigationLevel@LegacyWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shel.c)
 * Callees:
 *     ?NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180078B34 (-NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wi.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180129748 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x1802A94B8 (-GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4NavigationLevel@ViewManag.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyViewWrapper@@QEBA?AW4Visibility@@XZ @ 0x1802A9534 (-GetVisibility@NavigationLevelHelper@LegacyViewWrapper@@QEBA-AW4Visibility@@XZ.c)
 *     ?SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1802B8FFC (-SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyWindowWrapper@@AEBAKXZ @ 0x1802BA84C (-GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyWindowWrapper@@AEBAKXZ.c)
 */

__int64 __fastcall LegacyWindowWrapper::NavigationLevelHelper::SetDesiredNavigationLevel(__int64 a1)
{
  int NavigationLevel; // r14d
  int Visibility; // ebp
  __m128i si128; // xmm1
  __int64 v5; // r9
  int v6; // edi
  int v7; // edx
  unsigned int v8; // esi
  PTP_TIMER ThreadpoolTimer; // rax
  PTP_TIMER v10; // r10
  struct _TP_TIMER *v11; // rcx
  __int64 result; // rax
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v14[3]; // [rsp+28h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  NavigationLevel = LegacyWindowWrapper::NavigationLevelHelper::GetNavigationLevel((unsigned int *)a1);
  Visibility = LegacyViewWrapper::NavigationLevelHelper::GetVisibility((unsigned int *)a1);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(_DWORD *)a1 = v5;
  v14[0] = _mm_load_si128((const __m128i *)&_xmm);
  v14[2] = _mm_load_si128((const __m128i *)&_xmm);
  v14[1] = si128;
  v6 = *((_DWORD *)v14 + 2 * v5 + 1);
  v8 = LegacyViewWrapper::NavigationLevelHelper::GetVisibility((unsigned int *)a1);
  if ( v7 > v6 )
  {
    if ( *(_DWORD *)(a1 + 4) > v7 )
      goto LABEL_13;
    if ( *(_QWORD *)(a1 + 8)
      || (ThreadpoolTimer = CreateThreadpoolTimer(
                              (PTP_TIMER_CALLBACK)lambda_6865f0ce4c3ba0d4b075ec8356cef312_::_lambda_invoker_cdecl_,
                              (PVOID)a1,
                              0LL),
          (*(_QWORD *)(a1 + 8) = ThreadpoolTimer) != 0LL) )
    {
      pftDueTime = (struct _FILETIME)(-10000LL
                                    * (unsigned int)LegacyWindowWrapper::NavigationLevelHelper::GetDebounceDurationInMilliseconds((LegacyWindowWrapper::NavigationLevelHelper *)a1));
      SetThreadpoolTimer(v10, &pftDueTime, 0, 0);
      goto LABEL_13;
    }
    wil::details::in1diag3::Log_Hr(
      retaddr,
      128LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\legacywindowwrapper.navigationlevelhelper.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_12;
  }
  if ( v7 < v6 && *(_DWORD *)(a1 + 4) <= v6 )
  {
    v11 = *(struct _TP_TIMER **)(a1 + 8);
    if ( v11 && IsThreadpoolTimerSet(v11) )
      SetThreadpoolTimer(*(PTP_TIMER *)(a1 + 8), 0LL, 0, 0);
LABEL_12:
    *(_DWORD *)(a1 + 4) = v6;
  }
LABEL_13:
  if ( Visibility != v8 )
    LegacyWindowWrapper::SendVisibilityToWindow(a1 - 664, v8);
  result = LegacyWindowWrapper::NavigationLevelHelper::GetNavigationLevel((unsigned int *)a1);
  if ( *(_DWORD *)(a1 - 296) )
  {
    if ( (_DWORD)result != NavigationLevel )
      return WindowWrapperBase::NavigateInternal(a1 - 656, result);
  }
  return result;
}
