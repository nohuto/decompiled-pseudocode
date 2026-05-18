/*
 * XREFs of sub_1800BCF40 @ 0x1800BCF40
 * Callers:
 *     sub_1800B9E40 @ 0x1800B9E40 (sub_1800B9E40.c)
 *     sub_1800BB0E0 @ 0x1800BB0E0 (sub_1800BB0E0.c)
 *     sub_18010BED0 @ 0x18010BED0 (sub_18010BED0.c)
 * Callees:
 *     sub_1800BE2E8 @ 0x1800BE2E8 (sub_1800BE2E8.c)
 */

__int64 **__fastcall sub_1800BCF40(__int64 **a1, __int64 *a2, __int64 *a3, char a4)
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
    if ( (unsigned __int8)sub_1800BE2E8(&v11, v10) )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
