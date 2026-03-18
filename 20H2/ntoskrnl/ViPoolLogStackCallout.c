/*
 * XREFs of ViPoolLogStackCallout @ 0x1409C8950
 * Callers:
 *     IovpLogStackTrace @ 0x1409C8988 (IovpLogStackTrace.c)
 *     ViPoolLogStackTrace @ 0x1409E33A8 (ViPoolLogStackTrace.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140228FF0 (RtlCaptureStackBackTrace.c)
 */

void __fastcall ViPoolLogStackCallout(PVOID *Parameter)
{
  USHORT v2; // ax

  v2 = RtlCaptureStackBackTrace(2u, 0xDu, Parameter + 3, 0LL);
  if ( v2 < 0xDu )
    Parameter[v2 + 3] = 0LL;
}
