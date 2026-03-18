/*
 * XREFs of sub_1C00479D0 @ 0x1C00479D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 */

_DWORD *__fastcall sub_1C00479D0(__int64 a1, __int64 a2, unsigned __int8 *a3, int a4)
{
  _DWORD *result; // rax
  __int16 v8; // bx
  __int64 v9; // [rsp+28h] [rbp-10h]

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C003B2A0(DeviceObject->DeviceExtension, a2, (_DWORD)a3, 36, (__int64)&unk_1C0063940, a2);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    {
      LODWORD(v9) = a4;
      sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x25u, (__int64)&unk_1C0063940, v9);
    }
  }
  result = (_DWORD *)*a3;
  if ( (_BYTE)result )
  {
    v8 = 2 * (_WORD)result;
    result = sub_1C0011220(a1);
    *((_WORD *)result + 718) = v8;
  }
  return result;
}
