/*
 * XREFs of HvlpInvokeGetPageListHypercall @ 0x14054D374
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x14054A25C (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x14054A4B0 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x14054AE18 (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpGetPageList @ 0x14054D2AC (HvlpGetPageList.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall HvlpInvokeGetPageListHypercall(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int128 v6; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7; // [rsp+30h] [rbp-58h]
  __int64 v8; // [rsp+38h] [rbp-50h]
  __int64 v9; // [rsp+40h] [rbp-48h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  LODWORD(v8) = 0;
  v4 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v6, 1, (__int64)&v9, 24LL);
  v4[1] = -1LL;
  v4[2] = 1LL;
  *v4 = a2;
  v4[2] = *(_BYTE *)(a1 + 4) != 0 ? 3LL : 1LL;
  HvcallInitiateHypercall(151);
  return HvlpReleaseHypercallPage((__int64)&v6);
}
