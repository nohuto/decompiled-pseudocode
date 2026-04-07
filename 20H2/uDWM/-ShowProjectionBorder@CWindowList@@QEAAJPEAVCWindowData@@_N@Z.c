/*
 * XREFs of ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003E0EC
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001996C (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x180092108 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180019D4C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800242F0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B070 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x18008DCC8 (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x180092874 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18009290C (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::ShowProjectionBorder(CWindowList *this, struct CWindowData *a2, char a3)
{
  unsigned int v6; // esi
  CProjectionBorderVisual **v7; // r14
  CProjectionBorderVisual *v8; // rdi
  int v10; // eax
  struct CVisual *v11; // rbx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  int inserted; // eax
  __int64 v14; // rcx

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v7 = (CProjectionBorderVisual **)((char *)a2 + 400);
  v8 = (CProjectionBorderVisual *)*((_QWORD *)a2 + 50);
  if ( a3 )
  {
    if ( !v8 )
    {
      v10 = CProjectionBorderVisual::Create((struct CProjectionBorderVisual **)a2 + 50);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x1B7Fu);
        goto LABEL_3;
      }
      v8 = *v7;
    }
    v11 = (struct CVisual *)*((_QWORD *)a2 + 48);
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    inserted = VisualCollection::InsertRelative(
                 (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                 v8,
                 v11,
                 1u,
                 1);
    v6 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x1B82u);
    }
    else
    {
      CProjectionBorderVisual::Show(*v7, (*((_BYTE *)a2 + 612) & 2) == 0);
      CProjectionBorderVisual::UpdateRectFromWindow(*v7, a2);
    }
  }
  else if ( v8 )
  {
    v14 = *((_QWORD *)v8 + 3);
    if ( v14 )
    {
      VisualCollection::Remove((VisualCollection *)(v14 + 32), *((struct CVisual **)a2 + 50));
      v8 = *v7;
    }
    if ( v8 )
    {
      CBaseObject::Release(v8);
      *v7 = 0LL;
    }
  }
LABEL_3:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
