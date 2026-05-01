/*
 * XREFs of ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180048CC0
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x180048A50 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     ?PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1803ED600 (-PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18001710C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800301D0 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1800473E0 (-_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088F6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??$query@U?$IVectorView@I@Collections@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IVectorView@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800B5C70 (--$query@U-$IVectorView@I@Collections@Foundation@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_excep.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LightweightWindows@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18016C144 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LightweightWindows@@@details@wil@@QEAAX_N.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x1803EC364 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     ?_AdjustSizeForMonitorChange@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@0PEAUtagSIZE@@PEAW4TRY_POSITION_VIEW_FLAGS@@@Z @ 0x1803EF0D0 (-_AdjustSizeForMonitorChange@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@0PEAUtagSIZE@@PEAW4.c)
 *     ?_MoveRectToMonitor@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@UtagRECT@@PEAU3@@Z @ 0x1803F0544 (-_MoveRectToMonitor@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@UtagRECT@@PEAU3@@Z.c)
 *     ?GetAdjacentPosition@WindowRelativePositioning@@YA?AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApplicationViewCollection@@0@Z @ 0x1803F1680 (-GetAdjacentPosition@WindowRelativePositioning@@YA-AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApp.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CDesktopPositioner::_GetRectAndFlagsFromPresentationArgs(
        CDesktopPositioner *this,
        struct IPresentationRequestedArgs *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        enum TRY_POSITION_VIEW_FLAGS *a5,
        struct IImmersiveMonitor **a6)
{
  CDesktopPositioner *v7; // r13
  int v9; // edi
  int MonitorFromRect; // eax
  unsigned int v11; // ebx
  int v12; // r12d
  LONG right; // r14d
  LONG bottom; // r15d
  int (__fastcall *v15)(struct IPresentationRequestedArgs *, LONG *); // rbx
  __int64 v16; // rax
  int (__fastcall *v17)(_QWORD, struct IUnknown **); // r12
  LONG left; // r12d
  LONG top; // r13d
  int v20; // eax
  __int64 v21; // rdx
  CDesktopPositioner *v22; // rcx
  struct IUnknown *v23; // rbx
  struct IImmersiveMonitor *v24; // r8
  CDesktopPositioner *v25; // rcx
  CDesktopPositioner *v26; // rbx
  enum DEVICE_SCALE_FACTOR ScaleFactorForRect; // eax
  int (__fastcall *v28)(struct IPresentationRequestedArgs *, __int64 *); // rbx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 *v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 (__fastcall *v37)(__int64, _QWORD, struct IUnknown **); // r12
  struct IUnknown *v38; // rcx
  int v39; // eax
  __int64 v40; // rdx
  bool v41; // r12
  __int64 v42; // rdx
  CDesktopPositioner *v43; // rcx
  LONG cx; // r14d
  LONG cy; // r15d
  CDesktopPositioner *v46; // rcx
  LONG v47; // edi
  LONG v48; // esi
  struct IUnknown *v49; // rcx
  struct tagRECT *v50; // [rsp+20h] [rbp-E0h]
  struct tagRECT *v51; // [rsp+40h] [rbp-C0h] BYREF
  struct IUnknown *v52; // [rsp+48h] [rbp-B8h] BYREF
  bool v53; // [rsp+50h] [rbp-B0h]
  struct tagRECT v54; // [rsp+60h] [rbp-A0h] BYREF
  struct tagSIZE v55; // [rsp+70h] [rbp-90h] BYREF
  struct IUnknown *v56; // [rsp+78h] [rbp-88h] BYREF
  __int64 v57; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v58; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v59; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v60; // [rsp+9Ch] [rbp-64h] BYREF
  struct IUnknown *v61; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-58h] BYREF
  CDesktopPositioner *v63; // [rsp+B0h] [rbp-50h] BYREF
  int v64; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v65; // [rsp+C0h] [rbp-40h] BYREF
  int v66; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v67; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT *v68; // [rsp+D8h] [rbp-28h]
  struct IImmersiveMonitor **v69; // [rsp+E0h] [rbp-20h]
  bool v70[8]; // [rsp+E8h] [rbp-18h] BYREF
  enum TRY_POSITION_VIEW_FLAGS *v71; // [rsp+F0h] [rbp-10h]
  struct tagRECT *v72; // [rsp+F8h] [rbp-8h]
  struct tagRECT v73; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT v74; // [rsp+110h] [rbp+10h] BYREF
  struct tagRECT v75; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v72 = a4;
  v68 = a3;
  v7 = this;
  v63 = this;
  v71 = a5;
  v69 = a6;
  *a4 = 0LL;
  *(_DWORD *)a5 = 0;
  *a6 = 0LL;
  if ( !a2 )
    return 2147942487LL;
  v9 = 0;
  HIDWORD(v51) = 0;
  v54 = *a3;
  v56 = 0LL;
  MonitorFromRect = CDesktopPositioner::_GetMonitorFromRect(this, a3, (struct IImmersiveMonitor **)&v56);
  v11 = MonitorFromRect;
  if ( MonitorFromRect >= 0 )
  {
    v67 = 0LL;
    LOBYTE(v51) = 0;
    v12 = 0;
    if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v67) < 0 )
    {
      bottom = v54.bottom;
      right = v54.right;
    }
    else
    {
      right = v54.left + v67;
      v54.right = v54.left + v67;
      bottom = v54.top + HIDWORD(v67);
      v54.bottom = v54.top + HIDWORD(v67);
      v9 = 15;
      HIDWORD(v51) = 15;
      LOBYTE(v51) = 1;
      v12 = 15;
    }
    v62 = 0LL;
    *(_QWORD *)&v58.right = 0LL;
    if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v62) >= 0 )
    {
      v15 = *(int (__fastcall **)(struct IPresentationRequestedArgs *, LONG *))(*(_QWORD *)a2 + 64LL);
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v58.right);
      if ( v15(a2, &v58.right) >= 0 )
      {
        if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, int *))(*(_QWORD *)a2 + 96LL))(a2, &v66) < 0
          || v66 )
        {
          v9 = v12 | 2;
          HIDWORD(v51) = v12 | 2;
        }
        v64 = 0;
        v57 = 0LL;
        v74 = 0LL;
        v52 = 0LL;
        v73 = 0LL;
        v16 = **(_QWORD **)&v58.right;
        v57 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, GUID *, __int64 *))(v16 + 104))(
               *(_QWORD *)&v58.right,
               &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
               &v57) >= 0
          && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v57 + 32LL))(v57, &v64) >= 0
          && v64 == 2
          && (*(int (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v57 + 24LL))(v57, &v74) >= 0 )
        {
          v17 = *(int (__fastcall **)(_QWORD, struct IUnknown **))(**(_QWORD **)&v58.right + 80LL);
          v52 = 0LL;
          if ( v17(*(_QWORD *)&v58.right, &v52) >= 0
            && ((int (__fastcall *)(struct IUnknown *, struct tagRECT *))v52->lpVtbl[3].QueryInterface)(v52, &v73) >= 0 )
          {
            left = right - v54.left;
            v58.left = right - v54.left;
            top = bottom - v54.top;
            v58.top = bottom - v54.top;
            v61 = 0LL;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v61);
            v20 = CDesktopPositioner::_GetMonitorFromRect(v63, v68, (struct IImmersiveMonitor **)&v61);
            v11 = v20;
            if ( v20 < 0 )
            {
              v21 = 3286LL;
LABEL_29:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v21,
                (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                (const char *)(unsigned int)v20,
                (int)v50);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v61);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v52);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v57);
LABEL_89:
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v58.right);
              goto LABEL_90;
            }
            v53 = (unsigned int)SHIsSameObject(v52, v61) != 0;
            v23 = v56;
            v24 = (struct IImmersiveMonitor *)v52;
            v56 = v52;
            if ( v52 )
            {
              ((void (__fastcall *)(struct IUnknown *))v52->lpVtbl->AddRef)(v52);
              v24 = (struct IImmersiveMonitor *)v52;
            }
            if ( v23 )
            {
              ((void (__fastcall *)(struct IUnknown *))v23->lpVtbl->Release)(v23);
              v24 = (struct IImmersiveMonitor *)v52;
            }
            if ( !v53 && !(_BYTE)v51 )
            {
              v20 = CDesktopPositioner::_AdjustSizeForMonitorChange(
                      v22,
                      (struct IImmersiveMonitor *)v61,
                      v24,
                      (struct tagSIZE *)&v58,
                      (enum TRY_POSITION_VIEW_FLAGS *)((char *)&v51 + 4));
              v11 = v20;
              if ( v20 < 0 )
              {
                v21 = 3295LL;
                goto LABEL_29;
              }
              v9 = HIDWORD(v51);
              top = v58.top;
              left = v58.left;
            }
            if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, unsigned int *))(*(_QWORD *)a2 + 104LL))(
                   a2,
                   &v59) >= 0
              && v59 )
            {
              v75 = 0LL;
              v55 = 0LL;
              if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)&v58.right + 392LL))(
                     *(_QWORD *)&v58.right,
                     &v60) >= 0 )
              {
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v55);
                if ( (int)CDesktopPositioner::_CreateTitlebarConfiguration(
                            v25,
                            *(struct IApplicationView **)&v58.right,
                            (struct IApplicationViewTitlebarConfiguration **)&v55) >= 0 )
                {
                  v26 = v63;
                  LODWORD(v50) = 1;
                  if ( (*(int (__fastcall **)(_QWORD, struct IUnknown *, _QWORD, __int64))(**((_QWORD **)v63 + 33) + 72LL))(
                         *((_QWORD *)v63 + 33),
                         v52,
                         0LL,
                         1LL) >= 0
                    && (*(int (__fastcall **)(_QWORD, bool *))(**(_QWORD **)&v58.right + 136LL))(
                         *(_QWORD *)&v58.right,
                         v70) >= 0 )
                  {
                    LOBYTE(v50) = v60 != 0;
                    v54 = *WindowRelativePositioning::GetAdjacentPosition(
                             (WindowRelativePositioning *)&v54,
                             &v74,
                             &v58,
                             (const struct tagSIZE *)&v75,
                             v50,
                             v70[0],
                             *((const unsigned __int16 **)v26 + 34),
                             &v73,
                             v51);
                    v9 |= 1u;
                    HIDWORD(v51) = v9;
                    bottom = v54.bottom;
                    right = v54.right;
                  }
                }
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v55);
            }
            else
            {
              ScaleFactorForRect = GetScaleFactorForRect(&v73);
              v54.left = v74.left + ScaleFactorForRect * (int)v62 / 100;
              v54.top = ScaleFactorForRect * HIDWORD(v62) / 100 + v74.top;
              right = v54.left + left;
              v54.right = v54.left + left;
              bottom = v54.top + top;
              v54.bottom = v54.top + top;
              v9 |= 1u;
              HIDWORD(v51) = v9;
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v61);
            v7 = v63;
          }
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v52);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v57);
      }
    }
    v65 = 0LL;
    v28 = *(int (__fastcall **)(struct IPresentationRequestedArgs *, __int64 *))(*(_QWORD *)a2 + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v65);
    if ( v28(a2, &v65) >= 0 )
    {
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v63,
        v65);
      wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Foundation::Collections::IVectorView<unsigned int>>(
        &v63,
        &v57);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v63);
      v29 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v57 + 56LL))(v57, &v60);
      v11 = v29;
      if ( v29 < 0 )
      {
        v30 = 3345LL;
LABEL_50:
        v31 = (unsigned int)v29;
        goto LABEL_51;
      }
      if ( v60 )
      {
        if ( v60 > 1 )
        {
          v11 = -2147024809;
          v31 = 2147942487LL;
          v30 = 3349LL;
LABEL_51:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v30,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)v31,
            (int)v50);
LABEL_78:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v57);
LABEL_88:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v65);
          goto LABEL_89;
        }
        v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v57 + 48LL))(v57, 0LL, &v59);
        v11 = v29;
        if ( v29 < 0 )
        {
          v30 = 3352LL;
          goto LABEL_50;
        }
        *(_QWORD *)&v58.left = 0LL;
        v32 = (__int64 *)*((_QWORD *)v7 + 40);
        v33 = *v32;
        *(_QWORD *)&v58.left = 0LL;
        v34 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct tagRECT *))(v33 + 32))(v32, 1LL, &v58);
        v11 = v34;
        if ( v34 < 0 )
        {
          v35 = 3355LL;
LABEL_58:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v35,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v34,
            (int)v50);
LABEL_77:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v58.left);
          goto LABEL_78;
        }
        v36 = *(_QWORD *)&v58.left;
        v37 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IUnknown **))(**(_QWORD **)&v58.left + 88LL);
        v38 = v56;
        v56 = 0LL;
        if ( v38 )
          ((void (__fastcall *)(struct IUnknown *))v38->lpVtbl->Release)(v38);
        v34 = v37(v36, v59, &v56);
        v11 = v34;
        if ( v34 < 0 )
        {
          v35 = 3356LL;
          goto LABEL_58;
        }
        v52 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v52);
        v39 = CDesktopPositioner::_GetMonitorFromRect(v7, v68, (struct IImmersiveMonitor **)&v52);
        v11 = v39;
        if ( v39 < 0 )
        {
          v40 = 3359LL;
LABEL_76:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v40,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v39,
            (int)v50);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v52);
          goto LABEL_77;
        }
        v41 = (unsigned int)SHIsSameObject(v56, v52) != 0;
        if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v62) < 0 )
        {
          if ( !v41 )
          {
            v75 = v54;
            v39 = CDesktopPositioner::_MoveRectToMonitor(v7, (struct IImmersiveMonitor *)v56, &v75, &v54);
            v11 = v39;
            if ( v39 < 0 )
            {
              v40 = 3396LL;
              goto LABEL_76;
            }
            v9 |= 3u;
            HIDWORD(v51) = v9;
            if ( !(_BYTE)v51 )
            {
              v47 = v54.left;
              v55.cx = v54.right - v54.left;
              v48 = v54.top;
              v55.cy = v54.bottom - v54.top;
              v39 = CDesktopPositioner::_AdjustSizeForMonitorChange(
                      v46,
                      (struct IImmersiveMonitor *)v52,
                      (struct IImmersiveMonitor *)v56,
                      &v55,
                      (enum TRY_POSITION_VIEW_FLAGS *)((char *)&v51 + 4));
              v11 = v39;
              if ( v39 < 0 )
              {
                v40 = 3404LL;
                goto LABEL_76;
              }
              v54.right = v47 + v55.cx;
              v54.bottom = v48 + v55.cy;
              v9 = HIDWORD(v51);
            }
          }
        }
        else
        {
          LOBYTE(v42) = 1;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::GetImpl'::`2'::impl,
            v42);
          v73 = 0LL;
          v39 = ((__int64 (__fastcall *)(struct IUnknown *, struct tagRECT *))v56->lpVtbl[3].Release)(v56, &v73);
          v11 = v39;
          if ( v39 < 0 )
          {
            v40 = 3366LL;
            goto LABEL_76;
          }
          cx = right - v54.left;
          v55.cx = cx;
          cy = bottom - v54.top;
          v55.cy = cy;
          if ( !v41 && !(_BYTE)v51 )
          {
            v39 = CDesktopPositioner::_AdjustSizeForMonitorChange(
                    v43,
                    (struct IImmersiveMonitor *)v52,
                    (struct IImmersiveMonitor *)v56,
                    &v55,
                    (enum TRY_POSITION_VIEW_FLAGS *)((char *)&v51 + 4));
            v11 = v39;
            if ( v39 < 0 )
            {
              v40 = 3379LL;
              goto LABEL_76;
            }
            v9 = HIDWORD(v51);
            cy = v55.cy;
            cx = v55.cx;
          }
          v54.left = v62 + v73.left;
          v54.top = HIDWORD(v62) + v73.top;
          v54.right = v62 + v73.left + cx;
          v54.bottom = HIDWORD(v62) + v73.top + cy;
          v9 |= 3u;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v52);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v58.left);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v57);
    }
    v49 = v56;
    if ( v56 )
    {
      *v69 = (struct IImmersiveMonitor *)v56;
      ((void (__fastcall *)(struct IUnknown *))v49->lpVtbl->AddRef)(v49);
    }
    else
    {
      *v69 = 0LL;
    }
    *(_DWORD *)v71 = v9;
    *v72 = v54;
    if ( v9 )
    {
      v11 = 0;
    }
    else
    {
      v11 = -2147467260;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD5C,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)0x80004004LL,
        (int)v50);
    }
    goto LABEL_88;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC9D,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)MonitorFromRect,
    (int)v50);
LABEL_90:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v56);
  return v11;
}
