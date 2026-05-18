/*
 * XREFs of sub_18006F0B8 @ 0x18006F0B8
 * Callers:
 *     sub_1800719A8 @ 0x1800719A8 (sub_1800719A8.c)
 *     sub_1800C7A24 @ 0x1800C7A24 (sub_1800C7A24.c)
 *     sub_1800CB840 @ 0x1800CB840 (sub_1800CB840.c)
 * Callees:
 *     sub_18006FB0C @ 0x18006FB0C (sub_18006FB0C.c)
 */

__int64 **__fastcall sub_18006F0B8(__int64 **a1, __int64 *a2, __int64 *a3, char a4)
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
    if ( (unsigned __int8)sub_18006FB0C(&v11, v10) )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
