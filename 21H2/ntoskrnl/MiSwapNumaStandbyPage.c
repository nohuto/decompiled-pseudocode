/*
 * XREFs of MiSwapNumaStandbyPage @ 0x1405B4024
 * Callers:
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x14045C812 (MiPruneStandbyPages.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiCanPageMove @ 0x140277C9C (MiCanPageMove.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiIsDecayPfn @ 0x1402C1520 (MiIsDecayPfn.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402CC7C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFinalizePageAttribute @ 0x1402E5708 (MiFinalizePageAttribute.c)
 *     MiUpdateTransitionPteFrame @ 0x1402E7D14 (MiUpdateTransitionPteFrame.c)
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     MiCopyPfnEntryEx @ 0x1402E8154 (MiCopyPfnEntryEx.c)
 *     MiGetPfnChannel @ 0x1402E8990 (MiGetPfnChannel.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReplaceStandbyLookaside @ 0x1402E8AA0 (MiReplaceStandbyLookaside.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSetPfnBlink @ 0x140313CA0 (MiSetPfnBlink.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiSetPfnIdentity @ 0x14033C300 (MiSetPfnIdentity.c)
 *     MiSetPfnTbFlushStamp @ 0x14033C33C (MiSetPfnTbFlushStamp.c)
 *     MiSetPfnPteFrame @ 0x14033C3E0 (MiSetPfnPteFrame.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14036C428 (KeMakeKernelDirectoryTableBase.c)
 *     MiUnlinkNumaStandbyPage @ 0x1403AC4E0 (MiUnlinkNumaStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiInsertNumaStandbyPage @ 0x1405B3384 (MiInsertNumaStandbyPage.c)
 *     MiReuseStandbyPage @ 0x1405B3FA4 (MiReuseStandbyPage.c)
 */

ULONG_PTR __fastcall MiSwapNumaStandbyPage(ULONG_PTR a1, unsigned int a2, int a3, char a4)
{
  __int64 v5; // rbp
  ULONG_PTR v7; // r15
  unsigned int v8; // ecx
  __m128i *v9; // rbp
  int v10; // r12d
  __int64 v11; // r14
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r10
  unsigned __int8 *v15; // rax
  PEX_SPIN_LOCK v16; // r14
  int v17; // edx
  unsigned __int8 *v18; // r8
  volatile LONG *v19; // rcx
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rax
  _QWORD *v22; // r12
  volatile LONG *v23; // rdi
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  ULONG_PTR v26; // r12
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v29; // r9
  int v30; // eax
  bool v31; // zf
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r9
  _DWORD *v42; // r8
  int v43; // eax
  __int64 v44; // r10
  __int64 v45; // r11
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r9
  _DWORD *v48; // r8
  int v49; // eax
  ULONG_PTR v51; // r9
  unsigned __int64 v52; // rdx
  volatile signed __int32 *v53; // r8
  unsigned int v54; // eax
  unsigned __int64 v55; // rcx
  __int64 v56; // r9
  ULONG_PTR v57; // rcx
  __int64 v58; // rdx
  _QWORD *v59; // r8
  ULONG_PTR v60; // r9
  __int64 updated; // rax
  __int64 v62; // r8
  BOOL IsDecayPfn; // eax
  __int64 v64; // r10
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rbx
  _QWORD *v69; // r14
  __int64 v70; // rax
  __int64 v71; // rbx
  int v72; // eax
  char v73; // bl
  char v74; // al
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // rax
  _DWORD *v77; // r9
  int v78; // edx
  signed __int32 v79[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v80; // [rsp+20h] [rbp-88h]
  PEX_SPIN_LOCK SpinLock; // [rsp+28h] [rbp-80h]
  unsigned __int8 *v82; // [rsp+30h] [rbp-78h]
  int v83; // [rsp+38h] [rbp-70h]
  _QWORD *v84; // [rsp+40h] [rbp-68h]
  unsigned __int64 v85; // [rsp+48h] [rbp-60h]
  __int64 v86; // [rsp+50h] [rbp-58h]
  int v87; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int8 *v88; // [rsp+60h] [rbp-48h]
  PEX_SPIN_LOCK v89; // [rsp+68h] [rbp-40h]
  int v90; // [rsp+B0h] [rbp+8h]
  __int64 v91; // [rsp+B0h] [rbp+8h]
  int v92; // [rsp+B8h] [rbp+10h]

  v5 = 48 * a1;
  v7 = a1;
  v8 = MmNumberOfChannels;
  v9 = (__m128i *)(v5 - 0x220000000000LL);
  v10 = 0;
  v11 = 24512LL * a2;
  v12 = 0;
  v92 = 0;
  v13 = ((unsigned __int64)v9[2].m128i_i64[1] >> 43) & 0x3FF;
  v90 = 0;
  v80 = MmNumberOfChannels;
  v14 = *(_QWORD *)(qword_140C51F48 + 8 * v13);
  v15 = 0LL;
  v86 = v14;
  v82 = 0LL;
  v16 = (PEX_SPIN_LOCK)(*(_QWORD *)(v14 + 16) + v11);
  v89 = v16;
  v17 = v16[5696] & 1;
  v83 = v17;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v15 = (unsigned __int8 *)v16 + 22817;
    v82 = (unsigned __int8 *)v16 + 22817;
    if ( v17 )
    {
      if ( (a4 & 0x20) != 0 )
      {
        v8 = 1;
        v92 = a3;
        v80 = 1;
        v10 = a3;
        v15 = 0LL;
      }
      else
      {
        if ( (a4 & 8) == 0 )
          goto LABEL_10;
        v15 = (unsigned __int8 *)v16 + 22821;
      }
      v82 = v15;
    }
    else
    {
      if ( *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)v9[0x22000000000LL].m128i_i64 >> 4)) + 2) == a2 )
        return v7;
      v15 = v82;
      v12 = a3;
      v8 = v80;
      v17 = v83;
      v14 = v86;
      v90 = a3;
    }
  }
