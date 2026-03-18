/*
 * XREFs of ?MakeITableDEF@@YGHPAE@Z @ 0x1FAC8A
 * Callers:
 *     ?MakeITable@@YGHPAEPAURGBX@@H@Z @ 0xB7744 (-MakeITable@@YGHPAEPAURGBX@@H@Z.c)
 * Callees:
 *     ?MakeITableVGA@@YGHPAE@Z @ 0x1FAD13 (-MakeITableVGA@@YGHPAE@Z.c)
 */

int __thiscall MakeITableDEF(_BYTE *this)
{
  int i; // eax
  unsigned __int8 v3; // dl
  unsigned __int8 *v5; // [esp+0h] [ebp-4h]

  MakeITableVGA(v5);
  for ( i = 0; i < 0x8000; ++i )
  {
    v3 = this[i];
    if ( v3 >= 8u )
      this[i] = v3 - 16;
  }
  return 1;
}
