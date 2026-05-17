/*
 * XREFs of RtlFlsFree @ 0x1800746A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFlsFree(struct _RTLP_FLS_CONTEXT *a1)
{
  return RtlpFlsFree(a1, (unsigned int)a1);
}
