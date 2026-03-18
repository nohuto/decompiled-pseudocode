/*
 * XREFs of _CmGetDeviceInterfaceClassGuidString @ 0x1406AD2E4
 * Callers:
 *     _CmGetDeviceInterfaceClassGuid @ 0x1406AD334 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x140752A20 (_CmCreateDeviceInterfaceWorker.c)
 * Callees:
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1406AAB3C (_CmGetDeviceInterfaceSubkeyPath.c)
 */

NTSTATUS __fastcall CmGetDeviceInterfaceClassGuidString(__int64 a1, const WCHAR *a2, wchar_t *a3)
{
  NTSTATUS result; // eax

  result = CmGetDeviceInterfaceSubkeyPath(a1, a2, 1, a3, 0LL, 0);
  if ( !result )
    return -1073741595;
  if ( result == -1073741789 )
  {
    a3[38] = 0;
    return 0;
  }
  return result;
}
