/*
 * XREFs of CmpCreateTemporaryHive @ 0x140716560
 * Callers:
 *     CmSaveKey @ 0x140714DEC (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14087829C (CmSaveMergedKeys.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpCreateHive @ 0x140688850 (CmpCreateHive.c)
 */

ULONG_PTR __fastcall CmpCreateTemporaryHive(_OWORD *a1, _OWORD *a2)
{
  __int64 v4; // rsi
  ULONG_PTR v6[2]; // [rsp+60h] [rbp-1D8h] BYREF
  _BYTE v7[432]; // [rsp+70h] [rbp-1C8h] BYREF

  v4 = 0LL;
  v6[0] = 0LL;
  memset(v7, 0, sizeof(v7));
  if ( (int)CmpCreateHive(v6, 0, 1u, 0, 0LL, 0LL, 0LL, 0x1000000, a1, a2, 0LL, (__int64)v7) >= 0 )
    return v6[0];
  return v4;
}
