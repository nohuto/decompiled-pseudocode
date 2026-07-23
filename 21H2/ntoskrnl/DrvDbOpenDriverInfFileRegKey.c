/*
 * XREFs of DrvDbOpenDriverInfFileRegKey @ 0x14062FE24
 * Callers:
 *     DrvDbGetDriverInfFileMappedProperty @ 0x14062FE6C (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbDispatchDriverInfFile @ 0x140630540 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x14072E16C (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x14097DB84 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x140635220 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverInfFileRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 3, a2, a3, a4, a5, a6, 0LL);
}
