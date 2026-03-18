/*
 * XREFs of DrvDbOpenDriverPackageRegKey @ 0x1406C3D90
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1406C3A30 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406C4AB8 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140714730 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x14097A640 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1406C3DD8 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverPackageRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 2, a2, a3, a4, a5, a6, 0LL);
}
