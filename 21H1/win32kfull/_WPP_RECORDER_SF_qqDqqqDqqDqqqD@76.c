/*
 * XREFs of _WPP_RECORDER_SF_qqDqqqDqqDqqqD@76 @ 0x14E9F3
 * Callers:
 *     ?xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z @ 0x6F108 (-xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_qqDqqqDqqDqqqD(
        int a1,
        int a2,
        int a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17)
{
  struct RECORDER_LOG__ *v17; // esi

  v17 = gFullLog;
  if ( ((unsigned int)&loc_20000 & WPP_GLOBAL_Control->Characteristics) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      &WPP_639f646729e7343d7b80e44c73d47209_Traceguids,
      22,
      &a4,
      4,
      &a5,
      4,
      &a6,
      4,
      &a7);
  return _WppAutoLogTrace(v17, 4, 18, &WPP_639f646729e7343d7b80e44c73d47209_Traceguids, 22, &a4, 4, &a5, 4, &a6, 4, &a7);
}
