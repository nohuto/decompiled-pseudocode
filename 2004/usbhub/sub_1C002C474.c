/*
 * XREFs of sub_1C002C474 @ 0x1C002C474
 * Callers:
 *     sub_1C002C5C0 @ 0x1C002C5C0 (sub_1C002C5C0.c)
 *     sub_1C002CA30 @ 0x1C002CA30 (sub_1C002CA30.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C0038B7C @ 0x1C0038B7C (sub_1C0038B7C.c)
 */

void __fastcall sub_1C002C474(__int64 a1)
{
  _DWORD *v2; // rbx
  int v3; // eax
  int v4; // r10d
  int v5; // [rsp+58h] [rbp+10h] BYREF
  int v6; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0;
  v2 = sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 31, (__int64)&unk_1C0062088);
  if ( *((_QWORD *)v2 + 328) )
  {
    v5 = 0;
    v3 = sub_1C0038B7C(a1, &v5, &v6);
    sub_1C000FD80(a1, 8, 1752396916, 0LL, v3);
    if ( v4 >= 0 )
    {
      if ( (v5 & 1) != 0 )
      {
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
        {
          if ( LOWORD(DeviceObject->DeviceType) )
            sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 32, (__int64)&unk_1C0062088);
        }
        v2[762] = 100;
      }
      else
      {
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
          sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 33, (__int64)&unk_1C0062088);
        v2[762] = 500;
      }
    }
  }
  else
  {
    v2[762] = 0;
  }
}
