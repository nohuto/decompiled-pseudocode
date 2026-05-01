/*
 * XREFs of ?GetMonitorForHWND@XamlAllUpViewHost@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180301A40
 * Callers:
 *     ?HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x180301E70 (-HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlAllUpViewHost::GetMonitorForHWND(
        XamlAllUpViewHost *this,
        HWND a2,
        struct IImmersiveMonitor **a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  struct IImmersiveMonitor *v8; // rbx
  struct IImmersiveMonitor *v9; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = *((_QWORD *)this + 41);
  v6 = *((_QWORD *)this + 42);
  while ( 1 )
  {
    if ( v4 == v6 )
      return 2147647531LL;
    if ( (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v4 + 48LL) + 40LL))(*(_QWORD *)(*(_QWORD *)v4 + 48LL)) == a2 )
      break;
    v4 += 8LL;
  }
  v8 = *(struct IImmersiveMonitor **)(*(_QWORD *)v4 + 40LL);
  v9 = v8;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  *a3 = v8;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  return 0LL;
}
