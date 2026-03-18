/*
 * XREFs of ZwRaiseException @ 0x1403F6280
 * Callers:
 *     RtlRaiseException @ 0x1402E6830 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x1402E70E0 (RtlUnwindEx.c)
 *     RtlRaiseNoncontinuableException @ 0x1403FF800 (RtlRaiseNoncontinuableException.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRaiseException(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
