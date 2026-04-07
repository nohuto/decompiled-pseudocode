/*
 * XREFs of ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x180081E5C
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x1800818CC (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000C8D4 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180018A6C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180024670 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x18002B44C (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x180082B10 (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CLivePreview::_CollectExcludedImmersiveWindows(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // ebx
  struct _LIST_ENTRY *WindowListForDesktop; // r12
  struct _LIST_ENTRY *Flink; // rsi
  CWindowData *v8; // rcx
  int *v9; // rbp
  unsigned int v10; // r14d
  int v11; // r15d
  char ShouldCloneWindow; // al
  unsigned int v13; // eax
  unsigned int v14; // r8d
  CWindowData *v16; // [rsp+70h] [rbp+8h] BYREF
  int v17; // [rsp+80h] [rbp+18h] BYREF
  int v18; // [rsp+84h] [rbp+1Ch]
  CWindowData **v19; // [rsp+88h] [rbp+20h] BYREF

  v17 = 10;
  v3 = *(_QWORD *)(a1 + 288);
  v18 = 8;
  v5 = 0;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           v3);
  Flink = WindowListForDesktop->Flink;
  if ( WindowListForDesktop->Flink == WindowListForDesktop )
    return v5;
  while ( 2 )
  {
    v8 = (CWindowData *)Flink;
    v9 = &v17;
    v16 = (CWindowData *)Flink;
    v10 = 0;
    v11 = (int)Flink[7].Flink;
    while ( 1 )
    {
      if ( v11 == *v9 )
      {
        ShouldCloneWindow = CTransitionVisualController::ShouldCloneWindow(*((HWND *)v8 + 5));
        v8 = v16;
        if ( ShouldCloneWindow )
        {
          if ( CWindowData::IsWindowVisibleAndUncloaked(v16) )
            break;
        }
      }
      ++v10;
      ++v9;
      if ( v10 >= 2 )
        goto LABEL_15;
    }
    if ( !(unsigned int)CLivePreview::_GetCoverageStateOfWindow(a1, v8) )
    {
      v13 = *(_DWORD *)(a2 + 24);
      v14 = v13 + 1;
      if ( v13 + 1 < v13 )
      {
        v5 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
      else
      {
        if ( v14 <= *(_DWORD *)(a2 + 20) )
        {
          v5 = 0;
          *(_QWORD *)(*(_QWORD *)a2 + 8LL * v13) = v16;
          *(_DWORD *)(a2 + 24) = v14;
          goto LABEL_15;
        }
        v19 = &v16;
        v5 = DynArrayImpl<0>::Grow((char **)a2, 8u, 1, 0, (unsigned __int64 *)&v19);
        if ( (v5 & 0x80000000) == 0 )
        {
          *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(a2 + 24))++) + *(_QWORD *)a2) = *v19;
          goto LABEL_15;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xC0u);
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x2C9u);
      return v5;
    }
LABEL_15:
    Flink = Flink->Flink;
    if ( Flink != WindowListForDesktop )
      continue;
    return v5;
  }
}
