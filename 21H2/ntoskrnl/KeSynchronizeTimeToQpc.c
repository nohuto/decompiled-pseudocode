/*
 * XREFs of KeSynchronizeTimeToQpc @ 0x140386AB0
 * Callers:
 *     HalpAcpiPreSleep @ 0x140995EFC (HalpAcpiPreSleep.c)
 * Callees:
 *     KiUpdateTimeAssist @ 0x1402AB2E0 (KiUpdateTimeAssist.c)
 */

__int64 __fastcall KeSynchronizeTimeToQpc(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  v3 = 0LL;
  return KiUpdateTimeAssist((__int64)&v2, (__int64)&v3, (__int64)&v3);
}
