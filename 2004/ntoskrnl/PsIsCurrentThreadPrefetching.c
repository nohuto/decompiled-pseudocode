/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x140333BD0
 * Callers:
 *     MiShareExistingControlArea @ 0x1405FAA68 (MiShareExistingControlArea.c)
 *     MiCreateImageFileMap @ 0x14060C454 (MiCreateImageFileMap.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0;
}
