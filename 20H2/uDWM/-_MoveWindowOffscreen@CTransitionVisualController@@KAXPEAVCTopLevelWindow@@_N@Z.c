/*
 * XREFs of ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18002C554
 * Callers:
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x180003358 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_3b64230422d311f937c4d9a7616fc4ea___ @ 0x180003394 (CTransitionVisualController--ForEachOwnedWindow__lambda_3b64230422d311f937c4d9a7616fc4ea___.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180007ED0 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000B514 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x180031484 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180032BFC (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PEA_N@Z @ 0x180041618 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PE.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x180050C00 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x1800AAE1C (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x1800AB1E0 (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001110C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x18002C5D0 (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 */

void __fastcall CTransitionVisualController::_MoveWindowOffscreen(struct CTopLevelWindow *a1, char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  CThumbnailVisual *v7; // rcx
  int updated; // eax

  CTopLevelWindow::SetWindowOffscreen(a1, a2);
  v4 = *((_QWORD *)a1 + 91);
  if ( v4 && (!a2 || (*(_DWORD *)(v4 + 616) & 0x8000000) != 0) && *(_DWORD *)(v4 + 528) )
  {
    v5 = 0LL;
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v4 + 504) + 8 * v5);
      if ( a2 != *(_BYTE *)(v6 + 35) )
      {
        v7 = *(CThumbnailVisual **)(v6 + 88);
        *(_BYTE *)(v6 + 35) = a2;
        if ( v7 )
        {
          updated = CThumbnailVisual::UpdateProperties(v7, 4);
          if ( updated < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x20E1u);
        }
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < *(_DWORD *)(v4 + 528) );
  }
}
