/*
 * XREFs of Display_PSS @ 0x1C0002238
 * Callers:
 *     InitAcpiPerfStates @ 0x1C00212AC (InitAcpiPerfStates.c)
 *     ValidatePssCore @ 0x1C00238E4 (ValidatePssCore.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_i @ 0x1C000CE84 (WPP_RECORDER_SF_i.c)
 */

__int64 __fastcall Display_PSS(unsigned int *a1, char a2, int a3)
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
                   WPP_GLOBAL_Control->DeviceExtension,
                   5,
                   2,
                   83,
                   (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_(
                   WPP_GLOBAL_Control->DeviceExtension,
                   5,
                   2,
                   84,
                   (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
    }
    for ( i = 0; i < *a1; ++i )
    {
      result = i;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = WPP_RECORDER_SF_D(
                     WPP_GLOBAL_Control->DeviceExtension,
                     5,
                     2,
                     85,
                     (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
                     i);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            result = WPP_RECORDER_SF_D(
                       WPP_GLOBAL_Control->DeviceExtension,
                       5,
                       2,
                       86,
                       (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
                       a1[12 * i + 2]);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              result = WPP_RECORDER_SF_D(
                         WPP_GLOBAL_Control->DeviceExtension,
                         5,
                         2,
                         87,
                         (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
                         a1[12 * i + 3]);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                result = WPP_RECORDER_SF_D(
                           WPP_GLOBAL_Control->DeviceExtension,
                           5,
                           2,
                           88,
                           (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
                           a1[12 * i + 4]);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  result = WPP_RECORDER_SF_D(
                             WPP_GLOBAL_Control->DeviceExtension,
                             5,
                             2,
                             89,
                             (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
                             a1[12 * i + 5]);
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
                                       WPP_GLOBAL_Control->DeviceExtension,
                                       5,
                                       2,
                                       94,
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
