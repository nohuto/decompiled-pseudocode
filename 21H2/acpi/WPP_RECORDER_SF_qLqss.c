/*
 * XREFs of WPP_RECORDER_SF_qLqss @ 0x1C0003A80
 * Callers:
 *     ACPIFanCompletePendingIrps @ 0x1C0003834 (ACPIFanCompletePendingIrps.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0008730 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C00088C0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDeviceCompleteRequest @ 0x1C000AA40 (ACPIDeviceCompleteRequest.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C000C340 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x1C0022A98 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C0027D40 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C00286C0 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x1C002E7C0 (ACPIDeviceIrpCompleteRequest.c)
 *     ACPIWakeCompleteRequestQueue @ 0x1C002ED3C (ACPIWakeCompleteRequestQueue.c)
 *     ACPIDeviceIrpForwardRequest @ 0x1C0030A70 (ACPIDeviceIrpForwardRequest.c)
 *     ACPICMButtonSetPower @ 0x1C004D750 (ACPICMButtonSetPower.c)
 *     ACPIDeviceIrpDelayedDeviceOffRequest @ 0x1C004F600 (ACPIDeviceIrpDelayedDeviceOffRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOnRequest @ 0x1C004F740 (ACPIDeviceIrpDelayedDeviceOnRequest.c)
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C004FF20 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C00511D0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C0051370 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIRootIrpQueryPower @ 0x1C005FAC0 (ACPIRootIrpQueryPower.c)
 *     ACPIBusIrpQueryTargetRelation @ 0x1C008E490 (ACPIBusIrpQueryTargetRelation.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C0090CB0 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C0097840 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryResources @ 0x1C00978C0 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0097B70 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C00A0C78 (ACPIBusIrpQueryBusRelations.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1C00AAAB8 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIDockIrpStartDevice @ 0x1C00AB2A0 (ACPIDockIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qLqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 v13; // r14
  unsigned int v14; // r15d
  unsigned int v15; // r12d
  __int64 v16; // rbx
  int v17; // eax
  unsigned __int8 v18; // cf
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v22; // r8
  const char *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdx
  const char *v26; // rcx
  int v27; // [rsp+20h] [rbp-88h]
  __int64 v28; // [rsp+B0h] [rbp+8h]

  v28 = a1;
  v10 = (__int64)a10;
  v11 = (__int64)a9;
  v13 = (unsigned __int64)a3 >> 16;
  v14 = a2;
  v15 = a4;
  v16 = -1LL;
  v17 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v13 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v18 = _bittest(&v17, (a3 - 1) & 0x1F);
  v19 = 5LL;
  if ( v18 && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v13 + 1) >= a2 )
  {
    if ( a10 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a10[v22] );
      v19 = v22 + 1;
    }
    v23 = a10;
    if ( !a10 )
      v23 = "NULL";
    if ( a9 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a9[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = a9;
    if ( !a9 )
      v26 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v13),
      43LL,
      a5,
      v15,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      8LL,
      v26,
      v25,
      v23,
      v19,
      0LL);
    a1 = v28;
  }
  if ( v10 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_BYTE *)(v10 + v20) );
  }
  if ( v11 )
  {
    do
      ++v16;
    while ( *(_BYTE *)(v11 + v16) );
  }
  LOWORD(v27) = v15;
  return WppAutoLogTrace(a1, v14, a3, a5, v27, &a6, 8LL, &a7);
}
