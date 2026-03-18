/*
 * XREFs of CcIsThereDirtyData @ 0x1404E58B0
 * Callers:
 *     <none>
 * Callees:
 *     CcForEachPartition @ 0x140343DA0 (CcForEachPartition.c)
 */

BOOLEAN __stdcall CcIsThereDirtyData(PVPB Vpb)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  *(_QWORD *)&v2 = Vpb;
  BYTE8(v2) = 0;
  CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcIsThereDirtyDataHelper, (__int64)&v2, 1);
  return BYTE8(v2);
}
