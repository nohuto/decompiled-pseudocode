/*
 * XREFs of ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C000FDE4
 * Callers:
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C000E130 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C000F240 (NtQueryCompositionSurfaceBinding.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C000F450 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C000F710 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C000F950 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C0064A20 (NtOpenCompositionSurfaceSectionInfo.c)
 *     ?Initialize@CContentResource@@IEAAJXZ @ 0x1C006D1D0 (-Initialize@CContentResource@@IEAAJXZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EE2C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionSurfaceObject::LockForRead(char *Object, const struct CCompositionSurface **a2)
{
  NTSTATUS v4; // ebx

  *a2 = 0LL;
  v4 = ObReferenceObjectByPointer(Object, 3u, g_pDxgkCompositionObjectType, 0);
  if ( v4 >= 0 )
  {
    v4 = 0;
    if ( (**((unsigned __int8 (__fastcall ***)(char *))Object + 6))(Object + 48) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(Object + 56, 0LL);
      if ( (**((unsigned __int8 (__fastcall ***)(char *))Object + 6))(Object + 48) )
        goto LABEL_4;
      CPushLock::ReleaseLock((CPushLock *)(Object + 48));
    }
    v4 = -1073741816;
LABEL_4:
    if ( v4 < 0 )
      ObfDereferenceObject(Object);
    else
      *a2 = (const struct CCompositionSurface *)(Object + 40);
  }
  return (unsigned int)v4;
}
