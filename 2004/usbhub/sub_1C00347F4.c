/*
 * XREFs of sub_1C00347F4 @ 0x1C00347F4
 * Callers:
 *     sub_1C003AEF8 @ 0x1C003AEF8 (sub_1C003AEF8.c)
 * Callees:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C00347F4(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  int v3; // edi
  __int64 result; // rax
  __int64 v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+28h] [rbp-30h]

  v3 = a2;
  sub_1C000FD80(a1, 512, 7562852, a3, a2);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v8 = v3;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x52u, (__int64)&unk_1C0062098, v8);
  }
  result = sub_1C0016CA0(a1, v3);
  if ( result )
    result = sub_1C0007840(a1, result, 8, a3, 0LL, 0, 0LL, 0LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
    {
      LODWORD(v7) = v3;
      return sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x53u, (__int64)&unk_1C0062098, v7);
    }
  }
  return result;
}
