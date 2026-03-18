/*
 * XREFs of TraceLoggingSetInformation_2K @ 0x1C00C4008
 * Callers:
 *     RegisterTelemetryProvider @ 0x1C005FC30 (RegisterTelemetryProvider.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TraceLoggingSetInformation_2K(
        const _tlgProvider_t *pvInformation,
        _EVENT_INFO_CLASS cbInformation,
        void *hProvider,
        unsigned int informationClass)
{
  unsigned int v6; // ebx
  unsigned int (__fastcall *SystemRoutineAddress)(unsigned __int64, __int64, void *, _QWORD); // rax

  v6 = -1073741637;
  SystemRoutineAddress = (unsigned int (__fastcall *)(unsigned __int64, __int64, void *, _QWORD))MmGetSystemRoutineAddress(&`TraceLoggingSetInformation_2K'::`2'::strEtwSetInformation);
  if ( SystemRoutineAddress )
    return SystemRoutineAddress(Tlgg_TelemetryProviderProv.RegHandle, 2LL, hProvider, informationClass);
  return v6;
}
