/*
 * XREFs of ViPoolLogStackCallout @ 0x1409C2930
 * Callers:
 *     IovpLogStackTrace @ 0x1409C2968 (IovpLogStackTrace.c)
 *     ViPoolLogStackTrace @ 0x1409DD388 (ViPoolLogStackTrace.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1402E77B0 (RtlCaptureStackBackTrace.c)
 */

void __fastcall ViPoolLogStackCallout(PVOID *Parameter)
{
  USHORT v2; // ax

  v2 = RtlCaptureStackBackTrace(2u, 0xDu, Parameter + 3, 0LL);
  if ( v2 < 0xDu )
    Parameter[v2 + 3] = 0LL;
}
