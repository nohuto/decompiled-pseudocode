/*
 * XREFs of KeRestoreMtrrBroadcast @ 0x14099F414
 * Callers:
 *     PnprWakeProcessors @ 0x1409AEE1C (PnprWakeProcessors.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1409AF390 (KiInitializeDynamicProcessorDpc.c)
 *     KiInitializeMTRR @ 0x140A4CEC4 (KiInitializeMTRR.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x14027B610 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1403A4B20 (KeIpiGenericCall.c)
 */

void KeRestoreMtrrBroadcast()
{
  ULONG_PTR Context; // [rsp+20h] [rbp-28h] BYREF
  __int64 v1; // [rsp+28h] [rbp-20h]
  void *v2; // [rsp+30h] [rbp-18h]

  v1 = 0LL;
  if ( byte_140C2B390 )
  {
    LODWORD(Context) = 0;
    HIDWORD(Context) = KeQueryActiveProcessorCountEx(0xFFFFu) - 1;
    v2 = &KiTargetPhase;
    LODWORD(v1) = 0;
    KeIpiGenericCall(KiLoadMTRRTarget, (ULONG_PTR)&Context);
  }
}
