/*
 * XREFs of ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x18007E670
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800252C4 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800810D4 (--1-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180081218 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18039C760 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x18039C7F4 (-IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     _lambda_ee4684b34cbbc9b29a5b46cb0674d720_::operator() @ 0x1803F42B0 (_lambda_ee4684b34cbbc9b29a5b46cb0674d720_--operator().c)
 *     ?CloakWindow@TabletModePositioner@@AEAAJPEAUHWND__@@@Z @ 0x1803F5658 (-CloakWindow@TabletModePositioner@@AEAAJPEAUHWND__@@@Z.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x1803F97E4 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?ShouldOverrideShowWindowNoOp@TabletModePositioner@@AEAA_NIPEAUHWND__@@@Z @ 0x1803FBC90 (-ShouldOverrideShowWindowNoOp@TabletModePositioner@@AEAA_NIPEAUHWND__@@@Z.c)
 *     ?StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__@@I@Z @ 0x1803FCEA8 (-StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__.c)
 *     ?Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z @ 0x1803FD5B8 (-Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall TabletModePositioner::ShowWindowAttempted(
        TabletModePositioner *this,
        TabletModePositionerHelpers *a2,
        unsigned int a3,
        unsigned int *a4)
{
  TabletModePositioner *v8; // r15
  unsigned int v9; // edi
  __int64 v10; // rbx
  struct IApplicationView *v11; // rbx
  bool v12; // zf
  unsigned int v13; // eax
  TabletModePositionerHelpers *v14; // rdx
  int v15; // eax
  int v16; // [rsp+20h] [rbp-E0h] BYREF
  HWND v17; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  TabletModePositioner *v19; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v20[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v8 = (TabletModePositioner *)((char *)this - 160);
  if ( *((_QWORD *)this + 9) == 0x100000001LL )
  {
    v9 = 0;
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 23))(
      *((_QWORD *)this + 23),
      &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
      &v18);
    v17 = 0LL;
    v10 = v18;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    (*(void (__fastcall **)(__int64, TabletModePositionerHelpers *, HWND *))(*(_QWORD *)v10 + 48LL))(v10, a2, &v17);
    v19 = v8;
    v11 = (struct IApplicationView *)v17;
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v20);
    v20[0] = &TabletModeTraceLogging::ShowWindowAttempted::`vftable';
    TabletModeTraceLogging::ShowWindowAttempted::StartActivity(
      (TabletModeTraceLogging::ShowWindowAttempted *)v20,
      v11,
      (HWND)a2,
      a3);
    if ( v17 )
      goto LABEL_22;
    if ( TabletModePositionerHelpers::IsOperableWindow(a2, 0LL) )
    {
      LOWORD(v16) = 257;
      lambda_ee4684b34cbbc9b29a5b46cb0674d720_::operator()(&v19, a2, &v16, (char *)&v16 + 1);
      if ( (_BYTE)v16 )
        TabletModePositioner::CloakWindow(v8, (HWND)a2);
      if ( !BYTE1(v16) || (v12 = !TabletModePositioner::IsTabletMode(v8), v13 = 2, v12) )
        v13 = 0;
      *a4 = v13;
      goto LABEL_16;
    }
    if ( v17 )
    {
LABEL_22:
      if ( TabletModePositioner::IsTabletMode(v8) && TabletModePositionerHelpers::IsOperableView(v14, v14) )
      {
        if ( !(*(unsigned int (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 11) + 184LL))(
                *((_QWORD *)this + 11),
                v17) )
        {
          LOWORD(v16) = 257;
          lambda_ee4684b34cbbc9b29a5b46cb0674d720_::operator()(&v19, a2, &v16, (char *)&v16 + 1);
          *a4 = BYTE1(v16) != 0 ? 2 : 0;
          if ( (_BYTE)v16 )
          {
            v15 = (*(__int64 (__fastcall **)(HWND, __int64, __int64))(*(_QWORD *)v17 + 96LL))(v17, 1LL, 1LL);
            if ( v15 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x5EA,
                (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
                (const char *)(unsigned int)v15);
          }
          goto LABEL_16;
        }
        LOBYTE(v9) = TabletModePositioner::ShouldOverrideShowWindowNoOp(v8, a3, (HWND)a2);
      }
      *a4 = v9;
    }
LABEL_16:
    TabletModeTraceLogging::ShowWindowAttempted::Stop((TabletModeTraceLogging::ShowWindowAttempted *)v20, *a4);
    v20[0] = &TabletModeTraceLogging::ShowWindowAttempted::`vftable';
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v20);
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  }
}
