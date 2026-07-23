/*
 * XREFs of MiReassessZeroThreads @ 0x1402397D4
 * Callers:
 *     MiZeroLargePages @ 0x1402D6D70 (MiZeroLargePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiReduceZeroingThreads @ 0x140239A80 (MiReduceZeroingThreads.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLogZeroPageDecision @ 0x140399278 (MiLogZeroPageDecision.c)
 *     MiAddZeroingThreads @ 0x1403A56F0 (MiAddZeroingThreads.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiReassessZeroThreads(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rdi
  __int64 v6; // rbx
  __int64 v7; // r15
  char v8; // al
  unsigned __int64 OldIrql; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // r10
  __int64 v13; // r9
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  int *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  int *v20; // r14
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rdx
  unsigned __int8 CurrentIrql; // al
  unsigned int v27; // eax
  __m128i si128; // xmm0
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v32; // eax
  bool v33; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  int v35; // [rsp+98h] [rbp+48h]
  unsigned __int64 v36; // [rsp+A0h] [rbp+50h]
  __int64 v37; // [rsp+A8h] [rbp+58h]

  if ( a2 )
  {
    v2 = *(_QWORD *)(a1 + 232);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v4 = v2 + 136;
    if ( *(_DWORD *)(v2 + 136) )
    {
      v6 = *(unsigned int *)(a1 + 264);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
      if ( *(_DWORD *)(*(_QWORD *)(v2 + 144) + 40 * v6) < 0x1000u )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v8 = KiIrqlFlags;
        OldIrql = LockHandle.OldIrql;
        if ( !KiIrqlFlags )
          goto LABEL_6;
LABEL_37:
        if ( (v8 & 1) == 0 )
          goto LABEL_6;
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql > 0xFu || (unsigned __int8)OldIrql > 0xFu || CurrentIrql < 2u )
          goto LABEL_6;
        goto LABEL_51;
      }
      *(_QWORD *)(v2 + 232) += a2;
      ++*(_DWORD *)(v2 + 168);
      v7 = *(unsigned int *)(v2 + 164);
      if ( *(_DWORD *)(v2 + 168) != (_DWORD)v7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v8 = KiIrqlFlags;
        OldIrql = LockHandle.OldIrql;
        if ( !KiIrqlFlags )
        {
LABEL_6:
          __writecr8(OldIrql);
          return;
        }
        goto LABEL_37;
      }
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v11 = *(_QWORD *)(v2 + 72);
      *(LARGE_INTEGER *)(v2 + 48) = PerformanceCounter;
      v12 = *(_QWORD *)(v2 + 232) / ((8 * v7) & 0x7FFFFFFFFFFFFFuLL);
      v36 = v12;
      v13 = *(_QWORD *)(v11 + 16) + 4544LL * *(unsigned int *)(v2 + 80);
      v14 = -1LL;
      v37 = v13;
      v35 = -1;
      if ( *(_DWORD *)(v13 + 4380)
        && (unsigned int)v7 <= *(_DWORD *)(v13 + 4360)
        && (v15 = *(_QWORD *)(v13 + 4464)) != 0 )
      {
        v14 = *(_QWORD *)(v15 + 8LL * (unsigned int)(v7 - 1));
        v16 = (int *)(v2 + 176);
        v35 = v14;
      }
      else
      {
        v27 = *(_DWORD *)(v2 + 156) >> 2;
        *(_DWORD *)(v2 + 160) = v27;
        if ( !v27 )
        {
          *(_DWORD *)(v2 + 160) = 1;
          v27 = 1;
        }
        v16 = (int *)(v2 + 176);
        *(_DWORD *)(v2 + 176) = (unsigned int)v7 < v27 ? 5 : 0;
        *(_DWORD *)(v2 + 172) = 0;
      }
      if ( (unsigned int)v7 > *(_DWORD *)(v2 + 160) )
      {
        si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
        *(_DWORD *)(v2 + 172) = 1;
        *(_DWORD *)(v2 + 176) = 2;
        *(__m128i *)(v2 + 184) = si128;
        *(__m128i *)(v2 + 200) = si128;
        *(__m128i *)(v2 + 216) = si128;
      }
      else if ( v12 <= v14 + v14 / 0xA || v14 == -1LL )
      {
        ++dword_140C2A28C;
        v20 = v16;
        if ( *(_DWORD *)(v2 + 172) )
        {
          v20 = (int *)(v2 + 176);
          *(_DWORD *)(v2 + 172) = 0;
          *(_DWORD *)(v2 + 176) = 0;
        }
        v21 = (unsigned int)*v20;
        if ( (unsigned int)v21 < 6 )
          *(_QWORD *)(v4 + 8 * v21 + 48) = v12;
        v22 = *v20 + 1;
        *v20 = v22;
        if ( v22 == 6 )
        {
          ++*(_DWORD *)(v2 + 292);
          v19 = MiAddZeroingThreads(a1);
          *v20 = 0;
          v13 = v37;
          v12 = v36;
        }
        else
        {
          v19 = 1;
        }
        if ( v19 != 5 )
        {
LABEL_28:
          MiLogZeroPageDecision(v2 + 136, v36, v35, v7, v19);
          v23 = *(_DWORD *)(v2 + 164);
          if ( v23 != (_DWORD)v7 )
            *(_DWORD *)(v2 + 176) = 0;
          *(_DWORD *)(v2 + 168) = 0;
          v24 = 0LL;
          *(_QWORD *)(v2 + 232) = 0LL;
          if ( v23 )
          {
            do
            {
              v25 = 5 * v24;
              v24 = (unsigned int)(v24 + 1);
              _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v2 + 144) + 8 * v25), 0);
            }
            while ( (unsigned int)v24 < *(_DWORD *)(v2 + 164) );
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( !KiIrqlFlags )
            goto LABEL_6;
          if ( (KiIrqlFlags & 1) == 0 )
            goto LABEL_6;
          v29 = KeGetCurrentIrql();
          if ( v29 > 0xFu || LockHandle.OldIrql > 0xFu || v29 < 2u )
            goto LABEL_6;
LABEL_51:
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v33 = (v32 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v32;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          goto LABEL_6;
        }
      }
      ++dword_140C2A290;
      if ( *(_DWORD *)(v2 + 172) != 1 )
        *(_QWORD *)(v2 + 172) = 1LL;
      v17 = *(unsigned int *)(v2 + 176);
      if ( (unsigned int)v17 < 6 )
      {
        *(_QWORD *)(v4 + 8 * v17 + 48) = v12;
        LODWORD(v17) = *(_DWORD *)(v2 + 176);
      }
      v18 = v17 + 1;
      *(_DWORD *)(v2 + 176) = v18;
      if ( v18 == 3 )
      {
        ++*(_DWORD *)(v2 + 296);
        LOBYTE(v19) = MiReduceZeroingThreads(v2, v13, 0LL);
        *(_DWORD *)(v2 + 176) = 0;
      }
      else
      {
        LOBYTE(v19) = 6;
      }
      goto LABEL_28;
    }
  }
}
