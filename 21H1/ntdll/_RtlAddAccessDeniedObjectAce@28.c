/*
 * XREFs of _RtlAddAccessDeniedObjectAce@28 @ 0x4B34ACF0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpAddKnownAce@24 @ 0x4B2D363E (_RtlpAddKnownAce@24.c)
 *     _RtlpAddKnownObjectAce@32 @ 0x4B34B856 (_RtlpAddKnownObjectAce@32.c)
 */

int __stdcall RtlAddAccessDeniedObjectAce(int a1, unsigned int a2, int a3, int a4, int a5, int a6, void *Src)
{
  if ( a5 || a6 )
    return RtlpAddKnownObjectAce(a3, a4, a5, a6, Src, 6);
  else
    return RtlpAddKnownAce(a1, a2, a3, a4, (unsigned __int8 *)Src, 1);
}
