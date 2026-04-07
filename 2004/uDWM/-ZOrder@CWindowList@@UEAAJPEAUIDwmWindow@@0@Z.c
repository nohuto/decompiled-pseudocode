/*
 * XREFs of ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001E0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006320 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800144A4 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A40 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180019DC0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x18001D644 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18001E064 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x180027798 (-UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18002B80C (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z @ 0x18003DBD4 (-InsertAt@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z.c)
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x180097DE4 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 *     ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800BC6B0 (-ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 */

__int64 __fastcall CWindowList::ZOrder(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3)
{
  unsigned int v6; // edi
  int SyncedWindowData; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  char *v10; // rax
  struct CWindowData *v11; // rsi
  struct CWindowData *v12; // rcx
  struct CWindowData **v13; // rdx
  __int64 v14; // rcx
  struct CWindowData *v15; // rax
  __int64 *v16; // rdx
  struct CVisual *v17; // r12
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // r14
  struct CVisual *v21; // rbx
  char *v22; // rax
  struct CWindowData *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r14
  struct _RTL_GENERIC_TABLE *v28; // rcx
  struct CWindowData *v29; // r15
  char *Element; // rax
  struct CWindowData *v31; // rcx
  struct CWindowData *i; // rax
  struct CWindowData ***v33; // rsi
  struct CWindowData **v34; // rax
  unsigned int v35; // eax
  unsigned int v36; // r8d
  int v37; // r9d
  int ProjectedShadowSceneForDesktop; // eax
  unsigned int v39; // [rsp+28h] [rbp-A9h]
  struct CWindowData *v40; // [rsp+38h] [rbp-99h] BYREF
  struct _RTL_CRITICAL_SECTION *v41; // [rsp+40h] [rbp-91h] BYREF
  __int64 Buffer; // [rsp+48h] [rbp-89h] BYREF
  __int64 v43; // [rsp+50h] [rbp-81h]
  __int128 v44; // [rsp+58h] [rbp-79h]
  __int128 v45; // [rsp+68h] [rbp-69h]
  __int128 v46; // [rsp+78h] [rbp-59h]
  __int64 v47; // [rsp+88h] [rbp-49h]
  char v48; // [rsp+90h] [rbp-41h]
  _QWORD v49[2]; // [rsp+A8h] [rbp-29h] BYREF
  __int128 v50; // [rsp+B8h] [rbp-19h]
  __int128 v51; // [rsp+C8h] [rbp-9h]
  __int128 v52; // [rsp+D8h] [rbp+7h]
  __int64 v53; // [rsp+E8h] [rbp+17h]
  char v54; // [rsp+F0h] [rbp+1Fh]
  struct CWindowData *v55; // [rsp+150h] [rbp+7Fh] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v55 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v55);
  v8 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v39 = 3094;
    goto LABEL_52;
  }
  if ( !v55 )
  {
    v8 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024890, 0xC18u);
    goto LABEL_28;
  }
  v9 = *((_QWORD *)v55 + 15);
  v47 = -1LL;
  v43 = 0LL;
  v44 = 0LL;
  v48 = 0;
  v45 = 0LL;
  v46 = 0LL;
  Buffer = v9;
  v10 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
  v11 = (struct CWindowData *)(v10 + 80);
  if ( !v10 )
    v11 = 0LL;
  v40 = v11;
  if ( !v11 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xC1Bu);
    goto LABEL_28;
  }
  if ( a3 )
  {
    SyncedWindowData = CWindowList::GetSyncedWindowData(this, a3, 1, &v40);
    v8 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v39 = 3105;
      goto LABEL_52;
    }
    v11 = v40;
    if ( !v40 )
    {
      v8 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024890, 0xC24u);
      goto LABEL_28;
    }
  }
  if ( v55 == *(struct CWindowData **)v11 )
    goto LABEL_28;
  v12 = *(struct CWindowData **)v55;
  if ( *(struct CWindowData **)(*(_QWORD *)v55 + 8LL) != v55
    || (v13 = (struct CWindowData **)*((_QWORD *)v55 + 1), *v13 != v55)
    || (*v13 = v12,
        *((_QWORD *)v12 + 1) = v13,
        v14 = *(_QWORD *)v11,
        v15 = v55,
        *(struct CWindowData **)(*(_QWORD *)v11 + 8LL) != v11) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v55 = v14;
  *((_QWORD *)v15 + 1) = v11;
  *(_QWORD *)(v14 + 8) = v15;
  *(_QWORD *)v11 = v15;
  v16 = (__int64 *)v55;
  v17 = (struct CVisual *)*((_QWORD *)v55 + 48);
  if ( v17 )
  {
    v18 = *((_QWORD *)v55 + 15);
    v47 = -1LL;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    Buffer = v18;
    v43 = 0LL;
    v48 = 0;
    v19 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
    if ( v19 )
      v20 = v19[3];
    else
      v20 = 0LL;
    v53 = -1LL;
    v49[1] = 0LL;
    v21 = 0LL;
    v50 = 0LL;
    v49[0] = *((_QWORD *)v55 + 15);
    v54 = 0;
    v51 = 0LL;
    v52 = 0LL;
    v22 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v49);
    if ( v22 )
      v23 = (struct CWindowData *)(v22 + 80);
    else
      v23 = 0LL;
    if ( !v23 )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xC34u);
      goto LABEL_28;
    }
    while ( v11 != v23 )
    {
      v21 = (struct CVisual *)*((_QWORD *)v11 + 48);
      if ( v21 )
      {
        v24 = *((_QWORD *)v11 + 50);
        if ( v24 && *(_QWORD *)(v24 + 24) )
          v21 = (struct CVisual *)*((_QWORD *)v11 + 50);
        break;
      }
      v11 = (struct CWindowData *)*((_QWORD *)v11 + 1);
    }
    SyncedWindowData = VisualCollection::InsertRelative((VisualCollection *)(v20 + 32), v17, v21, 1u, 1);
    v8 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v39 = 3150;
      goto LABEL_52;
    }
    SyncedWindowData = CTopLevelWindow3D::OnZOrderUpdated(*((CTopLevelWindow3D **)v55 + 49), 0);
    v8 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v39 = 3151;
      goto LABEL_52;
    }
    CWindowList::UpdateAccentState(this, v55, 3LL);
    v16 = (__int64 *)v55;
    if ( *((_QWORD *)v55 + 50) )
    {
      SyncedWindowData = VisualCollection::InsertRelative(
                           (VisualCollection *)(v20 + 32),
                           *((struct CVisual **)v55 + 50),
                           *((struct CVisual **)v55 + 48),
                           1u,
                           1);
      v8 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v39 = 3157;
        goto LABEL_52;
      }
      v16 = (__int64 *)v55;
    }
    v25 = v16[48];
    if ( v25 && (*(_BYTE *)(v25 + 241) & 0x20) != 0 )
    {
      v40 = 0LL;
      Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v40);
      ProjectedShadowSceneForDesktop = CWindowList::GetProjectedShadowSceneForDesktop(
                                         this,
                                         *((_QWORD *)v55 + 15),
                                         0,
                                         &v40);
      v8 = ProjectedShadowSceneForDesktop;
      if ( ProjectedShadowSceneForDesktop < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ProjectedShadowSceneForDesktop, 0xC5Cu);
        Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v40);
        goto LABEL_28;
      }
      v41 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      CProjectedShadowScene::ZOrderProjectedShadowReceiverVisual(v40);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v41);
      Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v40);
      v16 = (__int64 *)v55;
    }
  }
  v26 = v16[67];
  if ( !v26 || *(_DWORD *)(v26 + 568) <= 1u )
    goto LABEL_28;
  v28 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  v29 = 0LL;
  Element = (char *)CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                      v28,
                      v16[15]);
  v31 = (struct CWindowData *)(Element + 80);
  if ( !Element )
    v31 = 0LL;
  if ( v31 )
  {
    for ( i = *(struct CWindowData **)v55; i != v31; i = *(struct CWindowData **)i )
    {
      if ( *((_QWORD *)i + 67) == v26 )
      {
        v29 = i;
        break;
      }
    }
  }
  v33 = (struct CWindowData ***)(v26 + 544);
  if ( !v29 )
  {
    if ( (*v33)[*(_DWORD *)(v26 + 568) - 1] == v55 )
      goto LABEL_28;
    DynArray<CWindowData *,0>::Remove((__int64 *)(v26 + 544), &v55);
    v35 = *(_DWORD *)(v26 + 568);
    v36 = v35 + 1;
    if ( v35 + 1 < v35 )
    {
      v39 = 181;
      v37 = -2147024362;
      goto LABEL_54;
    }
    if ( v36 <= *(_DWORD *)(v26 + 564) )
    {
      (*v33)[*(unsigned int *)(v26 + 568)] = v55;
      *(_DWORD *)(v26 + 568) = v36;
      goto LABEL_28;
    }
    v40 = (struct CWindowData *)&v55;
    SyncedWindowData = DynArrayImpl<0>::Grow((char **)(v26 + 544), 8u, 1, 0, (unsigned __int64 *)&v40);
    if ( SyncedWindowData >= 0 )
    {
      *(struct CWindowData **)((char *)*v33 + (unsigned int)(8 * (*(_DWORD *)(v26 + 568))++)) = *(struct CWindowData **)v40;
      goto LABEL_28;
    }
    v39 = 192;
LABEL_52:
    v37 = SyncedWindowData;
LABEL_54:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v37, v39);
    goto LABEL_28;
  }
  DynArray<CWindowData *,0>::Remove((__int64 *)(v26 + 544), &v55);
  v34 = *v33;
  if ( *(_DWORD *)(v26 + 568) )
  {
    do
    {
      if ( v29 == *v34 )
        break;
      ++v6;
      ++v34;
    }
    while ( v6 < *(_DWORD *)(v26 + 568) );
  }
  DynArray<CWindowData *,0>::InsertAt(v26 + 544, &v55, v6);
LABEL_28:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v8;
}
