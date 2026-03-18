/*
 * XREFs of HvlpCondenseMicrocode @ 0x140891398
 * Callers:
 *     HvlUpdateMicrocodeDatabase @ 0x140891370 (HvlUpdateMicrocodeDatabase.c)
 * Callees:
 *     HvcallInitInputControl @ 0x140365AC0 (HvcallInitInputControl.c)
 *     HvcallFastExtended @ 0x14038FE30 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x1404F9154 (HvlpHvToNtStatus.c)
 */

__int64 HvlpCondenseMicrocode()
{
  unsigned __int16 v0; // ax
  __int64 v2; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v3[16]; // [rsp+40h] [rbp-38h] BYREF
  int v4; // [rsp+50h] [rbp-28h]

  v2 = 0LL;
  v4 = 1;
  HvcallInitInputControl(7, &v2);
  LODWORD(v2) = v2 | 0x10000;
  v0 = HvcallFastExtended(v2, (__int64)v3, 0x18u, 0, 0);
  return HvlpHvToNtStatus(v0);
}
