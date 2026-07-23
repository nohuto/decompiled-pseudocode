/*
 * XREFs of _RtlFlushHeaps@0 @ 0x4B356940
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpEnumProcessHeaps@12 @ 0x4B35791E (_RtlpEnumProcessHeaps@12.c)
 */

void RtlFlushHeaps(void)
{
  RtlpEnumProcessHeaps(0);
}
