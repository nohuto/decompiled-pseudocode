/*
 * XREFs of HvlEnterSleepState @ 0x1404F3400
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FFF0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F0CA0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F1890 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlEnterSleepState(int a1)
{
  __int16 v1; // bx
  _OWORD v3[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v4[16]; // [rsp+40h] [rbp-28h] BYREF

  memset(v3, 0, sizeof(v3));
  *(_DWORD *)HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v3, 1, (__int64)v4, 8LL) = a1;
  v1 = HvcallInitiateHypercall(132);
  HvlpReleaseHypercallPage((__int64)v3);
  return v1 != 0 ? 0xC0000001 : 0;
}
