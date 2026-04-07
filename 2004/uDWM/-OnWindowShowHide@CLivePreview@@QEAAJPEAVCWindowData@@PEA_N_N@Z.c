/*
 * XREFs of ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180026F84
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001D264 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026264 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x180029680 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A40 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18002AFF0 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18002DE68 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B030 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180040810 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     ?InsertAt@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z @ 0x1800818B0 (-InsertAt@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x180081A14 (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@ULivePreviewWindow@@$0A@@@QEAAJI@Z @ 0x180081AB0 (-RemoveAt@-$DynArray@ULivePreviewWindow@@$0A@@@QEAAJI@Z.c)
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18008360C (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800837A4 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800837DC (-_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x18008464C (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 */

__int64 __fastcall CLivePreview::OnWindowShowHide(CLivePreview *this, struct CWindowData *a2, bool *a3, char a4)
{
  int v4; // esi
  unsigned int v5; // ebx
  int v6; // r13d
  char v10; // r14
  CLivePreview *v11; // rcx
  CTopLevelWindow *v12; // rsi
  bool IsTrulyMaximized; // r12
  int v14; // eax
  struct CVisual *v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  struct CVisual *v19; // rdx
  int v20; // eax
  CBaseObject *v21; // rcx
  struct CVisual *v22; // rdx
  int v23; // eax
  CBaseObject *v24; // rcx
  __int64 v25; // rcx
  char *v26; // r12
  int v27; // eax
  bool v28; // r8
  bool v29; // r9
  char v30; // al
  char v31; // cl
  unsigned int v32; // eax
  char v33; // cl
  int v34; // eax
  struct CVisual *v35; // rsi
  int v36; // eax
  int inserted; // eax
  int v38; // eax
  struct CVisual *v39; // rsi
  int v40; // eax
  int v41; // eax
  __int64 v42; // rsi
  _QWORD *v43; // r12
  __int64 v44; // rdx
  CTopLevelWindow *v45; // rbx
  int v46; // eax
  CBaseObject *v47; // rcx
  int v48; // eax
  __int64 v49; // r13
  __int64 *v50; // r12
  __int64 v51; // rcx
  struct CVisual *v52; // rdx
  int v53; // eax
  struct CVisual *v54; // rdx
  int v55; // eax
  CBaseObject *v56; // rcx
  CTopLevelWindow *v57; // rcx
  int v58; // eax
  int v59; // esi
  __int64 v60; // r12
  __int64 v61; // r8
  struct CWindowData **v62; // r13
  unsigned int v63; // ecx
  unsigned int i; // r9d
  __int64 v65; // rax
  __int64 v66; // rcx
  int updated; // eax
  char v68; // [rsp+30h] [rbp-D0h]
  char v69; // [rsp+31h] [rbp-CFh]
  struct CVisual *v70; // [rsp+38h] [rbp-C8h] BYREF
  CTopLevelWindow *v71; // [rsp+40h] [rbp-C0h]
  bool *v72; // [rsp+48h] [rbp-B8h]
  struct CWindowData *v73; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v74; // [rsp+58h] [rbp-A8h]
  bool v75; // [rsp+68h] [rbp-98h]
  struct CVisual *v76; // [rsp+70h] [rbp-90h]
  WCHAR ClassName[264]; // [rsp+80h] [rbp-80h] BYREF

  v4 = *((_DWORD *)this + 90);
  v5 = 0;
  v6 = *((_DWORD *)this + 82);
  v72 = a3;
  LODWORD(v70) = v6;
  if ( v4 <= 0 && v6 <= 0 )
    return v5;
  v10 = 0;
  v69 = 0;
  v68 = 0;
  if ( a4 || !CLivePreview::_IsEligibleForLivePreview(this, a2) )
  {
    v42 = (unsigned int)(v4 - 1);
    if ( (int)v42 >= 0 )
    {
      v43 = (_QWORD *)((char *)this + 336);
      v44 = *((_QWORD *)this + 42);
      while ( *(struct CWindowData **)(v44 + 48 * v42 + 8) != a2 )
      {
        v42 = (unsigned int)(v42 - 1);
        if ( (int)v42 < 0 )
          goto LABEL_69;
      }
      v45 = *(CTopLevelWindow **)(v44 + 48 * v42);
      CTopLevelWindow::StopLivePreviewAnimation(v45);
      v46 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v45 + 3) + 32LL), v45);
      v5 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v46, 0x729u);
        return v5;
      }
      v47 = *(CBaseObject **)(*v43 + 48 * v42 + 16);
      if ( v47 )
      {
        CBaseObject::Release(v47);
        *(_QWORD *)(*v43 + 48 * v42 + 16) = 0LL;
      }
      v48 = DynArray<LivePreviewWindow,0>::RemoveAt((char *)this + 336, (unsigned int)v42);
      v5 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v48, 0x72Cu);
        return v5;
      }
      v6 = (int)v70;
    }
