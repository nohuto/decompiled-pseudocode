/*
 * XREFs of PfpIsProcessInfoPresent @ 0x14035FAC0
 * Callers:
 *     PfpCopyEvent @ 0x1407D9CC0 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x1407D9F00 (PfpFlushBuffers.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfpIsProcessInfoPresent(__int64 a1)
{
  return *(_QWORD *)(a1 + 1088) && *(_QWORD *)(a1 + 1128);
}
