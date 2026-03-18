/*
 * XREFs of ?_GetForceLegacyModeFromRegistry@Edgy@@YGHXZ @ 0x16E899
 * Callers:
 *     ?_IsLegacyDevice@Edgy@@YGHPAX@Z @ 0x16EC06 (-_IsLegacyDevice@Edgy@@YGHPAX@Z.c)
 * Callees:
 *     ?_GetDWordFromRegistry@Edgy@@YGHPBG0PAK@Z @ 0x16E702 (-_GetDWordFromRegistry@Edgy@@YGHPBG0PAK@Z.c)
 */

int __cdecl Edgy::_GetForceLegacyModeFromRegistry()
{
  int v0; // ebx
  const unsigned __int16 *v2; // [esp+0h] [ebp-8h]
  int v3; // [esp+4h] [ebp-4h] BYREF
  unsigned int *savedregs; // [esp+8h] [ebp+0h]

  v0 = 0;
  if ( Edgy::_GetDWordFromRegistry((Edgy *)&v3, v2, 0, savedregs) )
    LOBYTE(v0) = v3 == 1;
  return v0;
}
