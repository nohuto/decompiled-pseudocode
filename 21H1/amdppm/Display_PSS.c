/*
 * XREFs of Display_PSS @ 0x1C00068A0
 * Callers:
 *     ValidatePssCore @ 0x1C002B3A0 (ValidatePssCore.c)
 *     InitAcpiPerfStates @ 0x1C00308A8 (InitAcpiPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_i @ 0x1C00077F4 (WPP_RECORDER_SF_i.c)
 */

__int64 __fastcall Display_PSS(unsigned int *a1, int a2, int a3)
{
  __int64 result; // rax
  unsigned int i; // esi
  int v6; // [rsp+20h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = (__int64)&retaddr;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   5u,
                   2u,
                   0x53u,
                   (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   5u,
                   2u,
                   0x54u,
                   (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
    }
    for ( i = 0; i < *a1; ++i )
    {
      result = i;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = WPP_RECORDER_SF_D(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2u,
                     0x55u,
                     (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            result = WPP_RECORDER_SF_D(
                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                       5u,
                       2u,
                       0x56u,
                       (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              result = WPP_RECORDER_SF_D(
                         (__int64)WPP_GLOBAL_Control->DeviceExtension,
                         5u,
                         2u,
                         0x57u,
                         (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                result = WPP_RECORDER_SF_D(
                           (__int64)WPP_GLOBAL_Control->DeviceExtension,
                           5u,
                           2u,
                           0x58u,
                           (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  result = WPP_RECORDER_SF_D(
                             (__int64)WPP_GLOBAL_Control->DeviceExtension,
                             5u,
                             2u,
                             0x59u,
                             (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    result = WPP_RECORDER_SF_i(
                               WPP_GLOBAL_Control->DeviceExtension,
                               a2,
                               a3,
                               90,
                               v6,
                               *(_QWORD *)&a1[12 * i + 6]);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      result = WPP_RECORDER_SF_i(
                                 WPP_GLOBAL_Control->DeviceExtension,
                                 a2,
                                 a3,
                                 91,
                                 v6,
                                 *(_QWORD *)&a1[12 * i + 8]);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                        result = WPP_RECORDER_SF_i(
                                   WPP_GLOBAL_Control->DeviceExtension,
                                   a2,
                                   a3,
                                   92,
                                   v6,
                                   *(_QWORD *)&a1[12 * i + 10]);
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                          result = WPP_RECORDER_SF_i(
                                     WPP_GLOBAL_Control->DeviceExtension,
                                     a2,
                                     a3,
                                     93,
                                     v6,
                                     *(_QWORD *)&a1[12 * i + 12]);
                        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                            result = WPP_RECORDER_SF_(
                                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                       5u,
                                       2u,
                                       0x5Eu,
                                       (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
