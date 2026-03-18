/*
 * XREFs of ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000FBE8
 * Callers:
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C000DC70 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C000E130 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtUnBindCompositionSurface @ 0x1C000EA40 (NtUnBindCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x1C000EF10 (NtBindCompositionSurface.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C000F240 (NtQueryCompositionSurfaceBinding.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C000F450 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C000F710 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C000F950 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C001D570 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C001D8F0 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C0064680 (NtNotifyPresentToCompositionSurface.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C0064A20 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C0064C20 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C0064D20 (NtSetCompositionSurfaceStatistics.c)
 *     ??1CContentResource@@UEAA@XZ @ 0x1C006CFDC (--1CContentResource@@UEAA@XZ.c)
 *     ?Initialize@CContentResource@@IEAAJXZ @ 0x1C006D1D0 (-Initialize@CContentResource@@IEAAJXZ.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEBUCSM_BUFFER_INFO@@@Z @ 0x1C006D2A8 (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEBUCSM_BUFFER_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurface::UnlockAndRelease(CCompositionSurface *this)
{
  char *v2; // rcx

  v2 = (char *)this + 16;
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)this + 3) )
  {
    *((_QWORD *)this + 3) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v2, 0LL);
  }
  KeLeaveCriticalRegion();
  return ObfDereferenceObject((char *)this - 40) == 0;
}
