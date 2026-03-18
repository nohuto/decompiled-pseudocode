/*
 * XREFs of HalpTimerProfileInterrupt @ 0x1404CFA20
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14021F560 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     DefaultOverflowHandler @ 0x1404B9850 (DefaultOverflowHandler.c)
 */

char __fastcall HalpTimerProfileInterrupt(__int64 a1)
{
  __int64 v1; // rbx
  __int64 InternalData; // rax
  __int64 v3; // rdx

  v1 = *(_QWORD *)(a1 + 136);
  InternalData = HalpTimerGetInternalData(HalpProfileTimer);
  (*(void (__fastcall **)(__int64))(v3 + 120))(InternalData);
  DefaultOverflowHandler(v1);
  return 1;
}
