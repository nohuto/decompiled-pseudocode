/*
 * XREFs of _WPP_RECORDER_SF_qqDD@36 @ 0x82328
 * Callers:
 *     _UnmapDesktop@4 @ 0x82292 (_UnmapDesktop@4.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_qqDD(int a1, int a2, int a3, char a4, char a5, char a6, char a7)
{
  struct RECORDER_LOG__ *v7; // esi

  v7 = gFullLog;
  if ( (WPP_GLOBAL_Control->Characteristics & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      &WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids,
      25,
      &a4,
      4,
      &a5,
      4,
      &a6,
      4,
      &a7);
  return _WppAutoLogTrace(v7, 4, 6, &WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids, 25, &a4, 4, &a5, 4, &a6, 4, &a7);
}
