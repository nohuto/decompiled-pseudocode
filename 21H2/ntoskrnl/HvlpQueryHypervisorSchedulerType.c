/*
 * XREFs of HvlpQueryHypervisorSchedulerType @ 0x1403F0DF0
 * Callers:
 *     HvlPhase2Initialize @ 0x1403CF0B8 (HvlPhase2Initialize.c)
 *     HvlpDetermineEnlightenments @ 0x1404FA3C4 (HvlpDetermineEnlightenments.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403904C0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F2840 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F3430 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlpQueryHypervisorSchedulerType()
{
  unsigned int v0; // edi
  _DWORD *v1; // rbx
  unsigned int *v2; // rsi
  _BYTE v4[40]; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v5[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v6[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v7[2064]; // [rsp+78h] [rbp-90h] BYREF

  v0 = 0;
  memset(v5, 0, sizeof(v5));
  memset(&v4[8], 0, 32);
  v1 = (_DWORD *)HvlpAcquireHypercallPage(v5, 1LL, v6, 8LL);
  v2 = (unsigned int *)HvlpAcquireHypercallPage(&v4[8], 2LL, v7, 1032LL);
  *v1 = 15;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123) )
    v0 = *v2;
  HvlpReleaseHypercallPage(&v4[8]);
  HvlpReleaseHypercallPage(v5);
  return v0;
}
