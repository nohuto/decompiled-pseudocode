/*
 * XREFs of PsGetThreadTeb @ 0x1402E8950
 * Callers:
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140695814 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PspWow64SetContextThread @ 0x1406C79EC (PspWow64SetContextThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
