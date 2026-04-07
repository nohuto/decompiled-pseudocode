/*
 * XREFs of ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x18008212C
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x18003F9DC (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180015018 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180019DC0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x1800819BC (-OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x1800826BC (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     ?_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z @ 0x18008332C (-_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z.c)
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180083B8C (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180083EA4 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 *     ?_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ @ 0x180084114 (-_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x1800956A8 (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180097D04 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall CLivePreview::_AnimateOpaqueVisuals(CLivePreview *this, struct CWindowData *a2)
{
  unsigned int v2; // r14d
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // eax
  int updated; // eax
  __int64 v10; // r13
  char v11; // r12
  __int64 v12; // r15
  __int64 v13; // rdx
  CTopLevelWindow *v14; // rbx
  __int64 v15; // r9
  struct CWindowData *MDIOwner; // r13
  int v17; // eax
  CTopLevelWindow *LivePreviewWindow; // rax
  int v19; // eax
  int started; // eax
  int v22; // [rsp+30h] [rbp-48h]
  int v23; // [rsp+40h] [rbp-38h]
  __int128 v24; // [rsp+48h] [rbp-30h] BYREF
  int v25; // [rsp+58h] [rbp-20h]
  int v26; // [rsp+5Ch] [rbp-1Ch]
  unsigned int v27; // [rsp+60h] [rbp-18h]
  char v28; // [rsp+C0h] [rbp+48h]
  struct CWindowData *v29; // [rsp+C8h] [rbp+50h] BYREF
  struct CWindowData **v30; // [rsp+D0h] [rbp+58h] BYREF
  BOOL v31; // [rsp+D8h] [rbp+60h]

  v29 = a2;
  v25 = 0;
  v26 = 0;
  v2 = 0;
  v28 = 1;
  v23 = *((_DWORD *)this + 90);
  v27 = 0;
  v24 = 0LL;
  if ( !a2 )
    goto LABEL_7;
  v30 = &v29;
  v4 = DynArrayImpl<0>::Grow((char **)&v24, 8u, 1, 0, (unsigned __int64 *)&v30);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xC0u);
    v2 = v27;
  }
  else
  {
    v6 = 8 * v27;
    v2 = ++v27;
    *(_QWORD *)(v6 + v24) = *v30;
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x2DDu);
  }
  else
  {
LABEL_7:
    v7 = *((_QWORD *)this + 65);
    if ( (!v7 || *(_DWORD *)(v7 + 112) == 1) && *((_DWORD *)this + 136) != 4 )
    {
      v8 = CLivePreview::_CollectExcludedImmersiveWindows(this, &v24);
      v5 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x2E2u);
        goto LABEL_39;
      }
      v2 = v27;
    }
    updated = CLivePreview::_UpdateAddedImmersiveBackground(this);
    v5 = updated;
    if ( updated >= 0 )
    {
      v10 = 0LL;
      LODWORD(v30) = 0;
      if ( v2 )
      {
        while ( 1 )
        {
          v11 = 0;
          v12 = *(_QWORD *)(v24 + 8 * v10);
          v31 = v23
             || (*(_BYTE *)(v12 + 612) & 2) != 0
             || *(_DWORD *)(v12 + 112) != 1 && *(_BYTE *)(*((_QWORD *)this + 67) + 56LL);
          v13 = (unsigned int)(*((_DWORD *)this + 90) - 1);
          if ( (int)v13 >= 0 )
          {
            while ( *(_QWORD *)(*((_QWORD *)this + 42) + 48 * v13 + 24) != *(_QWORD *)(v12 + 40) )
            {
              v13 = (unsigned int)(v13 - 1);
              if ( (int)v13 < 0 )
                goto LABEL_27;
            }
            v11 = 1;
          }
LABEL_27:
          v14 = 0LL;
          v28 = v11 != 0 ? v28 : 0;
          if ( (*(_BYTE *)(v12 + 609) & 1) != 0 )
          {
            MDIOwner = CWindowData::GetMDIOwner((CWindowData *)v12);
            if ( MDIOwner )
            {
              if ( !v11 )
              {
                LOBYTE(v15) = 1;
                LOBYTE(v22) = 1;
                v17 = CLivePreview::_SetupWindowPreview(this, MDIOwner, *((_QWORD *)MDIOwner + 5), v15, v31, 0LL, v22);
                v5 = v17;
                if ( v17 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x30Bu);
                  goto LABEL_39;
                }
              }
              LivePreviewWindow = CLivePreview::_FindLivePreviewWindow(this, *((HWND *)MDIOwner + 5));
              v14 = LivePreviewWindow;
              if ( LivePreviewWindow )
                CTopLevelWindow::UpdateTitle(LivePreviewWindow, *(unsigned __int16 **)(v12 + 16));
            }
            LODWORD(v10) = (_DWORD)v30;
          }
          if ( !v11 )
          {
            LOBYTE(v22) = v14 == 0LL;
            v19 = CLivePreview::_SetupWindowPreview(this, v12, *(_QWORD *)(v12 + 40), 0LL, v31, v14, v22);
            v5 = v19;
            if ( v19 < 0 )
              break;
          }
          CLivePreview::OnWindowTitleChange(this, (unsigned __int16 **)v12);
          v10 = (unsigned int)(v10 + 1);
          LODWORD(v30) = v10;
          if ( (unsigned int)v10 >= v2 )
            goto LABEL_37;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x319u);
      }
      else
      {
LABEL_37:
        started = CLivePreview::_StartAnimateOpaqueVisuals(this);
        v5 = started;
        if ( started < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x31Fu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x2E5u);
    }
  }
LABEL_39:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v24);
  return (unsigned int)v5;
}
