/*
 * XREFs of WPP_RECORDER_SF_qsLqss @ 0x1C0002C90
 * Callers:
 *     ACPIRootIrpCompleteRoutine @ 0x1C0002E30 (ACPIRootIrpCompleteRoutine.c)
 *     ACPICMButtonStartWorker @ 0x1C000C8B0 (ACPICMButtonStartWorker.c)
 *     ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1C000E1B0 (ACPIFilterIrpDeviceUsageNotificationCompletion.c)
 *     ACPIBusIrpUnhandled @ 0x1C002AF10 (ACPIBusIrpUnhandled.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C002CA30 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIBusIrpStartDeviceCompletion @ 0x1C00305A0 (ACPIBusIrpStartDeviceCompletion.c)
 *     ACPICMButtonStartCompletion @ 0x1C00317F0 (ACPICMButtonStartCompletion.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C004A640 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C004D460 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004DAA0 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIEcStartDeviceCompletion @ 0x1C0053940 (ACPIEcStartDeviceCompletion.c)
 *     ACPIEcStartDeviceWorker @ 0x1C0053AB0 (ACPIEcStartDeviceWorker.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C00556D0 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIProcessorContainerStartDeviceCompletion @ 0x1C005D560 (ACPIProcessorContainerStartDeviceCompletion.c)
 *     ACPIProcessorContainerStartDeviceWorker @ 0x1C005D6D0 (ACPIProcessorContainerStartDeviceWorker.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C005ECD0 (ACPIRootIrpRemoveDevice.c)
 *     ACPIFilterIrpDeviceEnumeratedCompletion @ 0x1C008F010 (ACPIFilterIrpDeviceEnumeratedCompletion.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C008F190 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C008FE00 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIFanStartDevice @ 0x1C0091000 (ACPIFanStartDevice.c)
 *     ACPIFilterIrpStartDevice @ 0x1C0091210 (ACPIFilterIrpStartDevice.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0098C40 (ACPIRootIrpQueryInterface.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0099450 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C009B980 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIBusIrpQueryResources @ 0x1C009BDB0 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C009C190 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C009D85C (ACPIRootIrpQueryBusRelations.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C009E450 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009E810 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C00A0890 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIFilterIrpStartDeviceWorker @ 0x1C00A0CB0 (ACPIFilterIrpStartDeviceWorker.c)
 *     ACPIRootIrpQueryCapabilities @ 0x1C00A1390 (ACPIRootIrpQueryCapabilities.c)
 *     ACPIFilterIrpDeviceUsageNotification @ 0x1C00A17D0 (ACPIFilterIrpDeviceUsageNotification.c)
 *     ACPIBusIrpDeviceUsageNotification @ 0x1C00A2170 (ACPIBusIrpDeviceUsageNotification.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C00A2840 (ACPIRootIrpQueryDeviceRelations.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C00A2BC0 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C00AB4F0 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C00AB7C0 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryInterface @ 0x1C00ABF70 (ACPIDockIrpQueryInterface.c)
 *     ACPIDockIrpQueryPnpDeviceState @ 0x1C00AC130 (ACPIDockIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C00AD3B0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIBusAndFilterIrpSetLock @ 0x1C00AD820 (ACPIBusAndFilterIrpSetLock.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C00AD900 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C00ADBA0 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x1C00ADD30 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C00AF5B0 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIFilterIrpStopDevice @ 0x1C00AF810 (ACPIFilterIrpStopDevice.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C00B4C80 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C00B4DC0 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 *     ACPIRootIrpStopDevice @ 0x1C00B4F10 (ACPIRootIrpStopDevice.c)
 *     ACPIRootIrpStartDevice @ 0x1C00BB130 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
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
  __int64 v11; // rsi
  __int64 v12; // rbp
  const char *v13; // rdi
  unsigned __int64 v15; // r14
  unsigned int v16; // r12d
  unsigned int v17; // r13d
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  char *v23; // r14
  __int64 v24; // r9
  __int64 v25; // r9
  const char *v26; // r11
  __int64 v27; // r8
  __int64 v28; // r8
  const char *v29; // r10
  __int64 v30; // rcx
  __int64 v31; // rcx
  const char *v32; // rdx
  int v33; // [rsp+20h] [rbp-98h]

  v11 = (__int64)a11;
  v12 = (__int64)a10;
  v13 = a7;
  v15 = (unsigned __int64)a3 >> 16;
  v16 = a2;
  v17 = a4;
  v18 = -1LL;
  v19 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v15 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v19, ((_BYTE)a3 - 1) & 0x1F) )
  {
    v23 = (char *)WPP_GLOBAL_Control + 80 * v15;
    if ( (unsigned __int8)v23[41] >= a2 )
    {
      if ( a11 )
      {
        v24 = -1LL;
        do
          ++v24;
        while ( a11[v24] );
        v25 = v24 + 1;
      }
      else
      {
        v25 = 5LL;
      }
      v26 = a11;
      if ( !a11 )
        v26 = "NULL";
      if ( a10 )
      {
        v27 = -1LL;
        do
          ++v27;
        while ( a10[v27] );
        v28 = v27 + 1;
      }
      else
      {
        v28 = 5LL;
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
        *((_QWORD *)v23 + 3),
        43LL,
        a5,
        v17,
        &a6,
        8LL,
        v32,
        v31,
        &a8,
        4LL,
        &a9,
        8LL,
        v29,
        v28,
        v26,
        v25,
        0LL);
    }
  }
  if ( v11 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_BYTE *)(v11 + v20) );
  }
  if ( v12 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *(_BYTE *)(v21 + v12) );
  }
  if ( v13 )
  {
    do
      ++v18;
    while ( v13[v18] );
  }
  else
  {
    v13 = "NULL";
  }
  LOWORD(v33) = v17;
  return WppAutoLogTrace(a1, v16, a3, a5, v33, &a6, 8LL, v13);
}
