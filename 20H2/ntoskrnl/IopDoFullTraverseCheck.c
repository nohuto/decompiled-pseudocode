/*
 * XREFs of IopDoFullTraverseCheck @ 0x14020DBB0
 * Callers:
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 * Callees:
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14071E008 (SeIsAppContainerOrIdentifyLevelContext.c)
 */

char __fastcall IopDoFullTraverseCheck(__int64 a1, char a2, struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  if ( (*(_DWORD *)(a1 + 52) & 0x20100) == 0x20000 || !a2 )
    return 0;
  SeIsAppContainerOrIdentifyLevelContext(a3);
  return 0;
}
