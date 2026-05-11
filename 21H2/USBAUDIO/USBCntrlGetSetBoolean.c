/*
 * XREFs of USBCntrlGetSetBoolean @ 0x1C00328E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0004744 (WPP_RECORDER_SF_ddd.c)
 *     USBHwGetSetByte @ 0x1C002CF60 (USBHwGetSetByte.c)
 */

__int64 __fastcall USBCntrlGetSetBoolean(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        signed __int8 a6,
        _DWORD *a7)
{
  __int64 v10; // rsi
  int SetByte; // eax
  __int64 v13; // rdx
  unsigned int v14; // esi
  __int64 v15; // [rsp+28h] [rbp-30h]

  v10 = *(_QWORD *)(a2 + 128) + 16LL * a5;
  if ( a3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        a5,
        0xAu,
        0xEu,
        (__int64)&WPP_c2ce4f10c1f73bfa41afadc737c30031_Traceguids,
        *(_DWORD *)(a2 + 76),
        a5,
        *a4);
    SetByte = USBHwGetSetByte(
                a1,
                *(_DWORD *)(a2 + 80),
                *(_DWORD *)(v10 + 8),
                (unsigned __int16)*(_DWORD *)(a2 + 76) - 6,
                a4,
                a6);
    v14 = SetByte;
    if ( SetByte < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v15) = SetByte;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v13,
          0xAu,
          0xFu,
          (__int64)&WPP_c2ce4f10c1f73bfa41afadc737c30031_Traceguids,
          v15);
      }
    }
    else if ( a6 >= 0 )
    {
      *a7 = 4;
    }
    return v14;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        a5,
        0xAu,
        0xDu,
        (__int64)&WPP_c2ce4f10c1f73bfa41afadc737c30031_Traceguids);
    return 3221225990LL;
  }
}
