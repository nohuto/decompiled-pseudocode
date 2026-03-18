/*
 * XREFs of sub_1C005A580 @ 0x1C005A580
 * Callers:
 *     sub_1C005A710 @ 0x1C005A710 (sub_1C005A710.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 *     sub_1C005A350 @ 0x1C005A350 (sub_1C005A350.c)
 */

__int64 __fastcall sub_1C005A580(__int64 a1, __int64 a2)
{
  int v2; // edx
  int v3; // r8d
  WCHAR ValueName[16]; // [rsp+30h] [rbp-38h] BYREF

  wcscpy(ValueName, L"VVVVPPPPRRRR");
  sub_1C005A350(a1, a2, ValueName);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C003B2A0(DeviceObject->DeviceExtension, v2, v3, 30, (__int64)&unk_1C00654F0, (__int64)ValueName);
  RtlDeleteRegistryValue(1u, L"usbhub\\uxd_control\\devices", ValueName);
  return 0LL;
}
