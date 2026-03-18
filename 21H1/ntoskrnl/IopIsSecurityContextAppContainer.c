/*
 * XREFs of IopIsSecurityContextAppContainer @ 0x1405052CC
 * Callers:
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 * Callees:
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407001B0 (SeIsAppContainerOrIdentifyLevelContext.c)
 */

char __fastcall IopIsSecurityContextAppContainer(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SeIsAppContainerOrIdentifyLevelContext(a1);
  return 0;
}
