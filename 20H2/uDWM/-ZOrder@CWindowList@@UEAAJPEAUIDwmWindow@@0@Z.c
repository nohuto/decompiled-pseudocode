/*
 * XREFs of ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001A260
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x1800062A0 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18000D36C (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x180013588 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180015678 (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180018360 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018AD4 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18001A204 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800242F0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180024670 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18002A6AC (-UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z @ 0x18003DAA4 (-InsertAt@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x180097704 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 *     ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800BBFF0 (-ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 */

__int64 __fastcall CWindowList::ZOrder(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3)
{
  __int64 v6; // rax
  unsigned int v7; // r14d
  int v8; // esi
  struct CWindowData *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rax
  char *v12; // rax
  struct CWindowData *v13; // rbx
  int SyncedWindowData; // eax
  struct CWindowData *v15; // rcx
  struct CWindowData **v16; // rdx
  __int64 v17; // rcx
  struct CWindowData *v18; // rax
  __int64 *v19; // rdx
  struct CVisual *v20; // rsi
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // r15
  struct CVisual *v24; // rdi
  char *v25; // rax
  struct CWindowData *v26; // rax
  __int64 v27; // rax
  int inserted; // eax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rbx
  struct CWindowData *v33; // r15
  char *Element; // rax
  struct CWindowData *v35; // rcx
  struct CWindowData *v36; // rax
  struct CWindowData ***v37; // rsi
  unsigned int v38; // ecx
  struct CWindowData **v39; // rax
  unsigned int v40; // eax
  unsigned int v41; // r8d
  int v42; // eax
  CWindowData *v43; // rax
  CWindowData *v44; // rax
  int v45; // eax
  int v46; // r9d
  int v47; // eax
  int ProjectedShadowSceneForDesktop; // eax
  unsigned int v49; // [rsp+20h] [rbp-B9h]
  struct _RTL_CRITICAL_SECTION *v50; // [rsp+30h] [rbp-A9h] BYREF
  __int64 Buffer; // [rsp+40h] [rbp-99h] BYREF
  __int64 v52; // [rsp+48h] [rbp-91h]
  __int128 v53; // [rsp+50h] [rbp-89h]
  __int128 v54; // [rsp+60h] [rbp-79h]
  __int128 v55; // [rsp+70h] [rbp-69h]
  __int64 v56; // [rsp+80h] [rbp-59h]
  char v57; // [rsp+88h] [rbp-51h]
  _QWORD v58[2]; // [rsp+A0h] [rbp-39h] BYREF
  __int128 v59; // [rsp+B0h] [rbp-29h]
  __int128 v60; // [rsp+C0h] [rbp-19h]
  __int128 v61; // [rsp+D0h] [rbp-9h]
  __int64 v62; // [rsp+E0h] [rbp+7h]
  char v63; // [rsp+E8h] [rbp+Fh]
  struct CWindowData *v64; // [rsp+148h] [rbp+6Fh] BYREF
  struct CWindowData *v65; // [rsp+158h] [rbp+7Fh] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = *(_QWORD *)a2;
  v7 = 0;
  v64 = 0LL;
  v8 = 0;
  v9 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(v6 + 8))(a2);
  if ( v9 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v43 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         768LL);
  if ( !v43 || (v44 = CWindowData::CWindowData(v43), (v9 = v44) == 0LL) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x882u);
    v10 = -2147024882;
    goto LABEL_58;
  }
  *((_QWORD *)v44 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v44);
  *((_QWORD *)v9 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v45 = CWindowList::SyncWindowData(this, a2, v9);
  v8 = v45;
  if ( v45 >= 0 )
  {
LABEL_2:
    v64 = v9;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v45, 0x886u);
    v9 = v64;
  }
  v10 = v8;
  if ( v8 < 0 )
  {
LABEL_58:
    v49 = 3106;
LABEL_60:
    v46 = v8;
LABEL_62:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v46, v49);
    goto LABEL_29;
  }
  if ( !v9 )
  {
    v10 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024890, 0xC24u);
    goto LABEL_29;
  }
  v11 = *((_QWORD *)v9 + 15);
  v52 = 0LL;
  v53 = 0LL;
  v56 = -1LL;
  v57 = 0;
  v54 = 0LL;
  v55 = 0LL;
  Buffer = v11;
  v12 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
  if ( v12 )
    v13 = (struct CWindowData *)(v12 + 80);
  else
    v13 = 0LL;
  v65 = v13;
  if ( !v13 )
  {
    v8 = -2147024882;
    v49 = 3111;
    v10 = -2147024882;
    goto LABEL_60;
  }
  if ( a3 )
  {
    SyncedWindowData = CWindowList::GetSyncedWindowData(this, a3, 1, &v65);
    v10 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0xC2Du);
      goto LABEL_29;
    }
    v13 = v65;
    if ( !v65 )
    {
      v10 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024890, 0xC30u);
      goto LABEL_29;
    }
  }
  if ( v64 == *(struct CWindowData **)v13 )
    goto LABEL_29;
  v15 = *(struct CWindowData **)v64;
  if ( *(struct CWindowData **)(*(_QWORD *)v64 + 8LL) != v64
    || (v16 = (struct CWindowData **)*((_QWORD *)v64 + 1), *v16 != v64)
    || (*v16 = v15,
        *((_QWORD *)v15 + 1) = v16,
        v17 = *(_QWORD *)v13,
        v18 = v64,
        *(struct CWindowData **)(*(_QWORD *)v13 + 8LL) != v13) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v64 = v17;
  *((_QWORD *)v18 + 1) = v13;
  *(_QWORD *)(v17 + 8) = v18;
  *(_QWORD *)v13 = v18;
  v19 = (__int64 *)v64;
  v20 = (struct CVisual *)*((_QWORD *)v64 + 48);
  if ( !v20 )
    goto LABEL_28;
  v21 = *((_QWORD *)v64 + 15);
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  Buffer = v21;
  v52 = 0LL;
  v56 = -1LL;
  v57 = 0;
  v22 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
  if ( v22 )
    v23 = v22[3];
  else
    v23 = 0LL;
  v58[1] = 0LL;
  v59 = 0LL;
  v24 = 0LL;
  v62 = -1LL;
  v58[0] = *((_QWORD *)v64 + 15);
  v63 = 0;
  v60 = 0LL;
  v61 = 0LL;
  v25 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v58);
  if ( !v25 || (v26 = (struct CWindowData *)(v25 + 80)) == 0LL )
  {
    v8 = -2147024882;
    v49 = 3136;
    v10 = -2147024882;
    goto LABEL_60;
  }
  if ( v13 != v26 )
  {
    while ( 1 )
    {
      v24 = (struct CVisual *)*((_QWORD *)v13 + 48);
      if ( v24 )
        break;
      v13 = (struct CWindowData *)*((_QWORD *)v13 + 1);
      if ( v13 == v26 )
        goto LABEL_23;
    }
    v27 = *((_QWORD *)v13 + 50);
    if ( v27 && *(_QWORD *)(v27 + 24) )
      v24 = (struct CVisual *)*((_QWORD *)v13 + 50);
  }
