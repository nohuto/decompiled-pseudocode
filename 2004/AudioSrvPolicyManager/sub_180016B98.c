/*
 * XREFs of sub_180016B98 @ 0x180016B98
 * Callers:
 *     sub_1800106D4 @ 0x1800106D4 (sub_1800106D4.c)
 *     sub_1800112C0 @ 0x1800112C0 (sub_1800112C0.c)
 *     sub_180015834 @ 0x180015834 (sub_180015834.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18002C120 @ 0x18002C120 (sub_18002C120.c)
 * Callees:
 *     sub_18001A074 @ 0x18001A074 (sub_18001A074.c)
 */

__int64 __fastcall sub_180016B98(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  unsigned int v3; // r9d
  int v4; // r10d
  __int64 v5; // rbx
  __int64 i; // r8
  __int64 v7; // rax

  v2 = *(int *)(a1 + 304);
  v3 = 0;
  v4 = 0;
  v5 = a1;
  if ( (int)v2 > 0 )
  {
    for ( i = 0LL; i < v2; ++i )
    {
      if ( i < 0 || v4 >= (int)v2 )
      {
        sub_18001A074(a1, a2);
        JUMPOUT(0x180016BF4LL);
      }
      ++v4;
      a1 = (unsigned int)a2;
      v7 = *(_QWORD *)(*(_QWORD *)(v5 + 296) + 8 * i);
      v3 += *(_DWORD *)(v7 + 4LL * (unsigned int)a2);
    }
  }
  return v3;
}
