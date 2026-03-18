/*
 * XREFs of HvlUnregisterDeviceId @ 0x1405491B0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14039DD80 (HvcallFastExtended.c)
 *     HvlpHvToNtStatus @ 0x14054CA70 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlUnregisterDeviceId(unsigned __int64 a1)
{
  __int64 v2; // rax
  _QWORD v3[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 > 0x1FFFFFFFFFFFFFFFLL )
    return 3221225485LL;
  v3[0] = -1LL;
  v3[1] = a1;
  v2 = HvcallFastExtended(65667LL, (__int64)v3, 0x10u, 0LL, 0);
  return HvlpHvToNtStatus(v2);
}
