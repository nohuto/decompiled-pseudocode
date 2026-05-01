/*
 * XREFs of ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x1803E0E10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x180043F18 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?AppResizeView_CreateInstance@@YAJ_NAEBU_GUID@@PEAPEAX@Z @ 0x1800A7EC0 (-AppResizeView_CreateInstance@@YAJ_NAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801128D0 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     wil::details::ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___::_ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___ @ 0x1803DFE08 (wil--details--ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___--_ScopeExitFn__lambda_7f57.c)
 *     ?UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ @ 0x1803E1F54 (-UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ.c)
 *     ?TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F1954 (-TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletMod.c)
 *     ?ComputeAdjacentDisplayEdges@ImmersiveApplicationLayout@@YAJPEBUtagRECT@@00PEAW4ADJACENT_DISPLAY_EDGES@@@Z @ 0x18044D6C0 (-ComputeAdjacentDisplayEdges@ImmersiveApplicationLayout@@YAJPEBUtagRECT@@00PEAW4ADJACENT_DISPLAY.c)
 */

__int64 __fastcall TabletModeViewManager::ShowAppResizeView(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  char v7; // r15
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  const struct _GUID *v18; // rdx
  int Instance; // eax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // eax
  IUnknown *v24; // rax
  IUnknown *v25; // rbx
  enum ADJACENT_DISPLAY_EDGES *v27; // [rsp+20h] [rbp-59h]
  IUnknown *punk; // [rsp+30h] [rbp-49h] BYREF
  __int64 v29; // [rsp+38h] [rbp-41h] BYREF
  IUnknown *v30; // [rsp+40h] [rbp-39h] BYREF
  struct tagRECT v31; // [rsp+48h] [rbp-31h] BYREF
  __int64 v32; // [rsp+58h] [rbp-21h] BYREF
  struct tagRECT v33; // [rsp+60h] [rbp-19h] BYREF
  char v34; // [rsp+70h] [rbp-9h]
  _BYTE v35[40]; // [rsp+78h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v32 = a4;
  v7 = 0;
  if ( IsPPIEdition() )
    v7 = a3 == 1;
  if ( !a2 )
    goto LABEL_16;
  v29 = 0LL;
  v8 = a1[4];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 72LL))(v8, &v29);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v29 + 48LL))(v29) )
    {
      v10 = -2147019873;
      v12 = 293LL;
      v11 = 2147947423LL;
      goto LABEL_8;
    }
    v30 = 0LL;
    v13 = v29;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
    v14 = (*(__int64 (__fastcall **)(__int64, __int64, IUnknown **, _QWORD))(*(_QWORD *)v13 + 152LL))(
            v13,
            a2,
            &v30,
            0LL);
    v10 = v14;
    if ( v14 < 0 )
    {
      v15 = (unsigned int)v14;
      v16 = 297LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v30);
      goto LABEL_22;
    }
    ((void (__fastcall *)(IUnknown *, _QWORD, struct tagRECT *))v30->lpVtbl[2].AddRef)(v30, 0LL, &v33);
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v29 + 24LL))(v29, v35);
    ImmersiveApplicationLayout::ComputeAdjacentDisplayEdges((ImmersiveApplicationLayout *)v35, &v33, &v33, &v31, v27);
    if ( (a3 != 4 || (v31.left & 1) == 0) && (a3 != 3 || (v31.left & 2) == 0) )
    {
      v10 = -2147418113;
      v16 = 312LL;
      v15 = 2147549183LL;
      goto LABEL_21;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v30);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v29);
LABEL_16:
    v17 = a1[7];
    if ( v17 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 32LL))(v17, 0LL);
    punk = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
    Instance = AppResizeView_CreateInstance(v7, v18, (void **)&punk);
    v10 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x145,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)Instance);
LABEL_37:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&punk);
      return v10;
    }
    *(_QWORD *)&v31.right = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31.right);
    v20 = ((__int64 (__fastcall *)(IUnknown *, GUID *, LONG *))punk->lpVtbl->QueryInterface)(
            punk,
            &GUID_bf49be29_71c8_427e_a671_fec22c61e5f1,
            &v31.right);
    v10 = v20;
    if ( v20 >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 8);
      v20 = TabletModeInputHandler_CreateInstance(1LL, *(_QWORD *)&v31.right, v22, a1 + 8);
      v10 = v20;
      if ( v20 >= 0 )
      {
        *(_QWORD *)&v33.left = a1 - 11;
        *(_QWORD *)&v33.right = &punk;
        v34 = 1;
        IUnknown_SetSite(punk, (IUnknown *)a1 - 11);
        v23 = ((__int64 (__fastcall *)(IUnknown *, __int64 *))punk->lpVtbl[1].QueryInterface)(punk, &v32);
        v10 = v23;
        if ( v23 >= 0 )
        {
          v24 = (IUnknown *)a1[7];
          v25 = punk;
          if ( v24 != punk )
          {
            if ( punk )
            {
              ((void (__fastcall *)(IUnknown *))punk->lpVtbl->AddRef)(punk);
              v24 = (IUnknown *)a1[7];
            }
            v30 = v24;
            a1[7] = v25;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
          }
          TabletModeViewManager::UpdateLayoutItemsSizeConstraints((TabletModeViewManager *)(a1 - 11));
          v10 = 0;
          v34 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x153,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
            (const char *)(unsigned int)v23);
        }
        wil::details::ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___::_ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___((IUnknown ***)&v33);
        goto LABEL_36;
      }
      v21 = 328LL;
    }
    else
    {
      v21 = 327LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)v20);
LABEL_36:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v31.right);
    goto LABEL_37;
  }
  v11 = (unsigned int)v9;
  v12 = 292LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)v11);
LABEL_22:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v29);
  return v10;
}
