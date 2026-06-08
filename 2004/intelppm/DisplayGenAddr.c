/*
 * XREFs of DisplayGenAddr @ 0x1C0002698
 * Callers:
 *     Display_PCT_PTC @ 0x1C0002404 (Display_PCT_PTC.c)
 *     Display_CST @ 0x1C0002500 (Display_CST.c)
 *     Display_CPC @ 0x1C000BB80 (Display_CPC.c)
 *     Display_LPI @ 0x1C000C058 (Display_LPI.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C000356C (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_sD @ 0x1C000ACA8 (WPP_RECORDER_SF_sD.c)
 *     GetGenAddrType @ 0x1C000C79C (GetGenAddrType.c)
 *     WPP_RECORDER_SF_sDs @ 0x1C000CF30 (WPP_RECORDER_SF_sDs.c)
 *     WPP_RECORDER_SF_si @ 0x1C000D22C (WPP_RECORDER_SF_si.c)
 */

__int64 __fastcall DisplayGenAddr(unsigned __int8 *a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  __int64 v5; // rbp
  PDEVICE_OBJECT v7; // rcx
  __int64 v8; // r8
  int v9; // edx
  int v10; // r9d
  int v11; // r9d
  int v12; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+28h] [rbp-20h]

  result = *a1;
  v5 = a2;
  if ( (_BYTE)result != 126 )
  {
    if ( !(_BYTE)result && !*(_QWORD *)(a1 + 4) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v14 = a2;
        LOBYTE(a2) = 5;
        return WPP_RECORDER_SF_s(
                 WPP_GLOBAL_Control->DeviceExtension,
                 a2,
                 2,
                 149,
                 (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
                 v14);
      }
      return result;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      a3 = (int)WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        GetGenAddrType(*a1, *a1);
        result = WPP_RECORDER_SF_sDs(*(_QWORD *)(v8 + 64), v9, v8, v10);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(a2) = 5;
          result = WPP_RECORDER_SF_sD(
                     WPP_GLOBAL_Control->DeviceExtension,
                     a2,
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
                     a2,
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
        goto LABEL_15;
      v11 = 153;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return result;
      v7 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_15;
      v11 = 154;
    }
    LOBYTE(a2) = 5;
    result = WPP_RECORDER_SF_sD(
               v7->DeviceExtension,
               a2,
               2,
               v11,
               (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
               v5,
               a1[3]);
LABEL_15:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return WPP_RECORDER_SF_si(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4, v12, v5, *(_QWORD *)(a1 + 4));
    }
    return result;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = a2;
    LOBYTE(a2) = 5;
    return WPP_RECORDER_SF_sD(
             WPP_GLOBAL_Control->DeviceExtension,
             a2,
             2,
             148,
             (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
             v13,
             *((_DWORD *)a1 + 1));
  }
  return result;
}
