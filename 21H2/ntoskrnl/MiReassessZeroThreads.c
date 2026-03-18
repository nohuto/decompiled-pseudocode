/*
 * XREFs of MiReassessZeroThreads @ 0x1402452D4
 * Callers:
 *     MiZeroLargePages @ 0x1402C41D0 (MiZeroLargePages.c)
 * Callees:
 *     MiLogZeroPageDecision @ 0x1402455E0 (MiLogZeroPageDecision.c)
 *     MiAddZeroingThreads @ 0x14024576C (MiAddZeroingThreads.c)
 *     MiReduceZeroingThreads @ 0x140266CA8 (MiReduceZeroingThreads.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiReassessZeroThreads(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rbx
  unsigned int v6; // r15d
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r10
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned int v13; // ecx
  int *v14; // r8
  int *v15; // r12
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  char v19; // al
  unsigned __int64 OldIrql; // rbx
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  unsigned __int8 v26; // al
  __m128i si128; // xmm0
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v31; // eax
  bool v32; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  int v34; // [rsp+98h] [rbp+48h]
  unsigned __int64 v35; // [rsp+A0h] [rbp+50h]

  if ( a2 )
  {
    v2 = *(_QWORD *)(a1 + 232);
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( *(_DWORD *)(v2 + 136) )
    {
      v5 = *(unsigned int *)(a1 + 264);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
      if ( *(_DWORD *)(*(_QWORD *)(v2 + 144) + 40 * v5) < 0x1000u )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v19 = KiIrqlFlags;
        OldIrql = LockHandle.OldIrql;
        if ( !KiIrqlFlags )
          goto LABEL_27;
      }
      else
      {
        *(_QWORD *)(v2 + 232) += a2;
        ++*(_DWORD *)(v2 + 168);
        v6 = *(_DWORD *)(v2 + 164);
        if ( !v6 )
          v6 = 1;
        if ( *(_DWORD *)(v2 + 168) >= v6 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v8 = *(unsigned int *)(v2 + 80);
          *(LARGE_INTEGER *)(v2 + 48) = PerformanceCounter;
          v9 = -1LL;
          v10 = *(_QWORD *)(v2 + 232) / ((8LL * v6) & 0x7FFFFFFFFFFFFFuLL);
          v35 = v10;
          v34 = -1;
          v11 = *(_QWORD *)(qword_140C506E0 + 120 * v8 + 112);
          if ( *(_DWORD *)(v11 + 68) && v6 <= *(_DWORD *)(v11 + 48) && (v12 = *(_QWORD *)(v11 + 40)) != 0 )
          {
            v13 = *(_DWORD *)(v2 + 160);
            v9 = *(_QWORD *)(v12 + 8LL * (v6 - 1));
            v14 = (int *)(v2 + 176);
            v34 = v9;
          }
          else
          {
            v13 = *(_DWORD *)(v2 + 156) >> 2;
            *(_DWORD *)(v2 + 160) = v13;
            if ( !v13 )
            {
              *(_DWORD *)(v2 + 160) = 1;
              v13 = 1;
            }
            v14 = (int *)(v2 + 176);
            *(_DWORD *)(v2 + 176) = v6 < v13 ? 5 : 0;
            *(_DWORD *)(v2 + 172) = 0;
          }
          if ( v6 > v13 )
          {
            si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
            *(_DWORD *)(v2 + 172) = 1;
            *(_DWORD *)(v2 + 176) = 2;
            *(__m128i *)(v2 + 184) = si128;
            *(__m128i *)(v2 + 200) = si128;
            *(__m128i *)(v2 + 216) = si128;
          }
          else if ( v10 <= v9 + v9 / 0xA || v9 == -1LL )
          {
            ++dword_140C296EC;
            v15 = v14;
            if ( *(_DWORD *)(v2 + 172) )
            {
              v15 = (int *)(v2 + 176);
              *(_DWORD *)(v2 + 172) = 0;
              *(_DWORD *)(v2 + 176) = 0;
            }
            v16 = (unsigned int)*v15;
            if ( (unsigned int)v16 < 6 )
              *(_QWORD *)(v2 + 8 * v16 + 184) = v10;
            v17 = *v15 + 1;
            *v15 = v17;
            if ( v17 != 6 )
            {
              LOBYTE(v18) = 1;
              goto LABEL_22;
            }
            ++*(_DWORD *)(v2 + 292);
            v18 = MiAddZeroingThreads(a1);
            *v15 = 0;
            if ( v18 != 5 )
            {
LABEL_22:
              MiLogZeroPageDecision(v2 + 136, v35, v34, v6, v18);
              v21 = *(_DWORD *)(v2 + 164);
              if ( v21 != v6 )
                *(_DWORD *)(v2 + 176) = 0;
              *(_DWORD *)(v2 + 168) = 0;
              v22 = 0LL;
              *(_QWORD *)(v2 + 232) = 0LL;
              if ( v21 )
              {
                do
                {
                  v23 = 5 * v22;
                  v22 = (unsigned int)(v22 + 1);
                  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v2 + 144) + 8 * v23), 0);
                }
                while ( (unsigned int)v22 < *(_DWORD *)(v2 + 164) );
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              OldIrql = LockHandle.OldIrql;
              if ( !KiIrqlFlags )
                goto LABEL_27;
              if ( (KiIrqlFlags & 1) == 0 )
                goto LABEL_27;
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql > 0xFu || LockHandle.OldIrql > 0xFu || CurrentIrql < 2u )
                goto LABEL_27;
LABEL_52:
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v31 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v32 = (v31 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v31;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              goto LABEL_27;
            }
            v10 = v35;
          }
          ++dword_140C296F0;
          if ( *(_DWORD *)(v2 + 172) != 1 )
            *(_QWORD *)(v2 + 172) = 1LL;
          v24 = *(unsigned int *)(v2 + 176);
          if ( (unsigned int)v24 < 6 )
          {
            *(_QWORD *)(v2 + 8 * v24 + 184) = v10;
            LODWORD(v24) = *(_DWORD *)(v2 + 176);
          }
          v25 = v24 + 1;
          *(_DWORD *)(v2 + 176) = v25;
          if ( v25 == 3 )
          {
            ++*(_DWORD *)(v2 + 296);
            LOBYTE(v18) = MiReduceZeroingThreads(v2, (unsigned int)v8, 0LL);
            *(_DWORD *)(v2 + 176) = 0;
          }
          else
          {
            LOBYTE(v18) = 6;
          }
          goto LABEL_22;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v19 = KiIrqlFlags;
        OldIrql = LockHandle.OldIrql;
        if ( !KiIrqlFlags )
        {
LABEL_27:
          __writecr8(OldIrql);
          return;
        }
      }
      if ( (v19 & 1) == 0 )
        goto LABEL_27;
      v26 = KeGetCurrentIrql();
      if ( v26 > 0xFu || (unsigned __int8)OldIrql > 0xFu || v26 < 2u )
        goto LABEL_27;
      goto LABEL_52;
    }
  }
}
