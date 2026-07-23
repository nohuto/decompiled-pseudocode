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
  __int64 v9; // rdi
  _OWORD v11[2]; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v12[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v13[144]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v14[2064]; // [rsp+F0h] [rbp-10h] BYREF

  v7 = 0;
  memset(v12, 0, sizeof(v12));
  memset(v11, 0, sizeof(v11));
  v8 = (_QWORD *)HvlpAcquireHypercallPage(v12, 1LL, v14, 1032LL);
  v9 = HvlpAcquireHypercallPage(v11, 2LL, v13, 72LL);
  *v8 = 0LL;
  if ( !(unsigned __int16)HvcallInitiateHypercall(147) )
  {
    v7 = 1;
    *a1 = *(_OWORD *)(v9 + 8);
    a1[1] = *(_OWORD *)(v9 + 24);
    a1[2] = *(_OWORD *)(v9 + 40);
    a1[3] = *(_OWORD *)(v9 + 56);
    *a4 = *(_DWORD *)(v9 + 4);
    *a3 = *(_DWORD *)v9;
  }
  HvlpReleaseHypercallPage(v11);
  HvlpReleaseHypercallPage(v12);
  return v7;
}
