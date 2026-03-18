/*
 * XREFs of ?ProcessSetBlurredWallpaperSurfaceRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACERECT@@@Z @ 0x1800F7448
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x180045318 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetBlurredWallpaperSurfaceRect(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACERECT *a3)
{
  CSparseStorage *v4; // rcx
  __int64 v5; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v4 = (CVisual *)((char *)this + 224);
  v7 = *(_OWORD *)((char *)a3 + 8);
  v5 = v7 - `CVisual::SetBlurredWallpaperSurfaceRect'::`2'::sc_defaultValue;
  if ( (_QWORD)v7 == `CVisual::SetBlurredWallpaperSurfaceRect'::`2'::sc_defaultValue )
    v5 = *((_QWORD *)&v7 + 1);
  if ( v5 )
    CSparseStorage::SetData(v4, 0x10u, 0x10u, &v7);
  else
    *(_DWORD *)(*(_QWORD *)v4 + 4LL) &= ~0x10000u;
  CVisual::PropagateFlags((__int64)this, 4u);
  return 0LL;
}
