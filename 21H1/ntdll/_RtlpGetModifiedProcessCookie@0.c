/*
 * XREFs of _RtlpGetModifiedProcessCookie@0 @ 0x4B36D769
 * Callers:
 *     _RtlInitializeHeapManager@4 @ 0x4B356A3E (_RtlInitializeHeapManager@4.c)
 *     _RtlpReportHeapFailure@4 @ 0x4B36FAE5 (_RtlpReportHeapFailure@4.c)
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _RtlUniform@4 @ 0x4B369FC0 (_RtlUniform@4.c)
 */

ULONG __stdcall RtlpGetModifiedProcessCookie()
{
  ULONG ProcessInformation; // [esp+0h] [ebp-4h] BYREF

  ProcessInformation = 0;
  if ( ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessCookie, &ProcessInformation, 4u, 0) < 0 )
    return 0;
  else
    return RtlUniform(&ProcessInformation);
}
