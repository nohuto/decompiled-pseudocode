/*
 * XREFs of ?OnHolographicDisplayChanged@TouchKeyboardExperienceManager@@AEAAJAEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x18034D438
 * Callers:
 *     wistd::__function::__func__lambda_0e7c32b48210d9050e40960dda8059d0__void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)_::operator() @ 0x1800B1F90 (wistd--__function--__func__lambda_0e7c32b48210d9050e40960dda8059d0__void___cdecl(enum_Windows--I.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18034EAD0 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180362BB8 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnHolographicDisplayChanged(
        TouchKeyboardExperienceManager *this,
        const enum Windows::Internal::Shell::Holographic::UserDisplayContext *a2)
{
  char v3; // si
  KeyboardHosting::TabTipAdapter *v4; // r14
  HSTRING v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  HSTRING v8; // rbx
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v11; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER v12; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v13; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v3 = *(_DWORD *)a2 == 1;
  v4 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  if ( v4 && *((_BYTE *)this + 808) != v3 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v11 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
      v5 = v11;
      v13 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v12, L"HeadMountedDisplayAttached", 0x1Bu, 0x1Au);
      v6 = KeyboardHosting::TabTipAdapter::SetShellPreference(v4, v13, v5);
      if ( v6 < 0 )
      {
        v7 = 3364LL;
LABEL_8:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v7,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v6);
      }
    }
    else
    {
      v13 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v12, L"0", 2u, 1u);
      v8 = v13;
      v11 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"HeadMountedDisplayAttached",
        0x1Bu,
        0x1Au);
      v6 = KeyboardHosting::TabTipAdapter::SetShellPreference(v4, v11, v8);
      if ( v6 < 0 )
      {
        v7 = 3368LL;
        goto LABEL_8;
      }
    }
    *((_BYTE *)this + 808) = v3;
  }
  return 0LL;
}
