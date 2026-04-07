/*
 * XREFs of ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18001C29C
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18000228C (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ @ 0x180006E60 (-RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ.c)
 *     ?ShouldShowAnimation@CHidePopup@@UEBA_NPEAVCWindowData@@@Z @ 0x180007550 (-ShouldShowAnimation@CHidePopup@@UEBA_NPEAVCWindowData@@@Z.c)
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x18000C6E0 (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18000EB54 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180010040 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001BFCC (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029D20 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?IsTransitionEnabledForWindowGroup@CTopLevelWindow3D@@CA_NPEBVCWindowData@@W4WindowAnimationType@1@@Z @ 0x18002A3EC (-IsTransitionEnabledForWindowGroup@CTopLevelWindow3D@@CA_NPEBVCWindowData@@W4WindowAnimationType.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x1800336A4 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x1800383E4 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z @ 0x18003CCB8 (-FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x180047E1C (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x1800826BC (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x18008286C (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180082DB8 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180093A28 (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800AF8B4 (-GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x1800B7698 (-_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall CWindowList::GetWindowListForDesktop(CWindowList *this, __int64 a2)
{
  char *v2; // rax
  _QWORD v4[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v5; // [rsp+30h] [rbp-58h]
  __int128 v6; // [rsp+40h] [rbp-48h]
  __int128 v7; // [rsp+50h] [rbp-38h]
  __int64 v8; // [rsp+60h] [rbp-28h]
  char v9; // [rsp+68h] [rbp-20h]

  v4[1] = 0LL;
  v8 = -1LL;
  v4[0] = a2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v9 = 0;
  v2 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v4);
  if ( v2 )
    return (struct _LIST_ENTRY *)(v2 + 80);
  else
    return (struct _LIST_ENTRY *)&`CWindowList::GetWindowListForDesktop'::`5'::EmptyList;
}
