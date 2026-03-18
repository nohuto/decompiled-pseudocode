/*
 * XREFs of HalpCmciPollProcessor @ 0x1403AAA10
 * Callers:
 *     HalpCmciDeferredRoutine @ 0x1403990C0 (HalpCmciDeferredRoutine.c)
 *     HalpCmciInitProcessor @ 0x140A53718 (HalpCmciInitProcessor.c)
 * Callees:
 *     HalpCmcPollProcessor @ 0x1403AAA5C (HalpCmcPollProcessor.c)
 *     HalpGetMcaPcrContext @ 0x1403AAB1C (HalpGetMcaPcrContext.c)
 *     HalpGetCpuVendor @ 0x1403AAE50 (HalpGetCpuVendor.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x140509960 (HalpCmciSetProcessorConfigAMD.c)
 */

__int64 __fastcall HalpCmciPollProcessor(__int64 a1)
{
  char CpuVendor; // di
  __int64 McaPcrContext; // rax
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rdx

  CpuVendor = HalpGetCpuVendor();
  McaPcrContext = HalpGetMcaPcrContext(a1);
  LOBYTE(v4) = 1;
  result = HalpCmcPollProcessor(*(_QWORD *)(McaPcrContext + 16), v4, a1, McaPcrContext);
  if ( CpuVendor == 1 )
  {
    LOBYTE(v6) = 1;
    return HalpCmciSetProcessorConfigAMD(HalpCmcErrorSource, v6, a1);
  }
  return result;
}
