/*
 * XREFs of ?SetHandledDeltaCurrentInteraction@CInteraction@@UEAAXXZ @ 0x1801F2F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::SetHandledDeltaCurrentInteraction(CInteraction *this)
{
  *((_BYTE *)this + 1096) |= 7u;
  *((_DWORD *)this + 268) = 2;
}
