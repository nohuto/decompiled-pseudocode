/*
 * XREFs of IopDoFullTraverseCheck @ 0x140291030
 * Callers:
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 * Callees:
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14064CDF0 (SeIsAppContainerOrIdentifyLevelContext.c)
 */

char __fastcall IopDoFullTraverseCheck(__int64 a1, char a2, struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  if ( (*(_DWORD *)(a1 + 52) & 0x20100) == 0x20000 || !a2 )
    return 0;
  SeIsAppContainerOrIdentifyLevelContext(a3);
  return 0;
}
