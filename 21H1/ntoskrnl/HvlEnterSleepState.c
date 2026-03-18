/*
 * XREFs of HvlEnterSleepState @ 0x1404EF560
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlEnterSleepState(int a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r9
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  __int128 v7; // [rsp+30h] [rbp-38h]
  _BYTE v8[16]; // [rsp+40h] [rbp-28h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v2 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v6, 1, (__int64)v8, 8LL);
  v3 = *((_QWORD *)&v7 + 1);
  *(_DWORD *)v2 = a1;
  LOWORD(a1) = HvcallInitiateHypercall(132, v3, 0LL, v4);
  HvlpReleaseHypercallPage((__int64)&v6);
  return (_WORD)a1 != 0 ? 0xC0000001 : 0;
}
