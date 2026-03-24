/*
 * XREFs of ?DepartBufferedOutputPointer@CInteractionRoot@@UEAA_NI@Z @ 0x180234320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CInteractionRoot::DepartBufferedOutputPointer(CInteractionRoot *this, unsigned int a2)
{
  return CInteractionProcessor::DepartBufferedOutputPointer((__int64)this + 32, a2);
}
