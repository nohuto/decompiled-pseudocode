/*
 * XREFs of HalpTimerRegisterBuiltinPlugins @ 0x1403BCA40
 * Callers:
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x1403BCA0C (HalpTimerRegisterBuiltinPluginsCommon.c)
 * Callees:
 *     HalSocRequestConfigurationData @ 0x1403B36F4 (HalSocRequestConfigurationData.c)
 *     HalpPmTimerDiscover @ 0x1403BCAD0 (HalpPmTimerDiscover.c)
 *     HalpSfiTimerDiscover @ 0x1403BCBD0 (HalpSfiTimerDiscover.c)
 *     HalpRtcDiscover @ 0x1403BCC5C (HalpRtcDiscover.c)
 *     HalpApicTimerDiscover @ 0x1403BCDA0 (HalpApicTimerDiscover.c)
 *     HalpTscDiscover @ 0x1403BCF1C (HalpTscDiscover.c)
 *     HalpHpetDiscover @ 0x1403BD8C8 (HalpHpetDiscover.c)
 *     HalpTimerRegister @ 0x1403BE0BC (HalpTimerRegister.c)
 *     HalpHvWatchdogDiscover @ 0x1403BE8A0 (HalpHvWatchdogDiscover.c)
 *     HalpArtDiscover @ 0x1403BE8FC (HalpArtDiscover.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall HalpTimerRegisterBuiltinPlugins(int a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  _QWORD v3[18]; // [rsp+20h] [rbp-39h] BYREF
  char v4; // [rsp+C0h] [rbp+67h] BYREF

  if ( !a1 )
    return HalpTscDiscover();
  if ( a1 != 1 )
    return 0LL;
  result = HalpPmTimerDiscover();
  if ( (int)result >= 0 )
  {
    result = HalpRtcDiscover();
    if ( (int)result >= 0 )
    {
      result = HalpHpetDiscover();
      if ( (int)result >= 0 )
      {
        result = HalpApicTimerDiscover();
        if ( (int)result >= 0 )
        {
          result = HalpSfiTimerDiscover();
          if ( (int)result >= 0 )
          {
            v4 = 1;
            if ( (int)HalSocRequestConfigurationData(2, v2, &v4) >= 0 && v4 )
            {
              memset(v3, 0, sizeof(v3));
              LODWORD(v3[15]) = 0;
              LODWORD(v3[16]) = 0;
              v3[1] = HalSystemVectorDispatchEntry;
              v3[0] = 0x9000000001LL;
              v3[4] = Halp8254TimerArm;
              v3[3] = xHalTimerWatchdogStop;
              v3[5] = xHalTimerWatchdogStop;
              HIDWORD(v3[12]) = 16;
              v3[13] = 1193182LL;
              LODWORD(v3[17]) = 4;
              HIDWORD(v3[14]) = 320;
              HalpTimerRegister(v3, 0LL);
            }
            result = HalpArtDiscover();
            if ( (int)result >= 0 )
              return HalpHvWatchdogDiscover();
          }
        }
      }
    }
  }
  return result;
}
