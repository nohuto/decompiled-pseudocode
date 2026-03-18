/*
 * XREFs of HvlPrepareForSecureHibernate @ 0x1404F6574
 * Callers:
 *     PopSaveHiberContext @ 0x1409967A0 (PopSaveHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E51E8 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x1404F0CA0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F1890 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlPrepareForSecureHibernate(_OWORD *a1)
{
  _OWORD *v2; // rax
  __int128 v4; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v5; // [rsp+30h] [rbp-98h]
  _QWORD v6[14]; // [rsp+40h] [rbp-88h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v2 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v4, 1, 0LL, 88LL);
  *v2 = *a1;
  v2[1] = a1[1];
  v2[2] = a1[2];
  v2[3] = a1[3];
  v2[4] = a1[4];
  memset(v6, 0, 0x68uLL);
  v6[1] = *((_QWORD *)&v5 + 1) >> 12;
  LODWORD(a1) = VslpEnterIumSecureMode(2u, 259, 0, (__int64)v6);
  HvlpReleaseHypercallPage((__int64)&v4);
  return (unsigned int)a1;
}
