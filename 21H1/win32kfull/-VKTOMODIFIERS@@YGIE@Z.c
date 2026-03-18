/*
 * XREFs of ?VKTOMODIFIERS@@YGIE@Z @ 0x16DF2D
 * Callers:
 *     _EditionUpdateSASModifiers@16 @ 0xAC512 (_EditionUpdateSASModifiers@16.c)
 * Callees:
 *     <none>
 */

int __fastcall VKTOMODIFIERS(char a1)
{
  if ( (unsigned __int8)(a1 - 16) <= 2u )
    return 4 >> (a1 - 16);
  if ( a1 == 91 || a1 == 92 )
    return 8;
  return 0;
}
