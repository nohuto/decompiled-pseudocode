/*
 * XREFs of ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800B6888
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18000D5E0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x180096B60 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180096F00 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800998F0 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800A9C6C (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800B5D8C (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18003A220 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18003B450 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?_ClearClones@CDesktopThumbnailBase@@IEAAXXZ @ 0x1800B6D34 (-_ClearClones@CDesktopThumbnailBase@@IEAAXXZ.c)
 *     ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x1800B6FB8 (-_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ.c)
 */

__int64 __fastcall CDesktopThumbnailBase::UpdateWindowClones(CDesktopThumbnailBase *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  v2 = VisualCollection::RemoveAll((CDesktopThumbnailBase *)((char *)this + 32));
  v3 = v2;
  if ( v2 >= 0 )
  {
    CDesktopThumbnailBase::_ClearClones(this);
    *((_DWORD *)this + 66) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 240, 0x10u);
    v4 = CDesktopThumbnailBase::_SnapshotWindows(this);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x38u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x34u);
  }
  return v3;
}
