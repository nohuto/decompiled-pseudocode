/*
 * XREFs of ?ndisNblTrackerSetSqmFlag@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0073BF8
 * Callers:
 *     ?ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0008890 (-ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A1C8 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 */

void __fastcall ndisNblTrackerSetSqmFlag(struct _NDIS_NBL_TRACKER *a1)
{
  __int16 v1; // ax
  __int64 v2; // rbx
  KIRQL v3; // al
  KSPIN_LOCK *p_Lock; // rcx
  KIRQL v5; // dl
  struct _NDIS_FILTER_BLOCK *Context; // rbx
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_WORD *)a1 + 8);
  NewIrql = 0;
  switch ( v1 )
  {
    case 0:
      goto LABEL_6;
    case 1:
      Context = (struct _NDIS_FILTER_BLOCK *)a1->Context;
      NDIS_ACQUIRE_FILTER_SPIN_LOCK(Context, &NewIrql);
      Context->Flags |= 0x100000u;
      p_Lock = &Context->Lock;
      v5 = NewIrql;
      Context->LockThread = 0LL;
      goto LABEL_10;
    case 2:
      v2 = *((_QWORD *)a1->Context + 3);
      v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 32));
      *(_DWORD *)(v2 + 64) |= 2u;
      p_Lock = (KSPIN_LOCK *)(v2 + 32);
      v5 = v3;
LABEL_10:
      KeReleaseSpinLock(p_Lock, v5);
      return;
  }
  if ( v1 > 2 && v1 <= 5 )
LABEL_6:
    _InterlockedOr((volatile signed __int32 *)a1->Context + 1106, 1u);
}
