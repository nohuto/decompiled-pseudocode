/*
 * XREFs of NtGdiGetCertificateSize @ 0x1C0141E60
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00BBFE0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     SafelyCopyKernelModeDataToUserModeData_unsigned_long_ @ 0x1C00C56F4 (SafelyCopyKernelModeDataToUserModeData_unsigned_long_.c)
 *     GetCertificateLengthAndMonitorPDO @ 0x1C014185C (GetCertificateLengthAndMonitorPDO.c)
 */

__int64 __fastcall NtGdiGetCertificateSize(struct _UNICODE_STRING *a1, int a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int CertificateLengthAndMonitorPDO; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+48h] [rbp+20h] BYREF

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v7 = 0;
  if ( (int)result >= 0 )
  {
    v13 = 0;
    CertificateLengthAndMonitorPDO = GetCertificateLengthAndMonitorPDO(a1, a2, &v13, 0LL);
    if ( CertificateLengthAndMonitorPDO >= 0 )
      CertificateLengthAndMonitorPDO = SafelyCopyKernelModeDataToUserModeData_unsigned_long_(a3, &v13);
    UserSessionSwitchLeaveCrit(v9, v8, v11, v12);
    if ( CertificateLengthAndMonitorPDO < 0 )
      return (unsigned int)CertificateLengthAndMonitorPDO;
    return v7;
  }
  return result;
}
