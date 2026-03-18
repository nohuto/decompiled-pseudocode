/*
 * XREFs of HvlDmaGetDmaGuardEnabled @ 0x1404EECB0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1404F5274 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaGetDmaGuardEnabled(_BYTE *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // r8
  _BYTE *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r9
  unsigned __int16 v8; // bx
  __int128 v10; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v11; // [rsp+38h] [rbp-D0h]
  __int128 v12; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v13; // [rsp+58h] [rbp-B0h]
  _BYTE v14[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v15[2064]; // [rsp+78h] [rbp-90h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v2 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v12, 1, (__int64)v14, 8LL);
  v3 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v10, 2, (__int64)v15, 1032LL);
  v4 = *((_QWORD *)&v11 + 1);
  v5 = v3;
  v6 = *((_QWORD *)&v13 + 1);
  *v2 = 0LL;
  *(_DWORD *)v2 = 20;
  v8 = HvcallInitiateHypercall(123, v6, v4, v7);
  if ( !v8 )
    *a1 = *v5;
  HvlpReleaseHypercallPage((__int64)&v10);
  HvlpReleaseHypercallPage((__int64)&v12);
  return HvlpHvToNtStatus(v8);
}
