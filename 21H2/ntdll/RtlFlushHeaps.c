/*
 * XREFs of RtlFlushHeaps @ 0x180074FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlFlushHeaps()
{
  return RtlpEnumProcessHeaps(RtlpFlushHeapsCallback, 0LL, 0LL);
}
