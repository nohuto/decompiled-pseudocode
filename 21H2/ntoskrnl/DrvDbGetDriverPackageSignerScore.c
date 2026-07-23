/*
 * XREFs of DrvDbGetDriverPackageSignerScore @ 0x140734F00
 * Callers:
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406306CC (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14072E454 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x14097DD10 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 * Callees:
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406306CC (DrvDbGetDriverPackageMappedProperty.c)
 */

__int64 __fastcall DrvDbGetDriverPackageSignerScore(_QWORD *a1, _WORD *a2, void *a3, wchar_t *a4)
{
  __int64 result; // rax
  int v5; // [rsp+40h] [rbp-18h] BYREF
  __int64 (*v6)[3]; // [rsp+44h] [rbp-14h] BYREF

  v5 = 0;
  LODWORD(v6) = 0;
  result = DrvDbGetDriverPackageMappedProperty(
             a1,
             a2,
             a3,
             (__int64)&DEVPKEY_DriverPackage_SignerScore,
             &v5,
             a4,
             4u,
             &v6);
  if ( (int)result >= 0 && (v5 != 7 || (_DWORD)v6 != 4) )
    return 3221225473LL;
  return result;
}
