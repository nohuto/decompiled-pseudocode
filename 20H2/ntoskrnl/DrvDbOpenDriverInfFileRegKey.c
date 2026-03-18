/*
 * XREFs of DrvDbOpenDriverInfFileRegKey @ 0x1406E4E2C
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x1406E4E80 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x1406E6AD4 (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x140721EB0 (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140980284 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1406E5508 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverInfFileRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 3, a2, a3, a4, a5, a6, 0LL);
}
