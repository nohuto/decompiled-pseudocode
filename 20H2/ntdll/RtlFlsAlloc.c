/*
 * XREFs of RtlFlsAlloc @ 0x180074860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFlsAlloc(struct _RTLP_FLS_CONTEXT *a1, struct _RTLP_FLS_THREAD_CONTEXT *a2)
{
  return RtlpFlsAlloc(a1, a2, (void (*)(void *))a1, (unsigned int *)a2);
}
