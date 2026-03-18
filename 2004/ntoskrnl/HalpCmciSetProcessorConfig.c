/*
 * XREFs of HalpCmciSetProcessorConfig @ 0x14039DE68
 * Callers:
 *     HalpDisableCmciOnProcessor @ 0x1404B8260 (HalpDisableCmciOnProcessor.c)
 *     HalpCmciInitProcessor @ 0x140996760 (HalpCmciInitProcessor.c)
 * Callees:
 *     HalpCmciSetProcessorConfigIntel @ 0x14039DED0 (HalpCmciSetProcessorConfigIntel.c)
 *     HalpGetCpuInfo @ 0x14039E1E0 (HalpGetCpuInfo.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x1404B7F20 (HalpCmciSetProcessorConfigAMD.c)
 */

char __fastcall HalpCmciSetProcessorConfig(__int64 a1, char a2, __int64 a3)
{
  char result; // al
  __int64 v7; // rdx
  char v8; // r8
  char v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0;
  result = -(char)HalpGetCpuInfo(0LL, 0LL, 0LL, &v9);
  v8 = result != 0 ? v9 : 0;
  if ( v8 == 2 )
  {
    LOBYTE(v7) = a2;
    return HalpCmciSetProcessorConfigIntel(a1, v7, a3);
  }
  else if ( v8 == 1 )
  {
    LOBYTE(v7) = a2;
    return HalpCmciSetProcessorConfigAMD(a1, v7, a3);
  }
  return result;
}
