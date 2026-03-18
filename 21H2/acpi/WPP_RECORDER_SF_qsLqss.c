/*
 * XREFs of WPP_RECORDER_SF_qsLqss @ 0x1C0001CCC
 * Callers:
 *     ACPIRootIrpCompleteRoutine @ 0x1C0001800 (ACPIRootIrpCompleteRoutine.c)
 *     ACPICMButtonStartWorker @ 0x1C00029E0 (ACPICMButtonStartWorker.c)
 *     ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1C0005780 (ACPIFilterIrpDeviceUsageNotificationCompletion.c)
 *     ACPIBusIrpUnhandled @ 0x1C00082A0 (ACPIBusIrpUnhandled.c)
 *     ACPIBusIrpStartDeviceCompletion @ 0x1C002C500 (ACPIBusIrpStartDeviceCompletion.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C002CDC0 (ACPIFilterIrpRemoveDevice.c)
 *     ACPICMButtonStartCompletion @ 0x1C002E920 (ACPICMButtonStartCompletion.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C0049220 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C004C350 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004C940 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIEcStartDeviceCompletion @ 0x1C00531A0 (ACPIEcStartDeviceCompletion.c)
 *     ACPIEcStartDeviceWorker @ 0x1C0053300 (ACPIEcStartDeviceWorker.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C0055CE0 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIProcessorContainerStartDeviceCompletion @ 0x1C005E3D0 (ACPIProcessorContainerStartDeviceCompletion.c)
 *     ACPIProcessorContainerStartDeviceWorker @ 0x1C005E530 (ACPIProcessorContainerStartDeviceWorker.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C005FC60 (ACPIRootIrpRemoveDevice.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C008E540 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C008E6C0 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C008F350 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIFanStartDevice @ 0x1C0090820 (ACPIFanStartDevice.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C0090CB0 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIFilterIrpStartDevice @ 0x1C0090EC0 (ACPIFilterIrpStartDevice.c)
 *     ACPIFilterIrpStartDeviceWorker @ 0x1C0090FD0 (ACPIFilterIrpStartDeviceWorker.c)
 *     ACPIFilterIrpDeviceEnumeratedCompletion @ 0x1C00914F0 (ACPIFilterIrpDeviceEnumeratedCompletion.c)
 *     ACPIFilterIrpDeviceUsageNotification @ 0x1C0091690 (ACPIFilterIrpDeviceUsageNotification.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C0091924 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIRootIrpQueryCapabilities @ 0x1C00919C0 (ACPIRootIrpQueryCapabilities.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0091E90 (ACPIRootIrpQueryInterface.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C00937D0 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C0093BA0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0094550 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusIrpQueryResources @ 0x1C00978C0 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0097B70 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C009F950 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIBusIrpDeviceUsageNotification @ 0x1C00A0740 (ACPIBusIrpDeviceUsageNotification.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C00A08E0 (ACPIRootIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C00AA5F0 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C00AA8A0 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryInterface @ 0x1C00AAFD0 (ACPIDockIrpQueryInterface.c)
 *     ACPIDockIrpQueryPnpDeviceState @ 0x1C00AB180 (ACPIDockIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C00AC2E0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIBusAndFilterIrpSetLock @ 0x1C00AC720 (ACPIBusAndFilterIrpSetLock.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C00AC7F0 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C00ACA70 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x1C00ACBF0 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C00AE970 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIFilterIrpStopDevice @ 0x1C00AEBD0 (ACPIFilterIrpStopDevice.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C00B4790 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C00B48C0 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 *     ACPIRootIrpStopDevice @ 0x1C00B4A00 (ACPIRootIrpStopDevice.c)
 *     ACPIRootIrpStartDevice @ 0x1C00BB260 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsLqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  __int64 v11; // rdi
  __int64 v12; // rsi
  const char *v13; // rbp
  unsigned __int64 v15; // r14
  unsigned int v16; // r12d
  __int64 v17; // rbx
  int v18; // eax
  unsigned __int8 v19; // cf
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v24; // r11
  __int64 v25; // r9
  __int64 v26; // r9
  const char *v27; // r14
  __int64 v28; // r8
  const char *v29; // r10
  __int64 v30; // rdx
  __int64 v31; // rdx
  const char *v32; // rcx
  int v33; // [rsp+20h] [rbp-A8h]
  unsigned __int16 v35; // [rsp+E8h] [rbp+20h]

  v35 = a4;
  v11 = (__int64)a11;
  v12 = (__int64)a10;
  v13 = a7;
  v15 = (unsigned __int64)a3 >> 16;
  v16 = a2;
  v17 = -1LL;
  v18 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v15 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v19 = _bittest(&v18, ((_BYTE)a3 - 1) & 0x1F);
  v20 = 5LL;
  if ( v19 )
  {
    v24 = 10 * v15;
    if ( *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v15 + 1) >= a2 )
    {
      if ( a11 )
      {
        v25 = -1LL;
        do
          ++v25;
        while ( a11[v25] );
        v26 = v25 + 1;
      }
      else
      {
        v26 = 5LL;
      }
      v27 = a11;
      if ( !a11 )
        v27 = "NULL";
      if ( a10 )
      {
        v28 = -1LL;
        do
          ++v28;
        while ( a10[v28] );
        v20 = v28 + 1;
      }
      v29 = a10;
      if ( !a10 )
        v29 = "NULL";
      if ( a7 )
      {
        v30 = -1LL;
        do
          ++v30;
        while ( a7[v30] );
        v31 = v30 + 1;
      }
      else
      {
        v31 = 5LL;
      }
      v32 = a7;
      if ( !a7 )
        v32 = "NULL";
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + v24),
        43LL,
        a5,
        v35,
        &a6,
        8LL,
        v32,
        v31,
        &a8,
        4LL,
        &a9,
        8LL,
        v29,
        v20,
        v27,
        v26,
        0LL);
      a4 = v35;
    }
  }
  if ( v11 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *(_BYTE *)(v11 + v21) );
  }
  if ( v12 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_BYTE *)(v12 + v22) );
  }
  if ( v13 )
  {
    do
      ++v17;
    while ( v13[v17] );
  }
  if ( !v13 )
    v13 = "NULL";
  LOWORD(v33) = a4;
  return WppAutoLogTrace(a1, v16, a3, a5, v33, &a6, 8LL, v13);
}
