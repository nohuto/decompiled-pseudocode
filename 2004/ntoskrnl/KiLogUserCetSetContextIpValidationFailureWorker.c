/*
 * XREFs of KiLogUserCetSetContextIpValidationFailureWorker @ 0x1405C7C90
 * Callers:
 *     <none>
 * Callees:
 *     KeUnstackDetachProcess @ 0x140205990 (KeUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeStackAttachProcess @ 0x14024C170 (KeStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1405C91F0 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
