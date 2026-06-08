/*
 * XREFs of InitializeEnumerationContext @ 0x1C0001ABC
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C001E5F0 (ProcLibTraceControlCallback.c)
 *     GetPerfDomain @ 0x1C0032390 (GetPerfDomain.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C00354E8 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C00357C8 (RetrieveEfficiencyClassInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializeEnumerationContext(__int64 a1, int a2, __int64 a3)
{
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)a3 = a1;
  *(_QWORD *)(a3 + 8) = a1;
  *(_DWORD *)(a3 + 24) = a2;
}
