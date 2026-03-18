/*
 * XREFs of KiLogUserCetSetContextIpValidationFailureWorker @ 0x1405CCFB0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KeStackAttachProcess @ 0x14023EE20 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402688E0 (KeUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1405CF1EC (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall KiLogUserCetSetContextIpValidationFailureWorker(_QWORD *P)
{
  __int64 v1; // rbx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  v1 = P[5];
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess((PRKPROCESS)v1, &ApcState);
  EtwTimLogUserCetSetContextIpValidationFailure(*((_DWORD *)P + 8), v1, P[6], *((_DWORD *)P + 14), *((_DWORD *)P + 15));
  KeUnstackDetachProcess(&ApcState);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v1 + 1112));
  HalPutDmaAdapter((PADAPTER_OBJECT)v1);
  ExFreePoolWithTag(P, 0);
}
