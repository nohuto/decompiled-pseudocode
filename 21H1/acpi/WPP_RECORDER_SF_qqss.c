/*
 * XREFs of WPP_RECORDER_SF_qqss @ 0x1C001E028
 * Callers:
 *     ACPIFanDeviceControl @ 0x1C000D040 (ACPIFanDeviceControl.c)
 *     ACPIFanCompletePendingIrps @ 0x1C000D38C (ACPIFanCompletePendingIrps.c)
 *     ACPIDetectDuplicateHID @ 0x1C001AB94 (ACPIDetectDuplicateHID.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C001B710 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x1C001BA60 (ACPIDevicePowerProcessPhase5DeviceSubPhase6.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C001BE20 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001C0D0 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C001C390 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIWakeWaitIrp @ 0x1C002DF80 (ACPIWakeWaitIrp.c)
 *     ACPIMatchKernelPorts @ 0x1C0031594 (ACPIMatchKernelPorts.c)
 *     ACPIDockIrpQueryPower @ 0x1C004A4E0 (ACPIDockIrpQueryPower.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C004CFB0 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C0050130 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C0050D90 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C0051340 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C0051450 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0051520 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C00516D0 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C00518A0 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C00519B0 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 *     ACPIFanCancelRequest @ 0x1C0054FE0 (ACPIFanCancelRequest.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C00566FC (ACPIQueryGedDeviceInterface.c)
 *     ACPIThermalStartDevice @ 0x1C009A220 (ACPIThermalStartDevice.c)
 *     ACPIBusIrpQueryResources @ 0x1C009BDB0 (ACPIBusIrpQueryResources.c)
 *     ACPIDockIrpEject @ 0x1C00AB230 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C00AB4F0 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1C00AB9F8 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIDockIrpQueryID @ 0x1C00ABC10 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x1C00AC260 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C00AD3B0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIRootIrpStartDevice @ 0x1C00BB130 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int64 v12; // r14
  unsigned int v13; // r15d
  unsigned int v14; // r12d
  __int64 v15; // rbx
  int v16; // eax
  unsigned __int8 v17; // cf
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v21; // r8
  const char *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rdx
  const char *v25; // rcx
  int v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+A0h] [rbp+8h]

  v27 = a1;
  v9 = (__int64)a9;
  v10 = (__int64)a8;
  v12 = (unsigned __int64)a3 >> 16;
  v13 = a2;
  v14 = a4;
  v15 = -1LL;
  v16 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v12 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v17 = _bittest(&v16, (a3 - 1) & 0x1F);
  v18 = 5LL;
  if ( v17 && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v12 + 1) >= a2 )
  {
    if ( a9 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a9[v21] );
      v18 = v21 + 1;
    }
    v22 = a9;
    if ( !a9 )
      v22 = "NULL";
    if ( a8 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a8[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = a8;
    if ( !a8 )
      v25 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v12),
      43LL,
      a5,
      v14,
      &a6,
      8LL,
      &a7,
      8LL,
      v25,
      v24,
      v22,
      v18,
      0LL);
    a1 = v27;
  }
  if ( v9 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v9 + v19) );
  }
  if ( v10 )
  {
    do
      ++v15;
    while ( *(_BYTE *)(v10 + v15) );
  }
  LOWORD(v26) = v14;
  return WppAutoLogTrace(a1, v13, a3, a5, v26, &a6);
}
