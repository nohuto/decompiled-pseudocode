/*
 * XREFs of ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C00072FC
 * Callers:
 *     NtQueryCompositionSurfaceFrameRate @ 0x1C0002340 (NtQueryCompositionSurfaceFrameRate.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C0003EC0 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtOpenCompositionSurfaceRealizationInfo @ 0x1C0004AD0 (NtOpenCompositionSurfaceRealizationInfo.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C0004DC0 (NtQueryCompositionSurfaceBinding.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C00050A0 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C00052D0 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C0077640 (NtOpenCompositionSurfaceSectionInfo.c)
 *     ?Initialize@CContentResource@@IEAAJXZ @ 0x1C008124C (-Initialize@CContentResource@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompositionSurfaceObject::LockForRead(
        CompositionSurfaceObject *this,
        const struct CCompositionSurface **a2)
{
  NTSTATUS v4; // r8d

  *a2 = 0LL;
  v4 = ObReferenceObjectByPointer(this, 3u, g_pDxgkCompositionObjectType, 0);
  if ( v4 >= 0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)this + 48, 0LL);
    v4 = 0;
    *a2 = (CompositionSurfaceObject *)((char *)this + 40);
  }
  return (unsigned int)v4;
}
