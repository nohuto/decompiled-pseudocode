/*
 * XREFs of DxgkGetSharedAllocationObjectType @ 0x1C0161E10
 * Callers:
 *     ?Initialize@CBufferRealization@@IEAAJ_N@Z @ 0x1C0007860 (-Initialize@CBufferRealization@@IEAAJ_N@Z.c)
 *     ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z @ 0x1C0007A94 (-OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z.c)
 *     ?Create@CPoolBufferResource@@SAJPEAVCFlipManager@@_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourceState@@@Z @ 0x1C007F044 (-Create@CPoolBufferResource@@SAJPEAVCFlipManager@@_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAV.c)
 *     ?CreateDxSharedSurfaceHandle@CPoolBufferResource@@QEAAJPEAPEAX@Z @ 0x1C007F294 (-CreateDxSharedSurfaceHandle@CPoolBufferResource@@QEAAJPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

POBJECT_TYPE DxgkGetSharedAllocationObjectType()
{
  return g_pDxgkSharedAllocationObjectType;
}
