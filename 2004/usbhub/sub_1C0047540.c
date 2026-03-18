/*
 * XREFs of sub_1C0047540 @ 0x1C0047540
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 */

_DWORD *__fastcall sub_1C0047540(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _DWORD *result; // rax
  __int64 v8; // [rsp+28h] [rbp-10h]

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C003B2A0(DeviceObject->DeviceExtension, a2, a3, 20, (__int64)&unk_1C0063940, a2);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    {
      LODWORD(v8) = a4;
      sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x15u, (__int64)&unk_1C0063940, v8);
    }
  }
  *((_QWORD *)sub_1C0011220(a1) + 277) = a3;
  result = sub_1C0011220(a1);
  result[553] = a4;
  return result;
}
