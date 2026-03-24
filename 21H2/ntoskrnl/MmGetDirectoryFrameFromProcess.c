/*
 * XREFs of MmGetDirectoryFrameFromProcess @ 0x1406CB4F4
 * Callers:
 *     PfpLogApplicationEvent @ 0x1402D48C8 (PfpLogApplicationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetDirectoryFrameFromProcess(__int64 a1)
{
  return *(_QWORD *)(a1 + 40) >> 12;
}
