/*
 * XREFs of ?ndisSetPowerResumeComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00A6F30
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0017980 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0017B6C (WPP_RECORDER_SF_Lq.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D058 (WPP_RECORDER_SF_qd.c)
 *     ?ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0082D9C (-ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C008BD14 (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C011DE20 (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 */

__int64 __fastcall ndisSetPowerResumeComplete(
        struct _DEVICE_OBJECT *a1,
        struct _IRP *a2,
        struct _NDIS_MINIPORT_BLOCK *a3)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  int Status; // ebp
  struct _NDIS_SELECTIVE_SUSPEND *v7; // rbx
  KIRQL v8; // al
  int v10; // [rsp+30h] [rbp-28h]

  SelectiveSuspend = a3->SelectiveSuspend;
  Status = a2->IoStatus.Status;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v10 = a2->IoStatus.Status;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x1Du,
      (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
      (char)a3,
      v10);
  }
  ndisLogMiniportEvent(a3, NdisMEventD0_SSComplete);
  if ( Status >= 0 )
  {
    *((_QWORD *)SelectiveSuspend + 61) = a3;
    *((_QWORD *)SelectiveSuspend + 62) = a2;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)SelectiveSuspend + 456), CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    return 3221225494LL;
  }
  else
  {
    v7 = a3->SelectiveSuspend;
    NdisTraceLoggingUnexpectedSelectiveSuspendError(a3);
    *((_WORD *)v7 + 313) = *((_WORD *)v7 + 312);
    *((_WORD *)v7 + 312) = 7;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xFu,
        0x1Eu,
        (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
        Status,
        a3);
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
    *((_DWORD *)SelectiveSuspend + 126) &= ~0x20u;
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v8);
    ndisMiniportFatalError(a3, NdisMEventErr_FailedPowerD0);
    ndisScheduleD0CompleteSignalWorkItem(a3, Status);
    return 0LL;
  }
}
