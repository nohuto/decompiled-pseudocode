/*
 * XREFs of Display_PCT_PTC @ 0x1C0002404
 * Callers:
 *     InitAcpiPerfStates @ 0x1C00225FC (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C002279C (InitAcpiThrottleStates.c)
 * Callees:
 *     DisplayGenAddr @ 0x1C0002698 (DisplayGenAddr.c)
 *     WPP_RECORDER_SF_s @ 0x1C000356C (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Display_PCT_PTC(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // edx
  __int64 result; // rax
  int v6; // edx

  if ( a1 )
  {
    v2 = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          a2,
          2,
          95,
          (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_s(
          WPP_GLOBAL_Control->DeviceExtension,
          a2,
          2,
          96,
          (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids,
          v2);
      }
    }
    DisplayGenAddr(a1, "  ");
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v4) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v4,
          2,
          97,
          (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v4) = 5;
        WPP_RECORDER_SF_s(
          WPP_GLOBAL_Control->DeviceExtension,
          v4,
          2,
          98,
          (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids,
          v2);
      }
    }
    result = DisplayGenAddr(a1 + 12, "  ");
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v6) = 5;
        return WPP_RECORDER_SF_(
                 WPP_GLOBAL_Control->DeviceExtension,
                 v6,
                 2,
                 99,
                 (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids);
      }
    }
  }
  return result;
}
