/*
 * XREFs of KeRestoreMtrrBroadcast @ 0x1409A1B40
 * Callers:
 *     PnprWakeProcessors @ 0x1409B1F1C (PnprWakeProcessors.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1409B2490 (KiInitializeDynamicProcessorDpc.c)
 *     KiInitializeMTRR @ 0x140A4B924 (KiInitializeMTRR.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140219190 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1403A4260 (KeIpiGenericCall.c)
 */

void KeRestoreMtrrBroadcast()
{
  ULONG_PTR Context; // [rsp+20h] [rbp-28h] BYREF
  __int64 v1; // [rsp+28h] [rbp-20h]
  void *v2; // [rsp+30h] [rbp-18h]

  v1 = 0LL;
  if ( byte_140C2B1D0 )
  {
    LODWORD(Context) = 0;
    HIDWORD(Context) = KeQueryActiveProcessorCountEx(0xFFFFu) - 1;
    v2 = &KiTargetPhase;
    LODWORD(v1) = 0;
    KeIpiGenericCall(KiLoadMTRRTarget, (ULONG_PTR)&Context);
  }
}
