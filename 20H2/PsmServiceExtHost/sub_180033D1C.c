/*
 * XREFs of sub_180033D1C @ 0x180033D1C
 * Callers:
 *     sub_18000FFE4 @ 0x18000FFE4 (sub_18000FFE4.c)
 *     sub_180033C98 @ 0x180033C98 (sub_180033C98.c)
 *     sub_180035534 @ 0x180035534 (sub_180035534.c)
 *     sub_180071270 @ 0x180071270 (sub_180071270.c)
 *     sub_180075180 @ 0x180075180 (sub_180075180.c)
 *     sub_1800752F4 @ 0x1800752F4 (sub_1800752F4.c)
 *     sub_1800755F0 @ 0x1800755F0 (sub_1800755F0.c)
 *     sub_180075688 @ 0x180075688 (sub_180075688.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180033D1C(__int64 a1, __int64 a2, int a3)
{
  int v3; // r9d
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx

  v3 = *(_DWORD *)(a2 + 1244);
  v4 = 0;
  v5 = *(_DWORD *)(a2 + 1464);
  v6 = *(_DWORD *)(a1 + 104);
  if ( (v3 & 0x10) == 0 && (v5 & 0x200) == 0 )
  {
    v4 = 2 * (v6 & 1);
    if ( (v5 & 0x100) == 0 )
      v4 |= 2 * (v6 & 2);
    if ( a3 > 0 )
    {
      v7 = v4 | 2;
      v8 = v6 & 4;
      if ( v8 )
        v7 = v4;
      v4 = v7;
      if ( a3 > 1 && !v8 )
        v4 = v7 | 0x20;
    }
  }
  return v3 & 0x27 | (unsigned int)v4;
}
