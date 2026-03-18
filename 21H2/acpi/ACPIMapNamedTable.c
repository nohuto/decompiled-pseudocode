/*
 * XREFs of ACPIMapNamedTable @ 0x1C00019E0
 * Callers:
 *     ACPIEnumMapTableHandler @ 0x1C0001990 (ACPIEnumMapTableHandler.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C0020398 (ACPIEcInitOpRegionHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0023BB0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008E978 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00B1B70 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 */

__int64 __fastcall ACPIMapNamedTable(int a1, _DWORD *a2, _QWORD *a3, void *a4, unsigned int *a5)
{
  unsigned int v9; // edi
  char AMLRegistryEntry; // bp
  unsigned int *v11; // rbx
  unsigned int *v12; // rsi
  _OWORD *Pool2; // rax
  int v14; // edx
  unsigned int v15; // eax
  _DWORD *v17; // rax
  char TableFromSimulatorRegistryEntry; // al
  PVOID P[2]; // [rsp+30h] [rbp-38h] BYREF

  v9 = 0;
  AMLRegistryEntry = 0;
  v11 = 0LL;
  v12 = (unsigned int *)(*(__int64 (**)(void))(PmHalDispatchTable + 88))();
  if ( v12 )
  {
    Pool2 = (_OWORD *)ExAllocatePool2(64LL, 36LL, 1953522497LL);
    P[0] = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *Pool2 = *(_OWORD *)v12;
    Pool2[1] = *((_OWORD *)v12 + 1);
    *((_DWORD *)Pool2 + 8) = v12[8];
    *((_DWORD *)Pool2 + 1) = 36;
    AMLRegistryEntry = ACPIRegReadAMLRegistryEntry(P);
    if ( !AMLRegistryEntry )
    {
      v11 = (unsigned int *)P[0];
      ExFreePoolWithTag(P[0], 0);
      goto LABEL_5;
    }
    v11 = (unsigned int *)P[0];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        6,
        29,
        (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
        (char)P[0]);
    }
    v12 = v11;
    if ( v11 )
      goto LABEL_5;
  }
  if ( !g_SimulatorCallbackObject )
    goto LABEL_11;
  v17 = (_DWORD *)ExAllocatePool2(64LL, 36LL, 1953522497LL);
  P[0] = v17;
  v11 = v17;
  if ( !v17 )
  {
    v9 = -1073741670;
    goto LABEL_7;
  }
  *v17 = a1;
  v17[1] = 36;
  if ( a2 )
    *(_DWORD *)((char *)v17 + 10) = *a2;
  if ( a3 )
    *((_QWORD *)v17 + 2) = *a3;
  TableFromSimulatorRegistryEntry = ACPIRegGetTableFromSimulatorRegistryEntry(P);
  v11 = (unsigned int *)P[0];
  AMLRegistryEntry = TableFromSimulatorRegistryEntry;
  if ( TableFromSimulatorRegistryEntry )
    v12 = (unsigned int *)P[0];
  else
    ExFreePoolWithTag(P[0], 0);
  if ( !v12 )
  {
LABEL_11:
    v9 = -1073741275;
    goto LABEL_7;
  }
LABEL_5:
  v15 = v12[1];
  if ( *a5 >= v15 )
  {
    memmove(a4, v12, v12[1]);
    *a5 = v12[1];
  }
  else
  {
    *a5 = v15;
    v9 = -1073741789;
  }
LABEL_7:
  if ( AMLRegistryEntry && v11 )
    ExFreePoolWithTag(v11, 0);
  return v9;
}
