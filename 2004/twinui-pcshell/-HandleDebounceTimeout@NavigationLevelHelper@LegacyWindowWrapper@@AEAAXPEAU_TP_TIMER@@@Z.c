/*
 * XREFs of ?HandleDebounceTimeout@NavigationLevelHelper@LegacyWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z @ 0x1802DC420
 * Callers:
 *     _lambda_6865f0ce4c3ba0d4b075ec8356cef312_::_lambda_invoker_cdecl_ @ 0x1802DC380 (_lambda_6865f0ce4c3ba0d4b075ec8356cef312_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800792C4 (-NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wi.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x1802CB058 (-GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4NavigationLevel@ViewManag.c)
 *     ?GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyWindowWrapper@@AEBAKXZ @ 0x1802DC3EC (-GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyWindowWrapper@@AEBAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall LegacyWindowWrapper::NavigationLevelHelper::HandleDebounceTimeout(
        LegacyWindowWrapper::NavigationLevelHelper *this,
        struct _TP_TIMER *a2)
{
  int v4; // edx
  struct _FILETIME *v5; // rdx
  struct _TP_TIMER *v6; // rcx
  unsigned int NavigationLevel; // eax
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  PSRWLOCK SRWLock; // [rsp+28h] [rbp-50h] BYREF
  _OWORD v10[3]; // [rsp+30h] [rbp-48h]

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this - 46) + 200LL))(*((_QWORD *)this - 46), &SRWLock);
  if ( !IsThreadpoolTimerSet(*((PTP_TIMER *)this + 1)) )
    goto LABEL_10;
  v10[0] = _mm_load_si128((const __m128i *)&_xmm);
  v10[1] = _mm_load_si128((const __m128i *)&_xmm);
  v10[2] = _mm_load_si128((const __m128i *)&_xmm);
  v4 = *((_DWORD *)v10 + 2 * *(unsigned int *)this + 1);
  if ( *((_DWORD *)this + 1) == 1 )
    goto LABEL_6;
  if ( *((_DWORD *)this + 1) != 2 )
    goto LABEL_8;
  if ( v4 >= 1 )
  {
LABEL_6:
    *((_DWORD *)this + 1) = v4;
    v6 = (struct _TP_TIMER *)*((_QWORD *)this + 1);
    v5 = 0LL;
  }
  else
  {
    *((_DWORD *)this + 1) = 1;
    v8 = -10000LL * (unsigned int)LegacyWindowWrapper::NavigationLevelHelper::GetDebounceDurationInMilliseconds(this);
    v5 = (struct _FILETIME *)&v8;
    v6 = a2;
  }
  SetThreadpoolTimer(v6, v5, 0, 0);
LABEL_8:
  if ( *((_DWORD *)this - 74) )
  {
    NavigationLevel = LegacyWindowWrapper::NavigationLevelHelper::GetNavigationLevel((unsigned int *)this);
    WindowWrapperBase::NavigateInternal((__int64)this - 656, NavigationLevel);
  }
LABEL_10:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
