/*
 * XREFs of MiCheckProcessorPteCache @ 0x1402CA790
 * Callers:
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiEmptyPteBins @ 0x140319FD0 (MiEmptyPteBins.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiCheckProcessorPteCache(unsigned __int64 a1)
{
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v4; // rbx
  signed __int64 *p_PteBitCache; // rdx
  signed __int64 *v6; // r11
  signed __int64 v7; // r8
  unsigned __int64 v8; // r10
  signed __int64 *v9; // r9
  signed __int64 *v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  _BYTE *v14; // rsi
  char v15; // al
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r9
  unsigned __int64 *v19; // rsi
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r15
  __int64 *v24; // r8
  __int64 v25; // rax
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // r10
  volatile signed __int64 *v29; // rdi
  signed __int64 v30; // rax
  unsigned __int8 v31; // si
  unsigned __int64 v32; // rax
  __int64 v33; // rdi
  bool v34; // zf
  __int64 v35; // rcx
  unsigned int v36; // esi
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rcx
  unsigned __int64 v41; // r15
  __int64 v42; // rdx
  unsigned int v43; // ecx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r9
  int v50; // eax
  unsigned __int64 OldIrql; // r15
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r10
  _DWORD *v54; // r9
  int v55; // eax
  _DWORD *v56; // r9
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // rax
  _DWORD *v59; // r9
  int v60; // edx
  __int128 v61; // [rsp+38h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-20h] BYREF

  v61 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0LL;
  p_PteBitCache = (signed __int64 *)&CurrentPrcb->PteBitCache;
  if ( CurrentPrcb->PteBitCache != -1LL )
  {
LABEL_3:
    *((_QWORD *)&v61 + 1) = p_PteBitCache;
    *(_QWORD *)&v61 = 64LL;
    v6 = p_PteBitCache;
    if ( !a1 )
    {
      v12 = 0LL;
      goto LABEL_13;
    }
    if ( a1 > 0x40 )
      goto LABEL_58;
    v7 = *p_PteBitCache;
    v8 = 63 - a1 + 1;
    v9 = &p_PteBitCache[v8 >> 6];
    v10 = p_PteBitCache;
    if ( a1 < 0x40 )
    {
      if ( a1 > 1 )
      {
        v33 = 0LL;
        while ( 1 )
        {
          if ( v7 == -1 )
          {
            while ( 1 )
            {
              if ( ++v10 > v9 )
                goto LABEL_57;
              v7 = *v10;
              if ( *v10 != -1 )
              {
                v33 = 0LL;
                break;
              }
            }
          }
          v34 = !_BitScanForward64((unsigned __int64 *)&v35, v7);
          if ( v34 )
            LODWORD(v35) = 64;
          if ( (unsigned int)(v33 + v35) >= a1 )
            break;
          v36 = a1;
          v37 = ~v7;
          while ( 1 )
          {
            v37 &= v37 >> (v36 >> 1);
            if ( !v37 )
              break;
            v36 -= v36 >> 1;
            if ( v36 <= 1 )
            {
              _BitScanForward64(&v38, v37);
              v39 = (unsigned int)v38;
              goto LABEL_56;
            }
          }
          if ( v10 == p_PteBitCache )
            goto LABEL_57;
          v34 = !_BitScanReverse64((unsigned __int64 *)&v40, v7);
          if ( v34 )
            v33 = 64LL;
          else
            v33 = (unsigned int)(63 - v40);
          v7 = v10[1];
          ++v10;
        }
        v39 = -v33;
LABEL_56:
        v12 = ((v10 - p_PteBitCache) << 6) + v39;
        if ( v12 > v8 )
LABEL_57:
          v12 = -1LL;
      }
      else
      {
        if ( v7 == -1 )
        {
          do
          {
            if ( ++v10 > v9 )
              goto LABEL_58;
            v7 = *v10;
          }
          while ( *v10 == -1 );
        }
        _BitScanForward64(&v11, ~v7);
        v12 = (unsigned int)v11 + ((v10 - p_PteBitCache) << 6);
        if ( v12 > v8 )
          goto LABEL_58;
      }
LABEL_9:
      if ( v12 == -1LL )
        goto LABEL_14;
      v13 = v12 & 7;
      v14 = (char *)v6 + (v12 >> 3);
      if ( v13 + a1 > 8 )
      {
        if ( (v12 & 7) != 0 )
        {
          *v14++ |= byte_14001B620[v13];
          a1 -= (unsigned int)(8 - v13);
        }
        if ( a1 > 8 )
        {
          memset(v14, 255, a1 >> 3);
          v14 += a1 >> 3;
          a1 &= 7u;
        }
        if ( !a1 )
          goto LABEL_13;
        v15 = byte_14001E890[a1];
      }
      else
      {
        v15 = byte_14001E890[a1] << v13;
      }
      *v14 |= v15;
LABEL_13:
      v4 = qword_140C4EF90 + 8 * (v12 + CurrentPrcb->PteBitOffset);
LABEL_14:
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v57 = KeGetCurrentIrql();
          if ( v57 <= 0xFu && CurrentIrql <= 0xFu && v57 >= 2u )
          {
            v58 = KeGetCurrentPrcb();
            v59 = v58->SchedulerAssist;
            v60 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v34 = (v60 & v59[5]) == 0;
            v59[5] &= v60;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick(v58);
          }
        }
      }
      __writecr8(CurrentIrql);
      return v4;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v7 < 0 )
        {
          while ( ++v10 <= v9 )
          {
            v7 = *v10;
            if ( *v10 >= 0 )
              goto LABEL_76;
          }
LABEL_58:
          v12 = -1LL;
          goto LABEL_9;
        }
LABEL_76:
        v34 = !_BitScanReverse64((unsigned __int64 *)&v42, v7);
        if ( v34 )
          v43 = 64;
        else
          v43 = 63 - v42;
        v12 = ((v10 - v6 + 1) << 6) - v43;
        if ( v12 > v8 )
          goto LABEL_58;
        v44 = a1 - v43;
        if ( a1 == v43 )
          goto LABEL_9;
        v7 = v10[1];
        ++v10;
        if ( v44 >= 0x40 )
          break;
LABEL_84:
        v34 = !_BitScanForward64(&v45, v7);
        if ( v34 )
          v45 = 64LL;
        if ( v45 >= v44 )
          goto LABEL_9;
      }
      if ( !v7 )
      {
        v44 -= 64LL;
        if ( !v44 )
          goto LABEL_9;
        v7 = v10[1];
        ++v10;
        goto LABEL_84;
      }
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v47 = KeGetCurrentIrql();
      if ( v47 <= 0xFu && CurrentIrql <= 0xFu && v47 >= 2u )
      {
        v48 = KeGetCurrentPrcb();
        v49 = v48->SchedulerAssist;
        v50 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v34 = (v50 & v49[5]) == 0;
        v49[5] &= v50;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(v48);
      }
    }
  }
  __writecr8(CurrentIrql);
  v17 = qword_140C4EFC0;
LABEL_21:
  while ( 2 )
  {
    v18 = qword_140C4EFC8;
    v19 = (unsigned __int64 *)&qword_140C4EF80;
    if ( qword_140C4EFC8 )
    {
      while ( qword_140C4EF80 < v18 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_140C4EFB0, &LockHandle);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v52 = KeGetCurrentIrql();
            if ( v52 <= 0xFu && LockHandle.OldIrql <= 0xFu && v52 >= 2u )
            {
              v53 = KeGetCurrentPrcb();
              v54 = v53->SchedulerAssist;
              v55 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v34 = (v55 & v54[5]) == 0;
              v54[5] &= v55;
              if ( v34 )
                KiRemoveSystemWorkPriorityKick(v53);
            }
          }
        }
        __writecr8(OldIrql);
        v18 = qword_140C4EFC8;
        if ( !qword_140C4EFC8 )
          goto LABEL_25;
      }
      v19 = (unsigned __int64 *)&v61;
      *(_QWORD *)&v61 = qword_140C4EF80 - v18;
      *((_QWORD *)&v61 + 1) = qword_140C4EF88 + 8 * (v18 >> 6);
      if ( v17 )
        v17 -= v18;
    }
LABEL_25:
    v20 = *v19;
    v21 = v17;
    v22 = v19[1];
    if ( v17 >= v20 )
      v21 = 0LL;
    v23 = v20 - 1;
    while ( 1 )
    {
      if ( v23 - v21 != -1LL )
      {
        v24 = (__int64 *)(v22 + 8 * (v21 >> 6));
        v25 = ((1LL << (v21 & 0x3F)) - 1) | *v24;
        if ( v25 == -1 )
        {
          while ( (unsigned __int64)++v24 <= v22 + 8 * (v23 >> 6) )
          {
            v25 = *v24;
            if ( *v24 != -1 )
              goto LABEL_30;
          }
        }
        else
        {
LABEL_30:
          _BitScanForward64((unsigned __int64 *)&v25, ~v25);
          v26 = v25 + ((__int64)((__int64)v24 - v22) >> 3 << 6);
          if ( v26 <= v23 && v26 != -1LL )
          {
            v27 = (v26 + v18) & 0xFFFFFFFFFFFFFFC0uLL;
            v28 = *(_QWORD *)(qword_140C4EF88 + 8 * (v27 >> 6));
            v29 = (volatile signed __int64 *)(qword_140C4EF88 + 8 * (v27 >> 6));
            if ( v28 != -1LL )
            {
              while ( 1 )
              {
                v30 = _InterlockedCompareExchange64(v29, -1LL, v28);
                if ( v28 == v30 )
                  break;
                v28 = v30;
                if ( v30 == -1 )
                  goto LABEL_91;
              }
              if ( v28 != -1LL )
              {
                v31 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v31 <= 0xFu )
                {
                  v56 = KeGetCurrentPrcb()->SchedulerAssist;
                  v56[5] |= (-1 << (v31 + 1)) & 4;
                }
                CurrentPrcb = KeGetCurrentPrcb();
                CurrentIrql = v31;
                p_PteBitCache = (signed __int64 *)&CurrentPrcb->PteBitCache;
                if ( CurrentPrcb->PteBitCache == -1LL )
                {
                  *p_PteBitCache = v28;
                  CurrentPrcb->PteBitOffset = v27;
                  v32 = ~v28 - ((~v28 >> 1) & 0x5555555555555555LL);
                  _InterlockedExchangeAdd64(
                    &qword_140C4EFD8,
                    -(__int64)((0x101010101010101LL
                              * (((v32 & 0x3333333333333333LL)
                                + ((v32 >> 2) & 0x3333333333333333LL)
                                + (((v32 & 0x3333333333333333LL) + ((v32 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
                  qword_140C4EFC0 = v27 + 64;
                }
                else
                {
                  _InterlockedAnd64(v29, v28);
                }
                goto LABEL_3;
              }
            }
LABEL_91:
            v17 = v27 + 64;
            goto LABEL_21;
          }
        }
      }
      if ( !v21 )
        break;
      v41 = v17 + 1;
      if ( v17 + 1 > v20 )
        v41 = v20;
      v23 = v41 - 1;
      v21 = 0LL;
    }
    if ( (unsigned int)MiEmptyPteBins(&qword_140C4EF80, 0LL) )
    {
      v17 = 0LL;
      continue;
    }
    return 0LL;
  }
}
