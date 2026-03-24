/*
 * XREFs of HvlEnterSleepState @ 0x1404F4FA0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403904C0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     VslTerminateSecureServices @ 0x1403F0ED4 (VslTerminateSecureServices.c)
 *     HvlpAcquireHypercallPage @ 0x1404F2840 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F3430 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlEnterSleepState(unsigned int a1)
{
  __int16 v2; // bx
  _OWORD v4[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v5[16]; // [rsp+40h] [rbp-28h] BYREF

  memset(v4, 0, sizeof(v4));
  if ( a1 >= 4 )
    VslTerminateSecureServices();
  *(_DWORD *)HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v4, 1, (__int64)v5, 8LL) = a1;
  v2 = HvcallInitiateHypercall(132);
  HvlpReleaseHypercallPage((__int64)v4);
  return v2 != 0 ? 0xC0000001 : 0;
}
