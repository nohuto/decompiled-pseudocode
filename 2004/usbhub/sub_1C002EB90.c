/*
 * XREFs of sub_1C002EB90 @ 0x1C002EB90
 * Callers:
 *     sub_1C0031080 @ 0x1C0031080 (sub_1C0031080.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002EC68 @ 0x1C002EC68 (sub_1C002EC68.c)
 */

_DWORD *__fastcall sub_1C002EB90(__int64 a1)
{
  unsigned __int16 i; // bx
  _DWORD *result; // rax
  __int64 v4; // rsi
  _DWORD *v5; // rax

  sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xEu, (__int64)&unk_1C0062C18);
  for ( i = 1; ; ++i )
  {
    result = sub_1C000F050(a1);
    if ( i > *((unsigned __int8 *)result + 2938) )
      break;
    v4 = sub_1C0016CA0(a1, i);
    if ( v4 )
    {
      v5 = sub_1C000F050(a1);
      sub_1C002EC68(a1, v4, 2LL, v5 + 346);
    }
  }
  return result;
}
