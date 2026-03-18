/*
 * XREFs of _CmIsLocalMachineContainer @ 0x14075DD4C
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x140684F18 (PiDcHandleCustomDeviceEvent.c)
 *     _CmGetDeviceContainerMappedProperty @ 0x1406D991C (_CmGetDeviceContainerMappedProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403CDC90 (_wcsicmp.c)
 *     _CmGetDeviceRegProp @ 0x1406AFC70 (_CmGetDeviceRegProp.c)
 */

bool __fastcall CmIsLocalMachineContainer(__int64 a1, const wchar_t *a2)
{
  char v2; // bl
  int v5; // [rsp+40h] [rbp-78h] BYREF
  _DWORD v6[3]; // [rsp+44h] [rbp-74h] BYREF
  wchar_t Str1[40]; // [rsp+50h] [rbp-68h] BYREF

  v2 = 0;
  v5 = 78;
  v6[0] = 0;
  if ( (int)CmGetDeviceRegProp(a1, (__int64)L"HTREE\\ROOT\\0", 0LL, 37, (__int64)v6, (__int64)Str1, (__int64)&v5, 0) >= 0 )
  {
    Str1[38] = 0;
    return wcsicmp(Str1, a2) == 0;
  }
  return v2;
}
