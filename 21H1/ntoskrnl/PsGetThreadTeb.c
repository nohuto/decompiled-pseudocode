/*
 * XREFs of PsGetThreadTeb @ 0x14033B780
 * Callers:
 *     PspWow64SetContextThread @ 0x1406FC94C (PspWow64SetContextThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406FD494 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
