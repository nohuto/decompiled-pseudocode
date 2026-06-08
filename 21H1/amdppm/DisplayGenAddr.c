/*
 * XREFs of DisplayGenAddr @ 0x1C00058C0
 * Callers:
 *     Display_CPC @ 0x1C0005B7C (Display_CPC.c)
 *     Display_CST @ 0x1C0006054 (Display_CST.c)
 *     Display_LPI @ 0x1C00062F0 (Display_LPI.c)
 *     Display_PCT_PTC @ 0x1C0006734 (Display_PCT_PTC.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0004A40 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_sD @ 0x1C00078A0 (WPP_RECORDER_SF_sD.c)
 *     WPP_RECORDER_SF_sDs @ 0x1C0007A28 (WPP_RECORDER_SF_sDs.c)
 *     WPP_RECORDER_SF_si @ 0x1C0007D24 (WPP_RECORDER_SF_si.c)
 */

__int64 __fastcall DisplayGenAddr(unsigned __int8 *a1, const char *a2, int a3, int a4)
{
  __int64 result; // rax
  __int64 v5; // rbp
  PDEVICE_OBJECT v7; // rcx
  int v8; // r9d
  int v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]

  result = *a1;
  v5 = (__int64)a2;
  if ( (_BYTE)result == 126 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v10 = (__int64)a2;
        LOBYTE(a2) = 5;
        return WPP_RECORDER_SF_sD(
                 WPP_GLOBAL_Control->DeviceExtension,
                 (_DWORD)a2,
                 2,
                 148,
                 (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
                 v10,
                 *((_DWORD *)a1 + 1));
      }
    }
    return result;
  }
  if ( !(_BYTE)result && !*(_QWORD *)(a1 + 4) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               5u,
               2u,
               0x95u,
               (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
               a2);
    return result;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = WPP_RECORDER_SF_sDs(WPP_GLOBAL_Control->DeviceExtension, result, a3, a4);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        result = WPP_RECORDER_SF_sD(
                   WPP_GLOBAL_Control->DeviceExtension,
                   (_DWORD)a2,
                   2,
                   151,
                   (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
                   v5,
                   a1[1]);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        result = WPP_RECORDER_SF_sD(
                   WPP_GLOBAL_Control->DeviceExtension,
                   (_DWORD)a2,
                   2,
                   152,
                   (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
                   v5,
                   a1[2]);
      }
    }
  }
  if ( *a1 == 10 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v7 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_27;
    v8 = 153;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v7 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_27;
    v8 = 154;
  }
  LOBYTE(a2) = 5;
  result = WPP_RECORDER_SF_sD(
             v7->DeviceExtension,
             (_DWORD)a2,
             2,
             v8,
             (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
             v5,
             a1[3]);
LABEL_27:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_si(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)a2, a3, a4, v9, v5, *(_QWORD *)(a1 + 4));
  return result;
}
