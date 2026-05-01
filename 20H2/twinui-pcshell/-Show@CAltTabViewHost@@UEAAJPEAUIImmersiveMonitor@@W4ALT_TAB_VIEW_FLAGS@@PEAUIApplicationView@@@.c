/*
 * XREFs of ?Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x18038C820
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180014660 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007A004 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801A916C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801ABC84 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x180310A10 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     ??1ShowAltTab@MultitaskingViewTelemetry@@QEAA@XZ @ 0x18038C170 (--1ShowAltTab@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ShowAltTab@MultitaskingViewTelemetry@@QEAAXXZ @ 0x18038CBA8 (-StartActivity@ShowAltTab@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?SwitchToSelectedItemAndDismiss@CAltTabViewHost@@UEAAJXZ @ 0x18038D020 (-SwitchToSelectedItemAndDismiss@CAltTabViewHost@@UEAAJXZ.c)
 *     ?_RegisterForMonitorEvents@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@IEAAJPEAUIUnknown@@@Z @ 0x18038D070 (-_RegisterForMonitorEvents@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@IEAAJPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CAltTabViewHost::Show(__int64 a1, __int64 *a2, char a3, __int64 a4)
{
  char v6; // si
  struct _RTL_CRITICAL_SECTION *v9; // r13
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  int v16; // eax
  char v17; // bl
  __int64 v18; // rbx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  WINBOOL v23; // edx
  __int64 v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+40h] [rbp-C0h]
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v29; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v30[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v6 = 1;
  v9 = (struct _RTL_CRITICAL_SECTION *)((a1 + 24) & -(__int64)(a1 != 0));
  v27 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v9, 1);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v30,
    (__int64)"ShowAltTab");
  v30[0] = &MultitaskingViewTelemetry::ShowAltTab::`vftable';
  MultitaskingViewTelemetry::ShowAltTab::StartActivity((MultitaskingViewTelemetry::ShowAltTab *)v30);
  v10 = CMultitaskingViewHostBase<IAltTabViewHost>::_RegisterForMonitorEvents(a1, a2);
  v11 = v10;
  if ( v10 >= 0 )
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 176), (__int64)a2);
    v13 = *a2;
    v29 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v13 + 88))(a2, &v29);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 210LL;
      goto LABEL_7;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64))(**(_QWORD **)(a1 + 152) + 24LL))(
            *(_QWORD *)(a1 + 152),
            &v29,
            3LL);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 213LL;
      goto LABEL_7;
    }
    v26 = 0LL;
    if ( !a4 )
      goto LABEL_17;
    v14 = *(_QWORD *)(a1 + 136);
    v25 = 0LL;
    v15 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 24LL))(v14, &v28);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    v16 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v15)(
            *v15,
            &GUID_ab2611a6_5a19_4261_a11a_5f77866165e6,
            &v25);
    if ( v16 >= 0 )
    {
      v17 = 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xDE,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
        (const char *)(unsigned int)v16);
      v17 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    if ( v17 )
    {
      v18 = v25;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      (*(void (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v18 + 24LL))(
        v18,
        a4,
        &GUID_c0944116_18f0_4c1c_a1a4_224296b2d4fc,
        &v26);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    if ( v26
      && (*(int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 152) + 104LL))(*(_QWORD *)(a1 + 152), 1LL) >= 0 )
    {
      v19 = (unsigned int)((a3 & 2) != 0) + 5;
    }
    else
    {
LABEL_17:
      v19 = (unsigned int)((a3 & 2) != 0) + 7;
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 152) + 96LL))(*(_QWORD *)(a1 + 152), 1LL, v19);
    v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 152) + 56LL))(*(_QWORD *)(a1 + 152));
    v11 = v20;
    if ( v20 < 0 )
    {
      v21 = 243LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
        (const char *)(unsigned int)v20);
      goto LABEL_28;
    }
    v22 = *(_QWORD *)(a1 + 152);
    *(_BYTE *)(a1 + 112) = 1;
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 88LL))(v22);
    v11 = v20;
    if ( v20 < 0 )
    {
      v21 = 247LL;
      goto LABEL_22;
    }
    *(_BYTE *)(a1 + 200) = a3 & 1;
    if ( (a3 & 4) != 0 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 160) + 24LL))(*(_QWORD *)(a1 + 160)) )
      {
LABEL_26:
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(
          *(_QWORD *)(a1 + 88),
          *(unsigned int *)(a1 + 72));
LABEL_27:
        v6 = 0;
        wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
          (__int64)v30,
          v23);
        v11 = 0;
LABEL_28:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
        if ( !v6 )
          goto LABEL_30;
        goto LABEL_29;
      }
    }
    else if ( (a3 & 1) != 0 || GetAsyncKeyState(18) < 0 )
    {
      goto LABEL_26;
    }
    CAltTabViewHost::SwitchToSelectedItemAndDismiss((CAltTabViewHost *)a1);
    goto LABEL_27;
  }
  v12 = 206LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
    (const char *)(unsigned int)v10);
LABEL_29:
  CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(a1);
LABEL_30:
  MultitaskingViewTelemetry::ShowAltTab::~ShowAltTab((MultitaskingViewTelemetry::ShowAltTab *)v30);
  if ( v27 >= 0 )
    LeaveCriticalSection(v9);
  return v11;
}
