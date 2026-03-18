/*
 * XREFs of ACPISystemPowerProcessSxD @ 0x1C00A1604
 * Callers:
 *     ACPISystemPowerInitializeRootMapping @ 0x1C00058F8 (ACPISystemPowerInitializeRootMapping.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     ACPISystemPowerGetSxD @ 0x1C0094BF8 (ACPISystemPowerGetSxD.c)
 */

__int64 __fastcall ACPISystemPowerProcessSxD(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  int *v3; // rbx
  int i; // edi
  int v7; // eax
  int SxD; // eax
  char v10; // r8
  void *v11; // r10
  void *v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = 0;
  v3 = (int *)(a2 + 4);
  *a3 = 0;
  for ( i = 1; i < 7; ++i )
  {
    v7 = AcpiSupportedSystemStates;
    if ( _bittest(&v7, i) )
    {
      SxD = ACPISystemPowerGetSxD((__int64)a1, i, &v15);
      if ( SxD != -1073741772 )
      {
        if ( SxD >= 0 )
        {
          v14 = v15;
          *a3 = 1;
          if ( v14 > *v3 )
            *v3 = v14;
        }
        else
        {
          v10 = 0;
          v11 = &unk_1C006FB8B;
          v12 = &unk_1C006FB8B;
          if ( a1 )
          {
            v13 = a1[1];
            v10 = (char)a1;
            if ( (v13 & 0x200000000000LL) != 0 )
            {
              v11 = (void *)a1[76];
              if ( (v13 & 0x400000000000LL) != 0 )
                v12 = (void *)a1[77];
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xFu,
              0x11u,
              (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
              SxD,
              v10,
              (__int64)v11,
              (__int64)v12);
        }
      }
    }
    else
    {
      *v3 = 0;
    }
    ++v3;
  }
  return 0LL;
}
