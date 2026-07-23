/*
 * XREFs of _RtlGetCallersAddress@8 @ 0x4B3503F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCaptureStackBackTrace@16 @ 0x4B2DBFD0 (_RtlCaptureStackBackTrace@16.c)
 */

void __cdecl RtlGetCallersAddress(PVOID *CallersAddress, PVOID *CallersCaller)
{
  USHORT v2; // ax
  PVOID BackTrace[2]; // [esp+4h] [ebp-8h] BYREF

  v2 = RtlCaptureStackBackTrace(2u, 2u, BackTrace, 0);
  if ( CallersAddress )
    *CallersAddress = v2 != 0 ? BackTrace[0] : 0;
  if ( CallersCaller )
    *CallersCaller = v2 >= 2u ? BackTrace[1] : 0;
}
