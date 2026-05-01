/*
 * XREFs of sub_18003D7CC @ 0x18003D7CC
 * Callers:
 *     sub_18003D548 @ 0x18003D548 (sub_18003D548.c)
 * Callees:
 *     sub_18003D860 @ 0x18003D860 (sub_18003D860.c)
 */

__int64 __fastcall sub_18003D7CC(__int64 a1, __int64 a2, bool *a3)
{
  bool v5; // bl
  int IsEnabledForPackage3; // eax
  int v7; // ecx
  unsigned int v9; // eax
  _DWORD v10[6]; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+68h] [rbp+20h] BYREF

  v5 = 1;
  IsEnabledForPackage3 = QuirkIsEnabledForPackage3(a1, a2, 0LL, 1114113LL, v10);
  if ( IsEnabledForPackage3 < 0 )
  {
    v7 = (unsigned __int16)IsEnabledForPackage3;
    v9 = (unsigned __int16)IsEnabledForPackage3 | 0xC0070000;
    if ( v7 )
      v7 = v9;
LABEL_5:
    if ( v7 >= 0 )
    {
LABEL_6:
      *a3 = v5;
      return (unsigned int)v7;
    }
    return (unsigned int)v7;
  }
  if ( v10[0] )
  {
    v7 = 0;
    v5 = 0;
    goto LABEL_6;
  }
  v7 = sub_18003D860(a2, &v11);
  if ( v7 >= 0 )
  {
    v5 = v11 == 0;
    goto LABEL_5;
  }
  return (unsigned int)v7;
}
