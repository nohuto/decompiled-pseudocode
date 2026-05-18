/*
 * XREFs of sub_180013F64 @ 0x180013F64
 * Callers:
 *     sub_1800139A8 @ 0x1800139A8 (sub_1800139A8.c)
 *     sub_180014BC8 @ 0x180014BC8 (sub_180014BC8.c)
 *     sub_180014E00 @ 0x180014E00 (sub_180014E00.c)
 *     sub_1800895D4 @ 0x1800895D4 (sub_1800895D4.c)
 *     sub_180095F78 @ 0x180095F78 (sub_180095F78.c)
 *     sub_180097440 @ 0x180097440 (sub_180097440.c)
 *     sub_1800C2944 @ 0x1800C2944 (sub_1800C2944.c)
 *     sub_1800C2CAC @ 0x1800C2CAC (sub_1800C2CAC.c)
 *     sub_1800FA8A0 @ 0x1800FA8A0 (sub_1800FA8A0.c)
 * Callees:
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 */

__int64 **__fastcall sub_180013F64(__int64 **a1, __int64 *a2, __int64 *a3, char a4)
{
  __int64 *i; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 **result; // rax
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  char v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = a4;
  for ( i = a2; i != a3; i += 2 )
  {
    v7 = i[1];
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v7 = i[1];
    }
    v8 = *i;
    v10[1] = v7;
    v10[0] = v8;
    if ( (unsigned __int8)sub_1800141F0(&v11, v10) )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
