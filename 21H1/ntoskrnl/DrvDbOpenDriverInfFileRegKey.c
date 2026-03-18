/*
 * XREFs of DrvDbOpenDriverInfFileRegKey @ 0x1406B0364
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x1406B01F0 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x1406B0740 (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x14071A04C (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140979114 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1406ADA5C (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverInfFileRegKey(__int64 *a1, __int64 a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0LL, 3u, a2, a3, a4, a5, a6, 0LL);
}
