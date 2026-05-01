/*
 * XREFs of ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x180155D7C
 * Callers:
 *     ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x180080B90 (-SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180080D44 (-_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180155660 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_GetLastActiveModernWindowForActivation(CApplicationManager *this, HWND *a2)
{
  int LastActiveModernApp; // edi
  struct IImmersiveApplicationInternal *v5; // rbx
  struct IImmersiveApplicationInternal *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  LastActiveModernApp = CApplicationManager::_GetLastActiveModernApp(this, &v7);
  if ( LastActiveModernApp >= 0 )
  {
    v5 = v7;
    LastActiveModernApp = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, _QWORD, HWND *))(*(_QWORD *)v7 + 312LL))(
                            v7,
                            0LL,
                            a2);
    if ( LastActiveModernApp == -2147023598 )
      CApplicationManager::_ForgetApplicationNoLock(this, v5, 1u);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return (unsigned int)LastActiveModernApp;
}
