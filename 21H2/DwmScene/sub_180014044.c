/*
 * XREFs of sub_180014044 @ 0x180014044
 * Callers:
 *     sub_180013A88 @ 0x180013A88 (sub_180013A88.c)
 *     sub_180014CA8 @ 0x180014CA8 (sub_180014CA8.c)
 *     sub_180014EE0 @ 0x180014EE0 (sub_180014EE0.c)
 *     sub_18008EEA4 @ 0x18008EEA4 (sub_18008EEA4.c)
 *     sub_18009B848 @ 0x18009B848 (sub_18009B848.c)
 *     sub_18009CD10 @ 0x18009CD10 (sub_18009CD10.c)
 *     sub_1800C8214 @ 0x1800C8214 (sub_1800C8214.c)
 *     sub_1800C857C @ 0x1800C857C (sub_1800C857C.c)
 *     sub_180100170 @ 0x180100170 (sub_180100170.c)
 * Callees:
 *     sub_1800142D0 @ 0x1800142D0 (sub_1800142D0.c)
 */

__int64 **__fastcall sub_180014044(__int64 **a1, __int64 *a2, __int64 *a3, char a4)
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
    if ( (unsigned __int8)sub_1800142D0(&v11, v10) )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
