/*
 * XREFs of MmGetDirectoryFrameFromProcess @ 0x140679DE4
 * Callers:
 *     PfpLogApplicationEvent @ 0x1402735A8 (PfpLogApplicationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetDirectoryFrameFromProcess(__int64 a1)
{
  return *(_QWORD *)(a1 + 40) >> 12;
}
