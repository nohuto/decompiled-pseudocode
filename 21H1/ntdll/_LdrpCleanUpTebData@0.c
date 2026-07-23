/*
 * XREFs of _LdrpCleanUpTebData@0 @ 0x4B2EBD07
 * Callers:
 *     _RtlCleanUpTEBLangLists@0 @ 0x4B2EBCA0 (_RtlCleanUpTEBLangLists@0.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

struct _TEB *__stdcall LdrpCleanUpTebData()
{
  struct _TEB *result; // eax

  result = NtCurrentTeb();
  if ( result->ResourceRetValue )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, NtCurrentTeb()->ResourceRetValue);
    result = NtCurrentTeb();
    result->ResourceRetValue = 0;
  }
  return result;
}
