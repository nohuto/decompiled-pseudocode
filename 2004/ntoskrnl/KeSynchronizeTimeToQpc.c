/*
 * XREFs of KeSynchronizeTimeToQpc @ 0x140383B90
 * Callers:
 *     HalpAcpiPreSleep @ 0x14099269C (HalpAcpiPreSleep.c)
 * Callees:
 *     KiUpdateTimeAssist @ 0x1402F3CF8 (KiUpdateTimeAssist.c)
 */

__int64 __fastcall KeSynchronizeTimeToQpc(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  v3 = 0LL;
  return KiUpdateTimeAssist((__int64)&v2, (__int64)&v3, (__int64)&v3);
}
