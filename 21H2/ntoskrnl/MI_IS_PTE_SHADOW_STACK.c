/*
 * XREFs of MI_IS_PTE_SHADOW_STACK @ 0x140547C00
 * Callers:
 *     MiValidFault @ 0x1402AE050 (MiValidFault.c)
 * Callees:
 *     <none>
 */

bool __fastcall MI_IS_PTE_SHADOW_STACK(_BYTE *a1)
{
  bool result; // al

  result = 0;
  if ( (MiFlags & 0x2000000) != 0 )
    return (*a1 & 0x42) == 64;
  return result;
}
