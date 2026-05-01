/*
 * XREFs of ?WorkAreaMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x180330240
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMonitor@ImmersiveMonitorHelper@@QEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18001C68C (-GetMonitor@ImmersiveMonitorHelper@@QEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncher::WorkAreaMayHaveChanged(XamlLauncher *this, HMONITOR a2)
{
  __int64 v4; // rcx
  ImmersiveMonitorHelper *v6; // rbx
  int Monitor; // eax
  int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IImmersiveMonitor *v10; // [rsp+30h] [rbp+8h] BYREF
  HMONITOR v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 30);
  if ( !v4 )
    return 2147943568LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 96LL))(v4)
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 120LL))(*((_QWORD *)this + 30)) )
  {
    v10 = 0LL;
    v6 = (ImmersiveMonitorHelper *)*((_QWORD *)this + 15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    Monitor = ImmersiveMonitorHelper::GetMonitor(v6, &v10);
    v8 = Monitor;
    if ( Monitor < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x112,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)Monitor);
LABEL_10:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
      return (unsigned int)v8;
    }
    v8 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, HMONITOR *))(*(_QWORD *)v10 + 40LL))(v10, &v11);
    if ( v8 < 0 )
      goto LABEL_10;
    if ( a2 == v11 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 104LL))(*((_QWORD *)this + 11));
      if ( v8 < 0 )
        goto LABEL_10;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  }
  return 0LL;
}
