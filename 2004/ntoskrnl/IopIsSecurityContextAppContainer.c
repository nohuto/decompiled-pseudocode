/*
 * XREFs of IopIsSecurityContextAppContainer @ 0x14050591C
 * Callers:
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 * Callees:
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14064CDF0 (SeIsAppContainerOrIdentifyLevelContext.c)
 */

char __fastcall IopIsSecurityContextAppContainer(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SeIsAppContainerOrIdentifyLevelContext(a1);
  return 0;
}
