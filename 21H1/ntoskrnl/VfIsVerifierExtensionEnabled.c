/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x14059AB24
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140994860 (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x1409C9B6C (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)XdvEnabled;
}
