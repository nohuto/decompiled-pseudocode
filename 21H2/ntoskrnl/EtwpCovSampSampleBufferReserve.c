/*
 * XREFs of EtwpCovSampSampleBufferReserve @ 0x140636A64
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x140635B80 (EtwpCovSampCaptureBufferQueue.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpCovSampLookasidePop @ 0x140460E30 (EtwpCovSampLookasidePop.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x140460FAC (EtwpCovSampTryAcquireBufferLock.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x140636A30 (EtwpCovSampSampleBufferDecRef.c)
 */

__int64 __fastcall EtwpCovSampSampleBufferReserve(__int64 a1, __int16 a2, __int64 *a3)
{
  unsigned __int64 v4; // r10
  unsigned int v5; // eax
  unsigned int v6; // ecx
  _QWORD *ExSaPageArray; // r8
  __int64 v8; // r12
  __int16 v9; // r11
  __int64 v10; // rsi
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r14
  int v16; // eax
  unsigned __int8 v17; // al
  unsigned __int8 v18; // r14
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // al
  unsigned __int8 v24; // bl
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  PSLIST_ENTRY v28; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v30; // bl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v33; // eax
  unsigned __int8 v34; // al
  unsigned __int8 v35; // di
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  __int64 *v39; // rax
  unsigned __int8 v41; // [rsp+70h] [rbp+48h] BYREF
  unsigned __int16 v42; // [rsp+78h] [rbp+50h]
  __int64 *v43; // [rsp+80h] [rbp+58h]
  int v44; // [rsp+88h] [rbp+60h]

  v43 = a3;
  v4 = (unsigned int)*(_QWORD *)(a1 + 8);
  v5 = ((unsigned int)v4 >> 13) & 0x3FFFF;
  _BitScanReverse(&v6, v5);
  ExSaPageArray = KeGetCurrentPrcb()->ExSaPageArray;
  v8 = 0LL;
  v9 = a2 + 8;
  v41 = 0;
  v10 = 0LL;
  v11 = 1 << v6;
  v12 = v6 - 2;
  v44 = v12;
  v13 = *(_QWORD *)(ExSaPageArray[v12] + 8LL * (v5 ^ v11) + 8) + 8 * ((v4 >> 4) & 0x1FF);
  v42 = 7 - ((v9 - 1) & 7) + v9;
  while ( (unsigned int)EtwpCovSampTryAcquireBufferLock((volatile signed __int32 *)v13, &v41) )
  {
    v14 = *(_QWORD *)(v13 + 8);
    if ( v14 )
      goto LABEL_7;
    if ( v10 )
    {
      if ( !*(_DWORD *)(v13 + 120) )
      {
        KxReleaseSpinLock((PKSPIN_LOCK)v13);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
        {
          v30 = v41;
          if ( v41 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v30 = v41;
            v33 = ~(unsigned __int16)(-1LL << (v41 + 1));
            v22 = (v33 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v33;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        else
        {
          v30 = v41;
        }
        __writecr8(v30);
        goto LABEL_49;
      }
      *(_QWORD *)(v13 + 8) = v10;
      v14 = v10;
      v10 = 0LL;
LABEL_7:
      v15 = *(int *)(v14 + 60);
      v16 = v15 + v42;
      if ( v16 <= *(_DWORD *)(v14 + 64) )
      {
        *(_DWORD *)(v14 + 60) = v16;
        ++*(_DWORD *)(v14 + 56);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 + 48)) <= 1 )
          __fastfail(0xEu);
        KxReleaseSpinLock((PKSPIN_LOCK)v13);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v34 = KeGetCurrentIrql(), v34 <= 0xFu) )
        {
          v35 = v41;
          if ( v41 <= 0xFu && v34 >= 2u )
          {
            v36 = KeGetCurrentPrcb();
            v37 = v36->SchedulerAssist;
            v35 = v41;
            v38 = ~(unsigned __int16)(-1LL << (v41 + 1));
            v22 = (v38 & v37[5]) == 0;
            v37[5] &= v38;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick((__int64)v36);
          }
        }
        else
        {
          v35 = v41;
        }
        __writecr8(v35);
        v8 = v15 + v14 + 72;
        *(_WORD *)(v8 + 4) = v42;
        v39 = v43;
        *(_DWORD *)v8 = v15;
        *v39 = v14;
        break;
      }
      *(_QWORD *)(v13 + 8) = 0LL;
      KxReleaseSpinLock((PKSPIN_LOCK)v13);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v17 = KeGetCurrentIrql(), v17 <= 0xFu) )
      {
        v18 = v41;
        if ( v41 <= 0xFu && v17 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v18 = v41;
          v21 = ~(unsigned __int16)(-1LL << (v41 + 1));
          v22 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)v19);
        }
      }
      else
      {
        v18 = v41;
      }
      __writecr8(v18);
      EtwpCovSampSampleBufferDecRef(a1, v14);
    }
    else
    {
      KxReleaseSpinLock((PKSPIN_LOCK)v13);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v23 = KeGetCurrentIrql(), v23 <= 0xFu) )
      {
        v24 = v41;
        if ( v41 <= 0xFu && v23 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v24 = v41;
          v27 = ~(unsigned __int16)(-1LL << (v41 + 1));
          v22 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)v25);
        }
      }
      else
      {
        v24 = v41;
      }
      __writecr8(v24);
      v28 = EtwpCovSampLookasidePop(a1, a1 + 624);
      v10 = (__int64)v28;
      if ( !v28 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 316));
        return v8;
      }
      *((_DWORD *)&v28[3].Next + 3) = 0;
      *((_DWORD *)&v28[3].Next + 2) = 0;
      v28[3].Next = (_SLIST_ENTRY *)1;
    }
  }
  if ( !v10 )
    return v8;
LABEL_49:
  EtwpCovSampSampleBufferDecRef(a1, v10);
  return v8;
}
