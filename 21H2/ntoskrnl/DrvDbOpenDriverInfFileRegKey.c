/*
 * XREFs of DrvDbOpenDriverInfFileRegKey @ 0x14063B014
 * Callers:
 *     DrvDbGetDriverInfFileMappedProperty @ 0x14063B05C (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbDispatchDriverInfFile @ 0x14063B730 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x14072DCBC (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x14097D9A4 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x140640410 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverInfFileRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 3, a2, a3, a4, a5, a6, 0LL);
}
