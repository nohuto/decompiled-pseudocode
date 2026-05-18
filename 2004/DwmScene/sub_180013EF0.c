/*
 * XREFs of sub_180013EF0 @ 0x180013EF0
 * Callers:
 *     sub_180013BE8 @ 0x180013BE8 (sub_180013BE8.c)
 *     sub_180014570 @ 0x180014570 (sub_180014570.c)
 *     sub_1800148E0 @ 0x1800148E0 (sub_1800148E0.c)
 *     sub_180014BC8 @ 0x180014BC8 (sub_180014BC8.c)
 *     sub_1800D6F28 @ 0x1800D6F28 (sub_1800D6F28.c)
 *     sub_1800FA8A0 @ 0x1800FA8A0 (sub_1800FA8A0.c)
 * Callees:
 *     sub_180014120 @ 0x180014120 (sub_180014120.c)
 */

__int64 **__fastcall sub_180013EF0(__int64 **a1, __int64 *a2, __int64 *a3, char a4)
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
    if ( (unsigned __int8)sub_180014120(&v11, v10) )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
