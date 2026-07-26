/*
 * XREFs of ?ndisPcwInitialize@@YAJXZ @ 0x1C01469B4
 * Callers:
 *     DriverEntry @ 0x1C01438F0 (DriverEntry.c)
 * Callees:
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00F89A8 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 */

__int64 ndisPcwInitialize(void)
{
  ULONG RecommendedSharedDataAlignment; // eax
  __int64 v2; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v3; // [rsp+28h] [rbp-38h]
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+30h] [rbp-30h] BYREF

  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&ndisPcwMutex);
  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  v2 = 6029402LL;
  Info.Version = 256;
  Info.CounterCount = 25;
  Info.Callback = (PPCW_CALLBACK)ndisCounterSetProviderCallback;
  Info.CallbackContext = (PVOID)1;
  ndisPcwOffsetToPerCpuData = -RecommendedSharedDataAlignment & (RecommendedSharedDataAlignment + 255);
  if ( RecommendedSharedDataAlignment < 0x1C0 )
    RecommendedSharedDataAlignment = 448;
  *(&Info.Version + 1) = 0;
  *(&Info.CounterCount + 1) = 0;
  ndisPcwPerCpuDataStride = RecommendedSharedDataAlignment;
  v3 = L"Per Processor Network Interface Card Activity";
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisRegisterNetworkInterfaceCounterSet'::`2'::Descriptors;
  Info.Name = (PCUNICODE_STRING)&v2;
  PcwRegister(&ndisNetworkInterfaceCounterSet, &Info);
  *(&Info.Version + 1) = 0;
  *(&Info.CounterCount + 1) = 0;
  v3 = L"Per Processor Network Activity Cycles";
  v2 = 4980810LL;
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisRegisterNetworkActivityCyclesCounterSet'::`2'::Descriptors;
  Info.Name = (PCUNICODE_STRING)&v2;
  Info.Version = 256;
  Info.CounterCount = 13;
  Info.Callback = (PPCW_CALLBACK)ndisCounterSetProviderCallback;
  Info.CallbackContext = (PVOID)2;
  PcwRegister(&ndisNetworkActivityCyclesCounterSet, &Info);
  *(&Info.Version + 1) = 0;
  *(&Info.CounterCount + 1) = 0;
  v3 = L"Physical Network Interface Card Activity";
  v2 = 5374032LL;
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisRegisterPhysicalNICCounterSet'::`2'::Descriptors;
  Info.Callback = (PPCW_CALLBACK)ndisPhysicalNicPcwProviderCallback;
  Info.Name = (PCUNICODE_STRING)&v2;
  Info.Version = 256;
  Info.CounterCount = 5;
  Info.CallbackContext = (PVOID)3;
  PcwRegister(&ndisPhysicalNICCounterSet, &Info);
  return 0LL;
}
