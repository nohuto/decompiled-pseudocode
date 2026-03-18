/*
 * XREFs of DrvDbOpenDriverFileRegKey @ 0x140980E38
 * Callers:
 *     DrvDbGetDriverFileMappedProperty @ 0x14097FF64 (DrvDbGetDriverFileMappedProperty.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x1409800F8 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x140980E80 (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbDispatchDriverFile @ 0x140981660 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1406E5508 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverFileRegKey(__int64 *a1, __int64 a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0LL, 4u, a2, a3, a4, a5, a6, 0LL);
}
