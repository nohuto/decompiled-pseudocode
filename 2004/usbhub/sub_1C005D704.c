/*
 * XREFs of sub_1C005D704 @ 0x1C005D704
 * Callers:
 *     sub_1C005D898 @ 0x1C005D898 (sub_1C005D898.c)
 * Callees:
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0051AFC @ 0x1C0051AFC (sub_1C0051AFC.c)
 *     sub_1C005D184 @ 0x1C005D184 (sub_1C005D184.c)
 *     sub_1C005DB5C @ 0x1C005DB5C (sub_1C005DB5C.c)
 *     sub_1C005DD9C @ 0x1C005DD9C (sub_1C005DD9C.c)
 */

void __fastcall sub_1C005D704(_DWORD *a1)
{
  int v2; // eax
  __int64 v3; // rcx
  wchar_t *v4; // rbx
  unsigned __int16 v5; // r9
  unsigned __int8 v6; // dl
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r8
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+30h] [rbp-28h]
  HANDLE Handle; // [rsp+70h] [rbp+18h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  Handle = 0LL;
  P = 0LL;
  v2 = sub_1C005D184(&P);
  v4 = (wchar_t *)P;
  if ( v2 < 0 )
  {
    if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
      goto LABEL_14;
    v5 = 33;
    v6 = 2;
    goto LABEL_4;
  }
  v7 = sub_1C005DB5C(v3, P, &Handle);
  if ( v7 >= 0 )
  {
    v2 = sub_1C005DD9C(Handle);
    if ( v2 >= 0 )
    {
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
      {
        v12 = 0;
        sub_1C0051AFC((__int64)DeviceObject->DeviceExtension, 4u, v9, 0x24u, (__int64)&unk_1C0065940, v4, v12);
      }
      *a1 &= ~0x80000000;
    }
    else if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      v5 = 35;
      v6 = 3;
LABEL_4:
      v10 = v2;
      sub_1C002E188((__int64)DeviceObject->DeviceExtension, v6, 1u, v5, (__int64)&unk_1C0065940, v10);
    }
  }
  else if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    v11 = v7;
    sub_1C0051AFC((__int64)DeviceObject->DeviceExtension, 4u, v8, 0x22u, (__int64)&unk_1C0065940, v4, v11);
  }
LABEL_14:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( Handle )
    ZwClose(Handle);
}
