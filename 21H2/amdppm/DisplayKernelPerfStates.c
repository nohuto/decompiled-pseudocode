/*
 * XREFs of DisplayKernelPerfStates @ 0x1C0008BFC
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000AE18 (InitLegacyPccInternal.c)
 *     InitCpcStatesInternal @ 0x1C002DEF8 (InitCpcStatesInternal.c)
 *     InitPerfStatesInternal @ 0x1C002F820 (InitPerfStatesInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003B54 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C0009E0C (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall DisplayKernelPerfStates(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+28h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      HIDWORD(v5) = HIDWORD(a1);
      result = WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 93);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v5) = *(unsigned __int16 *)(a1 + 4);
        result = WPP_RECORDER_SF_D(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   5u,
                   2u,
                   0x5Eu,
                   (__int64)&WPP_d7c5e771396e3b131ba8bdc028e38c61_Traceguids,
                   v5);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v5) = *(_DWORD *)(a1 + 16);
          result = WPP_RECORDER_SF_D(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2u,
                     0x5Fu,
                     (__int64)&WPP_d7c5e771396e3b131ba8bdc028e38c61_Traceguids,
                     v5);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v5) = *(_DWORD *)(a1 + 20);
            result = WPP_RECORDER_SF_D(
                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                       5u,
                       2u,
                       0x60u,
                       (__int64)&WPP_d7c5e771396e3b131ba8bdc028e38c61_Traceguids,
                       v5);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              return WPP_RECORDER_SF_(
                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                       5u,
                       2u,
                       0x61u,
                       (__int64)&WPP_d7c5e771396e3b131ba8bdc028e38c61_Traceguids);
          }
        }
      }
    }
  }
  return result;
}
