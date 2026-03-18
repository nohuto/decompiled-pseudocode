/*
 * XREFs of ACPIFilterIrpStartDeviceWorker @ 0x1C00A0CB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C00029E4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0002C90 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIWakeInitializePciDevice @ 0x1C002B4C0 (ACPIWakeInitializePciDevice.c)
 *     PnpCmResourcesExcludeSidebandResources @ 0x1C00B43A0 (PnpCmResourcesExcludeSidebandResources.c)
 */

void __fastcall ACPIFilterIrpStartDeviceWorker(__int64 a1)
{
  ULONG_PTR v2; // rcx
  __int64 DeviceExtension; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  _DWORD *v6; // rsi
  void *v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r13
  int v12; // r14d
  const char *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  char *v17; // rax
  int v18; // edx
  const char *v19; // r8
  const char *v20; // r10
  NTSTATUS v21; // r8d
  int v22; // eax
  char *IrpText; // rax
  int v24; // edx
  const char *v25; // r8
  const char *v26; // r10
  __int64 v27; // r11
  __int64 v28; // rcx
  char *v29; // rax
  int v30; // edx
  char v31; // r8
  const char *v32; // r10
  struct _KEVENT Event; // [rsp+60h] [rbp-58h] BYREF
  _DWORD *v34; // [rsp+C0h] [rbp+8h] BYREF
  void *v35; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v36; // [rsp+D0h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 32);
  memset(&Event, 0, sizeof(Event));
  DeviceExtension = ACPIInternalGetDeviceExtension(v2);
  v4 = *(_QWORD *)(a1 + 40);
  v5 = DeviceExtension;
  v6 = 0LL;
  v7 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v8 = *(_QWORD *)(v4 + 184);
  v9 = *(_QWORD *)(DeviceExtension + 112);
  v10 = *(_QWORD *)(v8 + 16);
  v11 = *(_QWORD *)(v8 + 8);
  v36 = v10;
  if ( v9 )
  {
    v22 = PnpCmResourcesExcludeSidebandResources(v9, v11, v10, (unsigned int)&v34, (__int64)&v35);
    v6 = v34;
    v12 = v22;
    v7 = v35;
  }
  else
  {
    v12 = -1073741772;
  }
  v13 = byte_1C00701BA;
  if ( v12 == -1073741772 )
  {
    LOBYTE(v12) = 0;
  }
  else if ( v12 >= 0 )
  {
    if ( *v6 != 1 || v6[4] )
    {
      *(_QWORD *)(v8 + 8) = v6;
      *(_QWORD *)(v8 + 16) = v7;
    }
    else
    {
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = 0LL;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText((__int64)&WPP_RECORDER_INITIALIZED, 0);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v24 + 5,
      v24 + 26,
      v27,
      *(_QWORD *)(a1 + 40),
      IrpText,
      v12,
      v5,
      v26,
      v25);
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 184LL);
  *(_OWORD *)(v14 - 72) = *(_OWORD *)v14;
  *(_OWORD *)(v14 - 56) = *(_OWORD *)(v14 + 16);
  *(_OWORD *)(v14 - 40) = *(_OWORD *)(v14 + 32);
  *(_QWORD *)(v14 - 24) = *(_QWORD *)(v14 + 48);
  *(_BYTE *)(v14 - 69) = 0;
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 184LL);
  *(_QWORD *)(v15 - 16) = ACPIRootIrpCompleteRoutine;
  *(_QWORD *)(v15 - 8) = &Event;
  *(_BYTE *)(v15 - 69) = -32;
  v16 = 0x200000000000LL;
  if ( (*(_QWORD *)(v5 + 8) & 0x200000000000LL) != 0 )
    v16 = 0x400000000000LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = ACPIDebugGetIrpText(v16, 0);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      v18 + 5,
      v18 + 27,
      (__int64)&WPP_22c0b63b2f1d30c22e2e761bc8912dea_Traceguids,
      *(_QWORD *)(a1 + 40),
      v17,
      v12,
      v5,
      v20,
      v19);
  }
  v21 = IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 736), *(PIRP *)(a1 + 40));
  if ( v21 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v21 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 48LL);
  }
  if ( v21 < 0 )
  {
    v28 = 0x200000000000LL;
    if ( (*(_QWORD *)(v5 + 8) & 0x200000000000LL) != 0 )
    {
      v13 = *(const char **)(v5 + 568);
      v28 = 0x400000000000LL;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = ACPIDebugGetIrpText(v28, 0);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        v30 + 5,
        v30 + 28,
        (__int64)&WPP_22c0b63b2f1d30c22e2e761bc8912dea_Traceguids,
        *(_QWORD *)(a1 + 40),
        v29,
        v31,
        v5,
        v13,
        v32);
    }
  }
  else
  {
    *(_QWORD *)(v8 + 16) = v36;
    *(_QWORD *)(v8 + 8) = v11;
    if ( (*(_QWORD *)(v5 + 8) & 0x102000000LL) != 0 )
      ACPIWakeInitializePciDevice(*(_QWORD *)(v5 + 728));
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  IofCompleteRequest(*(PIRP *)(a1 + 40), 0);
}
