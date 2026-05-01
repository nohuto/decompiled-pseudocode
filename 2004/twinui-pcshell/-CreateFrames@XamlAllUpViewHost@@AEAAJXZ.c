/*
 * XREFs of ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x180300B70
 * Callers:
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x180306D30 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801673B0 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_p.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802E8F98 (--0Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Micr.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1802EA370 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMon.c)
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1803002E0 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall XamlAllUpViewHost::CreateFrames(XamlAllUpViewHost *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rdx
  struct IImmersiveMonitor *v10; // rbx
  int FrameForMonitor; // eax
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  int v14; // [rsp+28h] [rbp-40h]
  unsigned int v15; // [rsp+30h] [rbp-38h] BYREF
  struct IImmersiveMonitor *v16[2]; // [rsp+38h] [rbp-30h] BYREF
  int v17; // [rsp+48h] [rbp-20h] BYREF
  __int64 v18[3]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+20h]
  int v20; // [rsp+90h] [rbp+28h] BYREF
  __int64 v21; // [rsp+98h] [rbp+30h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+38h] BYREF
  struct IImmersiveMonitor *v23; // [rsp+A8h] [rbp+40h] BYREF

  v21 = 0LL;
  v2 = *((_QWORD *)this + 29);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 112LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  v4 = v3(v2, &v21);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v22 = 0LL;
    v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 23);
    v7 = **v6;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v8 = v7(v6, &GUID_7f331592_08ca_41ff_a77d_f2138806e857, &v22);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 24LL))(v22);
      v5 = v8;
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v21 + 24LL))(v21, (char *)this + 696);
        v5 = v8;
        if ( v8 >= 0 )
        {
          details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>(
            (__int64)&v13,
            v21);
          details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
            (__int64)&v15,
            (__int64)&v13,
            0);
          details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
            (__int64)&v17,
            (__int64)&v13,
            v14);
          while ( 1 )
          {
            if ( v15 == v17 && v16[1] == (struct IImmersiveMonitor *)v18[1] )
            {
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v16);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
              v5 = 0;
              goto LABEL_19;
            }
            v10 = v16[0];
            v23 = v16[0];
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
            if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)v10 + 48LL))(v10, &v20) >= 0 )
            {
              if ( v20 )
              {
                FrameForMonitor = XamlAllUpViewHost::CreateFrameForMonitor(this, v10);
                v5 = FrameForMonitor;
                if ( FrameForMonitor < 0 )
                  break;
              }
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
            ++v15;
            details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::GetCurrentObject(&v15);
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x28F,
            (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
            (const char *)(unsigned int)FrameForMonitor);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v16);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
          goto LABEL_19;
        }
        v9 = 648LL;
      }
      else
      {
        v9 = 646LL;
      }
    }
    else
    {
      v9 = 645LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)v8);
LABEL_19:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27F,
    (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
    (const char *)(unsigned int)v4);
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  return v5;
}
