/*
 * XREFs of sub_1C0047D20 @ 0x1C0047D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 */

_UNKNOWN **__fastcall sub_1C0047D20(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4)
{
  _UNKNOWN **result; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  __int64 v10; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      result = (_UNKNOWN **)sub_1C003B2A0(
                              DeviceObject->DeviceExtension,
                              a2,
                              (_DWORD)a3,
                              30,
                              (__int64)&unk_1C0063940,
                              a2);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    {
      LODWORD(v10) = a4;
      result = (_UNKNOWN **)sub_1C002E188(
                              (__int64)DeviceObject->DeviceExtension,
                              0,
                              1u,
                              0x1Fu,
                              (__int64)&unk_1C0063940,
                              v10);
    }
  }
  if ( a4 >= 2 )
  {
    v8 = sub_1C0011220(a1);
    v8[358] &= ~0x200u;
    if ( *a3 )
    {
      v9 = sub_1C0011220(a1);
      v9[358] |= 0x400u;
      result = (_UNKNOWN **)sub_1C0011220(a1);
      *((_BYTE *)result + 1432) = a3[1];
    }
    else
    {
      result = (_UNKNOWN **)sub_1C0011220(a1);
      *((_DWORD *)result + 358) &= ~0x400u;
    }
  }
  return result;
}
