/*
 * XREFs of ZwRaiseException @ 0x1403FAE50
 * Callers:
 *     RtlRaiseException @ 0x1402E5480 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x1402E5AF0 (RtlUnwindEx.c)
 *     RtlRaiseNoncontinuableException @ 0x140405AD0 (RtlRaiseNoncontinuableException.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRaiseException(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
