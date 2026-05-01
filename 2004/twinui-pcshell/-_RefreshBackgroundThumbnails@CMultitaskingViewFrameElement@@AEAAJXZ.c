/*
 * XREFs of ?_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ @ 0x1803AC200
 * Callers:
 *     ?RefreshBackground@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1803AB500 (-RefreshBackground@CMultitaskingViewFrameElement@@UEAAXXZ.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180015480 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B538 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180192A84 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDCompThumbnail@@1PEAPEAU4@2@Z @ 0x1803AA7C8 (-CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDC.c)
 *     ?_CreateDesktopBackgroundThumbnail@CMultitaskingViewFrameElement@@AEAAJAEBUCRect@Geometry@@PEAPEAUIDCompThumbnail@@@Z @ 0x1803AC004 (-_CreateDesktopBackgroundThumbnail@CMultitaskingViewFrameElement@@AEAAJAEBUCRect@Geometry@@PEAPE.c)
 *     ?_GetContentLocation@CMultitaskingViewFrameElement@@AEAA?AUCRect@Geometry@@AEBUtagRECT@@@Z @ 0x1803AC064 (-_GetContentLocation@CMultitaskingViewFrameElement@@AEAA-AUCRect@Geometry@@AEBUtagRECT@@@Z.c)
 *     ?_GetWallpaperSrcRect@CMultitaskingViewFrameElement@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x1803AC13C (-_GetWallpaperSrcRect@CMultitaskingViewFrameElement@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_SetContentThumbnailRects@CMultitaskingViewFrameElement@@AEAAJPEAUIDCompThumbnail@@0@Z @ 0x1803AC4A4 (-_SetContentThumbnailRects@CMultitaskingViewFrameElement@@AEAAJPEAUIDCompThumbnail@@0@Z.c)
 */

__int64 __fastcall CMultitaskingViewFrameElement::_RefreshBackgroundThumbnails(CMultitaskingViewFrameElement *this)
{
  __int64 *v1; // rdi
  HWND v3; // rcx
  const char *v4; // r9
  int WallpaperSrcRect; // ebx
  __int64 v7; // rdx
  int DesktopBackgroundThumbnail; // eax
  __int64 v9; // rdx
  struct IDCompThumbnail *v10; // rdx
  __int64 v11; // rbx
  struct IDCompThumbnail *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct IDCompThumbnail *v15; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v16; // [rsp+38h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT v18; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v1 = (__int64 *)((char *)this + 496);
  if ( *((_QWORD *)this + 62) )
  {
    v3 = (HWND)*((_QWORD *)this + 58);
    Rect = 0LL;
    v16 = 0LL;
    if ( !GetWindowRect(v3, &Rect) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x325,
               (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
               v4);
    WallpaperSrcRect = CMultitaskingViewFrameElement::_GetWallpaperSrcRect((HWND *)this, &Rect, &v16);
    if ( WallpaperSrcRect < 0 )
    {
      v7 = 806LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
        (const char *)(unsigned int)WallpaperSrcRect);
      return (unsigned int)WallpaperSrcRect;
    }
    if ( !Platform::Guid::Equals((Platform::Guid *)&v16, (const struct _GUID *)this + 34) )
    {
      v15 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
      DesktopBackgroundThumbnail = CMultitaskingViewFrameElement::_CreateDesktopBackgroundThumbnail(
                                     this,
                                     (const struct Geometry::CRect *)&v16,
                                     (const struct tagSIZE *)&v15);
      WallpaperSrcRect = DesktopBackgroundThumbnail;
      if ( DesktopBackgroundThumbnail < 0 )
      {
        v9 = 810LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
          (const char *)(unsigned int)DesktopBackgroundThumbnail);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
        return (unsigned int)WallpaperSrcRect;
      }
      DesktopBackgroundThumbnail = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, __int64, _QWORD))(*(_QWORD *)v15 + 152LL))(
                                     v15,
                                     *v1,
                                     0LL);
      WallpaperSrcRect = DesktopBackgroundThumbnail;
      if ( DesktopBackgroundThumbnail < 0 )
      {
        v9 = 813LL;
        goto LABEL_15;
      }
      v18.left = v16.left - Rect.left;
      v18.right = v16.right - Rect.left;
      v18.top = v16.top - Rect.top;
      v18.bottom = v16.bottom - Rect.top;
      DesktopBackgroundThumbnail = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v15 + 24LL))(
                                     v15,
                                     &v18,
                                     0LL,
                                     0LL);
      WallpaperSrcRect = DesktopBackgroundThumbnail;
      if ( DesktopBackgroundThumbnail < 0 )
      {
        v9 = 814LL;
        goto LABEL_15;
      }
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(v1, (__int64 *)&v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    }
  }
  v10 = (struct IDCompThumbnail *)*((_QWORD *)this + 63);
  if ( v10 )
  {
    if ( *((_QWORD *)this + 34) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 64);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 63);
      v11 = *((_QWORD *)this + 66);
      v12 = (struct IDCompThumbnail *)*((_QWORD *)this + 65);
      CMultitaskingViewFrameElement::_GetContentLocation((__int64)this, &v18, (_DWORD *)this + 14);
      WallpaperSrcRect = CMultitaskingViewFrameElement::CreateContentDimmingLayerThumbnail(
                           (__int64)this,
                           v13,
                           v12,
                           v11,
                           (char *)this + 504,
                           (char *)this + 512);
      if ( WallpaperSrcRect < 0 )
      {
        v7 = 829LL;
        goto LABEL_6;
      }
      v10 = (struct IDCompThumbnail *)*((_QWORD *)this + 63);
    }
    WallpaperSrcRect = CMultitaskingViewFrameElement::_SetContentThumbnailRects(
                         this,
                         v10,
                         *((struct IDCompThumbnail **)this + 64));
    if ( WallpaperSrcRect < 0 )
    {
      v7 = 831LL;
      goto LABEL_6;
    }
  }
  v14 = *((_QWORD *)this + 67);
  if ( v14 )
  {
    WallpaperSrcRect = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
                         v14,
                         (char *)this + 56,
                         0LL,
                         0LL);
    if ( WallpaperSrcRect < 0 )
    {
      v7 = 836LL;
      goto LABEL_6;
    }
  }
  return 0LL;
}
