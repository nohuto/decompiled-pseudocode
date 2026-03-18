/*
 * XREFs of DrvDbOpenDriverInfFileRegKey @ 0x140789AA4
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x140789110 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x140789970 (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140A2E90C (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x140A2FC40 (DrvDbSetDriverInfFileMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1407827F0 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverInfFileRegKey(__int64 *a1, __int64 a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0LL, 3u, a2, a3, a4, a5, a6, 0LL);
}
