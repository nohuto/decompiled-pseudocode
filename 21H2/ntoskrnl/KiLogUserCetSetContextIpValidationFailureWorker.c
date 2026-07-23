/*
 * XREFs of KiLogUserCetSetContextIpValidationFailureWorker @ 0x1405CEFB0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     KeStackAttachProcess @ 0x14027D680 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402ABEC0 (KeUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1405D1528 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v1 + 1112));
  HalPutDmaAdapter((PADAPTER_OBJECT)v1);
  ExFreePoolWithTag(P, 0);
}
