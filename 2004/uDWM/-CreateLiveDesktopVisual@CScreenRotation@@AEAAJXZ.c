/*
 * XREFs of ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800AC664
 * Callers:
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800AC840 (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180009F24 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000A944 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18000A9E4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A40 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001D740 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800289B0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x1800350E0 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180036718 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800AD2AC (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

__int64 __fastcall CScreenRotation::CreateLiveDesktopVisual(struct CAnimatedTransitionVisual **this)
{
  struct CBaseImageProxy ***v2; // rsi
  struct CVisual *RootVisualForDesktop; // rbx
  int v4; // r8d
  int v5; // r9d
  int v6; // eax
  int v7; // edi
  int v8; // eax
  struct CBaseImageProxy *v9; // rbx
  struct CBaseImageProxy **v10; // rcx
  struct CBaseImageProxy *v12; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT v14; // [rsp+40h] [rbp-20h] BYREF

  GetDesktopID(1LL, &v13);
  v2 = (struct CBaseImageProxy ***)(this + 40);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           v13);
  v14.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 111);
  v4 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 113);
  v14.right = v4 + v14.left;
  v14.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 112);
  v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 114);
  v14.bottom = v5 + v14.top;
  if ( v4 < 0 )
    v4 = 0;
  LODWORD(v12) = v4;
  if ( v5 < 0 )
    v5 = 0;
  HIDWORD(v12) = v5;
  v6 = CAnimatedTransitionVisual::Create(this + 40);
  v7 = v6;
  if ( v6 >= 0 )
  {
    VisualCollection::InsertRelative(
      (VisualCollection *)(this + 4),
      (struct CVisual *)((unsigned __int64)(*v2 + 1) & -(__int64)(*v2 != 0LL)),
      (struct CVisual *)(((unsigned __int64)this[39] + 8) & -(__int64)(this[39] != 0LL)),
      1u,
      1);
    v8 = CAnimatedTransitionVisual::SetVisual(*v2, RootVisualForDesktop, 0, &v14);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v9 = v12;
      (*((void (__fastcall **)(struct CBaseImageProxy **, struct CBaseImageProxy **))(*v2)[1] + 12))(*v2 + 1, &v12);
      (*v2)[118] = v9;
      CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v2, &v14);
      v10 = *v2;
      *((struct tagRECT *)v10 + 54) = v14;
      CVisual::SetDirtyFlags((CVisual *)(v10 + 1), 4096);
      CAnimatedTransitionVisual::SetBeginAlpha((CAnimatedTransitionVisual *)*v2, 0.0);
      CVisual::SetInterpolationMode((unsigned int *)*v2 + 2, 1u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x22Eu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x22Cu);
  }
  if ( v7 < 0 )
    CScreenRotation::Stop((CScreenRotation *)this, 0);
  return (unsigned int)v7;
}
