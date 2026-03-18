/*
 * XREFs of PopCheckpointDetermineEfiRuntimeRedirection @ 0x140A71128
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopCheckpointDetermineEfiRuntimeRedirection(__int64 a1)
{
  bool result; // al

  result = (*(_DWORD *)(a1 + 264) & 2) != 0;
  PopCheckpointEfiRuntimeRedirected = result;
  return result;
}
