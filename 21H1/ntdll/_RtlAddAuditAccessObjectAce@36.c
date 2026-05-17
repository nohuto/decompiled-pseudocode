/*
 * XREFs of _RtlAddAuditAccessObjectAce@36 @ 0x4B34AFA0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpAddKnownAce@24 @ 0x4B2D363E (_RtlpAddKnownAce@24.c)
 *     _RtlpAddKnownObjectAce@32 @ 0x4B34B856 (_RtlpAddKnownObjectAce@32.c)
 */

int __stdcall RtlAddAuditAccessObjectAce(
        int a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        void *Src,
        char a8,
        char a9)
{
  int v9; // eax

  v9 = a3;
  if ( a8 )
    v9 = a3 | 0x40;
  if ( a9 )
    v9 |= 0x80u;
  if ( a5 || a6 )
    return RtlpAddKnownObjectAce(v9, a4, a5, a6, Src, 7);
  else
    return RtlpAddKnownAce(a1, a2, v9, a4, (unsigned __int8 *)Src, 2);
}
