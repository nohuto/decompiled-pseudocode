/*
 * XREFs of RtlAddVectoredExceptionHandler @ 0x180081680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlAddVectoredExceptionHandler(ULONG First, PVECTORED_EXCEPTION_HANDLER Handler)
{
  return (PVOID)RtlpAddVectoredHandler(First, Handler, 0LL);
}
