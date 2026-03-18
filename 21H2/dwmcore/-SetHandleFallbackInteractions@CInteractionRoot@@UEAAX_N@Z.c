/*
 * XREFs of ?SetHandleFallbackInteractions@CInteractionRoot@@UEAAX_N@Z @ 0x1800F93C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionRoot::SetHandleFallbackInteractions(CInteractionRoot *this, char a2)
{
  *((_BYTE *)this + 1288) &= ~4u;
  *((_BYTE *)this + 1288) |= 4 * a2;
}
