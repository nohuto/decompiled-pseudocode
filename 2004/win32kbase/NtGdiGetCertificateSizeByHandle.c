/*
 * XREFs of NtGdiGetCertificateSizeByHandle @ 0x1C00C6440
 * Callers:
 *     <none>
 * Callees:
 *     SafelyCopyKernelModeDataToUserModeData_unsigned_long_ @ 0x1C00C6484 (SafelyCopyKernelModeDataToUserModeData_unsigned_long_.c)
 *     ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C00C6B58 (-GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 */

int __fastcall NtGdiGetCertificateSizeByHandle(COPM *a1, enum _DXGKMDT_CERTIFICATE_TYPE a2, __int64 a3)
{
  int result; // eax
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0;
  result = COPM::GetCertificateSize(a1, a1, a2, &v5);
  if ( result >= 0 )
  {
    result = SafelyCopyKernelModeDataToUserModeData_unsigned_long_(a3, &v5);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
