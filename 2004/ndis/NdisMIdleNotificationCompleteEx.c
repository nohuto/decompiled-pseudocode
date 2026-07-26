/*
 * XREFs of NdisMIdleNotificationCompleteEx @ 0x1C00A8EF0
 * Callers:
 *     NdisMIdleNotificationComplete @ 0x1C00A8ED0 (NdisMIdleNotificationComplete.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0017940 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C005AA30 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A644C (-ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A6C44 (-ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall NdisMIdleNotificationCompleteEx(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  KIRQL v5; // si
  int v6; // eax

  SelectiveSuspend = a1->SelectiveSuspend;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  ndisLogMiniportEvent(a1, NdisMEvent_SSIdleComplete);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xFu,
      0x1Cu,
      (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
      (char)a1,
      a2);
  *((_DWORD *)SelectiveSuspend + 126) &= ~4u;
  KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 200), 0, 0);
  *((_DWORD *)SelectiveSuspend + 126) &= ~0x80u;
  v6 = *((_DWORD *)SelectiveSuspend + 126);
  if ( (v6 & 0x100) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v5);
    if ( a2 >= 0 && a1->CurrentDevicePowerState == PowerDeviceD3 )
      ndisAoAcScheduleWakeWorkItem(a1, NdisMEventD0_AoAcSurpriseWake);
  }
  else if ( (v6 & 0x10) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v5);
    ndisRequestPowerResume(a1);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v5);
    ndisSelectiveSuspendResumeOperations(a1, 0);
  }
  ndisDereferenceMiniport(a1, 0x15u);
}
