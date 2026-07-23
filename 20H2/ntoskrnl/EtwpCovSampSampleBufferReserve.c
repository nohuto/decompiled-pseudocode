/*
 * XREFs of EtwpCovSampSampleBufferReserve @ 0x1405ADEAC
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x1405ACCE4 (EtwpCovSampCaptureBufferQueue.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpCovSampLookasidePop @ 0x1405ADB0C (EtwpCovSampLookasidePop.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x1405ADE70 (EtwpCovSampSampleBufferDecRef.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x1405AE230 (EtwpCovSampTryAcquireBufferLock.c)
 */

__int64 __fastcall EtwpCovSampSampleBufferReserve(__int64 a1, __int16 a2, __int64 *a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned int v6; // r10d
  unsigned int v7; // ecx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // r14
  int v12; // eax
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r9
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  _SLIST_ENTRY *v20; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  unsigned __int16 v28; // [rsp+78h] [rbp+50h]

  v4 = 0LL;
  v5 = (*(_QWORD *)(a1 + 8) >> 4) & 0x1FFLL;
  v6 = ((unsigned int)*(_QWORD *)(a1 + 8) >> 13) & 0x3FFFF;
  _BitScanReverse(&v7, v6);
  v8 = 0LL;
  v9 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v7 - 2) + 8LL * (v6 ^ (1 << v7)) + 8) + 8 * v5;
  v28 = 7 - ((a2 + 7) & 7) + a2 + 8;
  while ( (unsigned int)EtwpCovSampTryAcquireBufferLock((PKSPIN_LOCK)v9) )
  {
    v10 = *(_QWORD *)(v9 + 8);
    if ( v10 )
      goto LABEL_7;
    if ( v8 )
    {
      if ( !*(_DWORD *)(v9 + 120) )
      {
        KxReleaseSpinLock((PKSPIN_LOCK)v9);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v16 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
              SchedulerAssist[5] &= 0xFFFF0001;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(0LL);
        break;
      }
      *(_QWORD *)(v9 + 8) = v8;
      v10 = v8;
      v8 = 0LL;
LABEL_7:
      v11 = *(int *)(v10 + 60);
      v12 = v11 + v28;
      if ( v12 <= *(_DWORD *)(v10 + 64) )
      {
        *(_DWORD *)(v10 + 60) = v12;
        ++*(_DWORD *)(v10 + 56);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 48)) <= 1 )
          __fastfail(0xEu);
        KxReleaseSpinLock((PKSPIN_LOCK)v9);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v24 = KeGetCurrentIrql();
            if ( v24 <= 0xFu && v24 >= 2u )
            {
              v25 = KeGetCurrentPrcb();
              v26 = v25->SchedulerAssist;
              v16 = (v26[5] & 0xFFFF0001) == 0;
              v26[5] &= 0xFFFF0001;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)v25);
            }
          }
        }
        __writecr8(0LL);
        v4 = v11 + v10 + 72;
        *(_WORD *)(v4 + 4) = v28;
        *(_DWORD *)v4 = v11;
        *a3 = v10;
        break;
      }
      *(_QWORD *)(v9 + 8) = 0LL;
      KxReleaseSpinLock((PKSPIN_LOCK)v9);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && v13 >= 2u )
          {
            v14 = KeGetCurrentPrcb();
            v15 = v14->SchedulerAssist;
            v16 = (v15[5] & 0xFFFF0001) == 0;
            v15[5] &= 0xFFFF0001;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick((__int64)v14);
          }
        }
      }
      __writecr8(0LL);
      EtwpCovSampSampleBufferDecRef(a1, v10);
    }
    else
    {
      KxReleaseSpinLock((PKSPIN_LOCK)v9);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v17 = KeGetCurrentIrql();
          if ( v17 <= 0xFu && v17 >= 2u )
          {
            v18 = KeGetCurrentPrcb();
            v19 = v18->SchedulerAssist;
            v16 = (v19[5] & 0xFFFF0001) == 0;
            v19[5] &= 0xFFFF0001;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick((__int64)v18);
          }
        }
      }
      __writecr8(0LL);
      v20 = EtwpCovSampLookasidePop(a1, a1 + 512);
      v8 = (__int64)v20;
      if ( !v20 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 316));
        return v4;
      }
      *((_DWORD *)&v20[3].Next + 3) = 0;
      *((_DWORD *)&v20[3].Next + 2) = 0;
      v20[3].Next = (_SLIST_ENTRY *)1;
    }
  }
  if ( v8 )
    EtwpCovSampSampleBufferDecRef(a1, v8);
  return v4;
}
