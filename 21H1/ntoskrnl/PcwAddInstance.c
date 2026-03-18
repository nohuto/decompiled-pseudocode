/*
 * XREFs of PcwAddInstance @ 0x14065C6D0
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x1406F0210 (ExProcessorCounterSetCallback.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x140887CFC (FsRtlAddDiskIOCounterInstance.c)
 *     FsRtlDiskIOCounterSetCallback @ 0x140887DD0 (FsRtlDiskIOCounterSetCallback.c)
 *     KiSynchCounterSetCallback @ 0x1408B6A80 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1408B6B90 (KiSynchNumaCounterSetCallback.c)
 *     PoThermalCounterSetCallback @ 0x1408E3330 (PoThermalCounterSetCallback.c)
 *     EtwpEventTracingCounterSetCallback @ 0x14097E330 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1402D3FCC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1402D3FE8 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ExpPcwDisabledStatus @ 0x1409522D8 (ExpPcwDisabledStatus.c)
 */

NTSTATUS __stdcall PcwAddInstance(PPCW_BUFFER Buffer, PCUNICODE_STRING Name, ULONG Id, ULONG Count, PPCW_DATA Data)
{
  unsigned __int64 ExtensionTable; // rax
  NTSTATUS v10; // ebx

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  if ( !ExtensionTable )
    return ExpPcwDisabledStatus();
  v10 = (*(__int64 (__fastcall **)(PPCW_BUFFER, PCUNICODE_STRING, _QWORD, _QWORD, PPCW_DATA))(ExtensionTable + 32))(
          Buffer,
          Name,
          Id,
          Count,
          Data);
  ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  return v10;
}
