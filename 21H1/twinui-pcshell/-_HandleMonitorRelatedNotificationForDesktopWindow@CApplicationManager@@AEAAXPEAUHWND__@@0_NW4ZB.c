/*
 * XREFs of ?_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZBID@@@Z @ 0x180132330
 * Callers:
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x18008249C (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180081C98 (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x18008255C (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_HandleMonitorRelatedNotificationForDesktopWindow(
        CApplicationManager *a1,
        HWND a2,
        HWND a3,
        char a4,
        unsigned int a5)
{
  __int64 *v9; // rcx
  __int64 v10; // rax
  char v11; // al
  int v12; // r8d
  struct IImmersiveMonitor *v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v14[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
  CApplicationManager::_MonitorFromWindow(a1, a3, v14);
  v9 = (__int64 *)*((_QWORD *)a1 + 67);
  v10 = *v9;
  if ( a4 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64 *, HWND, _QWORD, _QWORD, struct IImmersiveMonitor *))(v10 + 24))(
            v9,
            a2,
            a5,
            0LL,
            v14[0]);
    v12 = 3;
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(__int64 *, HWND, struct IImmersiveMonitor *))(v10 + 32))(v9, a2, v14[0]);
    v12 = 2;
  }
  if ( v11 && v14[0] )
    CApplicationManager::_TryPresentDesktopExperience(a1, a2, v12, v14[0]);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
}
