/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x14030A690
 * Callers:
 *     MiShareExistingControlArea @ 0x14067EFC4 (MiShareExistingControlArea.c)
 *     MiCreateImageFileMap @ 0x1407084A8 (MiCreateImageFileMap.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0;
}
