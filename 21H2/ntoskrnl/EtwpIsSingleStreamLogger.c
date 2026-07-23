/*
 * XREFs of EtwpIsSingleStreamLogger @ 0x14025436C
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x140638A20 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsSingleStreamLogger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 12) & 0x10000000) != 0;
}
