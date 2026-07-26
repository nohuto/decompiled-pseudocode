/*
 * XREFs of ?ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00A5650
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x1C0012BE8 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015314 (-ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0017B2C (WPP_RECORDER_SF_Lq.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C00192E0 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 *     McTemplateK0jqx_EtwWriteTransfer @ 0x1C005DA7C (McTemplateK0jqx_EtwWriteTransfer.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C008C3F4 (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C00A6DE8 (ndisSelectiveSuspendSetResumeBusyReason.c)
 */

void __fastcall ndisIdleWaitWakeCallback(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6; // rdi
  KIRQL v7; // si
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v6 = *((_QWORD *)Context + 556);
  if ( IoStatus->Status < 0 )
  {
    if ( IoStatus->Status != -1073741536 )
    {
      NdisTraceLoggingUnexpectedSelectiveSuspendError((struct _NDIS_MINIPORT_BLOCK *)Context);
      *(_WORD *)(v6 + 626) = *(_WORD *)(v6 + 624);
      *(_WORD *)(v6 + 624) = 6;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xFu,
          0x1Au,
          (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
          IoStatus->Status,
          Context);
    }
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(*((PKSPIN_LOCK *)Context + 556));
    if ( (*(_DWORD *)(v6 + 504) & 0xC4) == 4 )
    {
      v8 = *(_DWORD *)(v6 + 504) | 0x40u;
      *(_DWORD *)(v6 + 504) = v8;
      LOBYTE(v8) = 1;
      ndisSelectiveSuspendSetResumeBusyReason(v6, v8, 65LL, 0LL);
      if ( (byte_1C00E61C3 & 4) != 0 )
        McTemplateK0jqx_EtwWriteTransfer(
          v10,
          &DeviceWaitWakeComplete,
          (const GUID *)(Context + 4008),
          (__int64)(Context + 4008),
          *((_DWORD *)Context + 1014),
          *((_QWORD *)Context + 503));
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          9u,
          0x19u,
          (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
          (char)Context,
          *((unsigned __int16 **)Context + 482));
      ndisScheduleWorkItemInternal((struct _NDIS_WORK_ITEM *)(v6 + 376));
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v6, v7);
  }
  ndisCompleteWaitWake((struct _NDIS_MINIPORT_BLOCK *)Context);
}
