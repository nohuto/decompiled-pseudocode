/*
 * XREFs of _ZwGetCurrentProcessorNumberEx@4 @ 0x4B2F38C0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

ULONG __cdecl ZwGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcessorNumber)
{
  return Wow64SystemServiceCall();
}
