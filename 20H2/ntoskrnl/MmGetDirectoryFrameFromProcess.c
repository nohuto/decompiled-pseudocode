/*
 * XREFs of MmGetDirectoryFrameFromProcess @ 0x14064C644
 * Callers:
 *     PfpLogApplicationEvent @ 0x140244348 (PfpLogApplicationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetDirectoryFrameFromProcess(__int64 a1)
{
  return *(_QWORD *)(a1 + 40) >> 12;
}
