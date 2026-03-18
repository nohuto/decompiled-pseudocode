/*
 * XREFs of ?HasBufferedOutput@CInteractionRoot@@UEAA_NIW4InputType@@@Z @ 0x180182CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionRoot::HasBufferedOutput(__int64 a1)
{
  return CInteractionProcessor::HasBufferedOutput(a1 + 24);
}
