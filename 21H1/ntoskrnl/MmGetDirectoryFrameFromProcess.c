/*
 * XREFs of MmGetDirectoryFrameFromProcess @ 0x1406E85C4
 * Callers:
 *     PfpLogApplicationEvent @ 0x1402D5624 (PfpLogApplicationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetDirectoryFrameFromProcess(__int64 a1)
{
  return *(_QWORD *)(a1 + 40) >> 12;
}
