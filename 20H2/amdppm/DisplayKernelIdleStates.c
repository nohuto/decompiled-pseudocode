/*
 * XREFs of DisplayKernelIdleStates @ 0x1C0008290
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C000AC40 (RegisterKernelIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_LLLLL @ 0x1C00094E8 (WPP_RECORDER_SF_LLLLL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000961C (WPP_RECORDER_SF_q.c)
 */

_UNKNOWN **__fastcall DisplayKernelIdleStates(__int64 a1, int a2, int a3)
{
  _UNKNOWN **result; // rax
  unsigned int i; // edi
  unsigned int v6; // r9d
  int v7; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = &retaddr;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = (_UNKNOWN **)WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 98);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                  5u,
                                  2u,
                                  0x63u,
                                  (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                  5u,
                                  2u,
                                  0x64u,
                                  (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids);
      }
    }
    for ( i = 0; i < *(_DWORD *)(a1 + 116); ++i )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v6 = *(_DWORD *)(32LL * i + a1 + 120);
        result = (_UNKNOWN **)WPP_RECORDER_SF_LLLLL(
                                WPP_GLOBAL_Control->DeviceExtension,
                                (v6 >> 1) & 1,
                                (v6 >> 2) & 1,
                                v6 >> 31,
                                v7,
                                i,
                                (v6 & 0x80000000) != 0,
                                v6 & 1,
                                (v6 & 2) != 0,
                                (v6 & 4) != 0);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return (_UNKNOWN **)WPP_RECORDER_SF_(
                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                              5u,
                              2u,
                              0x66u,
                              (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids);
    }
  }
  return result;
}
