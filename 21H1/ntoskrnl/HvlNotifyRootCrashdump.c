/*
 * XREFs of HvlNotifyRootCrashdump @ 0x1404F0434
 * Callers:
 *     HvlPrepareForRootCrashdump @ 0x1404F04FC (HvlPrepareForRootCrashdump.c)
 *     KeBugCheck2 @ 0x140511010 (KeBugCheck2.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlNotifyRootCrashdump(int a1)
{
  char result; // al
  _DWORD *v3; // rax
  __int64 v4; // r9
  __int128 v5; // [rsp+20h] [rbp-48h] BYREF
  __int128 v6; // [rsp+30h] [rbp-38h]
  _BYTE v7[16]; // [rsp+40h] [rbp-28h] BYREF

  result = HvlpRootFlags;
  v5 = 0LL;
  v6 = 0LL;
  if ( (HvlpRootFlags & 4) != 0 )
  {
    v3 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v5, 1, (__int64)v7, 8LL);
    *v3 = 2;
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        v3[1] = 2;
      }
      else
      {
        if ( a1 != 2 )
          return HvlpReleaseHypercallPage((__int64)&v5);
        v3[1] = 3;
      }
    }
    else
    {
      v3[1] = 1;
    }
    HvcallInitiateHypercall(135, *((__int64 *)&v6 + 1), 0LL, v4);
    return HvlpReleaseHypercallPage((__int64)&v5);
  }
  return result;
}
