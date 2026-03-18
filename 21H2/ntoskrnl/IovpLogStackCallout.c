/*
 * XREFs of IovpLogStackCallout @ 0x140A80F90
 * Callers:
 *     IovpLogStackTrace @ 0x140A80FC8 (IovpLogStackTrace.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 */

void __fastcall IovpLogStackCallout(PVOID *Parameter)
{
  USHORT v2; // ax

  v2 = RtlCaptureStackBackTrace(2u, 0xDu, Parameter + 3, 0LL);
  if ( v2 < 0xDu )
    Parameter[v2 + 3] = 0LL;
}
