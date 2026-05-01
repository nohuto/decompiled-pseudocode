/*
 * XREFs of sub_1800269AC @ 0x1800269AC
 * Callers:
 *     sub_1800268A8 @ 0x1800268A8 (sub_1800268A8.c)
 * Callees:
 *     sub_180026A54 @ 0x180026A54 (sub_180026A54.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180032190 @ 0x180032190 (sub_180032190.c)
 *     sub_18003C6F0 @ 0x18003C6F0 (sub_18003C6F0.c)
 */

__int64 __fastcall sub_1800269AC(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v6 = sub_180026A54();
  if ( v6 )
  {
    *a3 = v6;
    return 0;
  }
  else
  {
    v9 = sub_18003C6F0(a1, a2, &v11);
    v10 = v11;
    v7 = v9;
    if ( v9 >= 0 )
    {
      sub_180032190(a1 + 168, a2, (unsigned int)sub_180035930, v11);
      v7 = 0;
      if ( v11 == v10 )
      {
        *a3 = v10;
        return v7;
      }
      *a3 = v11;
    }
    if ( v10 )
      sub_1800274E0(v10);
  }
  return v7;
}
