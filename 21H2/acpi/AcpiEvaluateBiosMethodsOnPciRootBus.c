/*
 * XREFs of AcpiEvaluateBiosMethodsOnPciRootBus @ 0x1C000628C
 * Callers:
 *     ACPIBuildPdo @ 0x1C0005FA8 (ACPIBuildPdo.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C004CC70 (ACPIDispatchIrpDepPdoQueryID.c)
 * Callees:
 *     AcpiEvaluateOscMethodOnPciRootBus @ 0x1C000286C (AcpiEvaluateOscMethodOnPciRootBus.c)
 */

__int64 __fastcall AcpiEvaluateBiosMethodsOnPciRootBus(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int *v5; // rdi
  int v6; // r8d
  int v7; // eax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 760) || (*(_DWORD *)(a1 + 8) & 0x2000000) == 0 )
    return 3221225473LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 184), 0, 0) & 0x10) != 0 )
    return 0LL;
  v5 = (int *)(a1 + 304);
  *(_DWORD *)(a1 + 304) = 0;
  _InterlockedOr((volatile signed __int32 *)(a1 + 184), 0x10u);
  if ( (AcpiOverrideAttributes & 0x2000) != 0 )
    return 0LL;
  v8 = 0;
  result = AcpiEvaluateOscMethodOnPciRootBus(a1, 1u, a3, &PciRootBusFeaturesControlRequest, &v8);
  if ( (int)result >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 184), 8u);
    v7 = v8;
    if ( PciRootBusFeaturesControlRequest != v8 )
    {
      if ( v8 != 21 )
        v7 = 0;
      v8 = v7;
    }
    return AcpiEvaluateOscMethodOnPciRootBus(a1, 0, v6, &v8, v5);
  }
  return result;
}
