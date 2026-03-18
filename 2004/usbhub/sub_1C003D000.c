/*
 * XREFs of sub_1C003D000 @ 0x1C003D000
 * Callers:
 *     sub_1C000CF10 @ 0x1C000CF10 (sub_1C000CF10.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C002E62C @ 0x1C002E62C (sub_1C002E62C.c)
 *     sub_1C003D218 @ 0x1C003D218 (sub_1C003D218.c)
 */

_DWORD *__fastcall sub_1C003D000(__int64 a1)
{
  unsigned int i; // esi
  _DWORD *result; // rax
  __int64 v4; // rax
  __int64 v5; // rbp
  _DWORD *v6; // rax
  __int64 v7; // rdx
  _DWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx

  sub_1C000F050(a1)[1316] = 0;
  for ( i = 1; ; ++i )
  {
    result = sub_1C000F050(a1);
    if ( i > *((unsigned __int8 *)result + 2938) )
      break;
    v4 = sub_1C0016CA0(a1, i);
    v5 = *(_QWORD *)(v4 + 392);
    if ( v5 )
    {
      v6 = sub_1C0011220(*(_QWORD *)(v4 + 392));
      v8 = v6;
      if ( *((_BYTE *)v6 + 2740) )
      {
        if ( *((_QWORD *)v6 + 348) )
        {
          if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
          {
            if ( LOWORD(DeviceObject->DeviceType) )
              sub_1C002E62C((__int64)DeviceObject->DeviceExtension, v7, 3u, 0x14u, (__int64)&unk_1C0062E08, a1);
          }
          sub_1C000FD80(a1, 4, 1380860721, 0LL, a1);
          sub_1C003D218(v9, v5);
          *(_DWORD *)(*((_QWORD *)v8 + 348) + 48LL) = 0;
          IofCompleteRequest(*((PIRP *)v8 + 348), 0);
          *((_QWORD *)v8 + 348) = 0LL;
        }
        else if ( (v6[355] & 4) != 0 )
        {
          if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
            sub_1C002E62C((__int64)DeviceObject->DeviceExtension, v7, 3u, 0x15u, (__int64)&unk_1C0062E08, a1);
          sub_1C000FD80(a1, 4, 1380860722, 0LL, a1);
          sub_1C003D218(v10, v5);
          *(_DWORD *)(*((_QWORD *)v8 + 349) + 48LL) = 0;
          IofCompleteRequest(*((PIRP *)v8 + 349), 0);
        }
        else if ( v6[196] == 2 )
        {
          *((_BYTE *)v6 + 2741) = 1;
        }
      }
    }
  }
  return result;
}
