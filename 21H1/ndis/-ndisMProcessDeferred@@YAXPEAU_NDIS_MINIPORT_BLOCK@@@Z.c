/*
 * XREFs of ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006F2F0
 * Callers:
 *     ?ndisMWakeUpDpc@@YAXPEAX000@Z @ 0x1C005E730 (-ndisMWakeUpDpc@@YAXPEAX000@Z.c)
 *     ?ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1C0063430 (-ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z.c)
 *     ?ndisMReset@@YAHPEAX@Z @ 0x1C006FD70 (-ndisMReset@@YAHPEAX@Z.c)
 *     NdisIMQueueMiniportCallback @ 0x1C0070DC0 (NdisIMQueueMiniportCallback.c)
 *     NdisIMRevertBack @ 0x1C0070F40 (NdisIMRevertBack.c)
 *     ?ndisMDeferredDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00AA480 (-ndisMDeferredDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00BDDB0 (-ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00BF7C0 (-ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisMDpc @ 0x1C00C18EC (ndisMDpc.c)
 * Callees:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000BA10 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C005F9F8 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@Z@Z @ 0x1C006DE80 (-ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@.c)
 *     ?ndisMDeferredReturnPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006DF2C (-ndisMDeferredReturnPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C006F694 (-ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1C00700F8 (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00701C0 (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMProcessDeferred(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  char v2; // si
  void (*v3)(void *, void *); // rsi
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // eax
  unsigned __int8 v8; // [rsp+80h] [rbp+8h] BYREF
  void (*v9)(void *, void *); // [rsp+88h] [rbp+10h] BYREF
  void *v10; // [rsp+90h] [rbp+18h] BYREF

  v1 = a1;
  v8 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x31u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      a1);
  while ( 1 )
  {
    v2 = 0;
    if ( v1->WorkQueue[1].Next && (v1->Flags & 0x80300000) == 0 )
    {
      ndisMDeQueueWorkItem(v1, NdisWorkItemSend, 0LL, 0LL);
      v1->DeferredSendHandler(v1);
      v2 = 1;
    }
    if ( v1->WorkQueue[4].Next )
      break;
    if ( v1->WorkQueue[2].Next )
    {
      ndisMDeQueueWorkItem(v1, NdisWorkItemReturnPackets, 0LL, 0LL);
      ndisMDeferredReturnPackets(v1);
    }
    if ( (v1->Flags & 0x80000000) != 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xCu,
          0x32u,
          (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
          v1);
      if ( (byte_1C00E6083 & 1) != 0 )
        McTemplateK0jqxd_EtwWriteTransfer(
          (__int64)a1,
          &NotifyMiniportAction,
          &v1->InterfaceGuid,
          (__int64)&v1->InterfaceGuid,
          v1->IfIndex,
          v1->NetLuid.Value,
          0);
      goto LABEL_41;
    }
    if ( v1->WorkQueue[6].Next )
    {
      v9 = 0LL;
      v10 = 0LL;
      ndisMDeQueueWorkItem(v1, NdisWorkItemMiniportCallback, (_SINGLE_LIST_ENTRY **)&v10, (_SINGLE_LIST_ENTRY **)&v9);
      v3 = v9;
      if ( v9 )
      {
        v1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&v1->Lock);
        ((void (__fastcall *)(void *, void *))v3)(v1->MiniportAdapterContext, v10);
        KeAcquireSpinLockAtDpcLevel(&v1->Lock);
        v1->MiniportThread = KeGetCurrentThread();
      }
      v2 = 1;
    }
    if ( v1->WorkQueue[3].Next )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xCu,
          0x33u,
          (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
          v1);
      if ( (byte_1C00E6083 & 1) != 0 )
        McTemplateK0jqxd_EtwWriteTransfer(
          (__int64)a1,
          &NotifyMiniportAction,
          &v1->InterfaceGuid,
          (__int64)&v1->InterfaceGuid,
          v1->IfIndex,
          v1->NetLuid.Value,
          1);
      v4 = ndisMProcessResetRequested(v1, &v8);
      v6 = v4;
      if ( v4 == 259 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xCu,
            0x34u,
            (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
            v1);
        if ( (byte_1C00E6083 & 1) != 0 )
          McTemplateK0jqxd_EtwWriteTransfer(
            v5,
            &NotifyMiniportAction,
            &v1->InterfaceGuid,
            (__int64)&v1->InterfaceGuid,
            v1->IfIndex,
            v1->NetLuid.Value,
            2);
        goto LABEL_41;
      }
      v7 = ndisMResetCompleteStage1(v1, v4, v8);
      a1 = (struct _NDIS_MINIPORT_BLOCK *)v8;
      if ( v7 )
        a1 = 0LL;
      v8 = (unsigned __int8)a1;
      if ( !(_BYTE)a1 || v6 )
      {
        ndisMResetCompleteStage2(v1);
        goto LABEL_25;
      }
    }
    else
    {
LABEL_25:
      if ( v1->WorkQueue[0].Next )
      {
        ndisMDeQueueWorkItem(v1, NdisWorkItemRequest, 0LL, 0LL);
        ndisMDoOidRequest(v1);
        v2 = 1;
      }
      if ( v1->WorkQueue[1].Next )
      {
        ndisMDeQueueWorkItem(v1, NdisWorkItemSend, 0LL, 0LL);
        v1->DeferredSendHandler(v1);
        v2 = 1;
      }
      if ( !v2 )
        goto LABEL_41;
    }
  }
  if ( v1->WorkQueue[0].Next )
  {
    ndisMDeQueueWorkItem(v1, NdisWorkItemRequest, 0LL, 0LL);
    ndisMDoOidRequest(v1);
  }
LABEL_41:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x35u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      v1);
}
