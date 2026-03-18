/*
 * XREFs of _CheckPTPPointerDeviceConfiguration@0 @ 0xD577A
 * Callers:
 *     _CheckPointerDeviceConfiguration@0 @ 0xD56E0 (_CheckPointerDeviceConfiguration@0.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall CheckPTPPointerDeviceConfiguration()
{
  int v1; // [esp+0h] [ebp-4h] BYREF

  v1 = 1;
  _GetPrecisionTouchPadConfiguration(0);
  AccessPTPEnabledStatus(0, 1, &v1);
  _gPTPEnabled = v1;
  return CPTPProcessor::EnvironmentChanged(v1);
}
