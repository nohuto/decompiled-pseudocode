/*
 * XREFs of KeRestoreMtrrBroadcast @ 0x14099A2A4
 * Callers:
 *     PnprWakeProcessors @ 0x1409AB14C (PnprWakeProcessors.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1409AB6C0 (KiInitializeDynamicProcessorDpc.c)
 *     KiInitializeMTRR @ 0x140A3FE60 (KiInitializeMTRR.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140328380 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1403A1600 (KeIpiGenericCall.c)
 */

void KeRestoreMtrrBroadcast()
{
  ULONG_PTR Context; // [rsp+20h] [rbp-28h] BYREF
  __int64 v1; // [rsp+28h] [rbp-20h]
  void *v2; // [rsp+30h] [rbp-18h]

  v1 = 0LL;
  if ( byte_140C2B330 )
  {
    LODWORD(Context) = 0;
    HIDWORD(Context) = KeQueryActiveProcessorCountEx(0xFFFFu) - 1;
    v2 = &KiTargetPhase;
    LODWORD(v1) = 0;
    KeIpiGenericCall(KiLoadMTRRTarget, (ULONG_PTR)&Context);
  }
}
