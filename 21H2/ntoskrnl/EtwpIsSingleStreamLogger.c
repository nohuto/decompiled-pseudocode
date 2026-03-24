/*
 * XREFs of EtwpIsSingleStreamLogger @ 0x1402663CC
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x140643C10 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsSingleStreamLogger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 12) & 0x10000000) != 0;
}
