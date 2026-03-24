/*
 * XREFs of ACPIMapNamedTable @ 0x1C0002990
 * Callers:
 *     ACPIEnumMapTableHandler @ 0x1C0002940 (ACPIEnumMapTableHandler.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C0026A58 (ACPIEcInitOpRegionHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000F770 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008FCF0 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00B2278 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 */

__int64 __fastcall ACPIMapNamedTable(int a1, _DWORD *a2, _QWORD *a3, void *a4, unsigned int *a5)
{
  unsigned int v9; // esi
  char AMLRegistryEntry; // bp
  _DWORD *v11; // rbx
  _DWORD *v12; // rdi
  _OWORD *PoolWithTag; // rax
  int v14; // edx
  unsigned int v15; // eax
  char TableFromSimulatorRegistryEntry; // al
  PVOID P[2]; // [rsp+30h] [rbp-38h] BYREF

  v9 = 0;
  AMLRegistryEntry = 0;
  v11 = 0LL;
  v12 = (_DWORD *)(*(__int64 (**)(void))(PmHalDispatchTable + 88))();
  if ( v12 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x24uLL, 0x74706341u);
    P[0] = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    *PoolWithTag = *(_OWORD *)v12;
    PoolWithTag[1] = *((_OWORD *)v12 + 1);
    *((_DWORD *)PoolWithTag + 8) = v12[8];
    *((_DWORD *)PoolWithTag + 1) = 36;
    AMLRegistryEntry = ACPIRegReadAMLRegistryEntry(P);
    if ( AMLRegistryEntry )
    {
      v11 = P[0];
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          6,
          29,
          (__int64)&WPP_46b15d9ca9c23528b9d260ad71f05863_Traceguids,
          (char)P[0]);
      }
      v12 = v11;
    }
    else
    {
      v11 = P[0];
      ExFreePoolWithTag(P[0], 0);
    }
    if ( v12 )
      goto LABEL_6;
  }
  if ( g_SimulatorCallbackObject )
  {
    P[0] = ExAllocatePoolWithTag(NonPagedPoolNx, 0x24uLL, 0x74706341u);
    v11 = P[0];
    if ( !P[0] )
    {
      v9 = -1073741670;
      goto LABEL_8;
    }
    *(_OWORD *)P[0] = 0LL;
    *((_OWORD *)v11 + 1) = 0LL;
    v11[8] = 0;
    *v11 = a1;
    v11[1] = 36;
    if ( a2 )
      *(_DWORD *)((char *)v11 + 10) = *a2;
    if ( a3 )
      *((_QWORD *)v11 + 2) = *a3;
    TableFromSimulatorRegistryEntry = ACPIRegGetTableFromSimulatorRegistryEntry(P);
    v11 = P[0];
    AMLRegistryEntry = TableFromSimulatorRegistryEntry;
    if ( TableFromSimulatorRegistryEntry )
      v12 = P[0];
    else
      ExFreePoolWithTag(P[0], 0);
  }
  if ( v12 )
  {
LABEL_6:
    v15 = v12[1];
    if ( *a5 < v15 )
    {
      *a5 = v15;
      v9 = -1073741789;
    }
    else
    {
      memmove(a4, v12, v15);
      *a5 = v12[1];
    }
  }
  else
  {
    v9 = -1073741275;
  }
LABEL_8:
  if ( AMLRegistryEntry && v11 )
    ExFreePoolWithTag(v11, 0);
  return v9;
}
