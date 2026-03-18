/*
 * XREFs of ?GetInteractionContext@CInteractionRoot@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x1801C7610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionRoot::GetInteractionContext(__int64 a1)
{
  return CInteractionProcessor::GetInteractionContext(a1 + 32);
}
