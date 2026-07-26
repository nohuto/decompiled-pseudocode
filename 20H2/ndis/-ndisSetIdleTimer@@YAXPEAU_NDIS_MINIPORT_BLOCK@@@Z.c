/*
 * XREFs of ?ndisSetIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A7320
 * Callers:
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A5C54 (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00A6A50 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A6C44 (-ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisSetIdleTimer(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  KIRQL v2; // di
  int v3; // ecx
  bool v4; // zf
  unsigned int v5; // ecx
  __int64 v6; // kr00_8

  SelectiveSuspend = a1->SelectiveSuspend;
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  if ( !*((_DWORD *)SelectiveSuspend + 127) )
  {
    v3 = *((_DWORD *)SelectiveSuspend + 126);
    if ( (v3 & 1) == 0 )
    {
      *((_DWORD *)SelectiveSuspend + 36) = 0;
      v4 = ndisConnectedStandby == 0;
      *((_DWORD *)SelectiveSuspend + 126) = v3 | 1;
      if ( v4 || (v5 = *((_DWORD *)SelectiveSuspend + 3)) == 0 )
        v6 = 2863311531LL * *((unsigned int *)SelectiveSuspend + 2);
      else
        v6 = 2863311531LL * v5;
      KeSetCoalescableTimer(
        (PKTIMER)((char *)SelectiveSuspend + 16),
        (LARGE_INTEGER)(-10000LL * (HIDWORD(v6) >> 1)),
        HIDWORD(v6) >> 1,
        (HIDWORD(v6) >> 1) / 5,
        (PKDPC)((char *)SelectiveSuspend + 80));
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v2);
}
