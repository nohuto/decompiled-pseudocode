/*
 * XREFs of ?SetViewCollectionInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x180447100
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180010000 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800B3F4C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1801AAA24 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180446CE0 (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall VirtualPinnedAppsHandler::SetViewCollectionInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationViewCollection *a2)
{
  char *v3; // r14
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64 *); // rbx
  int v9; // eax
  _QWORD *v11; // rdi
  _QWORD *v12; // rbx
  _QWORD *v13; // rdx
  int v14; // eax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rdx
  struct IApplicationView *v18; // [rsp+20h] [rbp-98h] BYREF
  __int64 v19; // [rsp+28h] [rbp-90h] BYREF
  __int64 v20; // [rsp+30h] [rbp-88h] BYREF
  int v21; // [rsp+38h] [rbp-80h] BYREF
  __int64 v22; // [rsp+40h] [rbp-78h] BYREF
  int v23[2]; // [rsp+48h] [rbp-70h] BYREF
  __int64 *v24; // [rsp+50h] [rbp-68h]
  __int64 v25; // [rsp+58h] [rbp-60h] BYREF
  int v26; // [rsp+60h] [rbp-58h]
  __int64 v27; // [rsp+68h] [rbp-50h] BYREF
  __int64 v28; // [rsp+70h] [rbp-48h] BYREF
  __int64 *v29; // [rsp+78h] [rbp-40h]
  _QWORD *v30; // [rsp+80h] [rbp-38h]
  _QWORD *v31; // [rsp+88h] [rbp-30h]
  _QWORD *v32; // [rsp+90h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  int v34; // [rsp+D0h] [rbp+18h] BYREF
  char v35; // [rsp+D8h] [rbp+20h] BYREF

  v3 = (char *)this + 80;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 10, (__int64)a2);
  v20 = 0LL;
  v4 = *((_QWORD *)this + 6);
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 224LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  v6 = v5(v4, &v20);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      245LL,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)(unsigned int)v6);
  if ( *(_QWORD *)v3 )
  {
    v19 = 0LL;
    v7 = *(_QWORD *)v3;
    v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(**(_QWORD **)v3 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v9 = v8(v7, &v19);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        253LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v9);
    details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
      (__int64)&v25,
      v19);
    LODWORD(v22) = 0;
    *(_QWORD *)v23 = 0LL;
    v24 = &v25;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v22);
    LODWORD(v27) = v26;
    v28 = 0LL;
    v29 = &v25;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v27);
    while ( (_DWORD)v22 != (_DWORD)v27 || v24 != v29 )
    {
      v18 = *(struct IApplicationView **)v23;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
      v11 = (_QWORD *)*((_QWORD *)this + 13);
      v31 = v11;
      v12 = (_QWORD *)*((_QWORD *)this + 12);
      v32 = v12;
      while ( 1 )
      {
        v30 = v12;
        if ( v12 == v11 )
          break;
        v13 = v12;
        if ( v12[3] >= 8uLL )
          v13 = (_QWORD *)*v12;
        v14 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD *, int *))(*(_QWORD *)v18 + 152LL))(
                v18,
                v13,
                &v21);
        if ( v14 >= 0 )
        {
          if ( v21 )
          {
            if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, int *))(**((_QWORD **)this + 8)
                                                                                              + 120LL))(
                    *((_QWORD *)this + 8),
                    v18,
                    &v34)
              || !(_BYTE)v34 )
            {
              v15 = VirtualPinnedAppsHandler::PinViewInternal(this, v18, 1);
              v16 = retaddr;
              if ( v15 < 0 )
              {
                v17 = 267LL;
LABEL_27:
                wil::details::in1diag3::_Log_Hr(
                  v16,
                  (void *)v17,
                  (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
                  (const char *)(unsigned int)v15);
                goto LABEL_28;
              }
            }
            goto LABEL_28;
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x105,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
            (const char *)(unsigned int)v14);
        }
        v12 += 4;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, char *))(**((_QWORD **)this + 8) + 120LL))(
             *((_QWORD *)this + 8),
             v18,
             &v35) )
      {
        if ( v35 )
        {
          v15 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, struct IApplicationView *, __int64))(*(_QWORD *)this + 104LL))(
                  this,
                  v18,
                  v20);
          v16 = retaddr;
          if ( v15 < 0 )
          {
            v17 = 275LL;
            goto LABEL_27;
          }
        }
      }
LABEL_28:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      LODWORD(v22) = v22 + 1;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v22);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  return 0LL;
}
