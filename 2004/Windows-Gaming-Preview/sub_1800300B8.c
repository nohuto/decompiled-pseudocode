/*
 * XREFs of sub_1800300B8 @ 0x1800300B8
 * Callers:
 *     sub_18002DA10 @ 0x18002DA10 (sub_18002DA10.c)
 *     sub_18002FF60 @ 0x18002FF60 (sub_18002FF60.c)
 * Callees:
 *     sub_18000EC88 @ 0x18000EC88 (sub_18000EC88.c)
 *     sub_180030348 @ 0x180030348 (sub_180030348.c)
 */

__int64 __fastcall sub_1800300B8(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  HSTRING *v5; // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 16) )
  {
    v2 = 0LL;
    if ( *(_DWORD *)(a1 + 24) )
    {
      v3 = *(_QWORD *)(a1 + 8);
      while ( 1 )
      {
        v4 = *(_QWORD *)(v3 + 8 * v2);
        if ( v4 )
          break;
        v2 = (unsigned int)(v2 + 1);
        if ( (unsigned int)v2 >= *(_DWORD *)(a1 + 24) )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v4 = 0LL;
    }
    v7 = v4;
    while ( v7 )
    {
      v5 = (HSTRING *)sub_180030348(a1, &v7);
      WindowsDeleteString(*v5);
      *v5 = 0LL;
      sub_18000EC88((__int64)(v5 + 1));
    }
  }
  return sub_180032A0C(a1);
}
