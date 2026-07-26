/*
 * XREFs of ?ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z @ 0x1C00A70B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x1C0012BE8 (WPP_RECORDER_SF_qZ.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0015974 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00159A0 (-ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0017B6C (WPP_RECORDER_SF_Lq.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0070B8C (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C008BD14 (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A6784 (-ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00F92D0 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011F81C (-ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisSetPowerResumeCompleteWorkItem(_QWORD *a1)
{
  __int64 v1; // rdi
  _IRP *v2; // r13
  int v3; // esi
  __int64 v4; // r15
  __int64 v5; // rcx
  int v6; // r14d
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  KIRQL v10; // al
  POWER_STATE State; // [rsp+40h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST v12; // [rsp+50h] [rbp-B0h] BYREF

  v1 = a1[4];
  v2 = (_IRP *)a1[5];
  v3 = 0;
  v4 = *(_QWORD *)(v1 + 4448);
  memset(&v12.Header.Revision, 0, 0xF7uLL);
  NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)v1, 1);
  if ( (byte_1C00E6081 & 8) != 0 )
    McTemplateK0jqxqq_EtwWriteTransfer(
      v5,
      &DevicePowerStateChange,
      (const GUID *)(v1 + 4008),
      v1 + 4008,
      *(_DWORD *)(v1 + 4056),
      *(_QWORD *)(v1 + 4024),
      1,
      1);
  State.SystemState = PowerSystemWorking;
  memset(&v12, 0, 0xF8uLL);
  *(_DWORD *)&v12.NdisReserved[16] |= 0x408u;
  *(_QWORD *)&v12.NdisReserved[32] = &ndisIntReqGeneric;
  v12.Header = (NDIS_OBJECT_HEADER)15466902;
  v12.DATA.QUERY_INFORMATION.InformationBuffer = &State;
  v12.DATA.QUERY_INFORMATION.Oid = -50265855;
  *(_QWORD *)&v12.RequestType = 1LL;
  v12.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
  KeInitializeEvent((PRKEVENT)&v12.NdisReserved[40], NotificationEvent, 0);
  v6 = ndisMInvokeOidRequest((struct _NDIS_MINIPORT_BLOCK *)v1, &v12);
  if ( v6 == 259 )
  {
    ndisWaitForKernelObject(&v12.NdisReserved[40]);
    v6 = *(_DWORD *)&v12.NdisReserved[8];
  }
  if ( v6 )
  {
    v7 = *(_QWORD *)(v1 + 4448);
    v3 = -1073741823;
    NdisTraceLoggingUnexpectedSelectiveSuspendError((struct _NDIS_MINIPORT_BLOCK *)v1);
    *(_WORD *)(v7 + 626) = *(_WORD *)(v7 + 624);
    *(_WORD *)(v7 + 624) = 8;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xFu,
        0x1Fu,
        (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
        v6,
        v1);
  }
  else
  {
    v8 = *(_QWORD *)(v1 + 4456);
    if ( v8
      && (*(_BYTE *)(v1 + 124) & 0x60) == 0x60
      && (unsigned int)(*(_DWORD *)(v1 + 1272) - 2) <= 2
      && (*(_DWORD *)(v1 + 1004) & 6) != 0
      && *(_BYTE *)(v8 + 1104) )
    {
      ndisRemoveWoLDirectedMAC((struct _NDIS_MINIPORT_BLOCK *)v1);
    }
    ndisSelectiveSuspendResumeOperations((struct _NDIS_MINIPORT_BLOCK *)v1, 1);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        9u,
        0x20u,
        (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
        v1,
        *(unsigned __int16 **)(v1 + 3856));
  }
  v2->IoStatus.Status = v3;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4);
  *(_DWORD *)(v4 + 504) &= ~0x20u;
  KeReleaseSpinLock((PKSPIN_LOCK)v4, v10);
  PoSetPowerState(*(PDEVICE_OBJECT *)(v1 + 3824), DevicePowerState, State);
  IofCompleteRequest(v2, 0);
  ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)v1, v3);
}
