/*
 * XREFs of sub_1C002ED68 @ 0x1C002ED68
 * Callers:
 *     sub_1C0037328 @ 0x1C0037328 (sub_1C0037328.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002EC68 @ 0x1C002EC68 (sub_1C002EC68.c)
 */

_UNKNOWN **__fastcall sub_1C002ED68(__int64 a1)
{
  _DWORD *v2; // rbx
  _UNKNOWN **result; // rax
  unsigned __int16 i; // bx
  __int64 v5; // rsi
  _DWORD *v6; // rax

  v2 = sub_1C000F050(a1);
  result = &off_1C006B000;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    result = (_UNKNOWN **)sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xDu, (__int64)&unk_1C0062C18);
  if ( *((_BYTE *)v2 + 3008) )
  {
    for ( i = 1; ; ++i )
    {
      result = (_UNKNOWN **)sub_1C000F050(a1);
      if ( i > *((unsigned __int8 *)result + 2938) )
        break;
      v5 = sub_1C0016CA0(a1, i);
      if ( v5 )
      {
        v6 = sub_1C000F050(a1);
        sub_1C002EC68(a1, v5, 5, (__int64)(v6 + 346));
      }
    }
  }
  return result;
}
