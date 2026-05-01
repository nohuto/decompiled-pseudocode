/*
 * XREFs of ?IsValid@MonitorInformation@KeyboardHosting@@QEAA_NXZ @ 0x1800B3394
 * Callers:
 *     ?HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800B2F00 (-HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 */

bool __fastcall KeyboardHosting::MonitorInformation::IsValid(HMONITOR *this)
{
  HMONITOR v1; // rcx
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF

  v1 = *this;
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  return GetMonitorInfoW(v1, &mi);
}
