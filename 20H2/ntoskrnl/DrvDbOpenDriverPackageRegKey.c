/*
 * XREFs of DrvDbOpenDriverPackageRegKey @ 0x1406E54C0
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1406E5160 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406E61E8 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1407222DC (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140980410 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1406E5508 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverPackageRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 2, a2, a3, a4, a5, a6, 0LL);
}
