/*
 * XREFs of ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18003B450
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800021F0 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800087B0 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180010F00 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x1800227D0 (--_GCCanvasVisual@@MEAAPEAXI@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180023C18 (--1CVisual@@MEAA@XZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x1800285D0 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x18002C330 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18002FE1C (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x180031484 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180042840 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x180050C00 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x1800815CC (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x180081BA4 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180081D24 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x180095B80 (--_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800ACBCC (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800B6888 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18003A220 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VisualCollection::RemoveAll(VisualCollection *this)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  int v4; // eax
  unsigned int v5; // ebp
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax

  v2 = 0;
  if ( *((_DWORD *)this + 10) )
  {
    do
    {
      v3 = 8LL * v2;
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + *((_QWORD *)this + 2)) + 72LL))(
             *(_QWORD *)(v3 + *((_QWORD *)this + 2)),
             0LL);
      v5 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x14Au);
        return v5;
      }
      v6 = *(_QWORD *)(v3 + *((_QWORD *)this + 2));
      if ( v6 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
        *(_QWORD *)(v3 + *((_QWORD *)this + 2)) = 0LL;
      }
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 10) );
    v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 16) + 432LL))(
           *(_QWORD *)(v7 + 16),
           *(unsigned int *)(v7 + 24));
    v2 = v8;
    if ( v8 >= 0 )
      goto LABEL_9;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x14Fu);
  }
  else
  {
LABEL_9:
    *((_DWORD *)this + 10) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 16, 8u);
  }
  return v2;
}
