/*
 * XREFs of sub_180013FD0 @ 0x180013FD0
 * Callers:
 *     sub_180013CC8 @ 0x180013CC8 (sub_180013CC8.c)
 *     sub_180014650 @ 0x180014650 (sub_180014650.c)
 *     sub_1800149C0 @ 0x1800149C0 (sub_1800149C0.c)
 *     sub_180014CA8 @ 0x180014CA8 (sub_180014CA8.c)
 *     sub_1800DC7F8 @ 0x1800DC7F8 (sub_1800DC7F8.c)
 *     sub_180100170 @ 0x180100170 (sub_180100170.c)
 * Callees:
 *     sub_180014200 @ 0x180014200 (sub_180014200.c)
 */

__int64 **__fastcall sub_180013FD0(__int64 **a1, __int64 *a2, __int64 *a3, char a4)
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
    if ( (unsigned __int8)sub_180014200(&v11, v10) )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
