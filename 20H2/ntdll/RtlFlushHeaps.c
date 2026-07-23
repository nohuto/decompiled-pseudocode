/*
 * XREFs of RtlFlushHeaps @ 0x180073F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void RtlFlushHeaps(void)
{
  RtlpEnumProcessHeaps(RtlpFlushHeapsCallback, 0LL, 0LL);
}
