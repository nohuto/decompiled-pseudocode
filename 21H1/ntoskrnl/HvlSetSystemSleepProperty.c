/*
 * XREFs of HvlSetSystemSleepProperty @ 0x1404F0E80
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlSetSystemSleepProperty(int a1, char a2, char a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int128 v10; // [rsp+20h] [rbp-88h] BYREF
  __int128 v11; // [rsp+30h] [rbp-78h]
  _BYTE v12[80]; // [rsp+40h] [rbp-68h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v6 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v10, 1, (__int64)v12, 40LL);
  v7 = *((_QWORD *)&v11 + 1);
  *(_DWORD *)v6 = 3;
  *((_DWORD *)v6 + 2) = a1;
  *((_BYTE *)v6 + 12) = a2;
  *((_BYTE *)v6 + 13) = a3;
  LOWORD(a1) = HvcallInitiateHypercall(111, v7, 0LL, v8);
  HvlpReleaseHypercallPage((__int64)&v10);
  return (_WORD)a1 != 0 ? 0xC0000001 : 0;
}
