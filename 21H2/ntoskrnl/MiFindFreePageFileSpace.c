/*
 * XREFs of MiFindFreePageFileSpace @ 0x1402586B4
 * Callers:
 *     MiFindPageFileWriteCluster @ 0x140250048 (MiFindPageFileWriteCluster.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x140251D30 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiGetKernelStackSwapSupport @ 0x1402A131C (MiGetKernelStackSwapSupport.c)
 *     MiReservePageFileSpace @ 0x1402E19E0 (MiReservePageFileSpace.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x1406BE3C0 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     MiFindFreePageFileSpaceForward @ 0x1402362BC (MiFindFreePageFileSpaceForward.c)
 *     MiSetPageFileAllocationBits @ 0x14024F068 (MiSetPageFileAllocationBits.c)
 *     RtlLengthCurrentClearRunForward @ 0x1402561DC (RtlLengthCurrentClearRunForward.c)
 *     MiTransferSoftwarePte @ 0x140258078 (MiTransferSoftwarePte.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x140258B80 (MiInvalidatePageFileBitmapsCache.c)
 *     MiPageFileLargestBitmapsRun @ 0x140258E08 (MiPageFileLargestBitmapsRun.c)
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlSetBits @ 0x140363CC0 (RtlSetBits.c)
 *     MiRescanPagefileBitmaps @ 0x1403BFDE4 (MiRescanPagefileBitmaps.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFindFreePageFileSpace(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // si
  unsigned __int64 *v5; // r12
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // esi
  __int64 *v12; // r15
  __int64 i; // r12
  __int16 v14; // cx
  __int64 v15; // rdi
  int v16; // eax
  int v17; // ecx
  __int64 v18; // r13
  KIRQL v19; // al
  KIRQL v20; // r15
  unsigned __int64 v21; // r10
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  ULONG v26; // edi
  char v27; // al
  int v28; // esi
  volatile LONG *v29; // rcx
  __int64 v31; // rcx
  unsigned __int64 v32; // rbx
  int v33; // esi
  unsigned int v34; // eax
  ULONG v35; // eax
  volatile LONG *v36; // rcx
  ULONG FreePageFileSpaceForward; // eax
  unsigned __int64 v38; // r8
  unsigned int v39; // eax
  unsigned __int64 v40; // rcx
  __int64 j; // rcx
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r9
  _DWORD *v48; // r8
  int v49; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v53; // eax
  int v54; // [rsp+30h] [rbp-50h] BYREF
  int v55; // [rsp+34h] [rbp-4Ch]
  int v56; // [rsp+38h] [rbp-48h]
  __int128 v57; // [rsp+40h] [rbp-40h]
  __int128 v58; // [rsp+50h] [rbp-30h]
  __int128 v59; // [rsp+60h] [rbp-20h]
  __int64 v60; // [rsp+70h] [rbp-10h]
  unsigned __int64 *v61; // [rsp+C8h] [rbp+48h]
  char v63; // [rsp+D8h] [rbp+58h]

  v63 = a4;
  v61 = (unsigned __int64 *)a2;
  v60 = 0LL;
  v4 = a4;
  v5 = (unsigned __int64 *)a2;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  if ( a3 < 0xFFFFFFFF )
  {
    LODWORD(v7) = -1;
    if ( (a4 & 0x10) != 0 )
      goto LABEL_3;
    v8 = *(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a2) >> 4) + 6944);
    if ( (a4 & 0x65) == 1
      && (unsigned int)MiPageFileLargestBitmapsRun(*(_QWORD *)(a1
                                                             + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a2) >> 4)
                                                             + 6944)) < a3 )
    {
      v4 |= 0x10u;
      v63 = v4;
    }
    else
    {
      v32 = *v5;
      if ( qword_140C4DF80 && (v32 & 0x10) == 0 )
        v32 &= ~qword_140C4DF80;
      v7 = HIDWORD(v32);
    }
    if ( (v4 & 0x10) != 0 )
    {
LABEL_3:
      v8 = *(_QWORD *)(a1 + 6944);
      v9 = MiPageFileLargestBitmapsRun(v8);
      v10 = *(_DWORD *)(a1 + 6936);
      v11 = v9;
      if ( v10 > 1 )
      {
        v12 = (__int64 *)(a1 + 6952);
        for ( i = v10 - 1; i; --i )
        {
          v14 = *(_WORD *)(v8 + 204);
          v15 = *v12;
          if ( (v14 & 0x10) != 0 && (*(_BYTE *)(v15 + 204) & 0x10) == 0
            || (v14 & 0x20) != 0 && (*(_BYTE *)(v15 + 204) & 0x20) == 0 )
          {
            v8 = *v12;
            v39 = MiPageFileLargestBitmapsRun(*v12);
          }
          else
          {
            if ( (*(_WORD *)(v15 + 204) & 0x30) != 0 )
              goto LABEL_8;
            v39 = MiPageFileLargestBitmapsRun(*v12);
            if ( v39 <= v11 )
              goto LABEL_8;
            v8 = v15;
          }
          v11 = v39;
LABEL_8:
          ++v12;
        }
      }
      v4 = v63;
    }
    v16 = 0;
    v54 = 0;
    v17 = v4 & 4;
    v56 = v17;
    while ( 1 )
    {
      v18 = 0LL;
      v55 = 0;
      if ( v17 )
      {
        v20 = 0;
      }
      else
      {
        if ( (v4 & 1) != 0 || v16 )
        {
          v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 232));
        }
        else
        {
          v55 = 1;
          v19 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v8 + 232));
        }
        v20 = v19;
      }
      if ( (*(_BYTE *)(v8 + 207) & 1) != 0 )
      {
LABEL_88:
        if ( !v56 )
        {
          v36 = (volatile LONG *)(v8 + 232);
          if ( v55 )
            ExReleaseSpinLockSharedFromDpcLevel(v36);
          else
            ExReleaseSpinLockExclusiveFromDpcLevel(v36);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && v20 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v53 = ~(unsigned __int16)(-1LL << (v20 + 1));
                v22 = (v53 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v53;
                if ( v22 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v20);
        }
        return 0LL;
      }
      if ( (_DWORD)v7 == -1 )
        goto LABEL_17;
      a2 = *(_QWORD *)(v8 + 112);
      if ( (unsigned int)v7 >= *(_DWORD *)(a2 + 24) )
      {
        if ( (v4 & 0x48) == 0 )
        {
LABEL_17:
          v21 = a3;
          goto LABEL_18;
        }
        goto LABEL_88;
      }
      if ( _bittest64(*(const signed __int64 **)(a2 + 32), (unsigned int)v7)
        || _bittest64(*(const signed __int64 **)(a2 + 16), (unsigned int)v7) )
      {
        v21 = a3;
        v26 = 0;
        v33 = v4 & 0x40;
      }
      else
      {
        v34 = RtlLengthCurrentClearRunForward(a2 + 24, v7, a3);
        v21 = a3;
        v33 = v4 & 0x40;
        if ( v34 != (_DWORD)a3 && !v33
          || (v35 = RtlLengthCurrentClearRunForward(*(_QWORD *)(v8 + 112) + 8LL, v7, v34),
              v21 = a3,
              v26 = v35,
              v35 != (_DWORD)a3)
          && !v33 )
        {
          v26 = 0;
        }
      }
      if ( v26 == v21 || v33 )
      {
        v54 = v7;
        goto LABEL_42;
      }
      v4 = v63;
LABEL_18:
      while ( 2 )
      {
        if ( (v4 & 8) != 0 )
        {
          v54 = v7;
          FreePageFileSpaceForward = MiFindFreePageFileSpaceForward((int *)v8, &v54, v21, v4);
          LODWORD(v7) = v54;
          v26 = FreePageFileSpaceForward;
          goto LABEL_42;
        }
        LODWORD(v60) = 0;
        v22 = (*(_BYTE *)(v8 + 152) & 1) == 0;
        v23 = *(_QWORD *)(v8 + 144);
        HIDWORD(v60) = v21;
        if ( !v22 && v23 )
          v23 ^= v8 + 144;
        v18 = 0LL;
        while ( 1 )
        {
          if ( !v23 )
            goto LABEL_40;
          if ( (unsigned int)v21 < *(_DWORD *)(v23 + 52) )
            goto LABEL_55;
          if ( (unsigned int)v21 <= *(_DWORD *)(v23 + 52) )
            break;
          v31 = *(_QWORD *)(v23 + 8);
LABEL_56:
          if ( (*(_BYTE *)(v8 + 152) & 1) != 0 && v31 )
            v23 ^= v31;
          else
            v23 = v31;
        }
        if ( *(_DWORD *)(v23 + 48) )
        {
LABEL_55:
          v31 = *(_QWORD *)v23;
          v18 = v23;
          goto LABEL_56;
        }
        v24 = *(_QWORD *)v23;
        v18 = v23;
        if ( (*(_BYTE *)(v8 + 152) & 1) != 0 && v24 )
          v24 ^= v23;
        a2 = 0LL;
        if ( v24 )
        {
          while ( 1 )
          {
            if ( (unsigned int)v21 < *(_DWORD *)(v24 + 52) )
              goto LABEL_34;
            if ( (unsigned int)v21 <= *(_DWORD *)(v24 + 52) )
              break;
            v25 = *(_QWORD *)(v24 + 8);
LABEL_35:
            if ( (*(_BYTE *)(v8 + 152) & 1) != 0 && v25 )
              v24 ^= v25;
            else
              v24 = v25;
            if ( !v24 )
            {
              if ( a2 )
                v18 = a2;
              goto LABEL_40;
            }
          }
          if ( !*(_DWORD *)(v24 + 48) )
            a2 = v24;
LABEL_34:
          v25 = *(_QWORD *)v24;
          goto LABEL_35;
        }
LABEL_40:
        if ( *(_DWORD *)(v18 + 52) != -1 )
          goto LABEL_41;
        v38 = *(unsigned int *)(v8 + 140);
        if ( v38 < v21 || (unsigned int)v38 < 0x20 )
        {
          if ( v4 < 0 )
            goto LABEL_88;
          v40 = *(_QWORD *)v18;
          a2 = v18;
          if ( *(_QWORD *)v18 )
          {
            for ( ; *(_QWORD *)(v40 + 8); v40 = *(_QWORD *)(v40 + 8) )
              ;
          }
          else
          {
            for ( j = *(_QWORD *)(v18 + 16); ; j = *(_QWORD *)(v40 + 16) )
            {
              v40 = j & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !v40 || *(_QWORD *)(v40 + 8) == a2 )
                break;
              a2 = v40;
            }
          }
          if ( !v40 )
          {
            if ( (unsigned int)v38 < 0x20 )
              goto LABEL_88;
            goto LABEL_101;
          }
          v18 = v40;
          if ( (unsigned int)v38 > *(_DWORD *)(v40 + 52) && (unsigned int)v38 >= 0x20 )
            goto LABEL_101;
          LODWORD(v21) = *(_DWORD *)(v40 + 52);
LABEL_41:
          LODWORD(v7) = *(_DWORD *)(v18 + 48);
          v26 = v21;
          v54 = v7;
LABEL_42:
          if ( v26 )
          {
            v27 = v63;
            v28 = 0;
            if ( (v63 & 1) != 0 )
            {
              v28 = 2;
              RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(v8 + 112) + 24LL), v7, v26);
              *(_QWORD *)(v8 + 48) -= v26;
              v27 = v63;
            }
            if ( (v27 & 2) != 0 )
            {
              v28 |= 1u;
              MiSetPageFileAllocationBits(v8, v7, v26);
            }
            if ( v28 )
              MiInvalidatePageFileBitmapsCache(v8, (unsigned int)v7, v26, v18);
            if ( !v56 )
            {
              v29 = (volatile LONG *)(v8 + 232);
              if ( v55 )
                ExReleaseSpinLockSharedFromDpcLevel(v29);
              else
                ExReleaseSpinLockExclusiveFromDpcLevel(v29);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v46 = KeGetCurrentIrql();
                  if ( v46 <= 0xFu && v20 <= 0xFu && v46 >= 2u )
                  {
                    v47 = KeGetCurrentPrcb();
                    v48 = v47->SchedulerAssist;
                    v49 = ~(unsigned __int16)(-1LL << (v20 + 1));
                    v22 = (v49 & v48[5]) == 0;
                    v48[5] &= v49;
                    if ( v22 )
                      KiRemoveSystemWorkPriorityKick(v47);
                    LODWORD(v7) = v54;
                  }
                }
              }
              __writecr8(v20);
            }
            *v61 = MiTransferSoftwarePte(*v61, v8, v7);
            return v26;
          }
          goto LABEL_88;
        }
LABEL_101:
        if ( !v55 )
        {
          MiRescanPagefileBitmaps(v8, a2);
          v21 = a3;
          continue;
        }
        break;
      }
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v8 + 232));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v42 = KeGetCurrentIrql();
          if ( v42 <= 0xFu && v20 <= 0xFu && v42 >= 2u )
          {
            v43 = KeGetCurrentPrcb();
            a2 = -1LL << (v20 + 1);
            v44 = v43->SchedulerAssist;
            v45 = ~(unsigned __int16)a2;
            v22 = (v45 & v44[5]) == 0;
            v44[5] &= v45;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(v43);
          }
        }
      }
      __writecr8(v20);
      v17 = v56;
      v16 = 1;
    }
  }
  return 0LL;
}
