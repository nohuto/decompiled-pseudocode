/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18003A220
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800021F0 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?Reset@CAnimationResource@@UEAAJXZ @ 0x180009960 (-Reset@CAnimationResource@@UEAAJXZ.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18001AA10 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800248DC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x180026128 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x1800270F4 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180036D88 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180039EB0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18003B450 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x18003C4B0 (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 *     ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x1800501D4 (-CleanupThemeStatics@CTopLevelWindow@@SAXXZ.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x180081BA4 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x180081C64 (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180081D24 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x180083050 (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 *     ?_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV?$DynArray@PEAVCProjectionBorderVisual@@$0A@@@@Z @ 0x180091D38 (-_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV-$DynArray@PEAVCProjectionBorderVisual@@$0A@@.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800998F0 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x1800A2728 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x1800A2C54 (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 *     ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x1800A3808 (--0Mesh2D@@QEAA@PEBUtagRECT@@@Z.c)
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x1800B1728 (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800B6888 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 * Callees:
 *     memcpy_0 @ 0x1800563BA (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DynArrayImpl<0>::ShrinkToSize(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  const void *v4; // rdx
  void *v5; // rcx
  unsigned __int64 v6; // r8
  const void *v7; // [rsp+30h] [rbp+8h] BYREF

  result = a2;
  v4 = *(const void **)a1;
  v5 = *(void **)(a1 + 8);
  if ( v4 != v5 )
  {
    v6 = result * *(unsigned int *)(a1 + 24);
    result = 0xFFFFFFFFLL;
    if ( v6 <= 0xFFFFFFFF )
    {
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
      {
        memcpy_0(v5, v4, (unsigned int)v6);
        (*(void (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *(_QWORD *)a1);
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        result = *(unsigned int *)(a1 + 16);
LABEL_6:
        *(_DWORD *)(a1 + 20) = result;
        return result;
      }
      v7 = v4;
      result = (*(__int64 (__fastcall **)(WPF::HeapBase *, const void **))(*(_QWORD *)WPF::g_pProcessHeap + 24LL))(
                 WPF::g_pProcessHeap,
                 &v7);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)a1 = v7;
        result = *(unsigned int *)(a1 + 24);
        goto LABEL_6;
      }
    }
  }
  return result;
}
