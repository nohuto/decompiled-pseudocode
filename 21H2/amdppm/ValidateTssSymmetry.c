/*
 * XREFs of ValidateTssSymmetry @ 0x1C002D680
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C002CF48 (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     WPP_RECORDER_SF_dddd @ 0x1C000A434 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_ddddd @ 0x1C000A544 (WPP_RECORDER_SF_ddddd.c)
 */

__int64 __fastcall ValidateTssSymmetry(__int64 a1, unsigned int *a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  unsigned int v6; // r10d
  __int64 i; // rdx
  int v9; // [rsp+20h] [rbp-38h]

  v5 = -1073741823;
  if ( a2 && a4 )
  {
    v6 = *a2;
    if ( *a2 == *a4 )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= v6 )
          return 0;
        if ( a2[5 * i + 1] != a4[5 * i + 1] )
          break;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddddd((__int64)WPP_GLOBAL_Control->DeviceExtension, i, a3, (__int64)a4, v9);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_dddd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, a3, (__int64)a4, v9);
    }
  }
  return v5;
}
