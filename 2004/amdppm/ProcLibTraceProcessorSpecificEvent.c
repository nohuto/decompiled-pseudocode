/*
 * XREFs of ProcLibTraceProcessorSpecificEvent @ 0x1C00037C0
 * Callers:
 *     ProcLibTracePccCapChange @ 0x1C0003658 (ProcLibTracePccCapChange.c)
 *     PccInitiateExecuteCallback @ 0x1C000E460 (PccInitiateExecuteCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C00207F0 (CpcHighestNotifyWorker.c)
 *     AcpiCStateNotifyWorker @ 0x1C00233D0 (AcpiCStateNotifyWorker.c)
 *     AcpiPStateNotifyWorker @ 0x1C0025FD0 (AcpiPStateNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x1C00270B0 (AcpiTStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x1C0027B70 (ProcLibDeviceStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1C0003404 (ProcLibGetEventDescriptorAndProcessorId.c)
 */

char __fastcall ProcLibTraceProcessorSpecificEvent(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v7; // rdi
  ULONG v8; // r9d
  int v10; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+50h] [rbp-18h]
  int v14; // [rsp+54h] [rbp-14h]

  v10 = 0;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              a2,
                                                              a3,
                                                              (__int64)&v10,
                                                              (__int64)&UserData);
  v7 = EventDescriptorAndProcessorId;
  if ( EventDescriptorAndProcessorId )
  {
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(
                                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                              EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      v8 = 1;
      if ( a5 && a4 )
      {
        v14 = 0;
        v8 = 2;
        v12 = a5;
        v13 = a4;
      }
      LOBYTE(EventDescriptorAndProcessorId) = EtwWrite(
                                                (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                                v7,
                                                0LL,
                                                v8,
                                                &UserData);
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
