/*
 * XREFs of WPP_SF_DDd @ 0x1800E1274
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x1800192A0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_DDd(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+98h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids, 29LL, &v5);
}
