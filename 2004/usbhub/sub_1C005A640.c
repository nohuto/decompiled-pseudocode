/*
 * XREFs of sub_1C005A640 @ 0x1C005A640
 * Callers:
 *     sub_1C005A710 @ 0x1C005A710 (sub_1C005A710.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 *     sub_1C00447AC @ 0x1C00447AC (sub_1C00447AC.c)
 */

NTSTATUS __fastcall sub_1C005A640(__int64 a1, const WCHAR *a2, unsigned int a3)
{
  int v4; // edx
  int v5; // r8d
  WCHAR ValueName[16]; // [rsp+30h] [rbp-38h] BYREF

  wcscpy(ValueName, L"uxd_port_nnn");
  sub_1C00447AC(ValueName, 0x1AuLL, L"uxd_port_%3.3d", a3);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C003B2A0(DeviceObject->DeviceExtension, v4, v5, 29, (__int64)&unk_1C00654F0, (__int64)ValueName);
  return RtlDeleteRegistryValue(0x40000000u, a2, ValueName);
}
