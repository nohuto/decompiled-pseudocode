/*
 * XREFs of _RtlAddAccessAllowedAce@16 @ 0x4B2D3620
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpAddKnownAce@24 @ 0x4B2D363E (_RtlpAddKnownAce@24.c)
 */

int __stdcall RtlAddAccessAllowedAce(int a1, int a2, int a3, void *Src)
{
  return RtlpAddKnownAce(0, a3, Src, 0);
}
