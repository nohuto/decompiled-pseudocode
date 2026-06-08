/*
 * XREFs of InitializeEnumerationContext @ 0x1C0001524
 * Callers:
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C002440C (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C00244FC (RetrieveEfficiencyClassInformation.c)
 *     GetPerfDomain @ 0x1C0025284 (GetPerfDomain.c)
 *     ProcLibTraceControlCallback @ 0x1C0026590 (ProcLibTraceControlCallback.c)
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
