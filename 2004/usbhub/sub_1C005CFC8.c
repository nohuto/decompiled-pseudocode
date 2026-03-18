/*
 * XREFs of sub_1C005CFC8 @ 0x1C005CFC8
 * Callers:
 *     sub_1C005D898 @ 0x1C005D898 (sub_1C005D898.c)
 * Callees:
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C005D9D8 @ 0x1C005D9D8 (sub_1C005D9D8.c)
 *     sub_1C005DB5C @ 0x1C005DB5C (sub_1C005DB5C.c)
 *     sub_1C005DD9C @ 0x1C005DD9C (sub_1C005DD9C.c)
 */

char __fastcall sub_1C005CFC8(__int64 a1)
{
  int v1; // eax
  unsigned __int16 v2; // r9
  int v3; // eax
  int v4; // edx
  int v5; // r8d
  __int64 v6; // rcx
  int v7; // edx
  int v8; // r8d
  __int64 v10; // [rsp+28h] [rbp-8h]
  int v11; // [rsp+28h] [rbp-8h]
  HANDLE Handle; // [rsp+48h] [rbp+18h] BYREF

  Handle = 0LL;
  v1 = sub_1C005DB5C(a1, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Default", &Handle);
  if ( v1 < 0 )
  {
    if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
      goto LABEL_18;
    v2 = 20;
    goto LABEL_4;
  }
  v3 = sub_1C005DD9C(Handle);
  if ( v3 >= 0 )
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
      sub_1C005D9D8(DeviceObject->DeviceExtension, v4, v5, 22);
  }
  else if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    v11 = v3;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 4u, 1u, 0x15u, (__int64)&unk_1C0065940, v11);
  }
  ZwClose(Handle);
  Handle = 0LL;
  v1 = sub_1C005DB5C(v6, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN", &Handle);
  if ( v1 >= 0 )
  {
    v1 = sub_1C005DD9C(Handle);
    if ( v1 >= 0 )
    {
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
        sub_1C005D9D8(DeviceObject->DeviceExtension, v7, v8, 25);
    }
    else if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      v2 = 24;
      goto LABEL_4;
    }
  }
  else if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    v2 = 23;
LABEL_4:
    LODWORD(v10) = v1;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 4u, 1u, v2, (__int64)&unk_1C0065940, v10);
  }
LABEL_18:
  if ( Handle )
    ZwClose(Handle);
  return 0;
}