LABEL_23:
  inserted = VisualCollection::InsertRelative((VisualCollection *)(v23 + 32), v20, v24, 1, 1);
  v10 = inserted;
  if ( inserted < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0xC5Au);
    goto LABEL_29;
  }
  v29 = CTopLevelWindow3D::OnZOrderUpdated(*((CTopLevelWindow3D **)v64 + 49), 0);
  v10 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0xC5Bu);
    goto LABEL_29;
  }
  CWindowList::UpdateAccentState(this, v64, 3LL);
  v19 = (__int64 *)v64;
  if ( !*((_QWORD *)v64 + 50) )
    goto LABEL_26;
  v47 = VisualCollection::InsertRelative(
          (VisualCollection *)(v23 + 32),
          *((struct CVisual **)v64 + 50),
          *((struct CVisual **)v64 + 48),
          1,
          1);
  v10 = v47;
  if ( v47 < 0 )
  {
    v49 = 3169;
    v46 = v47;
    goto LABEL_62;
  }
  v19 = (__int64 *)v64;
LABEL_26:
  v30 = v19[48];
  if ( v30 && (*(_BYTE *)(v30 + 241) & 0x20) != 0 )
  {
    v65 = 0LL;
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v65);
    ProjectedShadowSceneForDesktop = CWindowList::GetProjectedShadowSceneForDesktop(
                                       this,
                                       *((_QWORD *)v64 + 15),
                                       0,
                                       &v65);
    v10 = ProjectedShadowSceneForDesktop;
    if ( ProjectedShadowSceneForDesktop < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ProjectedShadowSceneForDesktop, 0xC68u);
      Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v65);
      goto LABEL_29;
    }
    v50 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    CProjectedShadowScene::ZOrderProjectedShadowReceiverVisual(v65);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v50);
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v65);
    v19 = (__int64 *)v64;
  }
LABEL_28:
  v31 = v19[67];
  if ( v31 && *(_DWORD *)(v31 + 568) > 1u )
  {
    v33 = 0LL;
    Element = (char *)CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                        (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
                        v19[15]);
    if ( Element )
    {
      v35 = (struct CWindowData *)(Element + 80);
      if ( Element != (char *)-80LL )
      {
        v36 = *(struct CWindowData **)v64;
        if ( *(struct CWindowData **)v64 != v35 )
        {
          while ( *((_QWORD *)v36 + 67) != v31 )
          {
            v36 = *(struct CWindowData **)v36;
            if ( v36 == v35 )
              goto LABEL_40;
          }
          v33 = v36;
        }
      }
    }
LABEL_40:
    v37 = (_QWORD **)(v31 + 544);
    if ( v33 )
    {
      DynArray<CWindowData *,0>::Remove((__int64 *)(v31 + 544), &v64);
      v38 = *(_DWORD *)(v31 + 568);
      v39 = (struct CWindowData **)*v37;
      if ( v38 )
      {
        do
        {
          if ( v33 == *v39 )
            break;
          ++v7;
          ++v39;
        }
        while ( v7 < v38 );
      }
      DynArray<CWindowData *,0>::InsertAt(v31 + 544, &v64, v7);
    }
    else if ( (struct CWindowData *)(*v37)[*(_DWORD *)(v31 + 568) - 1] != v64 )
    {
      DynArray<CWindowData *,0>::Remove((__int64 *)(v31 + 544), &v64);
      v40 = *(_DWORD *)(v31 + 568);
      v41 = v40 + 1;
      if ( v40 + 1 < v40 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
      else if ( v41 <= *(_DWORD *)(v31 + 564) )
      {
        (*v37)[*(unsigned int *)(v31 + 568)] = v64;
        *(_DWORD *)(v31 + 568) = v41;
      }
      else
      {
        v65 = (struct CWindowData *)&v64;
        v42 = DynArrayImpl<0>::Grow((int)v31 + 544, 8, 1, 0, (__int64)&v65);
        if ( v42 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v42, 0xC0u);
        else
          *(_QWORD *)((char *)*v37 + (unsigned int)(8 * (*(_DWORD *)(v31 + 568))++)) = *(_QWORD *)v65;
      }
    }
  }
LABEL_29:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v10;
}
