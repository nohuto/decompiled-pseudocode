/*
 * XREFs of PfpIsProcessInfoPresent @ 0x1402D4668
 * Callers:
 *     PfpCopyEvent @ 0x1406CA480 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x1406CA6C0 (PfpFlushBuffers.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfpIsProcessInfoPresent(__int64 a1)
{
  return *(_QWORD *)(a1 + 1088) && *(_QWORD *)(a1 + 1128);
}
