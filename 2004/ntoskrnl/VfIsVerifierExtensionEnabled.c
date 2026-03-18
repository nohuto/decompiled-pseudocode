/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x14059B214
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140995EE0 (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x1409C9B7C (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)XdvEnabled;
}
