/*
 * XREFs of HvlSetRootFaultReportingReady @ 0x1403EC110
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14038CDD0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x1404F5274 (HvlpHvToNtStatus.c)
 */

__int64 HvlSetRootFaultReportingReady()
{
  __int64 v0; // rax
  _OWORD v2[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v3; // [rsp+60h] [rbp-28h]

  memset(v2, 0, sizeof(v2));
  v3 = 0LL;
  LODWORD(v2[0]) = 32;
  v0 = HvcallFastExtended(65647LL, (__int64)v2, 0x28u, 0, 0);
  return HvlpHvToNtStatus(v0);
}
