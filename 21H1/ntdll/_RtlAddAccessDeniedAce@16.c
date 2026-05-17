/*
 * XREFs of _RtlAddAccessDeniedAce@16 @ 0x4B34AC90
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpAddKnownAce@24 @ 0x4B2D363E (_RtlpAddKnownAce@24.c)
 */

int __stdcall RtlAddAccessDeniedAce(int a1, unsigned int a2, int a3, unsigned __int8 *Src)
{
  return RtlpAddKnownAce(a1, a2, 0, a3, Src, 1);
}
