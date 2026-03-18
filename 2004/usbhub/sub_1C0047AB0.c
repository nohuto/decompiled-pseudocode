/*
 * XREFs of sub_1C0047AB0 @ 0x1C0047AB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 */

_UNKNOWN **__fastcall sub_1C0047AB0(__int64 a1, __int64 a2, _BYTE *a3, int a4)
{
  _UNKNOWN **result; // rax
  __int64 v8; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      result = (_UNKNOWN **)sub_1C003B2A0(
                              DeviceObject->DeviceExtension,
                              a2,
                              (_DWORD)a3,
                              38,
                              (__int64)&unk_1C0063940,
                              a2);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    {
      LODWORD(v8) = a4;
      result = (_UNKNOWN **)sub_1C002E188(
                              (__int64)DeviceObject->DeviceExtension,
                              0,
                              1u,
                              0x27u,
                              (__int64)&unk_1C0063940,
                              v8);
    }
  }
  if ( *a3 )
  {
    result = (_UNKNOWN **)sub_1C0011220(a1);
    *((_DWORD *)result + 358) |= 0x2000u;
  }
  return result;
}
