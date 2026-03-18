/*
 * XREFs of ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C0194DE8
 * Callers:
 *     DxgkGetYieldPercentage @ 0x1C01948C0 (DxgkGetYieldPercentage.c)
 *     DxgkGetMemoryBudgetTarget @ 0x1C0194B60 (DxgkGetMemoryBudgetTarget.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C02854A0 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkSetMemoryBudgetTarget @ 0x1C0285B90 (DxgkSetMemoryBudgetTarget.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C0285E40 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkSetYieldPercentage @ 0x1C0286750 (DxgkSetYieldPercentage.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall CheckTokenForResourceManagerAccess(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v2 = *((_QWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 38039);
  return v2 && (int)RtlCheckTokenMembership(0LL, v2, &v4) >= 0 && v4;
}
