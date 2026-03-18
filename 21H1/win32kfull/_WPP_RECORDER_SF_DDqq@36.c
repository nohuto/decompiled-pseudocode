/*
 * XREFs of _WPP_RECORDER_SF_DDqq@36 @ 0x156063
 * Callers:
 *     _IsHotKey@8 @ 0xB1CD0 (_IsHotKey@8.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_DDqq(int a1, int a2, int a3, char a4, char a5, char a6, char a7)
{
  struct RECORDER_LOG__ *v7; // esi

  v7 = gFullLog;
  if ( (WPP_GLOBAL_Control->Characteristics & 0x10000) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      &WPP_695339385d48364b61791a3ddfe4fa42_Traceguids,
      10,
      &a4,
      4,
      &a5,
      4,
      &a6,
      4,
      &a7);
  return _WppAutoLogTrace(v7, 4, 17, &WPP_695339385d48364b61791a3ddfe4fa42_Traceguids, 10, &a4, 4, &a5, 4, &a6, 4, &a7);
}
