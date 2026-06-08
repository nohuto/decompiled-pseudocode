/*
 * XREFs of Display_CPC @ 0x1C000BB80
 * Callers:
 *     InitAcpiCpc @ 0x1C00220D8 (InitAcpiCpc.c)
 * Callees:
 *     DisplayGenAddr @ 0x1C0002698 (DisplayGenAddr.c)
 *     WPP_RECORDER_SF_s @ 0x1C000356C (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000A334 (WPP_RECORDER_SF_d.c)
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
          (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x8Fu,
            (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x90u,
              (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids,
              *a1);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v9) = a1[1];
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x91u,
              (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids,
              v9);
          }
        }
      }
    }
    v5 = (const char **)&off_1C0012358;
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
          (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids,
          *v5);
      result = DisplayGenAddr(v7, (__int64)"  ", a3, a4);
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
                 (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids);
    }
  }
  return result;
}
