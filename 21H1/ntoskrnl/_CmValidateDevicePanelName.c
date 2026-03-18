/*
 * XREFs of _CmValidateDevicePanelName @ 0x140797DE8
 * Callers:
 *     _PnpDispatchDevicePanel @ 0x140797D50 (_PnpDispatchDevicePanel.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x140973D50 (_CmGetDevicePanelRegKeyPath.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _CmSplitDevicePanelId @ 0x140797E48 (_CmSplitDevicePanelId.c)
 */

__int64 __fastcall CmValidateDevicePanelName(__int64 a1, const wchar_t *a2)
{
  __int64 result; // rax
  GUID Guid; // [rsp+28h] [rbp-20h] BYREF

  Guid = 0LL;
  result = CmSplitDevicePanelId(a2, &Guid);
  if ( (int)result < 0 )
    return 3221225523LL;
  return result;
}
