/*
 * XREFs of Display_CPC @ 0x1C0005B7C
 * Callers:
 *     InitAcpiCpc @ 0x1C0020B78 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_s @ 0x1C0004A40 (WPP_RECORDER_SF_s.c)
 *     DisplayGenAddr @ 0x1C00058C0 (DisplayGenAddr.c)
 */

__int64 __fastcall Display_CPC(_DWORD *a1, __int64 a2, int a3, int a4)
{
  const char **v5; // rbx
  __int64 v6; // rbp
  unsigned __int8 *v7; // rsi
  __int64 result; // rax
  __int64 v9; // [rsp+28h] [rbp-30h]

  if ( a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x8Eu,
          (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x8Fu,
            (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x90u,
              (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
              *a1);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v9) = a1[1];
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x91u,
              (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
              v9);
          }
        }
      }
    }
    v5 = (const char **)&off_1C000F238;
    v6 = 15LL;
    do
    {
      v7 = (unsigned __int8 *)a1 + *((unsigned int *)v5 - 2);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x92u,
          (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
          *v5);
      result = DisplayGenAddr(v7, "  ", a3, a4);
      v5 += 3;
      --v6;
    }
    while ( v6 );
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return WPP_RECORDER_SF_(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 5u,
                 2u,
                 0x93u,
                 (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
    }
  }
  return result;
}
