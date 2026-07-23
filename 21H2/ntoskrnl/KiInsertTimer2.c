/*
 * XREFs of KiInsertTimer2 @ 0x140210C10
 * Callers:
 *     KiTimer2Expiration @ 0x1402ED030 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x1402EFE10 (KiExpireTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x14039E540 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140210C80 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 */

char __fastcall KiInsertTimer2(__int64 a1, char a2, __int64 a3)
{
  __int64 v6; // rdx
  char inserted; // bl
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v10; // rdx
  int *v11; // rax
  int v12; // ecx
  int v13; // eax
  bool v14; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v16; // rcx
  char v17; // [rsp+48h] [rbp+20h] BYREF

  v17 = 0;
  KxAcquireSpinLock(&KiTimer2CollectionLock);
  LOBYTE(v6) = a2;
  inserted = KiInsertTimer2WithCollectionLockHeld(a1, v6, a3, &v17);
  KxReleaseSpinLock(&KiTimer2CollectionLock);
  if ( v17 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = KiProcessorBlock[(unsigned int)KiClockTimerOwner];
    if ( (KiVelocityFlags & 2) != 0 )
    {
      v11 = *(int **)(v10 + 33976);
      if ( v11 )
      {
        if ( CurrentPrcb->SchedulerAssist )
        {
          if ( CurrentPrcb != (struct _KPRCB *)v10 && KiVpThreadSystemWorkPriority >= 8 )
          {
            v12 = *v11;
            v13 = *v11 & 0x40000;
            if ( (v12 & 0x100000) != 0 || v13 && (unsigned __int8)v12 < KiVpThreadSystemWorkPriority )
            {
              v14 = HvlpVirtualProcessorsIdentityMapped == 0;
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              SchedulerAssist[3] = 2;
              v16 = *(unsigned int *)(v10 + 36);
              if ( v14 )
                LODWORD(v16) = (unsigned __int8)byte_140D006C1[2 * v16] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v16] << 6);
              SchedulerAssist[2] = v16;
              __writemsr(0x400000C2u, (unsigned int)v16);
            }
          }
        }
      }
    }
  }
  return inserted;
}
