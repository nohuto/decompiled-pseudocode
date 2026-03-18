/*
 * XREFs of KeSynchronizeTimeToQpc @ 0x1403917D0
 * Callers:
 *     HalpAcpiPreSleep @ 0x140A5072C (HalpAcpiPreSleep.c)
 * Callees:
 *     KiUpdateTimeAssist @ 0x14020F07C (KiUpdateTimeAssist.c)
 */

__int64 __fastcall KeSynchronizeTimeToQpc(LARGE_INTEGER a1)
{
  LARGE_INTEGER v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  v3 = 0LL;
  return KiUpdateTimeAssist(&v2, 1, (__int64)&v3, (__int64)&v3);
}
