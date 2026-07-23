/*
 * XREFs of ExpPcwHostCallback @ 0x1407CC580
 * Callers:
 *     <none>
 * Callees:
 *     PsIsDiskCountersEnabled @ 0x1403CAD20 (PsIsDiskCountersEnabled.c)
 *     PcwRegister @ 0x140781AA0 (PcwRegister.c)
 *     EtwRegisterCounters @ 0x1407CC788 (EtwRegisterCounters.c)
 *     PcwUnregister @ 0x140956F60 (PcwUnregister.c)
 */

void __fastcall ExpPcwHostCallback(int a1)
{
  int v1; // ecx
  __int64 v2; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v3; // [rsp+28h] [rbp-38h]
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+30h] [rbp-30h] BYREF

  v1 = a1 - 1;
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      if ( PcwpEventTracingSessionCounterSet )
      {
        PcwUnregister(PcwpEventTracingSessionCounterSet);
        PcwpEventTracingSessionCounterSet = 0LL;
      }
      if ( PcwpEventTracingCounterSet )
      {
        PcwUnregister(PcwpEventTracingCounterSet);
        PcwpEventTracingCounterSet = 0LL;
      }
      if ( PcwpSynchCounterSet )
      {
        PcwUnregister(PcwpSynchCounterSet);
        PcwpSynchCounterSet = 0LL;
      }
      if ( PcwpSynchNumaCounterSet )
      {
        PcwUnregister(PcwpSynchNumaCounterSet);
        PcwpSynchNumaCounterSet = 0LL;
      }
      if ( PcwpProcessorCounterSet )
      {
        PcwUnregister(PcwpProcessorCounterSet);
        PcwpProcessorCounterSet = 0LL;
      }
      if ( PcwpFileSystemDiskIOCounterSet )
      {
        PcwUnregister(PcwpFileSystemDiskIOCounterSet);
        PcwpFileSystemDiskIOCounterSet = 0LL;
      }
      if ( PcwpThermalCounterSet )
      {
        PcwUnregister(PcwpThermalCounterSet);
        PcwpThermalCounterSet = 0LL;
      }
    }
  }
  else
  {
    EtwRegisterCounters();
    v2 = 2097182LL;
    v3 = L"Synchronization";
    *(_QWORD *)&Info.Version = 256LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)`PcwpRegisterSynchCounterSet'::`2'::Descriptors;
    *(_QWORD *)&Info.CounterCount = 42LL;
    Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))KiSynchCounterSetCallback;
    Info.CallbackContext = 0LL;
    Info.Name = (const _UNICODE_STRING *)&v2;
    PcwRegister(&PcwpSynchCounterSet, &Info);
    v2 = 2621478LL;
    v3 = L"SynchronizationNuma";
    *(_QWORD *)&Info.Version = 256LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)`PcwpRegisterSynchCounterSet'::`2'::Descriptors;
    *(_QWORD *)&Info.CounterCount = 42LL;
    Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))KiSynchNumaCounterSetCallback;
    Info.Name = (const _UNICODE_STRING *)&v2;
    Info.CallbackContext = 0LL;
    PcwRegister(&PcwpSynchNumaCounterSet, &Info);
    v2 = 2883626LL;
    v3 = L"Processor Information";
    *(_QWORD *)&Info.Version = 256LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)`PcwpRegisterProcessorCounterSet'::`2'::Descriptors;
    *(_QWORD *)&Info.CounterCount = 35LL;
    Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ExProcessorCounterSetCallback;
    Info.Name = (const _UNICODE_STRING *)&v2;
    Info.CallbackContext = 0LL;
    PcwRegister(&PcwpProcessorCounterSet, &Info);
    if ( PsIsDiskCountersEnabled() )
    {
      v2 = 3276848LL;
      v3 = L"FileSystem Disk Activity";
      *(_QWORD *)&Info.Version = 256LL;
      Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)`PcwpRegisterFileSystemDiskIOCounterSet'::`2'::Descriptors;
      *(_QWORD *)&Info.CounterCount = 2LL;
      Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))FsRtlDiskIOCounterSetCallback;
      Info.Name = (const _UNICODE_STRING *)&v2;
      Info.CallbackContext = 0LL;
      PcwRegister(&PcwpFileSystemDiskIOCounterSet, &Info);
    }
    v2 = 3276848LL;
    v3 = L"Thermal Zone Information";
    *(_QWORD *)&Info.Version = 256LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)`PcwpRegisterThermalCounterSet'::`2'::Descriptors;
    *(_QWORD *)&Info.CounterCount = 4LL;
    Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))PoThermalCounterSetCallback;
    Info.Name = (const _UNICODE_STRING *)&v2;
    Info.CallbackContext = 0LL;
    PcwRegister(&PcwpThermalCounterSet, &Info);
  }
}
