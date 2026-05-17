/*
 * XREFs of _RtlAddAuditAccessAce@24 @ 0x4B34AF20
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpAddKnownAce@24 @ 0x4B2D363E (_RtlpAddKnownAce@24.c)
 */

int __stdcall RtlAddAuditAccessAce(int a1, unsigned int a2, int a3, unsigned __int8 *Src, char a5, char a6)
{
  int v6; // eax

  v6 = a5 != 0 ? 0x40 : 0;
  if ( a6 )
    v6 |= 0x80u;
  return RtlpAddKnownAce(a1, a2, v6, a3, Src, 2);
}
