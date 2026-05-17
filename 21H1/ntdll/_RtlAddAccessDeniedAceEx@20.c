/*
 * XREFs of _RtlAddAccessDeniedAceEx@20 @ 0x4B34ACC0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpAddKnownAce@24 @ 0x4B2D363E (_RtlpAddKnownAce@24.c)
 */

int __stdcall RtlAddAccessDeniedAceEx(int a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src)
{
  return RtlpAddKnownAce(a1, a2, a3, a4, Src, 1);
}
