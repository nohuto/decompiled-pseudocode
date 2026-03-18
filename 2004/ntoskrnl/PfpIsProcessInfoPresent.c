/*
 * XREFs of PfpIsProcessInfoPresent @ 0x1403050EC
 * Callers:
 *     PfpCopyEvent @ 0x1406CE610 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x1406CE830 (PfpFlushBuffers.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfpIsProcessInfoPresent(__int64 a1)
{
  return *(_QWORD *)(a1 + 1088) && *(_QWORD *)(a1 + 1128);
}
