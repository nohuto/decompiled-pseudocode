/*
 * XREFs of HalpCmciPollProcessor @ 0x14039DD1C
 * Callers:
 *     HalpCmciDeferredRoutine @ 0x14038B0A0 (HalpCmciDeferredRoutine.c)
 *     HalpCmciInitProcessor @ 0x140996760 (HalpCmciInitProcessor.c)
 * Callees:
 *     HalpCmcPollProcessor @ 0x14039DD80 (HalpCmcPollProcessor.c)
 *     HalpGetMcaPcrContext @ 0x14039DE38 (HalpGetMcaPcrContext.c)
 *     HalpGetCpuInfo @ 0x14039E1E0 (HalpGetCpuInfo.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x1404B7F20 (HalpCmciSetProcessorConfigAMD.c)
 */

__int64 __fastcall HalpCmciPollProcessor(__int64 a1)
{
  char CpuInfo; // al
  char v3; // di
  __int64 McaPcrContext; // rax
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rdx
  char v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, &v8);
  v3 = CpuInfo != 0 ? v8 : 0;
  McaPcrContext = HalpGetMcaPcrContext(a1);
  LOBYTE(v5) = 1;
  result = HalpCmcPollProcessor(*(_QWORD *)(McaPcrContext + 16), v5, a1, McaPcrContext);
  if ( v3 == 1 )
  {
    LOBYTE(v7) = 1;
    return HalpCmciSetProcessorConfigAMD(HalpCmcErrorSource, v7, a1);
  }
  return result;
}
