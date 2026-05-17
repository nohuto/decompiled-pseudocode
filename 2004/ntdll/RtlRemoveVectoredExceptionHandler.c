/*
 * XREFs of RtlRemoveVectoredExceptionHandler @ 0x180082080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRemoveVectoredExceptionHandler(__int64 a1)
{
  return RtlpRemoveVectoredHandler(a1, 0LL);
}
