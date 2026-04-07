/*
 * XREFs of ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026264
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180027020 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800299D0 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x180014358 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800144A4 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18001A0D4 (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18001A8C0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001D740 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180025FA8 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x1800268C4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180026914 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800269B4 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ??1CWindowData@@QEAA@XZ @ 0x180026D24 (--1CWindowData@@QEAA@XZ.c)
 *     ?UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180026E30 (-UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x180026E8C (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x180026EB0 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180026F84 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18002937C (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z @ 0x180038F94 (-StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B030 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x18003D2F4 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x180089DF4 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?Remove@?$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z @ 0x18008A458 (-Remove@-$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z.c)
 *     ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z @ 0x1800B93D0 (-SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU-$TMILFlagsEnum@W4F.c)
 */

void __fastcall CWindowList::ImmediateDestroyWindow(CWindowList *this, struct CWindowData *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  int v8; // eax
  CDesktopManager *v9; // rbx
  __int64 v10; // rcx
  CTransitionVisualController *v11; // rcx
  unsigned int j; // esi
  CBaseObject *v13; // rcx
  struct CVisual *v14; // rbx
  struct CVisual *v15; // rbx
  CBaseObject *v16; // rax
  __int64 v17; // rbx
  CBaseObject *v18; // rcx
  __int64 v19; // rsi
  HWND v20; // rdx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v21; // rbp
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v22; // rbp
  unsigned int k; // ebx
  CIconicBitmapRegistry *v24; // rbx
  CBaseObject *v25; // rcx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  unsigned __int64 v27; // rcx
  CBaseObject *v28; // rcx
  struct CRenderDataVisual *v29; // rax
  CBaseObject *v30; // rcx
  bool v31; // r8
  unsigned int i; // ebx
  struct CSecondaryWindowRepresentation **v33; // rax
  struct CSecondaryWindowRepresentation *v34; // rdx
  CWindowData *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  CBaseObject *v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // edx
  unsigned int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // [rsp+48h] [rbp+10h] BYREF

  IconicResourceNoRef = a2;
  if ( (*((_BYTE *)a2 + 610) & 4) != 0 )
    DynArray<CWindowData *,0>::Remove((__int64 *)this + 58, &IconicResourceNoRef);
  while ( *((_DWORD *)a2 + 124) )
    CWindowList::UnregisterThumbnail(this, **((struct CThumbnailData ***)a2 + 59));
  while ( *((_DWORD *)a2 + 132) )
    CWindowList::UnregisterThumbnail(this, **((struct CThumbnailData ***)a2 + 63));
  CWindowList::SetOwner((CWindowData **)this, a2, 0LL);
  while ( *((_DWORD *)a2 + 114) )
  {
    v33 = (struct CSecondaryWindowRepresentation **)*((_QWORD *)a2 + 54);
    v34 = *v33;
    if ( a2 == *((struct CWindowData **)*v33 + 4) )
      *((_QWORD *)v34 + 4) = 0LL;
    CWindowData::RemoveSecondaryWindowRepresentation(a2, v34, v4, v5);
  }
  CWindowData::IsImmersiveWindow(a2);
  v6 = (CBaseObject *)*((_QWORD *)a2 + 52);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)a2 + 52) = 0LL;
    for ( i = 0; i < *((_DWORD *)a2 + 142); ++i )
    {
      v35 = *(CWindowData **)(*((_QWORD *)a2 + 68) + 8LL * i);
      if ( (*((_DWORD *)v35 + 25) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v35, 0, v31, 0);
    }
  }
  v7 = (CBaseObject *)*((_QWORD *)a2 + 53);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)a2 + 53) = 0LL;
  }
  while ( 1 )
  {
    v8 = *((_DWORD *)a2 + 142);
    if ( !v8 )
      break;
    CWindowList::SetOwner(
      (CWindowData **)v7,
      *(struct CWindowData **)(*((_QWORD *)a2 + 68) + 8LL * (unsigned int)(v8 - 1)),
      0LL);
  }
  CLivePreview::OnWindowShowHide(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 64), a2, 0LL, 1);
  v9 = CDesktopManager::s_pDesktopManagerInstance;
  v10 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  if ( v10 )
  {
    CWindowPropertyTracker::StopTrackingWindowImmediately((CWindowPropertyTracker *)(v10 + 48), *((HWND *)a2 + 5));
    v9 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v11 = (CTransitionVisualController *)*((_QWORD *)v9 + 31);
  if ( v11 )
  {
    CTransitionVisualController::RemoveTLWClone(v11, *((const struct CTopLevelWindow **)a2 + 48), 0, 1);
    v9 = CDesktopManager::s_pDesktopManagerInstance;
  }
  for ( j = 0; j < *((_DWORD *)v9 + 194); ++j )
  {
    v36 = *(_QWORD *)(*((_QWORD *)v9 + 94) + 8LL * j);
    (*(void (__fastcall **)(__int64, struct CWindowData *))(*(_QWORD *)v36 + 192LL))(v36, a2);
  }
  v13 = (CBaseObject *)*((_QWORD *)a2 + 72);
  if ( v13 )
  {
    CBaseObject::Release(v13);
    *((_QWORD *)a2 + 72) = 0LL;
  }
  v14 = (struct CVisual *)*((_QWORD *)a2 + 49);
  if ( v14 )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32), v14);
    v27 = *((_QWORD *)a2 + 49);
    if ( v27 )
      CTopLevelWindow3D::StopAnimation(v27);
    v28 = (CBaseObject *)*((_QWORD *)a2 + 49);
    if ( v28 )
    {
      CBaseObject::Release(v28);
      *((_QWORD *)a2 + 49) = 0LL;
    }
  }
  v15 = (struct CVisual *)*((_QWORD *)a2 + 48);
  if ( v15 )
  {
    v29 = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CRenderDataVisual *)((char *)v29 + 32), v15);
    v30 = (CBaseObject *)*((_QWORD *)a2 + 48);
    if ( v30 )
    {
      CBaseObject::Release(v30);
      *((_QWORD *)a2 + 48) = 0LL;
    }
  }
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v16 = (CBaseObject *)*((_QWORD *)a2 + 50);
  if ( v16 )
  {
    v37 = *((_QWORD *)v16 + 3);
    if ( v37 )
    {
      VisualCollection::Remove((VisualCollection *)(v37 + 32), *((struct CVisual **)a2 + 50));
      v16 = (CBaseObject *)*((_QWORD *)a2 + 50);
    }
    if ( v16 )
    {
      CBaseObject::Release(v16);
      *((_QWORD *)a2 + 50) = 0LL;
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  v17 = *((_QWORD *)a2 + 48);
  if ( v17 )
  {
    if ( (*(_BYTE *)(v17 + 241) & 2) != 0 )
      CTopLevelWindow::ReleaseHolographicSlate(*((CTopLevelWindow **)a2 + 48));
    v38 = *(CBaseObject **)(v17 + 480);
    if ( v38 )
    {
      v39 = *((_QWORD *)v38 + 3);
      if ( v39 )
      {
        VisualCollection::Remove((VisualCollection *)(v39 + 32), *(struct CVisual **)(v17 + 480));
        v38 = *(CBaseObject **)(v17 + 480);
      }
      if ( v38 )
      {
        CBaseObject::Release(v38);
        *(_QWORD *)(v17 + 480) = 0LL;
      }
    }
  }
  v18 = (CBaseObject *)*((_QWORD *)a2 + 16);
  if ( v18 )
  {
    CBaseObject::Release(v18);
    *((_QWORD *)a2 + 16) = 0LL;
  }
  v19 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 38);
  IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
                          (CImmersiveIconicBitmapRegistry *)v19,
                          *((HWND *)a2 + 5));
  v21 = IconicResourceNoRef;
  if ( IconicResourceNoRef )
  {
    DynArray<CBitmapSource *,0>::Remove(v19 + 16, &IconicResourceNoRef);
    CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v21, v40);
    v20 = (HWND)*((_QWORD *)a2 + 5);
  }
  IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
                          (CImmersiveIconicBitmapRegistry *)v19,
                          v20);
  v22 = IconicResourceNoRef;
  if ( IconicResourceNoRef )
  {
    DynArray<CBitmapSource *,0>::Remove(v19 + 16, &IconicResourceNoRef);
    CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v22, v41);
  }
  for ( k = 0; k < *(_DWORD *)(v19 + 72); ++k )
  {
    v42 = *(_QWORD *)(*(_QWORD *)(v19 + 48) + 8LL * k);
    v43 = *(_QWORD *)(v42 + 296);
    if ( v43 )
      v44 = *(_QWORD *)(v43 + 40);
    else
      v44 = 0LL;
    if ( *((_QWORD *)a2 + 5) == v44 )
      CIconicAnimatedVisual::SetIconicData(v42, 0LL, 0LL, 0LL);
  }
  v24 = (CIconicBitmapRegistry *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 37);
  *((_BYTE *)a2 + 610) &= 0xC7u;
  CIconicBitmapRegistry::RequestBitmap(v24, a2, 0);
  CIconicBitmapRegistry::ClearBitmap(v24, a2);
  v25 = (CBaseObject *)*((_QWORD *)a2 + 46);
  if ( v25 )
  {
    CBaseObject::Release(v25);
    *((_QWORD *)a2 + 46) = 0LL;
  }
  CWindowList::UnregisterAccentState(this, a2);
  CWindowData::~CWindowData(a2);
  (*(void (__fastcall **)(WPF::HeapBase *, struct CWindowData *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    a2);
}
