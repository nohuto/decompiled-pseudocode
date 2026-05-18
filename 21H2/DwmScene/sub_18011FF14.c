/*
 * XREFs of sub_18011FF14 @ 0x18011FF14
 * Callers:
 *     sub_18011CC9C @ 0x18011CC9C (sub_18011CC9C.c)
 * Callees:
 *     sub_18011EA6C @ 0x18011EA6C (sub_18011EA6C.c)
 *     sub_18011F95C @ 0x18011F95C (sub_18011F95C.c)
 */

__int64 __fastcall sub_18011FF14(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 **v4; // r14
  _QWORD *v5; // rbx
  __int64 result; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 != a3 )
  {
    v4 = (__int64 **)(a1 + 1);
    v5 = a2;
    do
    {
      sub_18011EA6C((__int64)v4, **v4, (__int64)(v5 + 2));
      result = sub_18011F95C(a1, (__int64)v8, (char *)(**v4 + 16), **v4);
      v5 = (_QWORD *)*v5;
    }
    while ( v5 != a3 );
  }
  return result;
}
