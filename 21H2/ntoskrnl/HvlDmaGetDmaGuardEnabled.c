/*
 * XREFs of HvlDmaGetDmaGuardEnabled @ 0x1404F4670
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F27C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F33B0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1404FAC74 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaGetDmaGuardEnabled(_BYTE *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  unsigned __int16 v4; // bx
  _BYTE v6[40]; // [rsp+20h] [rbp-E8h] BYREF
  PHYSICAL_ADDRESS v7[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v8[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v9[2064]; // [rsp+78h] [rbp-90h] BYREF

  memset(v7, 0, sizeof(v7));
  memset(&v6[8], 0, 32);
  v2 = HvlpAcquireHypercallPage(v7, 1, (__int64)v8, 8LL);
  v3 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v6[8], 2, (__int64)v9, 1032LL);
  *v2 = 0LL;
  *(_DWORD *)v2 = 20;
  v4 = HvcallInitiateHypercall(123);
  if ( !v4 )
    *a1 = *(_BYTE *)v3;
  HvlpReleaseHypercallPage((__int64)&v6[8]);
  HvlpReleaseHypercallPage((__int64)v7);
  return HvlpHvToNtStatus(v4);
}
