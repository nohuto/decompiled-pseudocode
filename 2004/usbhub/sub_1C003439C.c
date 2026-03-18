/*
 * XREFs of sub_1C003439C @ 0x1C003439C
 * Callers:
 *     sub_1C0038F30 @ 0x1C0038F30 (sub_1C0038F30.c)
 * Callees:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C003439C(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int v7; // edi
  __int64 result; // rax
  __int64 v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+28h] [rbp-30h]

  v7 = a2;
  sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v12 = v7;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x4Du, (__int64)&unk_1C0062098, v12);
  }
  result = sub_1C0016CA0(a1, v7);
  if ( result )
    result = sub_1C0007840(a1, result, 4, a4, a3, 2, a6, 0LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
    {
      LODWORD(v11) = v7;
      return sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x4Eu, (__int64)&unk_1C0062098, v11);
    }
  }
  return result;
}
