/*
 * XREFs of _EditionUpdateSASModifiers@16 @ 0xAC512
 * Callers:
 *     <none>
 * Callees:
 *     ?VKTOMODIFIERS@@YGIE@Z @ 0x16DF2D (-VKTOMODIFIERS@@YGIE@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __stdcall EditionUpdateSASModifiers(int a1, int a2, __int16 a3, int a4)
{
  unsigned int v4; // eax
  unsigned __int8 savedregs; // [esp+0h] [ebp+0h]

  if ( (!a1 || _gProtocolType && _gptiCurrent == _gptiRit) && (a3 & 0x200) == 0 )
  {
    v4 = VKTOMODIFIERS(savedregs);
    if ( a4 )
      _gfsSASModifiersDown &= ~v4;
    else
      _gfsSASModifiersDown |= v4;
  }
}
