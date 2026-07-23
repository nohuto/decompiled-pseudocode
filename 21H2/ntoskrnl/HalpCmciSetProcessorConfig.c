/*
 * XREFs of HalpCmciSetProcessorConfig @ 0x1403A0D48
 * Callers:
 *     HalpDisableCmciOnProcessor @ 0x1404BD380 (HalpDisableCmciOnProcessor.c)
 *     HalpCmciInitProcessor @ 0x14099AD20 (HalpCmciInitProcessor.c)
 * Callees:
 *     HalpCmciSetProcessorConfigIntel @ 0x1403A0DB0 (HalpCmciSetProcessorConfigIntel.c)
 *     HalpGetCpuInfo @ 0x1403A10C0 (HalpGetCpuInfo.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x1404BD040 (HalpCmciSetProcessorConfigAMD.c)
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
