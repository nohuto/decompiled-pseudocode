/*
 * XREFs of ?ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C00A52FC
 * Callers:
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x1C00A543C (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 *     ?ndisIdleCancelWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00A5770 (-ndisIdleCancelWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0017B50 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C00A6F68 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F8840 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

unsigned __int8 __fastcall ndisCancelIdleRequest(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, unsigned int a3)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  KIRQL v9; // bp

  SelectiveSuspend = a1->SelectiveSuspend;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  v9 = v7;
  if ( (*((_DWORD *)SelectiveSuspend + 126) & 0x84) == 4 )
  {
    *((_DWORD *)SelectiveSuspend + 126) |= 0x80u;
    if ( a2 )
    {
      LOBYTE(v8) = 1;
      ndisSelectiveSuspendSetResumeBusyReason(SelectiveSuspend, v8, a2, a3);
    }
    *((_QWORD *)SelectiveSuspend + 82) = MEMORY[0xFFFFF78000000014];
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v9);
    ndisWaitForKernelObject((char *)SelectiveSuspend + 224);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xFu,
        0x1Bu,
        (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
        (char)a1,
        a2);
    ndisLogMiniportEvent(a1, NdisMEvent_SSCancelIdle);
    a1->DriverHandle->CancelIdleNotificationHandler(a1->MiniportAdapterContext);
    return 1;
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v7);
    return 0;
  }
}
