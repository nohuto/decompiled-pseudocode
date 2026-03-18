/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x14059ECB4
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14099C000 (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x1409CFB9C (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)XdvEnabled;
}
