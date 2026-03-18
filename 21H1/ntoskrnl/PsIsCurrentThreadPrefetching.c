/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x1402F6E10
 * Callers:
 *     MiShareExistingControlArea @ 0x14062FAA8 (MiShareExistingControlArea.c)
 *     MiCreateImageFileMap @ 0x1406415A4 (MiCreateImageFileMap.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0;
}
