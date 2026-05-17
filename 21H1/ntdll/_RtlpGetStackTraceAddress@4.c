/*
 * XREFs of _RtlpGetStackTraceAddress@4 @ 0x4B369150
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpGetStackTraceAddressEx@8 @ 0x4B2AFCB0 (_RtlpGetStackTraceAddressEx@8.c)
 */

int __stdcall RtlpGetStackTraceAddress(unsigned __int16 a1)
{
  return RtlpGetStackTraceAddressEx(a1, 0);
}
