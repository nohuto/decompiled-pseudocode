/*
 * XREFs of sub_18011A644 @ 0x18011A644
 * Callers:
 *     sub_1801173CC @ 0x1801173CC (sub_1801173CC.c)
 * Callees:
 *     sub_18011919C @ 0x18011919C (sub_18011919C.c)
 *     sub_18011A08C @ 0x18011A08C (sub_18011A08C.c)
 */

__int64 __fastcall sub_18011A644(_QWORD *a1, _QWORD *a2, _QWORD *a3)
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
      sub_18011919C((__int64)v4, **v4, (__int64)(v5 + 2));
      result = sub_18011A08C(a1, (__int64)v8, (char *)(**v4 + 16), **v4);
      v5 = (_QWORD *)*v5;
    }
    while ( v5 != a3 );
  }
  return result;
}
