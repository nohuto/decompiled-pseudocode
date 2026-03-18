/*
 * XREFs of KeRestoreMtrrBroadcast @ 0x14099BA40
 * Callers:
 *     PnprWakeProcessors @ 0x1409ABFAC (PnprWakeProcessors.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1409AC520 (KiInitializeDynamicProcessorDpc.c)
 *     KiInitializeMTRR @ 0x140A45684 (KiInitializeMTRR.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402DE560 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1403A1D90 (KeIpiGenericCall.c)
 */

void KeRestoreMtrrBroadcast()
{
  ULONG_PTR Context; // [rsp+20h] [rbp-28h] BYREF
  __int64 v1; // [rsp+28h] [rbp-20h]
  void *v2; // [rsp+30h] [rbp-18h]

  v1 = 0LL;
  if ( byte_140C2B130 )
  {
    LODWORD(Context) = 0;
    HIDWORD(Context) = KeQueryActiveProcessorCountEx(0xFFFFu) - 1;
    v2 = &KiTargetPhase;
    LODWORD(v1) = 0;
    KeIpiGenericCall(KiLoadMTRRTarget, (ULONG_PTR)&Context);
  }
}
