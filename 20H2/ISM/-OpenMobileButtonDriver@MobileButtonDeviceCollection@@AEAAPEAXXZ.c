/*
 * XREFs of ?OpenMobileButtonDriver@MobileButtonDeviceCollection@@AEAAPEAXXZ @ 0x180098968
 * Callers:
 *     ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x1800989D4 (-SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?GetDevicePath@MobileButtonDeviceCollection@@AEAAPEAGXZ @ 0x180097A28 (-GetDevicePath@MobileButtonDeviceCollection@@AEAAPEAGXZ.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::OpenMobileButtonDriver(MobileButtonDeviceCollection *this)
{
  const WCHAR *DevicePath; // rax
  WCHAR *v2; // rdi
  HANDLE FileW; // rbx
  const struct std::nothrow_t *v5; // rdx

  DevicePath = MobileButtonDeviceCollection::GetDevicePath(this);
  v2 = (WCHAR *)DevicePath;
  if ( !DevicePath )
    return -1LL;
  FileW = CreateFileW(DevicePath, 0xC0000000, 3u, 0LL, 3u, 0, 0LL);
  operator delete(v2, v5);
  return (__int64)FileW;
}
