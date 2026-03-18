/*
 * XREFs of IopIsSecurityContextAppContainer @ 0x140505F4C
 * Callers:
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 * Callees:
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14071E008 (SeIsAppContainerOrIdentifyLevelContext.c)
 */

char __fastcall IopIsSecurityContextAppContainer(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SeIsAppContainerOrIdentifyLevelContext(a1);
  return 0;
}
