/*
 * XREFs of ACPIFilterIrpStartDeviceWorker @ 0x1C0090FD0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C0001908 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001CCC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIWakeInitializePciDevice @ 0x1C0004FC0 (ACPIWakeInitializePciDevice.c)
 *     PnpCmResourcesExcludeSidebandResources @ 0x1C00B38EC (PnpCmResourcesExcludeSidebandResources.c)
 */

void __fastcall ACPIFilterIrpStartDeviceWorker(__int64 a1)
{
  ULONG_PTR v2; // rcx
  __int64 DeviceExtension; // rax
  __int64 v4; // rdx
  const char *v5; // r12
  void *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r13
  int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rcx
  char *v15; // rax
  int v16; // edx
  const char *v17; // r8
  const char *v18; // r10
  __int64 v19; // rcx
  NTSTATUS v20; // r8d
  __int64 v21; // rcx
  PVOID v22; // rax
  char *IrpText; // rax
  int v24; // edx
  const char *v25; // r8
  const char *v26; // r10
  char *v27; // rax
  int v28; // edx
  char v29; // r8
  const char *v30; // r10
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  _DWORD *v32; // [rsp+C0h] [rbp+40h] BYREF
  PVOID P; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v34; // [rsp+D0h] [rbp+50h]

  v2 = *(_QWORD *)(a1 + 32);
  memset(&Event, 0, sizeof(Event));
  DeviceExtension = ACPIInternalGetDeviceExtension(v2);
  v4 = *(_QWORD *)(a1 + 40);
  v5 = (const char *)&unk_1C006FB8B;
  v6 = 0LL;
  v7 = DeviceExtension;
  P = 0LL;
  v32 = 0LL;
  v8 = *(_QWORD *)(v4 + 184);
  v9 = *(_QWORD *)(DeviceExtension + 112);
  v10 = *(_QWORD *)(v8 + 16);
  v11 = *(_QWORD *)(v8 + 8);
  v34 = v10;
  if ( !v9 )
    goto LABEL_2;
  v12 = PnpCmResourcesExcludeSidebandResources(v9, v11, v10, (unsigned int)&v32, (__int64)&P);
  if ( v12 == -1073741772 )
  {
    v6 = v32;
LABEL_2:
    LOBYTE(v12) = 0;
    goto LABEL_3;
  }
  v22 = 0LL;
  if ( v12 >= 0 )
  {
    v6 = v32;
    if ( *v32 != 1 || v32[4] )
    {
      v22 = P;
      *(_QWORD *)(v8 + 8) = v32;
    }
    else
    {
      *(_QWORD *)(v8 + 8) = 0LL;
    }
    *(_QWORD *)(v8 + 16) = v22;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      IrpText = ACPIDebugGetIrpText(v21, 0);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        v24 + 5,
        v24 + 26,
        (__int64)&WPP_e895f2808a1832dc95c5c4714d739d11_Traceguids,
        *(_QWORD *)(a1 + 40),
        IrpText,
        v12,
        v7,
        v26,
        v25);
    }
    v6 = v32;
  }
LABEL_3:
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 184LL);
  *(_OWORD *)(v13 - 72) = *(_OWORD *)v13;
  *(_OWORD *)(v13 - 56) = *(_OWORD *)(v13 + 16);
  *(_OWORD *)(v13 - 40) = *(_OWORD *)(v13 + 32);
  *(_QWORD *)(v13 - 24) = *(_QWORD *)(v13 + 48);
  *(_BYTE *)(v13 - 69) = 0;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 184LL);
  *(_QWORD *)(v14 - 16) = ACPIRootIrpCompleteRoutine;
  *(_QWORD *)(v14 - 8) = &Event;
  *(_BYTE *)(v14 - 69) = -32;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = ACPIDebugGetIrpText(v14, 0);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      v16 + 5,
      v16 + 27,
      (__int64)&WPP_e895f2808a1832dc95c5c4714d739d11_Traceguids,
      *(_QWORD *)(a1 + 40),
      v15,
      v12,
      v7,
      v18,
      v17);
  }
  v20 = IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 776), *(PIRP *)(a1 + 40));
  if ( v20 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v20 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 48LL);
  }
  if ( v20 < 0 )
  {
    if ( (*(_QWORD *)(v7 + 8) & 0x200000000000LL) != 0 )
      v5 = *(const char **)(v7 + 608);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = ACPIDebugGetIrpText(v19, 0);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        v28 + 5,
        v28 + 28,
        (__int64)&WPP_e895f2808a1832dc95c5c4714d739d11_Traceguids,
        *(_QWORD *)(a1 + 40),
        v27,
        v29,
        v7,
        v5,
        v30);
    }
  }
  else
  {
    *(_QWORD *)(v8 + 16) = v34;
    *(_QWORD *)(v8 + 8) = v11;
    if ( (*(_QWORD *)(v7 + 8) & 0x102000000LL) != 0 )
      ACPIWakeInitializePciDevice(*(_QWORD *)(v7 + 768));
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  IofCompleteRequest(*(PIRP *)(a1 + 40), 0);
}
