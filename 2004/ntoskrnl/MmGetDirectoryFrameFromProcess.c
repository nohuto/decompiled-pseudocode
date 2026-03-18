/*
 * XREFs of MmGetDirectoryFrameFromProcess @ 0x14070C594
 * Callers:
 *     PfpLogApplicationEvent @ 0x14026BC84 (PfpLogApplicationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetDirectoryFrameFromProcess(__int64 a1)
{
  return *(_QWORD *)(a1 + 40) >> 12;
}
