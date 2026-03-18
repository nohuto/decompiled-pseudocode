/*
 * XREFs of KiLogUserCetSetContextIpValidationFailureWorker @ 0x1405C6C90
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     KeUnstackDetachProcess @ 0x14025E8B0 (KeUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeStackAttachProcess @ 0x1402A51A0 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1405C81D0 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
