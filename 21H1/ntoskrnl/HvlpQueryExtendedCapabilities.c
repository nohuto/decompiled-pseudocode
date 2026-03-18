/*
 * XREFs of HvlpQueryExtendedCapabilities @ 0x1404F4F38
 * Callers:
 *     HvlpDetermineEnlightenments @ 0x1404F4964 (HvlpDetermineEnlightenments.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlpQueryExtendedCapabilities(_QWORD *a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // r9
  __int16 v4; // bx
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  __int128 v7; // [rsp+30h] [rbp-38h]
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v2 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v6, 2, (__int64)&v8, 8LL);
  v4 = HvcallInitiateHypercall(32769, 0LL, *((__int64 *)&v7 + 1), v3);
  HvlpReleaseHypercallPage((__int64)&v6);
  if ( v4 )
    return 0;
  *a1 = *v2;
  return 1;
}
