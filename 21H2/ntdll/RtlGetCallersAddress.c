/*
 * XREFs of RtlGetCallersAddress @ 0x1800EDA80
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1800526A0 (RtlCaptureStackBackTrace.c)
 */

void __cdecl RtlGetCallersAddress(PVOID *CallersAddress, PVOID *CallersCaller)
{
  USHORT v4; // ax
  PVOID v5; // r9
  PVOID v6; // r8
  PVOID BackTrace[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = RtlCaptureStackBackTrace(2u, 2u, BackTrace, 0LL);
  v5 = 0LL;
  v6 = 0LL;
  if ( v4 )
    v6 = BackTrace[0];
  if ( v4 >= 2u )
    v5 = BackTrace[1];
  *CallersAddress = v6;
  *CallersCaller = v5;
}
