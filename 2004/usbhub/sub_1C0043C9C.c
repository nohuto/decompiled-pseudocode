/*
 * XREFs of sub_1C0043C9C @ 0x1C0043C9C
 * Callers:
 *     sub_1C001A964 @ 0x1C001A964 (sub_1C001A964.c)
 *     sub_1C003D4C8 @ 0x1C003D4C8 (sub_1C003D4C8.c)
 *     sub_1C0043AE0 @ 0x1C0043AE0 (sub_1C0043AE0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C002E62C @ 0x1C002E62C (sub_1C002E62C.c)
 *     sub_1C0039140 @ 0x1C0039140 (sub_1C0039140.c)
 */

_DWORD *__fastcall sub_1C0043C9C(__int64 a1)
{
  unsigned int i; // edi
  _DWORD *result; // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  _DWORD *v6; // rbx
  __int64 v7; // rax

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
      if ( *((_BYTE *)v6 + 2740) )
      {
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
          sub_1C002E62C(
            (__int64)DeviceObject->DeviceExtension,
            *((_QWORD *)v6 + 148),
            3u,
            0x18u,
            (__int64)&unk_1C0062F40,
            *((_QWORD *)v6 + 148));
        v7 = *((_QWORD *)v6 + 349);
        if ( v7 )
        {
          *(_QWORD *)(v7 + 56) = 1LL;
          *(_DWORD *)(*((_QWORD *)v6 + 349) + 48LL) = 0;
          IofCompleteRequest(*((PIRP *)v6 + 349), 0);
        }
        sub_1C0039140(v5);
        sub_1C000FD80(a1, 2, 1380861000, *((unsigned __int8 *)v6 + 2741), v5);
        *((_BYTE *)v6 + 2741) = 0;
      }
    }
  }
  return result;
}