LABEL_10:
  v18 = &v15[v8];
  v88 = v18;
  while ( 1 )
  {
    if ( v15 )
    {
      if ( v17 )
      {
        v10 = *v15;
        v92 = v10;
        if ( *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)v9[0x22000000000LL].m128i_i64 >> 4)) + 2) == a2
          && v10 == (unsigned int)MiGetPfnChannel((__int64)v9) )
        {
          return v7;
        }
        v14 = v86;
        v18 = v88;
      }
      else
      {
        v92 = v12;
        v10 = v12;
        v12 = v12 + 1 < v8 ? v12 + 1 : 0;
        v90 = v12;
      }
    }
    v85 = v14 + 3584;
    v19 = &v16[176 * v10];
    v20 = v14 + 2880;
    if ( v14 + 2880 < (unsigned __int64)(v14 + 3584) )
      break;
LABEL_51:
    v15 = v82 + 1;
    v82 = v15;
    if ( v15 >= v18 )
      return v7;
    v16 = v89;
    v8 = v80;
    v17 = v83;
  }
  v21 = v85;
  v22 = v19 + 818;
  v23 = (volatile LONG *)(v14 + 2912);
  v84 = v19 + 818;
  SpinLock = (PEX_SPIN_LOCK)(v14 + 2912);
  while ( *v22 == 0x3FFFFFFFFFLL )
  {
LABEL_49:
    v23 += 22;
    v22 += 11;
    v20 += 88LL;
    SpinLock = v23;
    v84 = v22;
    if ( v20 >= v21 )
    {
      v12 = v90;
      v10 = v92;
      v18 = v88;
      v14 = v86;
      goto LABEL_51;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(v23);
  v26 = *v22;
  if ( v26 == 0x3FFFFFFFFFLL )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v23);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v29 = CurrentPrcb->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v31 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    v22 = v84;
LABEL_48:
    __writecr8(CurrentIrql);
    v21 = v85;
    goto LABEL_49;
  }
  v32 = 48 * v26 - 0x220000000000LL;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
    goto LABEL_53;
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  v87 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v87, v33, v34, v35);
    while ( *(__int64 *)(v32 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v32 + 34) & 7) != 2 )
  {
LABEL_40:
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v36 = KeGetCurrentIrql();
        if ( v36 <= 0xFu && CurrentIrql <= 0xFu && v36 >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          v38 = v37->SchedulerAssist;
          v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v31 = (v39 & v38[5]) == 0;
          v38[5] &= v39;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick((__int64)v37);
        }
      }
    }
    v20 -= 88LL;
    v23 = SpinLock - 22;
    v22 = v84 - 11;
    goto LABEL_48;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
  if ( v26 != *v84 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    goto LABEL_40;
  }
