/*
 * XREFs of ?GetFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@PEAPEAVMonitorFrame@@@Z @ 0x1802E0434
 * Callers:
 *     ?HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x1802E0BC0 (-HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewHost::GetFrameForMonitor(
        XamlAllUpViewHost *this,
        struct IImmersiveMonitor *a2,
        struct MonitorFrame **a3)
{
  unsigned int v5; // ebp
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 (__fastcall *v8)(struct IImmersiveMonitor *, __int64, int *); // rdi
  __int64 v9; // rbx
  int v10; // ebp
  int v11; // eax
  char v12; // bl
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v15; // [rsp+70h] [rbp+18h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  *a3 = 0LL;
  v6 = *((_QWORD *)this + 41);
  v7 = *((_QWORD *)this + 42);
  while ( 1 )
  {
    if ( v6 == v7 )
      return 2147647531LL;
    v8 = *(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int64, int *))(*(_QWORD *)a2 + 96LL);
    v16 = *(_QWORD *)(*(_QWORD *)v6 + 40LL);
    v9 = v16;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
    v10 = v5 | 1;
    v11 = v8(a2, v9, &v15);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2BC,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
        (const char *)(unsigned int)v11);
LABEL_4:
      v12 = 0;
      goto LABEL_5;
    }
    if ( !v15 )
      goto LABEL_4;
    v12 = 1;
LABEL_5:
    v5 = v10 & 0xFFFFFFFE;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    if ( v12 )
      break;
    v6 += 8LL;
  }
  *a3 = *(struct MonitorFrame **)v6;
  return 0LL;
}
