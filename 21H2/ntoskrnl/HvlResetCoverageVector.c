/*
 * XREFs of HvlResetCoverageVector @ 0x1404F1D0C
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x140957740 (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F27C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F33B0 (HvlpReleaseHypercallPage.c)
 */

char HvlResetCoverageVector()
{
  _DWORD *v0; // rbx
  _OWORD v2[2]; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v3[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v4[144]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v5[2064]; // [rsp+F0h] [rbp-10h] BYREF

  memset(v3, 0, sizeof(v3));
  memset(v2, 0, sizeof(v2));
  v0 = (_DWORD *)HvlpAcquireHypercallPage(v3, 1LL, v5, 1032LL);
  HvlpAcquireHypercallPage(v2, 2LL, v4, 72LL);
  *v0 = 3;
  LOBYTE(v0) = (unsigned __int16)HvcallInitiateHypercall(147) == 0;
  HvlpReleaseHypercallPage(v2);
  HvlpReleaseHypercallPage(v3);
  return (char)v0;
}
