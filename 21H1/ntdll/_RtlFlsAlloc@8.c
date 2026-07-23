/*
 * XREFs of _RtlFlsAlloc@8 @ 0x4B2E54F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlFlsAlloc(PFLS_CALLBACK_FUNCTION Callback, PULONG FlsIndex)
{
  void (__stdcall *v3)(void *); // [esp+10h] [ebp+10h]
  unsigned int *v4; // [esp+14h] [ebp+14h]

  return RtlpFlsAlloc((struct _RTLP_FLS_CONTEXT *)Callback, (struct _RTLP_FLS_THREAD_CONTEXT *)FlsIndex, v3, v4);
}
