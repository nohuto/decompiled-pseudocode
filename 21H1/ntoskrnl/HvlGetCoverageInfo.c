/*
 * XREFs of HvlGetCoverageInfo @ 0x1404EBF50
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x140952864 (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlGetCoverageInfo(_OWORD *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  char v7; // r14
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r9
  __int128 v15; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v16; // [rsp+30h] [rbp-D0h]
  __int128 v17; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v18; // [rsp+50h] [rbp-B0h]
  _BYTE v19[144]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v20[2064]; // [rsp+F0h] [rbp-10h] BYREF

  v7 = 0;
  v17 = 0LL;
  v18 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v8 = (_QWORD *)HvlpAcquireHypercallPage(&v17, 1LL, v20, 1032LL);
  v9 = HvlpAcquireHypercallPage(&v15, 2LL, v19, 72LL);
  v10 = *((_QWORD *)&v16 + 1);
  v11 = *((_QWORD *)&v18 + 1);
  v12 = v9;
  *v8 = 0LL;
  if ( !(unsigned __int16)HvcallInitiateHypercall(147, v11, v10, v13) )
  {
    v7 = 1;
    *a1 = *(_OWORD *)(v12 + 8);
    a1[1] = *(_OWORD *)(v12 + 24);
    a1[2] = *(_OWORD *)(v12 + 40);
    a1[3] = *(_OWORD *)(v12 + 56);
    *a4 = *(_DWORD *)(v12 + 4);
    *a3 = *(_DWORD *)v12;
  }
  HvlpReleaseHypercallPage(&v15);
  HvlpReleaseHypercallPage(&v17);
  return v7;
}