LABEL_69:
    v49 = (unsigned int)(v6 - 1);
    if ( (int)v49 >= 0 )
    {
      v50 = (__int64 *)((char *)this + 304);
      v51 = *((_QWORD *)this + 38);
      while ( *(struct CWindowData **)(v51 + 40 * v49) != a2 )
      {
        v49 = (unsigned int)(v49 - 1);
        if ( (int)v49 < 0 )
          goto LABEL_89;
      }
      v52 = *(struct CVisual **)(v51 + 40 * v49 + 8);
      if ( v52 )
      {
        v53 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v52 + 3) + 32LL), v52);
        v5 = v53;
        if ( v53 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v53, 0x738u);
          return v5;
        }
        v51 = *v50;
        if ( *(_QWORD *)(*v50 + 40 * v49 + 8) )
        {
          CBaseObject::Release(*(CBaseObject **)(*v50 + 40 * v49 + 8));
          *(_QWORD *)(*v50 + 40 * v49 + 8) = 0LL;
          v51 = *((_QWORD *)this + 38);
        }
      }
      v54 = *(struct CVisual **)(v51 + 40 * v49 + 16);
      if ( v54 )
      {
        v55 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v54 + 3) + 32LL), v54);
        v5 = v55;
        if ( v55 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v55, 0x73Eu);
          return v5;
        }
        v56 = *(CBaseObject **)(*v50 + 40 * v49 + 16);
        if ( v56 )
        {
          CBaseObject::Release(v56);
          *(_QWORD *)(*v50 + 40 * v49 + 16) = 0LL;
        }
      }
      v57 = (CTopLevelWindow *)*((_QWORD *)a2 + 48);
      if ( v57 )
        CTopLevelWindow::StopLivePreviewAnimation(v57);
      v58 = DynArray<CPenContact,0>::RemoveAt((char *)this + 304, (unsigned int)v49);
      v5 = v58;
      if ( v58 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v58, 0x747u);
        return v5;
      }
      v69 = 1;
    }
LABEL_89:
    v59 = *((_DWORD *)this + 106) - 1;
    if ( v59 >= 0 )
    {
      v60 = 16LL * v59;
      do
      {
        v61 = *((_QWORD *)this + 50);
        v62 = *(struct CWindowData ***)(v61 + v60);
        if ( v62[91] == a2 )
        {
          v63 = *((_DWORD *)this + 106);
          if ( v59 < v63 )
          {
            for ( i = v59; i < v63 - 1; v63 = *((_DWORD *)this + 106) )
            {
              v65 = 2LL * i;
              v66 = 2LL * ++i;
              *(_OWORD *)(v61 + 8 * v65) = *(_OWORD *)(v61 + 8 * v66);
            }
            *((_DWORD *)this + 106) = v63 - 1;
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x194u);
          }
          VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 61) + 32LL), (struct CVisual *)v62);
        }
        v60 -= 16LL;
        --v59;
      }
      while ( v59 >= 0 );
    }
    goto LABEL_99;
  }
  if ( *((_BYTE *)this + 280)
    && !CLivePreview::_IsInLivePreview(this, a2)
    && (!GetClassNameW(*((HWND *)a2 + 5), ClassName, 260) || _wcsicmp(ClassName, L"SysShadow")) )
  {
    v71 = (CTopLevelWindow *)*((_QWORD *)a2 + 48);
    v12 = v71;
    IsTrulyMaximized = CLivePreview::_IsTrulyMaximized(v11, a2);
    v14 = CVisual::RenderRecursive(v71);
    v5 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x769u);
      return v5;
    }
    v70 = (struct CVisual *)MonitorFromWindow(*((HWND *)a2 + 5), 1u);
    v15 = v70;
    if ( IsTrulyMaximized )
    {
      v16 = 0LL;
      if ( v6 > 0 )
      {
        v17 = *((_QWORD *)this + 38);
        while ( !*(_BYTE *)(v17 + 40 * v16 + 24) || *(struct CVisual **)(v17 + 40 * v16 + 32) != v70 )
        {
          v16 = (unsigned int)(v16 + 1);
          if ( (int)v16 >= v6 )
            goto LABEL_30;
        }
        v18 = 5 * v16;
        v19 = *(struct CVisual **)(v17 + 40 * v16 + 8);
        if ( v19 )
        {
          v20 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 62) + 32LL), v19);
          v5 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x776u);
            return v5;
          }
          v17 = *((_QWORD *)this + 38);
          v21 = *(CBaseObject **)(v17 + 8 * v18 + 8);
          if ( v21 )
          {
            CBaseObject::Release(v21);
            *(_QWORD *)(*((_QWORD *)this + 38) + 8 * v18 + 8) = 0LL;
            v17 = *((_QWORD *)this + 38);
          }
        }
        v22 = *(struct CVisual **)(v17 + 8 * v18 + 16);
        if ( v22 )
        {
          v23 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 64) + 32LL), v22);
          v5 = v23;
          if ( v23 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x77Cu);
            return v5;
          }
          v17 = *((_QWORD *)this + 38);
          v24 = *(CBaseObject **)(v17 + 8 * v18 + 16);
          if ( v24 )
          {
            CBaseObject::Release(v24);
            *(_QWORD *)(*((_QWORD *)this + 38) + 8 * v18 + 16) = 0LL;
            v17 = *((_QWORD *)this + 38);
          }
        }
        v15 = v70;
        *(_BYTE *)(*(_QWORD *)(v17 + 8 * v18) + 611LL) |= 2u;
        v25 = *(_QWORD *)(*((_QWORD *)this + 38) + 8 * v18);
        v12 = v71;
        *(_BYTE *)(v25 + 611) |= 1u;
      }
    }
