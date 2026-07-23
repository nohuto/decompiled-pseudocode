/*
 * XREFs of EtwRegisterCounters @ 0x1407CC788
 * Callers:
 *     ExpPcwHostCallback @ 0x1407CC580 (ExpPcwHostCallback.c)
 * Callees:
 *     PcwRegister @ 0x140781AA0 (PcwRegister.c)
 */

NTSTATUS EtwRegisterCounters()
{
  __int64 v1; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v2; // [rsp+28h] [rbp-38h]
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+30h] [rbp-30h] BYREF

  *(&Info.Version + 1) = 0;
  *(&Info.CounterCount + 1) = 0;
  v2 = L"Event Tracing for Windows";
  v1 = 3407922LL;
  Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)`PcwpRegisterEventTracingCounterSet'::`2'::Descriptors;
  Info.Version = 256;
  Info.Name = (const _UNICODE_STRING *)&v1;
  Info.CounterCount = 6;
  Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))EtwpEventTracingCounterSetCallback;
  Info.CallbackContext = (void *)1;
  PcwRegister(&PcwpEventTracingCounterSet, &Info);
  *(&Info.Version + 1) = 0;
  *(&Info.CounterCount + 1) = 0;
  v2 = L"Event Tracing for Windows Session";
  v1 = 4456514LL;
  Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)`PcwpRegisterEventTracingSessionCounterSet'::`2'::Descriptors;
  Info.Name = (const _UNICODE_STRING *)&v1;
  Info.Version = 256;
  Info.CounterCount = 5;
  Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))EtwpEventTracingCounterSetCallback;
  Info.CallbackContext = (void *)2;
  return PcwRegister(&PcwpEventTracingSessionCounterSet, &Info);
}
