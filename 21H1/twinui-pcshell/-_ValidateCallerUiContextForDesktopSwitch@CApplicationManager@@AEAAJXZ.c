/*
 * XREFs of ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x180135108
 * Callers:
 *     ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18012F3D0 (-SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_.c)
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x180130484 (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007F164 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetCallingProcessType@CallerIdentity@@YAJPEAW4PROCESS_UICONTEXT@@@Z @ 0x1804464E4 (-GetCallingProcessType@CallerIdentity@@YAJPEAW4PROCESS_UICONTEXT@@@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x1804467F4 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x180446E38 (-IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_ValidateCallerUiContextForDesktopSwitch(
        CApplicationManager *this,
        enum PROCESS_UICONTEXT *a2)
{
  signed int CallingProcessType; // ebx
  unsigned __int16 **v3; // rdx
  const unsigned __int16 *v4; // rdx
  LPCWCH lpString2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  CApplicationManager *v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = this;
  CallingProcessType = CallerIdentity::GetCallingProcessType((CallerIdentity *)&v9, a2);
  if ( CallingProcessType >= 0 )
  {
    CallingProcessType = (_DWORD)v9 != 2 ? 0x80070005 : 0;
    lpString2 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    if ( (_DWORD)v9 != 2 )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
      v7 = -1LL;
      v8 = -1LL;
      if ( (int)CallerIdentity::GetCallingProcessAppId((CallerIdentity *)&lpString2, v3) >= 0 )
        CallingProcessType = !CallerIdentity::IsShellExperienceAppId(lpString2, v4) ? 0x80070005 : 0;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
  }
  return (unsigned int)CallingProcessType;
}
