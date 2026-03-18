/*
 * XREFs of DrvDbOpenDriverFileRegKey @ 0x140979CC8
 * Callers:
 *     DrvDbGetDriverFileMappedProperty @ 0x140978DF4 (DrvDbGetDriverFileMappedProperty.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x140978F88 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x140979D10 (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbDispatchDriverFile @ 0x14097A4F0 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1406ADA5C (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverFileRegKey(__int64 *a1, __int64 a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0LL, 4u, a2, a3, a4, a5, a6, 0LL);
}
