/*
 * XREFs of MiPageFileNoFreeSpace @ 0x140543E74
 * Callers:
 *     MiGatherPagefilePages @ 0x140256844 (MiGatherPagefilePages.c)
 * Callees:
 *     MiMakePagefileWriterEntryAvailable @ 0x14024E474 (MiMakePagefileWriterEntryAvailable.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeModifiedReservations @ 0x140543964 (MiFreeModifiedReservations.c)
 *     MiIssuePageExtendRequest @ 0x140543B84 (MiIssuePageExtendRequest.c)
 *     MiCauseOverCommitPopup @ 0x140550630 (MiCauseOverCommitPopup.c)
 */

__int64 __fastcall MiPageFileNoFreeSpace(__int64 a1, _QWORD *a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // rsi
  int v9; // r12d
  unsigned __int64 v10; // r14
  unsigned __int128 v11; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  unsigned int v17; // r9d
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned __int64 v20; // rbx

  v4 = *(_QWORD *)(a1 + 248);
  v6 = 1LL;
  MiFreeModifiedReservations(a1, 1LL, a3, a4);
  v8 = 0LL;
  v9 = 0;
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  if ( *(_QWORD *)(a1 + 24) )
  {
    MiMakePagefileWriterEntryAvailable(a2);
  }
  else
  {
    *(_BYTE *)(a1 + 206) |= 1u;
    v9 = 1;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
  *(_QWORD *)&v11 = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      *(_QWORD *)&v11 = KeGetCurrentIrql();
      if ( (unsigned __int8)v11 <= 0xFu && (unsigned __int8)v10 <= 0xFu && (unsigned __int8)v11 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        *(_QWORD *)&v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v14 = ((unsigned int)v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v14 )
          *(_QWORD *)&v11 = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  if ( v9 == 1 )
  {
    *(_QWORD *)&v11 = 2575857425LL;
    *a2 = 2575857425LL;
    v15 = *(_QWORD *)(v4 + 7592);
    v16 = *(_QWORD *)(v4 + 7464);
    if ( v16 > v15 )
      v16 = *(_QWORD *)(v4 + 7592);
    if ( (*(_BYTE *)(a1 + 204) & 0x10) == 0 )
    {
      v11 = v15 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
      if ( v16 > (*((_QWORD *)&v11 + 1) & 0xFFFFFFFFFFFFFFF8uLL) && v15 < *(_QWORD *)(v4 + 6216) )
      {
        MiCauseOverCommitPopup(v4);
LABEL_27:
        *(_QWORD *)&v11 = *(_QWORD *)(v4 + 7592);
        if ( (unsigned __int64)v11 < *(_QWORD *)(v4 + 6216) )
          *(_QWORD *)&v11 = MiIssuePageExtendRequest(v4, v6, 6, 0);
        return v11;
      }
      if ( *(_QWORD *)(v4 + 7600) >= 0x1000uLL )
      {
        v17 = *(_DWORD *)(v4 + 6936);
        v18 = 0;
        if ( v17 )
        {
          v19 = v4 + 6944;
          do
          {
            if ( (*(_BYTE *)(*(_QWORD *)v19 + 204LL) & 0x50) == 0 )
            {
              if ( v8 + *(_QWORD *)(*(_QWORD *)v19 + 24LL) < v8 )
                break;
              v8 += *(_QWORD *)(*(_QWORD *)v19 + 24LL);
            }
            ++v18;
            v19 += 8LL;
          }
          while ( v18 < v17 );
        }
        v20 = *(_QWORD *)(v4 + 7600);
        if ( v20 > v8 )
        {
          v6 = v20 - v8;
          if ( v6 )
            goto LABEL_27;
        }
      }
    }
  }
  return v11;
}
