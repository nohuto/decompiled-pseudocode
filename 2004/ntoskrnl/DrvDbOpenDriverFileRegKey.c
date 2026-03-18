/*
 * XREFs of DrvDbOpenDriverFileRegKey @ 0x14097B068
 * Callers:
 *     DrvDbGetDriverFileMappedProperty @ 0x14097A194 (DrvDbGetDriverFileMappedProperty.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x14097A328 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x14097B0B0 (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbDispatchDriverFile @ 0x14097B890 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1406C3DD8 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverFileRegKey(__int64 *a1, __int64 a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0LL, 4u, a2, a3, a4, a5, a6, 0LL);
}
