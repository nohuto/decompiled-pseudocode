/*
 * XREFs of HvlpMapStatisticsPage @ 0x1404EDE60
 * Callers:
 *     HvlPhase1Initialize @ 0x1403CC54C (HvlPhase1Initialize.c)
 *     HvlpEnableNextLogicalProcessor @ 0x1404ED9F8 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeBootProcessor @ 0x1404EDCE0 (HvlpInitializeBootProcessor.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038DB00 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ED430 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404EE030 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpMapStatisticsPage(int a1, _OWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  _OWORD v9[2]; // [rsp+28h] [rbp-49h] BYREF
  _OWORD v10[2]; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v11[16]; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v12[48]; // [rsp+78h] [rbp+7h] BYREF

  memset(v10, 0, sizeof(v10));
  memset(v9, 0, sizeof(v9));
  v6 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v10, 1, (__int64)v12, 24LL);
  v7 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v9, 2, (__int64)v11, 8LL);
  *(_OWORD *)(v6 + 1) = *a2;
  *(_DWORD *)v6 = a1;
  LOWORD(v6) = HvcallInitiateHypercall(108);
  *a3 = *v7 << 12;
  HvlpReleaseHypercallPage(v9);
  HvlpReleaseHypercallPage(v10);
  return (_WORD)v6 != 0 ? 0xC0000001 : 0;
}
