/*
 * XREFs of DrvDbOpenDriverInfFileRegKey @ 0x1406C36FC
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x1406C3750 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x1406C53A4 (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x14071C3DC (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x14097A4B4 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1406C3DD8 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverInfFileRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 3, a2, a3, a4, a5, a6, 0LL);
}
