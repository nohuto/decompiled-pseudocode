/*
 * XREFs of DrvDbOpenDriverPackageRegKey @ 0x1406ADA14
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1406AD870 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406AE73C (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14071A334 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x1409792A0 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1406ADA5C (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverPackageRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 2, a2, a3, a4, a5, a6, 0LL);
}
