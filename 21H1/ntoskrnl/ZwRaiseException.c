/*
 * XREFs of ZwRaiseException @ 0x1403F4FF0
 * Callers:
 *     RtlRaiseException @ 0x14032B960 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x14032C220 (RtlUnwindEx.c)
 *     RtlRaiseNoncontinuableException @ 0x1403FE570 (RtlRaiseNoncontinuableException.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRaiseException(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
