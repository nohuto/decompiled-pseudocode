/*
 * XREFs of HalpTimerHypervisorInterruptStub @ 0x1404CF520
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402785B0 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
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
