/*
 * XREFs of HalpTimerHypervisorInterruptStub @ 0x1404CF9D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14021F560 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

char HalpTimerHypervisorInterruptStub()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx

  InternalData = HalpTimerGetInternalData(HalpHypervisorHpet);
  (*(void (__fastcall **)(__int64))(v1 + 120))(InternalData);
  ++*(_DWORD *)(HalpHypervisorHpet + 64);
  return 1;
}
