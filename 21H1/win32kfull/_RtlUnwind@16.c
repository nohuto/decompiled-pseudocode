/*
 * XREFs of _RtlUnwind@16 @ 0xEE2FB
 * Callers:
 *     @_EH4_GlobalUnwind@4 @ 0xEE29C (@_EH4_GlobalUnwind@4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp__RtlUnwind@16(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}
