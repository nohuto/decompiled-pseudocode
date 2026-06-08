/*
 * XREFs of AcpiCStateNotifyWorker @ 0x1C0031660
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C000846C (ProcLibTraceProcessorSpecificEvent.c)
 *     FireWmiEvent @ 0x1C000B1B4 (FireWmiEvent.c)
 *     UpdateKernelPlatformStates @ 0x1C000E52C (UpdateKernelPlatformStates.c)
 *     InitAcpiIdleDomain @ 0x1C0020F70 (InitAcpiIdleDomain.c)
 *     InitAcpi2CStates @ 0x1C002118C (InitAcpi2CStates.c)
 *     PepNotifyReportCStates @ 0x1C0038760 (PepNotifyReportCStates.c)
 */

void __fastcall AcpiCStateNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  unsigned int *v3; // rsi
  void *v4; // rbp
  void *v5; // r14
  char v6; // r15
  __int64 v7; // rdi
  char *PoolWithTag; // rbx
  int inited; // eax
  int v10; // eax
  char *v11; // [rsp+60h] [rbp+8h] BYREF
  unsigned int *v12; // [rsp+68h] [rbp+10h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  if ( a2 )
    IoFreeWorkItem(a2);
  v7 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)(v7 + 272) & 0x7F070) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(v7 + 208),
      0LL);
    v6 = 1;
    if ( (int)InitAcpi2CStates(v7, &v11) >= 0 )
    {
      PoolWithTag = v11;
      inited = InitAcpiIdleDomain(v7, &v12, (__int64)v11);
      v3 = v12;
      if ( inited < 0 )
        v3 = 0LL;
    }
    else
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x72637250u);
      if ( !PoolWithTag )
        goto LABEL_15;
      *(_OWORD *)PoolWithTag = 0LL;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      *(_DWORD *)PoolWithTag = 1;
      *(_OWORD *)(PoolWithTag + 4) = 0LL;
      PoolWithTag[4] = 127;
      PoolWithTag[16] = 1;
      *((_WORD *)PoolWithTag + 9) = 0;
      *((_DWORD *)PoolWithTag + 5) = 0;
    }
    v5 = *(void **)(v7 + 512);
    v10 = *(_DWORD *)(v7 + 272);
    v4 = *(void **)(v7 + 520);
    *(_QWORD *)(v7 + 512) = PoolWithTag;
    *(_QWORD *)(v7 + 520) = v3;
    if ( (v10 & 0x300) != 0 )
      PepNotifyReportCStates(v7);
    ((void (__fastcall *)(__int64))qword_1C001C7D8)(v7);
    if ( (*(_DWORD *)(v7 + 272) & 0x200LL) != 0 )
      UpdateKernelPlatformStates(v7, 1);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x51u,
      (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
  }
LABEL_15:
  ProcLibTraceProcessorSpecificEvent(v7, (__int64)&PPM_ETW_NOTIFY_81, (__int64)&PPM_ETW_NOTIFY_81_HV, 0, 0LL);
  FireWmiEvent((_QWORD *)(v7 + 664), 0LL);
  if ( v6 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      *(_QWORD *)(v7 + 208));
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
}
