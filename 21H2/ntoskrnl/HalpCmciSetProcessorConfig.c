/*
 * XREFs of HalpCmciSetProcessorConfig @ 0x1403AAB4C
 * Callers:
 *     HalpDisableCmciOnProcessor @ 0x140509C90 (HalpDisableCmciOnProcessor.c)
 *     HalpCmciInitProcessor @ 0x140A53718 (HalpCmciInitProcessor.c)
 * Callees:
 *     HalpCmciSetProcessorConfigIntel @ 0x1403AAB98 (HalpCmciSetProcessorConfigIntel.c)
 *     HalpGetCpuVendor @ 0x1403AAE50 (HalpGetCpuVendor.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x140509960 (HalpCmciSetProcessorConfigAMD.c)
 */

__int64 __fastcall HalpCmciSetProcessorConfig(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rdx

  result = HalpGetCpuVendor();
  if ( (_BYTE)result == 2 )
  {
    LOBYTE(v7) = a2;
    return HalpCmciSetProcessorConfigIntel(a1, v7, a3);
  }
  else if ( (_BYTE)result == 1 )
  {
    LOBYTE(v7) = a2;
    return HalpCmciSetProcessorConfigAMD(a1, v7, a3);
  }
  return result;
}
