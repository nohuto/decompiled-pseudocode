/*
 * XREFs of WPP_IFR_SF_dq @ 0x1C002E9AC
 * Callers:
 *     imp_WdfDmaEnablerGetFragmentLength @ 0x1C002F130 (imp_WdfDmaEnablerGetFragmentLength.c)
 *     imp_WdfDmaEnablerWdmGetDmaAdapter @ 0x1C002F330 (imp_WdfDmaEnablerWdmGetDmaAdapter.c)
 *     ?AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z @ 0x1C0032DAC (-AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z.c)
 *     ?FreeMapRegistersAndAdapter@FxDmaPacketTransaction@@MEAAXXZ @ 0x1C0032F50 (-FreeMapRegistersAndAdapter@FxDmaPacketTransaction@@MEAAXXZ.c)
 *     UnlockVerifierSection @ 0x1C0058844 (UnlockVerifierSection.c)
 *     ?QueueDrainSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C0076A78 (-QueueDrainSynchronously@FxIoQueue@@QEAAJXZ.c)
 *     ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x1C0076CC8 (-QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z.c)
 *     ?QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C0076DBC (-QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ.c)
 * Callees:
 *     FxIFR @ 0x1C000AA90 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0039B78 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_dq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        int _a1,
        const void *_a2)
{
  int v11; // eax
  unsigned __int64 v12; // rbx

  v11 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)flags >> 16) + (((flags - 1) >> 5) & 0x7FF));
  if ( _bittest(&v11, (flags - 1) & 0x1F) )
  {
    v12 = (unsigned __int64)flags >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v12 + 1) >= level )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v12),
        0x2Bu,
        traceGuid,
        id,
        &_a1,
        4LL,
        &_a2,
        8LL,
        0LL);
  }
  FxIFR(globals, level, flags, traceGuid, id, &_a1, 4LL, &_a2, 8LL, 0LL);
}
