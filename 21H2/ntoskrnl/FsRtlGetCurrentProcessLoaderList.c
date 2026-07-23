/*
 * XREFs of FsRtlGetCurrentProcessLoaderList @ 0x14088BDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 FsRtlGetCurrentProcessLoaderList()
{
  return *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[4] + 24) + 16LL;
}
