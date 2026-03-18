/*
 * XREFs of VerifierFsRtlGetNextFileLock @ 0x1409D5210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 VerifierFsRtlGetNextFileLock()
{
  return ((__int64 (*)(void))pXdvFsRtlGetNextFileLock)();
}
