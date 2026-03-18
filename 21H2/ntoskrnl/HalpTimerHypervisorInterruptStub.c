/*
 * XREFs of HalpTimerHypervisorInterruptStub @ 0x140521C60
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x140303720 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
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
