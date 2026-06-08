/*
 * XREFs of SetPerfStateFFH @ 0x1C000C590
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ii @ 0x1C000C02C (WPP_RECORDER_SF_ii.c)
 */

__int64 __fastcall SetPerfStateFFH(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  unsigned int v3; // r8d
  unsigned int v5; // ecx
  unsigned __int64 v6; // r10
  __int64 v7; // r10
  unsigned __int64 v8; // rax
  __int64 v9; // rcx

  v2 = a2[4];
  v3 = 0;
  v5 = *(_DWORD *)(a1 + 4);
  if ( v2 )
    v6 = a2[2] | __readmsr(v5) & v2;
  else
    v6 = a2[2];
  __writemsr(v5, v6);
  if ( *(_QWORD *)(a1 + 16) )
  {
    v7 = a2[3];
    if ( v7 )
    {
      v8 = __readmsr(*(_DWORD *)(a1 + 16));
      v9 = a2[5];
      if ( v9 )
        v8 &= v9;
      if ( v8 != v7 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ii(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x19u,
            (__int64)&WPP_bbe0b3150a27308fbe0acf4b28c7c946_Traceguids,
            v7,
            v8);
        return (unsigned int)-1073741823;
      }
    }
  }
  return v3;
}
