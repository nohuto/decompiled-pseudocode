/*
 * XREFs of _CmGetDeviceRegKeyPath @ 0x14066DBCC
 * Callers:
 *     _CmOpenDeviceRegKeyWorker @ 0x1406702F4 (_CmOpenDeviceRegKeyWorker.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1406D3C74 (PiDqGetRelativeObjectRegPath.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072975C (_CmDeleteDeviceRegKeyWorker.c)
 * Callees:
 *     _CmGetDeviceInstanceKeyPath @ 0x14066D034 (_CmGetDeviceInstanceKeyPath.c)
 *     _CmValidateDeviceName @ 0x14066DD50 (_CmValidateDeviceName.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1406CAA94 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x1406D41E0 (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x1406DAACC (_CmGetDeviceLogConfKeyPath.c)
 *     _CmGetDeviceControlKeyPath @ 0x14076D484 (_CmGetDeviceControlKeyPath.c)
 */

NTSTATUS __fastcall CmGetDeviceRegKeyPath(
        int a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t a7,
        _DWORD *a8)
{
  NTSTATUS result; // eax
  __int64 v13; // rcx
  int v14; // r9d
  int v15; // [rsp+20h] [rbp-28h]
  size_t cchDest; // [rsp+30h] [rbp-18h]

  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    return -1073741811;
  result = CmValidateDeviceName();
  if ( result < 0 )
    return result;
  if ( (unsigned __int8)a3 != 16 )
  {
    switch ( (unsigned __int8)a3 )
    {
      case 0x12u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceSoftwareKeyPath(a1, a2, a3, a4, a5, pszDest, cchDest, (__int64)a8);
      case 0x11u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceHardwareKeyPath(v13, a2, a3, a4, v15, pszDest, cchDest, (__int64)a8);
      case 0x13u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceControlKeyPath(v13, a2, a3, v14, v15, pszDest, cchDest, (__int64)a8);
      case 0x14u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceLogConfKeyPath(v13, a2, a3, v14, v15, pszDest, cchDest, (__int64)a8);
    }
    return -1073741811;
  }
  LODWORD(cchDest) = a7;
  return CmGetDeviceInstanceKeyPath(v13, a2, a3, a4, v15, pszDest, cchDest, a8);
}
