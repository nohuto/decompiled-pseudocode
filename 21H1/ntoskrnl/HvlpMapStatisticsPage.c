/*
 * XREFs of HvlpMapStatisticsPage @ 0x1404ED810
 * Callers:
 *     HvlpEnableNextLogicalProcessor @ 0x1404ED3A8 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeBootProcessor @ 0x1404ED690 (HvlpInitializeBootProcessor.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpMapStatisticsPage(int a1, _OWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  _QWORD *v10; // rdi
  __int64 v11; // r9
  __int128 v13; // [rsp+28h] [rbp-49h] BYREF
  __int128 v14; // [rsp+38h] [rbp-39h]
  __int128 v15; // [rsp+48h] [rbp-29h] BYREF
  __int128 v16; // [rsp+58h] [rbp-19h]
  _BYTE v17[16]; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v18[48]; // [rsp+78h] [rbp+7h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v6 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v15, 1, (__int64)v18, 24LL);
  v7 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v13, 2, (__int64)v17, 8LL);
  v8 = *((_QWORD *)&v14 + 1);
  v9 = *((_QWORD *)&v16 + 1);
  v10 = v7;
  *(_OWORD *)(v6 + 1) = *a2;
  *(_DWORD *)v6 = a1;
  LOWORD(v6) = HvcallInitiateHypercall(108, v9, v8, v11);
  *a3 = *v10 << 12;
  HvlpReleaseHypercallPage(&v13);
  HvlpReleaseHypercallPage(&v15);
  return (_WORD)v6 != 0 ? 0xC0000001 : 0;
}