LABEL_30:
    v75 = IsTrulyMaximized;
    v73 = a2;
    v26 = (char *)this + 304;
    v76 = v15;
    v74 = 0LL;
    v27 = DynArray<LivePreviewVisual,0>::InsertAt((char *)this + 304, &v73);
    v5 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x789u);
      return v5;
    }
    v30 = *((_BYTE *)a2 + 611);
    v68 = 1;
    if ( *((_DWORD *)this + 138) < 0x1Eu )
    {
      v31 = v30 & 0xFE | (*((_QWORD *)a2 + 46) != 0LL);
      *((_BYTE *)a2 + 611) = v31;
      v32 = *((_DWORD *)this + 139);
      if ( v32 >= 0xA )
      {
        v33 = v31 | 2;
        *((_BYTE *)a2 + 611) = v33;
      }
      else
      {
        *((_DWORD *)this + 139) = v32 + 1;
        v33 = *((_BYTE *)a2 + 611);
      }
      if ( (v33 & 3) != 3 )
      {
        if ( (v33 & 2) == 0 )
        {
          v70 = 0LL;
          v34 = CTopLevelWindow::CloneVisualTreeForLivePreview(v12, 0, v28, v29, &v70);
          v5 = v34;
          if ( v34 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0x79Fu);
            return v5;
          }
          v35 = v70;
          v36 = CVisual::RenderRecursive(v70);
          v5 = v36;
          if ( v36 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x7A0u);
            return v5;
          }
          inserted = VisualCollection::InsertRelative(
                       (VisualCollection *)(*((_QWORD *)this + 62) + 32LL),
                       v35,
                       0LL,
                       0,
                       1);
          v5 = inserted;
          if ( inserted < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x7A1u);
            return v5;
          }
          *(_QWORD *)(*(_QWORD *)v26 + 8LL) = v35;
          v33 = *((_BYTE *)a2 + 611);
        }
        if ( (v33 & 1) == 0 )
        {
          v70 = 0LL;
          v38 = CTopLevelWindow::CloneVisualTreeForLivePreview(v71, 1, v28, v29, &v70);
          v5 = v38;
          if ( v38 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, 0x7A9u);
            return v5;
          }
          v39 = v70;
          v40 = CVisual::RenderRecursive(v70);
          v5 = v40;
          if ( v40 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, 0x7AAu);
            return v5;
          }
          v41 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 64) + 32LL), v39, 0LL, 0, 1);
          v5 = v41;
          if ( v41 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, 0x7ABu);
            return v5;
          }
          *(_QWORD *)(*(_QWORD *)v26 + 16LL) = v39;
        }
        ++*((_DWORD *)this + 138);
      }
      goto LABEL_100;
    }
    *((_BYTE *)a2 + 611) = v30 | 3;
LABEL_99:
    if ( !v69 )
    {
LABEL_101:
      v10 = v68;
      goto LABEL_102;
    }
LABEL_100:
    updated = CLivePreview::_UpdateResources(this);
    v5 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x7BFu);
      return v5;
    }
    goto LABEL_101;
  }
LABEL_102:
  if ( v72 )
    *v72 = v10;
  return v5;
}
