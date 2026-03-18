/*
 * XREFs of sub_1C005D550 @ 0x1C005D550
 * Callers:
 *     sub_1C005D898 @ 0x1C005D898 (sub_1C005D898.c)
 * Callees:
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0051AFC @ 0x1C0051AFC (sub_1C0051AFC.c)
 *     sub_1C005BDC4 @ 0x1C005BDC4 (sub_1C005BDC4.c)
 *     sub_1C005CD1C @ 0x1C005CD1C (sub_1C005CD1C.c)
 *     sub_1C005DB5C @ 0x1C005DB5C (sub_1C005DB5C.c)
 *     sub_1C005DBD8 @ 0x1C005DBD8 (sub_1C005DBD8.c)
 */

__int64 __fastcall sub_1C005D550(_DWORD *a1, char a2)
{
  const wchar_t *v2; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  unsigned __int16 v7; // r9
  int v8; // eax
  __int64 v9; // r8
  wchar_t *v10; // rdi
  HANDLE Handle; // [rsp+70h] [rbp+18h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h]

  Handle = 0LL;
  P = 0LL;
  v2 = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Default";
  if ( !a2 )
    v2 = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN";
  v5 = sub_1C005DB5C(a1, v2, &Handle);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = sub_1C005DBD8(Handle);
    v10 = (wchar_t *)P;
    v6 = v8;
    if ( v8 >= 0 )
    {
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
        sub_1C005BDC4(
          (__int64)DeviceObject->DeviceExtension,
          4u,
          v9,
          0x20u,
          (__int64)&unk_1C0065940,
          v2,
          (const wchar_t *)P);
      ZwClose(Handle);
      Handle = 0LL;
      v6 = sub_1C005CD1C(a1, v10);
    }
    else if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      sub_1C0051AFC((__int64)DeviceObject->DeviceExtension, 3u, v9, 0x1Fu, (__int64)&unk_1C0065940, v2, v8);
    }
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  else
  {
    if ( a2 == 1 )
    {
      if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
        goto LABEL_18;
      v7 = 29;
      goto LABEL_7;
    }
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      v7 = 30;
LABEL_7:
      sub_1C002E188((__int64)DeviceObject->DeviceExtension, 4u, 1u, v7, (__int64)&unk_1C0065940, v5);
    }
  }
LABEL_18:
  if ( Handle )
    ZwClose(Handle);
  return v6;
}
