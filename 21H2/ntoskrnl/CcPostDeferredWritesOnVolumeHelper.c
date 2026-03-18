/*
 * XREFs of CcPostDeferredWritesOnVolumeHelper @ 0x14053D3E0
 * Callers:
 *     <none>
 * Callees:
 *     CcPostDeferredWrites @ 0x14053A100 (CcPostDeferredWrites.c)
 */

char __fastcall CcPostDeferredWritesOnVolumeHelper(__int64 a1, __int64 a2)
{
  CcPostDeferredWrites(a1, a2);
  return 1;
}
