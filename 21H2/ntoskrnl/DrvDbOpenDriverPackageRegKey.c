/*
 * XREFs of DrvDbOpenDriverPackageRegKey @ 0x140788A34
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1407881D0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1407886D0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140A2EAB8 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140A2FD74 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1407827F0 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverPackageRegKey(__int64 *a1, __int64 a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0LL, 2u, a2, a3, a4, a5, a6, 0LL);
}
