/*
 * XREFs of WPP_RECORDER_SF__guid_d @ 0x1C003C8EC
 * Callers:
 *     HUBACPI_ExecuteDSM @ 0x1C00840FC (HUBACPI_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF__guid_d(__int64 a1)
{
  int v3; // [rsp+20h] [rbp-48h]
  int v4[6]; // [rsp+50h] [rbp-18h] BYREF

  v4[0] = -1073741670;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, GUID *, __int64, int *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_c5068035c0c03895c2d054ff6dfe9623_Traceguids,
      10LL,
      &GUID_DSM_SDM845_HS_RH_PORT_RESET_WORKAROUND,
      16LL,
      v4,
      4LL,
      0LL);
  LOWORD(v3) = 10;
  return WppAutoLogTrace(
           a1,
           2LL,
           3LL,
           &WPP_c5068035c0c03895c2d054ff6dfe9623_Traceguids,
           v3,
           &GUID_DSM_SDM845_HS_RH_PORT_RESET_WORKAROUND);
}
