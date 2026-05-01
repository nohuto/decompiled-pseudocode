/*
 * XREFs of ?GetTopOperableView@TabletModePositioner@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@@Z @ 0x1803F8360
 * Callers:
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x1803FFFA8 (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800B3F4C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1801AAA24 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18039C760 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TabletModePositioner::GetTopOperableView(
        TabletModePositioner *this,
        struct IObjectArray *a2,
        struct IApplicationView **a3)
{
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  struct IApplicationView *v8; // rbx
  struct IApplicationView *v9; // rdx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // [rsp+20h] [rbp-60h] BYREF
  TabletModePositionerHelpers *v15; // [rsp+28h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h] BYREF
  int v18; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-38h] BYREF
  TabletModePositionerHelpers *v20; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v21; // [rsp+58h] [rbp-28h]
  __int64 v22; // [rsp+60h] [rbp-20h] BYREF
  __int64 v23; // [rsp+68h] [rbp-18h] BYREF
  __int64 *v24; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  int v26; // [rsp+A0h] [rbp+20h] BYREF
  int v27; // [rsp+B0h] [rbp+30h] BYREF
  int v28; // [rsp+B8h] [rbp+38h] BYREF

  *a3 = 0LL;
  v16 = 0LL;
  v5 = *((_QWORD *)this + 47);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, &v16);
  v7 = v6;
  if ( v6 >= 0 )
  {
    details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
      (__int64)&v17,
      (__int64)a2);
    LODWORD(v19) = 0;
    v20 = 0LL;
    v21 = &v17;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v19);
    LODWORD(v22) = v18;
    v23 = 0LL;
    v24 = &v17;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v22);
    while ( 1 )
    {
      if ( (_DWORD)v19 == (_DWORD)v22 && v21 == v24 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
        v7 = -2147023728;
        goto LABEL_21;
      }
      v8 = v20;
      v15 = v20;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
      if ( TabletModePositionerHelpers::IsOperableView(
             (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v8,
             v9) )
      {
        v10 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v8 + 88LL))(v8, &v26);
        v11 = retaddr;
        if ( v10 < 0 )
        {
          v12 = 2345LL;
LABEL_9:
          wil::details::in1diag3::_Log_Hr(
            v11,
            (void *)v12,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v10);
          goto LABEL_18;
        }
        if ( v26 )
        {
          v10 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, int *))(*(_QWORD *)v16 + 24LL))(
                  v16,
                  v8,
                  &v27);
          v11 = retaddr;
          if ( v10 < 0 )
          {
            v12 = 2347LL;
            goto LABEL_9;
          }
          if ( v27 )
          {
            v14 = 0LL;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
            if ( (*(int (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)v8 + 104LL))(
                   v8,
                   &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
                   &v14) >= 0
              && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 32LL))(v14, &v28) >= 0
              && v28 != 1 )
            {
              Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
              *a3 = v8;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
              v7 = 0;
              goto LABEL_21;
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
          }
        }
      }
LABEL_18:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
      LODWORD(v19) = v19 + 1;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v19);
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x921,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v6);
LABEL_21:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return v7;
}