LABEL_53:
  if ( _interlockedbittestandset64(&v9[1].m128i_i32[2], 0x3FuLL) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v20 + 32));
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v40 = KeGetCurrentIrql();
        if ( v40 <= 0xFu && CurrentIrql <= 0xFu && v40 >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          v43 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v31 = (v43 & v42[5]) == 0;
          v42[5] &= v43;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick((__int64)v41);
        }
      }
    }
    goto LABEL_70;
  }
  if ( MiCanPageMove(48 * v26 - 0x220000000000LL) )
  {
    if ( dword_140C529CC != 1 )
      goto LABEL_82;
    v51 = v26 & 0x1F;
    LOBYTE(v52) = 1;
    v53 = (volatile signed __int32 *)(qword_140C52A28 + 4 * (v26 >> 5));
    if ( v51 + 1 > 0x20 )
    {
      if ( (v26 & 0x1F) != 0 )
      {
        _InterlockedOr(v53++, ((1 << (32 - (v26 & 0x1F))) - 1) << v51);
        v52 = 1LL - (32 - (unsigned int)(v26 & 0x1F));
        if ( v52 >= 0x20 )
        {
          v55 = v52 >> 5;
          v52 += -32LL * (v52 >> 5);
          do
          {
            *v53++ = -1;
            --v55;
          }
          while ( v55 );
        }
        if ( !v52 )
        {
LABEL_82:
          v56 = *(_QWORD *)v32 & 0xFFFFFFFFFFLL;
          v57 = *(_QWORD *)(v32 + 24) & 0xFFFFFFFFFFLL;
          if ( (*(_BYTE *)(v32 + 35) & 8) != 0 )
          {
            if ( MiIsDecayPfn(v57) )
            {
              updated = MiUpdateTransitionPteFrame(v59[2], v7);
              *(_QWORD *)(v62 + 16) = updated;
            }
            else
            {
              *v59 ^= v58 & (v7 ^ *v59);
            }
            IsDecayPfn = MiIsDecayPfn(v60);
            v65 = v7;
            v66 = v64;
            if ( IsDecayPfn )
            {
              MiSetPfnPteFrame(v64, v7);
              goto LABEL_95;
            }
          }
          else
          {
            if ( v57 == v44 )
              *(_QWORD *)(v20 + 16) = v7;
            else
              *(_QWORD *)(v45 + 48 * v57) ^= (v7 ^ *(_QWORD *)(v45 + 48 * v57)) & 0xFFFFFFFFFFLL;
            if ( v56 == v44 )
            {
              *(_QWORD *)(v20 + 24) = v7;
LABEL_95:
              MiUnlinkNumaStandbyPage(48 * v26 - 0x220000000000LL);
              MiFinalizePageAttribute((__int64)v9, *(unsigned __int8 *)(v32 + 34) >> 6, 1u);
              MiReplaceStandbyLookaside(v26, -1LL, 0);
              MiCopyPfnEntryEx(v9, (__m128i *)(48 * v26 - 0x220000000000LL));
              MiInsertNumaStandbyPage((__int64)v9, 0LL);
              _InterlockedOr(v79, 0);
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ ((unsigned __int64)v9[1].m128i_i64[1] >> 59)) & 7) != 0 )
                MiSetPfnTbFlushStamp((__int64)v9, KiTbFlushTimeStamp, 1);
              v89 = (PEX_SPIN_LOCK)(v20 + 32);
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v20 + 32));
              v67 = *(_QWORD *)(v32 + 40) & 0xFFFFFFFFFFLL;
              v91 = v67;
              if ( v67 == v26 )
              {
                v68 = *(_QWORD *)(v32 + 8);
                MiSetPfnPteFrame((__int64)v9, v7);
                *(_QWORD *)((v68 | 0x8000000000000000uLL) - 1392) = KeMakeKernelDirectoryTableBase(v7 << 12);
                v69 = (_QWORD *)(*(_QWORD *)(v32 + 8) | 0x8000000000000000uLL);
              }
              else
              {
                v69 = (_QWORD *)(MiMapPageInHyperSpaceWorker(v67, 0LL, 0x80000000)
                               + 8LL * ((*(_DWORD *)(v32 + 8) >> 3) & 0x1FF));
              }
              v70 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v69);
              v71 = MiUpdateTransitionPteFrame(v70, v7);
              if ( MiPteInShadowRange((unsigned __int64)v69) )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  v72 = 1;
                  if ( !HIBYTE(word_140C51864) && (v71 & 1) != 0 )
                    v71 |= 0x8000000000000000uLL;
                  goto LABEL_109;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (v71 & 1) != 0 )
                {
                  v71 |= 0x8000000000000000uLL;
                }
              }
              v72 = 0;
