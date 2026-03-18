/*
 * XREFs of ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0010008
 * Callers:
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C000DC70 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtUnBindCompositionSurface @ 0x1C000EA40 (NtUnBindCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x1C000EF10 (NtBindCompositionSurface.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C001D570 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C001D8F0 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C0064680 (NtNotifyPresentToCompositionSurface.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C0064C20 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C0064D20 (NtSetCompositionSurfaceStatistics.c)
 *     ??1CContentResource@@UEAA@XZ @ 0x1C006CFDC (--1CContentResource@@UEAA@XZ.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEBUCSM_BUFFER_INFO@@@Z @ 0x1C006D2A8 (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEBUCSM_BUFFER_INFO@@@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0010C34 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::LockForWrite(char *Object, struct CCompositionSurface **a2)
{
  NTSTATUS v4; // edi

  *a2 = 0LL;
  v4 = ObReferenceObjectByPointer(Object, 3u, g_pDxgkCompositionObjectType, 0);
  if ( v4 >= 0 )
  {
    v4 = CPushLock::AcquireLockExclusive((CPushLock *)(Object + 48));
    if ( v4 < 0 )
      ObfDereferenceObject(Object);
    else
      *a2 = (struct CCompositionSurface *)(Object + 40);
  }
  return (unsigned int)v4;
}
