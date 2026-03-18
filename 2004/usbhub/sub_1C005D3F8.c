/*
 * XREFs of sub_1C005D3F8 @ 0x1C005D3F8
 * Callers:
 *     sub_1C005D898 @ 0x1C005D898 (sub_1C005D898.c)
 * Callees:
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C005D184 @ 0x1C005D184 (sub_1C005D184.c)
 *     sub_1C005DB5C @ 0x1C005DB5C (sub_1C005DB5C.c)
 *     sub_1C005DD9C @ 0x1C005DD9C (sub_1C005DD9C.c)
 */

__int64 __fastcall sub_1C005D3F8(int *a1)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned __int16 v5; // r9
  unsigned __int8 v6; // dl
  int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+28h] [rbp-10h]
  PVOID P; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  Handle = 0LL;
  P = 0LL;
  v2 = sub_1C005D184(&P);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
      goto LABEL_14;
    v5 = 13;
    goto LABEL_4;
  }
  v2 = sub_1C005DB5C(v3, P, &Handle);
  v4 = v2;
  if ( v2 >= 0 )
  {
    v2 = sub_1C005DD9C(Handle);
    v4 = v2;
    if ( v2 >= 0 )
    {
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
      {
        v9 = *a1;
        sub_1C002E188((__int64)DeviceObject->DeviceExtension, 4u, 1u, 0x10u, (__int64)&unk_1C0065940, v9);
      }
    }
    else if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      v5 = 15;
      v6 = 4;
      goto LABEL_5;
    }
  }
  else if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    v5 = 14;
LABEL_4:
    v6 = 2;
LABEL_5:
    v8 = v2;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, v6, 1u, v5, (__int64)&unk_1C0065940, v8);
  }
LABEL_14:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Handle )
    ZwClose(Handle);
  return v4;
}
