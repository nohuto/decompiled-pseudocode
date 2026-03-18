/*
 * XREFs of DxgkGetSharedAllocationObjectType @ 0x1C0150CE0
 * Callers:
 *     ?Initialize@CBufferRealization@@IEAAJ_N@Z @ 0x1C0011594 (-Initialize@CBufferRealization@@IEAAJ_N@Z.c)
 *     ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z @ 0x1C0011710 (-OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z.c)
 *     ?Create@CPoolBufferResource@@SAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourceState@@@Z @ 0x1C006CDBC (-Create@CPoolBufferResource@@SAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourc.c)
 *     ?CreateDxSharedSurfaceHandle@CPoolBufferResource@@QEAAJPEAPEAX@Z @ 0x1C006D01C (-CreateDxSharedSurfaceHandle@CPoolBufferResource@@QEAAJPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

POBJECT_TYPE DxgkGetSharedAllocationObjectType()
{
  return g_pDxgkSharedAllocationObjectType;
}