LABEL_109:
              *v69 = v71;
              if ( v72 )
                MiWritePteShadow((__int64)v69, v71);
              if ( v91 != v26 )
                MiUnmapPageInHyperSpaceWorker((unsigned __int64)v69, 0x11u);
              MiCopyPage(v7, v26, 0LL, 6);
              _InterlockedOr(v79, 0);
              v73 = KiTbFlushTimeStamp;
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ ((unsigned __int64)v9[1].m128i_i64[1] >> 59)) & 7) != 0 )
              {
                ExAcquireSpinLockExclusiveAtDpcLevel(v89);
                MiSetPfnTbFlushStamp((__int64)v9, v73, 1);
                ExReleaseSpinLockExclusiveFromDpcLevel(v89);
              }
              _InterlockedAnd64(&v9[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
              v74 = *(_BYTE *)(v32 + 34);
              *(_QWORD *)(v32 + 40) &= ~0x8000000000000000uLL;
              *(_BYTE *)(v32 + 34) = v74 & 0xC7;
              *(_BYTE *)(v32 + 35) &= ~0x20u;
              _InterlockedOr(v79, 0);
              MiSetPfnTbFlushStamp(48 * v26 - 0x220000000000LL, KiTbFlushTimeStamp, 1);
              *(_QWORD *)v32 = 0LL;
              MiSetPfnBlink(48 * v26 - 0x220000000000LL, 0LL, 1);
              *(_BYTE *)(v32 + 34) = *(_BYTE *)(v32 + 34) & 0xF8 | 5;
              *(_QWORD *)(v32 + 16) = ZeroPte;
              MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v32 + 16));
              *(_BYTE *)(v32 + 35) &= ~8u;
              MiSetPfnIdentity(48 * v26 - 0x220000000000LL, 0);
              *(_BYTE *)(v32 + 35) &= 0xF8u;
              _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v75 = KeGetCurrentIrql();
                  if ( v75 <= 0xFu && CurrentIrql <= 0xFu && v75 >= 2u )
                  {
                    v76 = KeGetCurrentPrcb();
                    v77 = v76->SchedulerAssist;
                    v78 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                    v31 = (v78 & v77[5]) == 0;
                    v77[5] &= v78;
                    if ( v31 )
                      KiRemoveSystemWorkPriorityKick((__int64)v76);
                  }
                }
              }
              __writecr8(CurrentIrql);
              return v26;
            }
            v66 = v45 + 48 * v56;
            v65 = v7;
          }
          MiSetPfnBlink(v66, v65, 0);
          goto LABEL_95;
        }
      }
      v54 = (1 << v52) - 1;
    }
    else
    {
      v54 = 1 << v51;
    }
    _InterlockedOr(v53, v54);
    goto LABEL_82;
  }
  _InterlockedAnd64(&v9[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v20 + 32));
  MiReuseStandbyPage(48 * v26 - 0x220000000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiReleaseFreshPage((__int64)v9);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v46 = KeGetCurrentIrql();
      if ( v46 <= 0xFu && CurrentIrql <= 0xFu && v46 >= 2u )
      {
        v47 = KeGetCurrentPrcb();
        v48 = v47->SchedulerAssist;
        v49 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v31 = (v49 & v48[5]) == 0;
        v48[5] &= v49;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick((__int64)v47);
      }
    }
  }
  v7 = v26;
LABEL_70:
  __writecr8(CurrentIrql);
  return v7;
}
