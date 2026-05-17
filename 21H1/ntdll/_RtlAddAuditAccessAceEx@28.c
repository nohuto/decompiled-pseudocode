/*
 * XREFs of _RtlAddAuditAccessAceEx@28 @ 0x4B34AF60
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpAddKnownAce@24 @ 0x4B2D363E (_RtlpAddKnownAce@24.c)
 */

int __stdcall RtlAddAuditAccessAceEx(int a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src, char a6, char a7)
{
  int v7; // eax

  v7 = a3;
  if ( a6 )
    v7 = a3 | 0x40;
  if ( a7 )
    v7 |= 0x80u;
  return RtlpAddKnownAce(a1, a2, v7, a4, Src, 2);
}
