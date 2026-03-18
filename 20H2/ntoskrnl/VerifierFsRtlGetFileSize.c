/*
 * XREFs of VerifierFsRtlGetFileSize @ 0x1409D51F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 VerifierFsRtlGetFileSize()
{
  return ((__int64 (*)(void))pXdvFsRtlGetFileSize)();
}
