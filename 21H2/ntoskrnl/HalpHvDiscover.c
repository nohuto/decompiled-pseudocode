/*
 * XREFs of HalpHvDiscover @ 0x1403AC52C
 * Callers:
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x1403AA588 (HalpTimerRegisterBuiltinPluginsCommon.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14037B300 (HalQueryMaximumProcessorCount.c)
 *     HalSocRequestConfigurationData @ 0x1403A1E9C (HalSocRequestConfigurationData.c)
 *     HalSocRequestApi @ 0x1403A209C (HalSocRequestApi.c)
 *     HalpTimerRegister @ 0x1403ABC00 (HalpTimerRegister.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall HalpHvDiscover(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  int MaximumProcessorCount; // eax
  _QWORD v5[18]; // [rsp+30h] [rbp-39h] BYREF
  char v6; // [rsp+D0h] [rbp+67h] BYREF

  v6 = 0;
  if ( (int)HalSocRequestApi(a1, (__int64)HalpHvCounterUpdateCallback, 3, 8LL, &HalpHvTimerApi) >= 0 )
  {
    memset(v5, 0, sizeof(v5));
    v5[0] = 0x9000000001LL;
    v5[1] = HalSystemVectorDispatchEntry;
    v5[2] = HalpHvCounterQueryCounter;
    HIDWORD(v5[12]) = 64;
    LODWORD(v5[17]) = 8;
    HIDWORD(v5[14]) = 2;
    v5[13] = 10000000LL;
    HalpTimerRegister((__int64)v5, 0LL);
  }
  if ( (int)HalSocRequestConfigurationData(3, v1, &v6) >= 0 && v6 )
  {
    memset(v5, 0, sizeof(v5));
    v5[11] = 0LL;
    v5[0] = 0x9000000001LL;
    MaximumProcessorCount = HalQueryMaximumProcessorCount(v3);
    HIDWORD(v5[12]) = 64;
    v5[13] = 10000000LL;
    LODWORD(v5[17]) = 8;
    HIDWORD(v5[14]) = 34913;
    v5[1] = HalpHvTimerInitialize;
    v5[2] = HalpHvCounterQueryCounter;
    v5[9] = HalpHvTimerSetInterruptVector;
    v5[4] = HalpHvTimerArm;
    v5[3] = HalpHvTimerAcknowledgeInterrupt;
    LODWORD(v5[12]) = 24 * MaximumProcessorCount;
    v5[5] = HalpHvTimerStop;
    HalpTimerRegister((__int64)v5, 0LL);
  }
  return 0LL;
}
