/*
 * XREFs of ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C00037C8
 * Callers:
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C0001A40 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtUnBindCompositionSurface @ 0x1C0002250 (NtUnBindCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x1C00026D0 (NtBindCompositionSurface.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C001D4C0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C001D840 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C0063620 (NtNotifyPresentToCompositionSurface.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C0063BC0 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C0063CC0 (NtSetCompositionSurfaceStatistics.c)
 *     ??1CContentResource@@UEAA@XZ @ 0x1C006BF7C (--1CContentResource@@UEAA@XZ.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEBUCSM_BUFFER_INFO@@@Z @ 0x1C006C248 (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEBUCSM_BUFFER_INFO@@@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0004688 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
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
