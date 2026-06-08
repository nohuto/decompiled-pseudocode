/*
 * XREFs of ValidatePssSymmetry @ 0x1C002D53C
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C002CF48 (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     WPP_RECORDER_SF_ddsdd @ 0x1C000A900 (WPP_RECORDER_SF_ddsdd.c)
 *     WPP_RECORDER_SF_ddsddd @ 0x1C000AABC (WPP_RECORDER_SF_ddsddd.c)
 */

__int64 __fastcall ValidatePssSymmetry(char a1, unsigned int *a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  char v5; // si
  unsigned int v7; // ebx
  unsigned int v8; // r10d
  __int64 i; // rdx
  __int64 v10; // r8
  int v12; // [rsp+20h] [rbp-48h]

  v5 = a3;
  v7 = -1073741823;
  if ( a2 && a4 )
  {
    v8 = *a2;
    if ( *a2 == *a4 )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= v8 )
          return 0;
        v10 = a2[12 * i + 2];
        if ( (_DWORD)v10 != a4[12 * i + 2] )
          break;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddsddd((__int64)WPP_GLOBAL_Control->DeviceExtension, i, v10, (__int64)a4, v12, a1, v5, a5);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_ddsdd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, a3, (__int64)a4, v12, a1, a3, a5);
    }
  }
  return v7;
}
