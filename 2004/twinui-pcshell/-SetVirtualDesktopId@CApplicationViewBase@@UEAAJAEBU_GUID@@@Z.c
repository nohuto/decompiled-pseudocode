/*
 * XREFs of ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x1800783C0
 * Callers:
 *     <none>
 * Callees:
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_af861fabadf2fb98547f901f5c924f13___ @ 0x1800947EC (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_af861fabadf2fb98547f9.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_34763949@@@details@wil@@QEAA_NXZ @ 0x180094A90 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_34763949@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x1801372C8 (--1-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 *     ??I?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAPEAPEAGXZ @ 0x1801372D4 (--I-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAPEAPEAGXZ.c)
 *     ??9@YA_NAEBU_GUID@@0@Z @ 0x180197474 (--9@YA_NAEBU_GUID@@0@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewBase::SetVirtualDesktopId(RTL_SRWLOCK *this, const struct _GUID *a2)
{
  RTL_SRWLOCK *v4; // r14
  int (__fastcall **Ptr)(RTL_SRWLOCK *, __int64); // rbx
  __int64 v6; // rax
  int (__fastcall **v7)(RTL_SRWLOCK *, __int64); // rbx
  __int64 v8; // rax
  __int64 *v10; // [rsp+20h] [rbp-30h] BYREF
  RTL_SRWLOCK *v11; // [rsp+28h] [rbp-28h]
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h]
  __int64 v14; // [rsp+40h] [rbp-10h]

  v4 = this + 6;
  AcquireSRWLockExclusive(this + 6);
  *(struct _GUID *)&this[14].Ptr = *a2;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_34763949>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_34763949>::GetImpl'::`2'::impl) )
  {
    if ( !(unsigned __int8)operator!=(&this[14], &GUID_NULL) )
      goto LABEL_9;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    Ptr = (int (__fastcall **)(RTL_SRWLOCK *, __int64))this[2].Ptr;
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::operator&(&v12);
    if ( Ptr[4](this + 2, v6) >= 0 )
    {
      v10 = &v12;
      v11 = this;
      GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_af861fabadf2fb98547f901f5c924f13___(&v10);
    }
  }
  else
  {
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v7 = (int (__fastcall **)(RTL_SRWLOCK *, __int64))this[2].Ptr;
    v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::operator&(&v12);
    if ( v7[4](this + 2, v8) >= 0 )
    {
      v10 = &v12;
      v11 = this;
      GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_af861fabadf2fb98547f901f5c924f13___(&v10);
    }
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>(&v12);
LABEL_9:
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
