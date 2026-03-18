/*
 * XREFs of ?GetCloakFlags@@YGKPBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C972
 * Callers:
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     _GetWindowEffectiveCloakState@4 @ 0xF3D09 (_GetWindowEffectiveCloakState@4.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall GetCloakFlags(int *this)
{
  int v1; // ecx
  unsigned int result; // eax

  v1 = *this;
  result = (v1 & 0x2400) != 0;
  if ( (v1 & 0x800) != 0 )
    result |= 2u;
  return result;
}
