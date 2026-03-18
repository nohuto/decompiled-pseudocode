/*
 * XREFs of sub_1C005B07C @ 0x1C005B07C
 * Callers:
 *     sub_1C005B7C4 @ 0x1C005B7C4 (sub_1C005B7C4.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C00447AC @ 0x1C00447AC (sub_1C00447AC.c)
 *     sub_1C005AF90 @ 0x1C005AF90 (sub_1C005AF90.c)
 *     sub_1C005B184 @ 0x1C005B184 (sub_1C005B184.c)
 *     sub_1C005BDC4 @ 0x1C005BDC4 (sub_1C005BDC4.c)
 */

__int64 __fastcall sub_1C005B07C(__int64 a1, unsigned int a2, char *a3)
{
  PDEVICE_OBJECT v5; // rcx
  int v6; // ebx
  int v7; // r8d
  HANDLE Handle; // [rsp+40h] [rbp-48h] BYREF
  wchar_t Dest[16]; // [rsp+48h] [rbp-40h] BYREF

  Handle = 0LL;
  wcscpy(Dest, L"uxd_port_nnn");
  sub_1C00447AC(Dest, 0x1AuLL, L"uxd_port_%3.3d", a2);
  v6 = sub_1C005B184(a1, &Handle);
  if ( v6 >= 0 )
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      v5 = DeviceObject;
      if ( LOWORD(DeviceObject->DeviceType) )
        sub_1C005BDC4(DeviceObject->DeviceExtension, 0, v7, 10, (__int64)&unk_1C00654F0, (__int64)L"uxd", (__int64)Dest);
    }
    v6 = sub_1C005AF90((__int64)v5, Handle, Dest, a3);
    ZwClose(Handle);
  }
  return (unsigned int)v6;
}
