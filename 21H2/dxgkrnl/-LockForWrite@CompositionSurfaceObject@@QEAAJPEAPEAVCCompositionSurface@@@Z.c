/*
 * XREFs of ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0007E48
 * Callers:
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C00039E0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C0003D20 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtUnBindCompositionSurface @ 0x1C0004260 (NtUnBindCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x1C0004600 (NtBindCompositionSurface.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C0021AB0 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C0077840 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C0077950 (NtSetCompositionSurfaceStatistics.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x1C008131C (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0007EB4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
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
