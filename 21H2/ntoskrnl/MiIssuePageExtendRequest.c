/*
 * XREFs of MiIssuePageExtendRequest @ 0x140543B84
 * Callers:
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MmResourcesAvailable @ 0x1403493B0 (MmResourcesAvailable.c)
 *     MiPageFileNoFreeSpace @ 0x140543E74 (MiPageFileNoFreeSpace.c)
 *     MiCreatePagingFile @ 0x1407B6B3C (MiCreatePagingFile.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1408D9C2C (MiExtendWorkingSetSwapPagefile.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiQueuePageFileExtension @ 0x14054403C (MiQueuePageFileExtension.c)
 */

__int64 __fastcall MiIssuePageExtendRequest(__int64 a1, unsigned __int64 a2, char a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r8
  int v10; // r10d
  int v11; // r12d
  volatile signed __int32 *v12; // rbx
  char v13; // al
  char v14; // al
  __int64 v15; // rdx
  LARGE_INTEGER *Timeout; // r14
  unsigned int v17; // edx
  char v18; // al
  unsigned int v19; // ecx
  __int64 v20; // r8
  char v21; // al
  char v22; // al
  char v23; // al
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r8
  volatile signed __int32 **v27; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  bool v32; // zf
  _QWORD v34[12]; // [rsp+38h] [rbp-29h] BYREF

  memset(v34, 0, 0x58uLL);
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v10 = a3 & 8;
  if ( (a3 & 8) != 0 && !*(_BYTE *)(a1 + 1681) )
    return 0LL;
  v11 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    v12 = (volatile signed __int32 *)(a1 + (v10 != 0 ? 1432LL : 440LL));
    if ( _InterlockedCompareExchange(v12 + 18, 1, 0) )
      return 0LL;
    v13 = *((_BYTE *)v12 + 79);
    a2 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( (a3 & 4) != 0 )
      v14 = v13 | 1;
    else
      v14 = v13 & 0xFE;
    *((_BYTE *)v12 + 79) = v14;
    v15 = 0LL;
    Timeout = 0LL;
  }
  else
  {
    if ( (ULONG_PTR *(__fastcall *)(__int64))CurrentThread[1].ApcState.ApcListHead[0].Blink == MiDereferenceSegmentThread
      || KeGetCurrentIrql() >= 2u )
    {
      return 0LL;
    }
    if ( (a3 & 8) != 0 )
      a2 = (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
    v17 = *(_DWORD *)(a1 + 6936);
    v12 = (volatile signed __int32 *)v34;
    LODWORD(v34[9]) = 1;
    v34[0] = 0LL;
    BYTE4(v34[9]) = a4;
    if ( (a3 & 1) != 0 )
      v18 = HIBYTE(v34[9]) & 0xE8 | 2;
    else
      v18 = HIBYTE(v34[9]) & 0xE8;
    HIBYTE(v34[9]) = v18;
    v34[8] = &v34[7];
    v34[7] = &v34[7];
    LOWORD(v34[6]) = 0;
    BYTE2(v34[6]) = 6;
    HIDWORD(v34[6]) = 0;
    if ( (a3 & 8) != 0 )
    {
      Timeout = (LARGE_INTEGER *)&MiOneSecond;
    }
    else if ( a4 >= v17 )
    {
      Timeout = (LARGE_INTEGER *)&MiOneSecond;
      v19 = 0;
      if ( v17 )
      {
        v20 = a1 + 6944;
        do
        {
          if ( (*(_WORD *)(*(_QWORD *)v20 + 204LL) & 0x50) == 0 && **(_QWORD **)v20 < *(_QWORD *)(*(_QWORD *)v20 + 8LL) )
            break;
          ++v19;
          v20 += 8LL;
        }
        while ( v19 < v17 );
        v9 = 0LL;
      }
      if ( v19 == v17 )
        return 0LL;
    }
    else
    {
      Timeout = 0LL;
    }
    v15 = 1LL;
  }
  v21 = *((_BYTE *)v12 + 79);
  if ( v10 )
    v22 = v21 | 8;
  else
    v22 = v21 & 0xF7;
  *((_BYTE *)v12 + 79) = v22;
  *((_QWORD *)v12 + 5) = 0LL;
  *((_QWORD *)v12 + 10) = 0LL;
  v23 = *((_BYTE *)v12 + 79);
  LOBYTE(v9) = 17;
  *((_QWORD *)v12 + 4) = a2;
  *((_QWORD *)v12 + 3) = a1;
  *((_BYTE *)v12 + 79) = v23 & 0xDF | (&MiOneSecond != (__int64 *)Timeout ? 0x20 : 0);
  MiQueuePageFileExtension(v12, v15, v9);
  if ( !v11 )
  {
    if ( KeWaitForSingleObject((PVOID)(v12 + 12), Executive, 0, 0, Timeout) == 258 )
    {
      v24 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
      if ( !*((_DWORD *)v12 + 13) )
      {
        v25 = *((_QWORD *)v12 + 10);
        if ( v25 )
        {
          *(_QWORD *)(v25 + 80) = 0LL;
        }
        else
        {
          v26 = *((_QWORD *)v12 + 1);
          v27 = (volatile signed __int32 **)*((_QWORD *)v12 + 2);
          if ( *(volatile signed __int32 **)(v26 + 8) != v12 + 2 || *v27 != v12 + 2 )
            __fastfail(3u);
          *v27 = (volatile signed __int32 *)v26;
          *(_QWORD *)(v26 + 8) = v27;
        }
        *((_QWORD *)v12 + 5) = 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1344));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v24 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
            v32 = (v31 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v31;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v24);
    }
    if ( *((_QWORD *)v12 + 5) )
      return 1LL;
  }
  return 0LL;
}
