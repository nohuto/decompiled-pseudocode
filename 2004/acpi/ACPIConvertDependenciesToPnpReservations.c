/*
 * XREFs of ACPIConvertDependenciesToPnpReservations @ 0x1C0011678
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1C0011318 (ACPIAddInitializationDependencies.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x1C000AC5C (AMLIGetNameSpaceObject.c)
 *     ACPIReserveDependencies @ 0x1C004C784 (ACPIReserveDependencies.c)
 *     WPP_RECORDER_SF_sL @ 0x1C004C9DC (WPP_RECORDER_SF_sL.c)
 */

__int64 __fastcall ACPIConvertDependenciesToPnpReservations(__int64 a1, __int64 *a2, __int64 a3)
{
  int v3; // ebx
  int v4; // esi
  unsigned int v8; // r14d
  __int64 i; // rdi
  __int64 v11; // rbp
  int v12; // edx
  int v13; // r9d
  unsigned __int64 v14; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 0;
  v14 = 0LL;
  v8 = **(_DWORD **)(a3 + 32);
  if ( v8 )
  {
    for ( i = 0LL; ; i += 40LL )
    {
      v11 = *(_QWORD *)(a3 + 32);
      v3 = AMLIGetNameSpaceObject(*(_BYTE **)(i + v11 + 40), a2, &v14, 0);
      if ( v3 < 0 )
        break;
      v3 = ACPIReserveDependencies(a1);
      if ( v3 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)v3;
        v13 = 22;
        goto LABEL_12;
      }
      if ( ++v4 >= v8 )
        return (unsigned int)v3;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v3;
    v13 = 21;
LABEL_12:
    WPP_RECORDER_SF_sL(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      21,
      v13,
      (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
      *(_QWORD *)(i + v11 + 40),
      v3);
  }
  return (unsigned int)v3;
}
