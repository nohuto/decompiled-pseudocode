/*
 * XREFs of HalpTimerClockInterruptStub @ 0x1403C5280
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x140288EA0 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

char HalpTimerClockInterruptStub()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx

  InternalData = HalpTimerGetInternalData(HalpClockTimer);
  (*(void (__fastcall **)(__int64))(v1 + 120))(InternalData);
  ++*(_DWORD *)(HalpClockTimer + 64);
  return 1;
}
