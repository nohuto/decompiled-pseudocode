/*
 * XREFs of _RtlFlsAlloc@8 @ 0x4B2E54F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __userpurge RtlFlsAlloc@<eax>(
        struct _RTLP_FLS_CONTEXT *a1,
        struct _RTLP_FLS_THREAD_CONTEXT *a2,
        void (__stdcall *a3)(void *),
        unsigned int *a4)
{
  return RtlpFlsAlloc(a1, a2, a3, a4);
}
