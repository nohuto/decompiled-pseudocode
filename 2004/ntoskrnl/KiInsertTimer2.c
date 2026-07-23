/*
 * XREFs of KiInsertTimer2 @ 0x1403421AC
 * Callers:
 *     KiTimer2Expiration @ 0x14027F560 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x14027FA60 (KiExpireTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x14039B660 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x14027F1E0 (KiInsertTimer2WithCollectionLockHeld.c)
 */

char __fastcall KiInsertTimer2(__int64 a1, char a2, _BYTE *a3)
{
  char inserted; // bl
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v9; // rdx
  int *v10; // rax
  int v11; // ecx
  int v12; // eax
  bool v13; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // rcx
  bool v16; // [rsp+48h] [rbp+20h] BYREF

  v16 = 0;
  KxAcquireSpinLock(&KiTimer2CollectionLock);
  inserted = KiInsertTimer2WithCollectionLockHeld(a1, a2, a3, &v16);
  KxReleaseSpinLock(&KiTimer2CollectionLock);
  if ( v16 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = KiProcessorBlock[(unsigned int)KiClockTimerOwner];
    if ( (KiVelocityFlags & 2) != 0 )
    {
      v10 = *(int **)(v9 + 33976);
      if ( v10 )
      {
        if ( CurrentPrcb->SchedulerAssist )
        {
          if ( CurrentPrcb != (struct _KPRCB *)v9 && KiVpThreadSystemWorkPriority >= 8 )
          {
            v11 = *v10;
            v12 = *v10 & 0x40000;
            if ( (v11 & 0x100000) != 0 || v12 && (unsigned __int8)v11 < KiVpThreadSystemWorkPriority )
            {
              v13 = HvlpVirtualProcessorsIdentityMapped == 0;
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              SchedulerAssist[3] = 2;
              v15 = *(unsigned int *)(v9 + 36);
              if ( v13 )
                LODWORD(v15) = (unsigned __int8)byte_140D006C1[2 * v15] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v15] << 6);
              SchedulerAssist[2] = v15;
              __writemsr(0x400000C2u, (unsigned int)v15);
            }
          }
        }
      }
    }
  }
  return inserted;
}
