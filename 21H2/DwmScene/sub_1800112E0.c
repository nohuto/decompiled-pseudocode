/*
 * XREFs of sub_1800112E0 @ 0x1800112E0
 * Callers:
 *     sub_180010D18 @ 0x180010D18 (sub_180010D18.c)
 *     sub_180012870 @ 0x180012870 (sub_180012870.c)
 *     sub_1800BAA58 @ 0x1800BAA58 (sub_1800BAA58.c)
 *     sub_180100BE0 @ 0x180100BE0 (sub_180100BE0.c)
 * Callees:
 *     sub_180011554 @ 0x180011554 (sub_180011554.c)
 */

__int64 **__fastcall sub_1800112E0(__int64 **a1, __int64 *a2, __int64 *a3, char a4)
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
    if ( (unsigned __int8)sub_180011554(&v11, v10) )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
