/*
 * XREFs of ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x1800A3640
 * Callers:
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x18004FF00 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180055CD0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x18006A820 (-PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18006ADE8 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 * Callees:
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x1800A3780 (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 */

void __fastcall CD2DTarget::ApplyState(CD2DTarget *this, struct CD2DContext *a2)
{
  if ( !*((_BYTE *)this + 48) )
  {
    *((_QWORD *)this + 2) = a2;
    CD2DContext::D2DSetTargetInternal(a2, this);
    *((_BYTE *)this + 48) = 1;
    CD2DTarget::ApplyCurrentClip(this);
  }
}
