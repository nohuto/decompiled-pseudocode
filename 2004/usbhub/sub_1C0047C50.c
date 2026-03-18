/*
 * XREFs of sub_1C0047C50 @ 0x1C0047C50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 */

_DWORD *__fastcall sub_1C0047C50(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  _DWORD *result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+28h] [rbp-10h]

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C003B2A0(DeviceObject->DeviceExtension, a2, (_DWORD)a3, 46, (__int64)&unk_1C0063940, a2);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    {
      LODWORD(v9) = a4;
      sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x2Fu, (__int64)&unk_1C0063940, v9);
    }
  }
  result = sub_1C0011220(a1);
  if ( a4 == 8 )
    v8 = *a3;
  else
    v8 = 0LL;
  *((_QWORD *)result + 361) = v8;
  return result;
}
