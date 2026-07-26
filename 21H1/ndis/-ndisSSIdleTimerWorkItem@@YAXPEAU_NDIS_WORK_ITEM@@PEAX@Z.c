/*
 * XREFs of ?ndisSSIdleTimerWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00A62E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A74A8 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall ndisSSIdleTimerWorkItem(struct _NDIS_WORK_ITEM *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  char v4; // bl
  KIRQL v5; // dl
  KIRQL v6; // al
  KIRQL v7; // bl

  SelectiveSuspend = a2->SelectiveSuspend;
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  if ( !*((_DWORD *)SelectiveSuspend + 127)
    && !*((_DWORD *)SelectiveSuspend + 128)
    && !*((_DWORD *)SelectiveSuspend + 129)
    && !*((_DWORD *)SelectiveSuspend + 132)
    && !*((_DWORD *)SelectiveSuspend + 133)
    && !*((_DWORD *)SelectiveSuspend + 130)
    && !*((_DWORD *)SelectiveSuspend + 131)
    && !*((_DWORD *)SelectiveSuspend + 144)
    && *((_DWORD *)SelectiveSuspend + 36) >= 3u
    && (*((_DWORD *)SelectiveSuspend + 126) & 0x14) == 0 )
  {
    *((_DWORD *)SelectiveSuspend + 36) = 0;
    v4 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v5);
  if ( v4 )
    ndisSubmitIdleRequest(a2, 0);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  *((_DWORD *)SelectiveSuspend + 126) &= ~2u;
  v7 = v6;
  KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 152), 0, 0);
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v7);
  ndisDereferenceMiniport(a2, 0x14u);
}
