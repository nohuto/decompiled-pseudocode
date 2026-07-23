/*
 * XREFs of PfpIsProcessInfoPresent @ 0x140273348
 * Callers:
 *     PfpCopyEvent @ 0x140678D70 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x140678FB0 (PfpFlushBuffers.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfpIsProcessInfoPresent(__int64 a1)
{
  return *(_QWORD *)(a1 + 1088) && *(_QWORD *)(a1 + 1128);
}
