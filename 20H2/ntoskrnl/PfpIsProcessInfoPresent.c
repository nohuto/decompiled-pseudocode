/*
 * XREFs of PfpIsProcessInfoPresent @ 0x1402440E8
 * Callers:
 *     PfpCopyEvent @ 0x14064B5D0 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x14064B810 (PfpFlushBuffers.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfpIsProcessInfoPresent(__int64 a1)
{
  return *(_QWORD *)(a1 + 1088) && *(_QWORD *)(a1 + 1128);
}
