/*
 * XREFs of ?MakeITableVGA@@YGHPAE@Z @ 0x1FAD13
 * Callers:
 *     ?MakeITable@@YGHPAEPAURGBX@@H@Z @ 0xB7744 (-MakeITable@@YGHPAEPAURGBX@@H@Z.c)
 *     ?MakeITableDEF@@YGHPAE@Z @ 0x1FAC8A (-MakeITableDEF@@YGHPAE@Z.c)
 * Callees:
 *     ?MapVGA@@YGEEEE@Z @ 0x1FAD55 (-MapVGA@@YGEEEE@Z.c)
 */

int __thiscall MakeITableVGA(_BYTE *this)
{
  unsigned __int8 i; // bl
  unsigned __int8 j; // bh
  unsigned __int8 v5; // [esp+0h] [ebp-Ch]
  unsigned __int8 v6; // [esp+4h] [ebp-8h]
  unsigned __int8 k; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 0x20u; ++i )
  {
    for ( j = 0; j < 0x20u; ++j )
    {
      for ( k = 0; k < 0x20u; ++k )
        *this++ = MapVGA(k, v5, v6);
    }
  }
  return 1;
}
