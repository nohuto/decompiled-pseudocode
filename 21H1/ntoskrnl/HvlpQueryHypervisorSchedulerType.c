/*
 * XREFs of HvlpQueryHypervisorSchedulerType @ 0x1403EC190
 * Callers:
 *     HvlPhase2Initialize @ 0x1403CACE8 (HvlPhase2Initialize.c)
 *     HvlpDetermineEnlightenments @ 0x1404F4964 (HvlpDetermineEnlightenments.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlpQueryHypervisorSchedulerType()
{
  unsigned int v0; // edi
  _DWORD *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned int *v5; // rsi
  __int64 v6; // r9
  __int128 v8; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v9; // [rsp+38h] [rbp-D0h]
  __int128 v10; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v11; // [rsp+58h] [rbp-B0h]
  _BYTE v12[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v13[2064]; // [rsp+78h] [rbp-90h] BYREF

  v0 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v1 = (_DWORD *)HvlpAcquireHypercallPage(&v10, 1LL, v12, 8LL);
  v2 = HvlpAcquireHypercallPage(&v8, 2LL, v13, 1032LL);
  v3 = *((_QWORD *)&v9 + 1);
  v4 = *((_QWORD *)&v11 + 1);
  v5 = (unsigned int *)v2;
  *v1 = 15;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123, v4, v3, v6) )
    v0 = *v5;
  HvlpReleaseHypercallPage(&v8);
  HvlpReleaseHypercallPage(&v10);
  return v0;
}
