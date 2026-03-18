/*
 * XREFs of sub_1C003CEC0 @ 0x1C003CEC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     sub_1C001A550 @ 0x1C001A550 (sub_1C001A550.c)
 */

__int64 __fastcall sub_1C003CEC0(__int64 a1, __int64 a2)
{
  int v4; // ebx
  _BYTE *v5; // rax
  _DWORD *v6; // rax

  v4 = 3;
  sub_1C000F050(a1);
  sub_1C0012400(a1, 0LL, 0LL, &stru_1C0062AB0);
  if ( a2 )
  {
    if ( *(_DWORD *)(a2 + 16) == 132 )
    {
      v5 = *(_BYTE **)(a2 + 40);
      if ( v5 )
      {
        if ( !*v5 )
          v4 = 9;
      }
    }
  }
  v6 = sub_1C000F050(a1);
  return sub_1C001A550(a1, (__int64)(v6 + 566), v4);
}
