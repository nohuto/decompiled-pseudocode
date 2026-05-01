/*
 * XREFs of ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@4PEAUIAnimationCoordinator@@@Z @ 0x1803AADC4
 * Callers:
 *     ??$MakeAndInitialize@VCMultitaskingViewFrameElement@@UIMultitaskingViewElement@@AEBUFrameMetrics@@AEAPEAUHWND__@@AEBVAsyncFrameEvents@@AEAPEAUISwitchThumbnailFactory@@AEAPEAU2@AEAPEAU2@AEAPEAUIAnimationCoordinator@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEBUFrameMetrics@@AEAPEAUHWND__@@AEBVAsyncFrameEvents@@AEAPEAUISwitchThumbnailFactory@@AEAPEAU3@5AEAPEAUIAnimationCoordinator@@@Z @ 0x1803A9608 (--$MakeAndInitialize@VCMultitaskingViewFrameElement@@UIMultitaskingViewElement@@AEBUFrameMetrics.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000BE8C (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180014660 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1803A05A8 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ??B?$HighContrastAwareOpacity@N@@QEBANXZ @ 0x1803A8748 (--B-$HighContrastAwareOpacity@N@@QEBANXZ.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x1803A9A0C (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 *     ?CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDCompThumbnail@@1PEAPEAU4@2@Z @ 0x1803A9F08 (-CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDC.c)
 *     ?ScreenToClient@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x1803AB5FC (-ScreenToClient@CPoint@Geometry@@SA-AU12@PEAUHWND__@@AEBUtagPOINT@@@Z.c)
 *     ?_CreateDesktopBackgroundThumbnail@CMultitaskingViewFrameElement@@AEAAJAEBUCRect@Geometry@@PEAPEAUIDCompThumbnail@@@Z @ 0x1803AB744 (-_CreateDesktopBackgroundThumbnail@CMultitaskingViewFrameElement@@AEAAJAEBUCRect@Geometry@@PEAPE.c)
 *     ?_GetWallpaperSrcRect@CMultitaskingViewFrameElement@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x1803AB87C (-_GetWallpaperSrcRect@CMultitaskingViewFrameElement@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_SetContentThumbnailRects@CMultitaskingViewFrameElement@@AEAAJPEAUIDCompThumbnail@@0@Z @ 0x1803ABBE4 (-_SetContentThumbnailRects@CMultitaskingViewFrameElement@@AEAAJPEAUIDCompThumbnail@@0@Z.c)
 *     ?s_CreateDimmingLayerThumbnail@CMultitaskingViewFrameElement@@CAJPEAUISwitchThumbnailFactory@@NPEAUIDCompThumbnail@@PEAPEAU3@@Z @ 0x1803ABCE4 (-s_CreateDimmingLayerThumbnail@CMultitaskingViewFrameElement@@CAJPEAUISwitchThumbnailFactory@@NP.c)
 *     ?LightDismissElement_CreateInstance@@YAJPEAUILightDismissElementHost@@IAEBU_GUID@@PEAPEAX@Z @ 0x1803BC22C (-LightDismissElement_CreateInstance@@YAJPEAUILightDismissElementHost@@IAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InputEaterElement_CreateInstance@@YAJPEAUIInputEaterElementNotifications@@AEBU_GUID@@PEAPEAX@Z @ 0x1803BC5CC (-InputEaterElement_CreateInstance@@YAJPEAUIInputEaterElementNotifications@@AEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CMultitaskingViewFrameElement::RuntimeClassInitialize(
        CMultitaskingViewFrameElement *this,
        const struct FrameMetrics *a2,
        HWND a3,
        const struct AsyncFrameEvents *a4,
        struct ISwitchThumbnailFactory *a5,
        struct IMultitaskingViewElement *a6,
        struct IMultitaskingViewElement *a7,
        struct IAnimationCoordinator *a8)
{
  __int128 v8; // xmm0
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  HWND v12; // rcx
  const char *v13; // r9
  __int64 v14; // rdx
  HWND v16; // rcx
  __int64 v17; // rbx
  _QWORD *v18; // r13
  int v19; // eax
  unsigned int v20; // ebx
  int WallpaperSrcRect; // eax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdi
  int DimmingLayerThumbnail; // eax
  __int64 v26; // rdx
  struct IDCompThumbnail *v27; // rbx
  double v28; // xmm0_8
  struct IDCompThumbnail *v29; // rbx
  struct IDCompThumbnail *v30; // rsi
  int Instance; // eax
  __int64 v32; // rdx
  __int64 v33; // rdx
  int v34; // eax
  const struct _GUID *v35; // r8
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdi
  const struct _GUID *v40; // rdx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // [rsp+38h] [rbp-99h] BYREF
  void *v44; // [rsp+40h] [rbp-91h] BYREF
  struct IDCompThumbnail *v45; // [rsp+48h] [rbp-89h] BYREF
  struct tagPOINT Point; // [rsp+50h] [rbp-81h] BYREF
  __int64 v47; // [rsp+58h] [rbp-79h] BYREF
  struct IDCompThumbnail *v48; // [rsp+60h] [rbp-71h] BYREF
  struct IDCompThumbnail *v49; // [rsp+68h] [rbp-69h] BYREF
  struct IAnimationCoordinator *v50; // [rsp+70h] [rbp-61h]
  struct IMultitaskingViewElement *v51; // [rsp+78h] [rbp-59h]
  const struct AsyncFrameEvents *v52; // [rsp+80h] [rbp-51h]
  struct tagRECT v53; // [rsp+88h] [rbp-49h] BYREF
  int v54[2]; // [rsp+98h] [rbp-39h] BYREF
  int v55; // [rsp+A0h] [rbp-31h]
  int v56; // [rsp+A4h] [rbp-2Dh]
  struct tagRECT Rect; // [rsp+A8h] [rbp-29h] BYREF
  struct IMultitaskingViewElement *v58; // [rsp+B8h] [rbp-19h] BYREF
  int v59; // [rsp+C0h] [rbp-11h]
  int v60; // [rsp+C4h] [rbp-Dh]
  struct tagRECT v61; // [rsp+C8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+3Fh]

  v8 = *(_OWORD *)a2;
  v51 = a7;
  v10 = (_OWORD *)((char *)this + 296);
  *v10 = v8;
  v58 = a6;
  v11 = *((_OWORD *)a2 + 1);
  v52 = a4;
  v50 = a8;
  v10[1] = v11;
  v10[2] = *((_OWORD *)a2 + 2);
  v10[3] = *((_OWORD *)a2 + 3);
  v10[4] = *((_OWORD *)a2 + 4);
  v10[5] = *((_OWORD *)a2 + 5);
  v10[6] = *((_OWORD *)a2 + 6);
  v10 += 8;
  *(v10 - 1) = *((_OWORD *)a2 + 7);
  *v10 = *((_OWORD *)a2 + 8);
  v10[1] = *((_OWORD *)a2 + 9);
  *((_QWORD *)v10 + 4) = *((_QWORD *)a2 + 20);
  *((_QWORD *)this + 58) = a3;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 25, (__int64)a8);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 60, (__int64)a5);
  v12 = (HWND)*((_QWORD *)this + 58);
  Rect = 0LL;
  if ( !GetWindowRect(v12, &Rect) )
  {
    v14 = 140LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v14,
             (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
             v13);
  }
  v16 = (HWND)*((_QWORD *)this + 58);
  v61 = 0LL;
  if ( !GetClientRect(v16, &v61) )
  {
    v14 = 143LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v14,
             (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
             v13);
  }
  v17 = *((_QWORD *)this + 60);
  v18 = (_QWORD *)((char *)this + 488);
  *(_QWORD *)&v53.left = 0x100000001LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 61);
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v17 + 112LL))(
          v17,
          0LL,
          0x100000001LL,
          &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
          (char *)this + 488);
  v20 = v19;
  if ( v19 >= 0 )
  {
    v49 = 0LL;
    if ( *((_BYTE *)this + 336) )
    {
      v53 = 0LL;
      WallpaperSrcRect = CMultitaskingViewFrameElement::_GetWallpaperSrcRect(this, &Rect, &v53);
      if ( WallpaperSrcRect < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x99,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
          (const char *)(unsigned int)WallpaperSrcRect);
        v53 = Rect;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v49);
      v22 = CMultitaskingViewFrameElement::_CreateDesktopBackgroundThumbnail(
              this,
              (const struct Geometry::CRect *)&v53,
              &v49);
      v20 = v22;
      if ( v22 < 0 )
      {
        v23 = 160LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
          (const char *)(unsigned int)v22);
LABEL_70:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v49);
        return v20;
      }
      v54[0] = v53.left - Rect.left;
      v55 = v53.right - Rect.left;
      v54[1] = v53.top - Rect.top;
      v56 = v53.bottom - Rect.top;
      v22 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, int *, _QWORD, _QWORD))(*(_QWORD *)v49 + 24LL))(
              v49,
              v54,
              0LL,
              0LL);
      v20 = v22;
      if ( v22 < 0 )
      {
        v23 = 161LL;
        goto LABEL_15;
      }
    }
    v45 = 0LL;
    v24 = 0LL;
    *(_QWORD *)&v53.left = 0LL;
    if ( HighContrastAwareOpacity<double>::operator double((double *)this + 47) != 0.0 )
    {
      *(_QWORD *)v54 = 0x100000001LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
      DimmingLayerThumbnail = (*(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, _QWORD, _QWORD, GUID *, struct IDCompThumbnail **))(*(_QWORD *)a5 + 112LL))(
                                a5,
                                *v18,
                                *(_QWORD *)v54,
                                &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                                &v45);
      v20 = DimmingLayerThumbnail;
      if ( DimmingLayerThumbnail < 0 )
      {
        v26 = 170LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v26,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
          (const char *)(unsigned int)DimmingLayerThumbnail);
LABEL_69:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v53.left);
        goto LABEL_70;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v53.left);
      v27 = v45;
      v28 = HighContrastAwareOpacity<double>::operator double((double *)this + 47);
      DimmingLayerThumbnail = CMultitaskingViewFrameElement::s_CreateDimmingLayerThumbnail(
                                a5,
                                v28,
                                v27,
                                (struct IDCompThumbnail **)&v53);
      v20 = DimmingLayerThumbnail;
      if ( DimmingLayerThumbnail < 0 )
      {
        v26 = 176LL;
        goto LABEL_21;
      }
      v24 = *(_QWORD *)&v53.left;
    }
    v29 = 0LL;
    v47 = 0LL;
    v30 = 0LL;
    *(_QWORD *)v54 = 0LL;
    v48 = 0LL;
    if ( HighContrastAwareOpacity<float>::operator float((float *)this + 85) != 0.0 || *((_DWORD *)this + 87) )
    {
      if ( !v45 )
      {
        v44 = (void *)0x100000001LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
        Instance = (*(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, _QWORD, __int64, GUID *, struct IDCompThumbnail **))(*(_QWORD *)a5 + 112LL))(
                     a5,
                     *v18,
                     0x100000001LL,
                     &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                     &v45);
        v20 = Instance;
        if ( Instance < 0 )
        {
          v32 = 188LL;
LABEL_49:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v32,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
            (const char *)(unsigned int)Instance);
LABEL_68:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v54);
          goto LABEL_69;
        }
      }
      v44 = (void *)0x100000001LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
      Instance = (*(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, struct IDCompThumbnail *, __int64, GUID *, __int64 *))(*(_QWORD *)a5 + 112LL))(
                   a5,
                   v45,
                   0x100000001LL,
                   &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                   &v47);
      v20 = Instance;
      if ( Instance < 0 )
      {
        v32 = 191LL;
        goto LABEL_49;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v54);
      Instance = CMultitaskingViewFrameElement::CreateContentDimmingLayerThumbnail(
                   (__int64)this,
                   v33,
                   v45,
                   v47,
                   v54,
                   &v48);
      v20 = Instance;
      if ( Instance < 0 )
      {
        v32 = 198LL;
        goto LABEL_49;
      }
      v29 = *(struct IDCompThumbnail **)v54;
      v30 = v48;
    }
    if ( v24 || v29 )
    {
      LOBYTE(v43) = 1;
      if ( v50 )
      {
        v34 = (*(__int64 (__fastcall **)(struct IAnimationCoordinator *, __int64, struct IDCompThumbnail *, __int64 *))(*(_QWORD *)v50 + 24LL))(
                v50,
                5LL,
                v45,
                &v43);
        if ( v34 >= 0 )
        {
          if ( !(_BYTE)v43 )
            goto LABEL_45;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xCE,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
            (const char *)(unsigned int)v34);
        }
      }
      if ( v29 )
      {
        Instance = CMultitaskingViewFrameElement::_SetContentThumbnailRects(this, v29, v30);
        v20 = Instance;
        if ( Instance < 0 )
        {
          v32 = 211LL;
          goto LABEL_49;
        }
      }
      if ( v24 )
      {
        Instance = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v24 + 24LL))(
                     v24,
                     &Rect,
                     0LL,
                     0LL);
        v20 = Instance;
        if ( Instance < 0 )
        {
          v32 = 216LL;
          goto LABEL_49;
        }
      }
    }
LABEL_45:
    v44 = (void *)0x100000001LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
    Instance = (*(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, _QWORD, void *, GUID *, char *))(*(_QWORD *)a5 + 112LL))(
                 a5,
                 *v18,
                 v44,
                 &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                 (char *)this + 88);
    v20 = Instance;
    if ( Instance < 0 )
    {
      v32 = 221LL;
      goto LABEL_49;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 35);
    Instance = LightDismissElement_CreateInstance(
                 (struct ILightDismissElementHost *)(((unsigned __int128)-(__int128)(unsigned __int64)this >> 64) & ((unsigned __int64)this + 240)),
                 (unsigned __int128)-(__int128)(unsigned __int64)this >> 64,
                 v35,
                 (void **)this + 35);
    v20 = Instance;
    if ( Instance < 0 )
    {
      v32 = 223LL;
      goto LABEL_49;
    }
    v36 = (*(__int64 (__fastcall **)(CMultitaskingViewFrameElement *, _QWORD))(*(_QWORD *)this + 64LL))(
            this,
            *((_QWORD *)this + 35));
    v20 = v36;
    if ( v36 < 0 )
    {
      v37 = 235LL;
LABEL_58:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v37,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
        (const char *)(unsigned int)v36);
LABEL_65:
      (*(void (__fastcall **)(CMultitaskingViewFrameElement *))(*(_QWORD *)this + 80LL))(this);
      goto LABEL_68;
    }
    v38 = (__int64)v51;
    if ( v51 )
    {
      v36 = (*(__int64 (__fastcall **)(CMultitaskingViewFrameElement *, struct IMultitaskingViewElement *))(*(_QWORD *)this + 64LL))(
              this,
              v51);
      v20 = v36;
      if ( v36 < 0 )
      {
        v37 = 239LL;
        goto LABEL_58;
      }
    }
    v39 = (__int64)v58;
    if ( v58 )
    {
      v36 = (*(__int64 (__fastcall **)(CMultitaskingViewFrameElement *, struct IMultitaskingViewElement *))(*(_QWORD *)this + 64LL))(
              this,
              v58);
      v20 = v36;
      if ( v36 < 0 )
      {
        v37 = 244LL;
        goto LABEL_58;
      }
    }
    Point = 0LL;
    GetCursorPos(&Point);
    Point = *(struct tagPOINT *)Geometry::CPoint::ScreenToClient(&v58, *((_QWORD *)this + 58), &Point);
    if ( Geometry::CRect::Contains((Geometry::CRect *)&v61, &Point) )
    {
      v44 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
      v41 = InputEaterElement_CreateInstance((CMultitaskingViewFrameElement *)((char *)this + 224), v40, &v44);
      v20 = v41;
      if ( v41 < 0 )
      {
        v42 = 253LL;
LABEL_64:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v42,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
          (const char *)(unsigned int)v41);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
        goto LABEL_65;
      }
      v41 = (*(__int64 (__fastcall **)(CMultitaskingViewFrameElement *, void *))(*(_QWORD *)this + 64LL))(this, v44);
      v20 = v41;
      if ( v41 < 0 )
      {
        v42 = 254LL;
        goto LABEL_64;
      }
      v58 = (struct IMultitaskingViewElement *)Point;
      v59 = Point.x + 1;
      v60 = Point.y + 1;
      (*(void (__fastcall **)(void *, struct IMultitaskingViewElement **))(*(_QWORD *)v44 + 104LL))(v44, &v58);
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 32, (__int64 *)&v44);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
    }
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 33, v39);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 34, v38);
    *((_QWORD *)this + 36) = v52;
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 62, (__int64 *)&v49);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 63, (__int64 *)v54);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 64, (__int64 *)&v48);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 65, (__int64 *)&v45);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 66, &v47);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 67, (__int64 *)&v53.left);
    v20 = 0;
    goto LABEL_68;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x92,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
    (const char *)(unsigned int)v19);
  return v20;
}
