/*
 * XREFs of MiProbeAndLockPrepare @ 0x14024EE20
 * Callers:
 *     MiProbeAndLockPages @ 0x14024D8E0 (MiProbeAndLockPages.c)
 *     MmStoreProbeAndLockPages @ 0x14031656C (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140345870 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14020E520 (MiObtainReferencedVadEx.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockAndDereferenceVad @ 0x1402AD420 (MiUnlockAndDereferenceVad.c)
 *     MiVadPureReserve @ 0x1402ADBF0 (MiVadPureReserve.c)
 *     MiGetSystemCacheReverseMap @ 0x1402BE040 (MiGetSystemCacheReverseMap.c)
 *     MiGetSessionVm @ 0x1402BE22C (MiGetSessionVm.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140329910 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B06F4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x140696FE0 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiProbeAndLockPrepare(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        int a7)
{
  __int64 v8; // r8
  unsigned __int64 v10; // rdi
  __int64 v11; // r14
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdi
  __int16 v14; // ax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r14
  int v17; // r15d
  __int64 v18; // r10
  int *v19; // rsi
  __int64 *v20; // r12
  char *SessionVm; // rdi
  unsigned int v22; // edx
  unsigned __int8 v23; // al
  LONG *v24; // rdi
  unsigned __int8 v25; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _DWORD *v27; // rcx
  signed __int32 v28; // ett
  unsigned __int8 CurrentIrql; // r9
  int v30; // ecx
  char v31; // al
  __int64 AnyMultiplexedVm; // rax
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned int v36; // edx
  __int64 v37; // rax
  int v38; // edx
  _DWORD *v39; // rcx
  volatile signed __int32 *v40; // rax
  volatile signed __int32 *v41; // r15
  __int64 v42; // rax
  int v43; // ecx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  unsigned int v46; // edi
  __int64 v47; // rax
  int v48; // edx
  __int64 v49; // rdx
  _DWORD *SchedulerAssist; // r8
  _DWORD *v51; // r9
  int v52; // eax
  int v53; // eax
  __int64 *v54; // [rsp+60h] [rbp+8h]
  unsigned int v55; // [rsp+78h] [rbp+20h] BYREF

  v8 = a6;
  v10 = a3 + a4;
  *(_QWORD *)(a1 + 72) = KeGetCurrentThread();
  v55 = 0;
  *(_QWORD *)(a1 + 56) = a2;
  *(_DWORD *)(a1 + 88) = v8;
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = v10;
  if ( a5 && (v10 > 0x7FFFFFFF0000LL || a3 >= v10) )
  {
    ++dword_140C4E578;
    return 3221225477LL;
  }
  v11 = *(unsigned int *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = a2 + 48;
  v12 = ((a3 & 0xFFF) + v11 + 4095) >> 12;
  v13 = v10 - 1;
  *(_QWORD *)(a1 + 16) = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 24) = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 136) = 0xFFFFFFFFFLL;
  v15 = *(unsigned __int16 *)(a2 + 10);
  v14 = v15 | 0x80;
  LOWORD(v15) = v15 & 0xFF7F;
  if ( (_DWORD)v8 )
    LOWORD(v15) = v14;
  LOWORD(v15) = v15 | 2;
  *(_WORD *)(a2 + 10) = v15;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( *(_QWORD *)a1 >= 0x7FFFFFFF0000uLL )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  else
  {
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 184LL);
    *(_QWORD *)(a1 + 80) = v15;
    *(_QWORD *)(a2 + 16) = v15;
    if ( (_DWORD)v8 == 3 )
    {
      v40 = MiObtainReferencedVadEx(*(_QWORD *)a1, 0, (int *)&v55);
      v41 = v40;
      if ( !v40 )
        return v55;
      if ( (unsigned int)MiVadPureReserve(v40)
        || (v42 = *((unsigned int *)v41 + 13),
            LODWORD(v42) = v42 & 0x7FFFFFFF,
            (v42 | ((unsigned __int64)*((unsigned __int8 *)v41 + 34) << 31)) >= 0x7FFFFFFFDLL)
        || (v43 = *((_DWORD *)v41 + 12), (v43 & 0x70) == 0x10)
        || (v43 & 0x100000) == 0 && (v43 & 0x70) != 0x20 )
      {
        MiUnlockAndDereferenceVad((PVOID)v41);
        return 3221225477LL;
      }
      v44 = (*((unsigned int *)v41 + 6) | ((unsigned __int64)*((unsigned __int8 *)v41 + 32) << 32)) << 12;
      if ( a3 < v44
        || (v45 = ((*((unsigned int *)v41 + 7) | ((unsigned __int64)*((unsigned __int8 *)v41 + 33) << 32)) << 12) | 0xFFF,
            a3 > v45)
        || v13 < v44
        || v13 > v45 )
      {
        MiUnlockAndDereferenceVad((PVOID)v41);
        return 3221225496LL;
      }
      v55 = MiChargeFullProcessCommitment(*(_QWORD *)(a1 + 80), v12);
      v46 = v55;
      if ( (v55 & 0x80000000) != 0 )
      {
        MiUnlockAndDereferenceVad((PVOID)v41);
        return v46;
      }
      *(_QWORD *)(a1 + 120) = v41;
      *(_QWORD *)(a1 + 112) = v12;
    }
    if ( a7 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 80) + 1280LL), v12);
  }
  v16 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v16 >= 0xFFFF800000000000uLL )
  {
    v15 = ((v16 >> 39) & 0x1FF) - 256;
    v17 = (unsigned __int8)byte_140C4F7C8[v15];
  }
  else
  {
    v17 = 0;
  }
  v18 = 1LL;
  if ( v16 >= 0x7FFFFFFF0000LL )
  {
    if ( v17 == 1 )
    {
      v19 = (int *)(a1 + 64);
      v49 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 8;
      *(_DWORD *)(a1 + 64) = v49;
      v20 = (__int64 *)(a1 + 96);
      SessionVm = (char *)MiGetSessionVm(v15, v49, v8);
      *(_QWORD *)(a1 + 96) = SessionVm;
      goto LABEL_15;
    }
    if ( v17 == 6 )
    {
      v19 = (int *)(a1 + 64);
      v20 = (__int64 *)(a1 + 96);
      SessionVm = (char *)&unk_140C4F080;
      v22 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 3;
      *(_QWORD *)(a1 + 96) = &unk_140C4F080;
    }
    else
    {
      if ( v17 == 8 )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(0LL);
        v19 = (int *)(a1 + 64);
        v22 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 2;
      }
      else
      {
        if ( v17 != 5 && v17 != 15 )
        {
          v20 = (__int64 *)(a1 + 96);
          v54 = (__int64 *)(a1 + 96);
          v19 = (int *)(a1 + 64);
          if ( v17 == 12 )
          {
            SessionVm = (char *)MiGetAnyMultiplexedVm(1LL);
            v36 = *v19 & 0xFFFFFFF6;
            *v20 = (__int64)SessionVm;
            v22 = v36 | 6;
            *v19 = v22;
            goto LABEL_16;
          }
          v54 = (__int64 *)(a1 + 96);
          if ( v17 == 14 )
          {
            v37 = MiGetAnyMultiplexedVm(4LL);
            *v20 = v37;
            v22 = v38 & 0xFFFFFFF0 | 7;
            SessionVm = (char *)v37;
            *v19 = v22;
            goto LABEL_16;
          }
          v47 = MiGetAnyMultiplexedVm(3LL);
          *v20 = v47;
          v22 = v48 & 0xFFFFFFF0 | 5;
          SessionVm = (char *)v47;
          goto LABEL_14;
        }
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(5LL);
        v19 = (int *)(a1 + 64);
        v22 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 4;
      }
      v20 = (__int64 *)(a1 + 96);
      SessionVm = (char *)AnyMultiplexedVm;
      *(_QWORD *)(a1 + 96) = AnyMultiplexedVm;
    }
  }
  else
  {
    v19 = (int *)(a1 + 64);
    v20 = (__int64 *)(a1 + 96);
    SessionVm = (char *)(*(_QWORD *)(a1 + 80) + 1664LL);
    v22 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 1;
    *(_QWORD *)(a1 + 96) = SessionVm;
  }
LABEL_14:
  *v19 = v22;
LABEL_15:
  v54 = v20;
LABEL_16:
  *v19 = v22 & 0xFFFFFFCF;
  v23 = SessionVm[184] & 7;
  if ( v23 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v18) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= ~((unsigned __int8)(v18 << (CurrentIrql + 1)) - 1) & 4;
    }
  }
  else
  {
    if ( v23 == 2 )
      v24 = &dword_140C4F580;
    else
      v24 = (LONG *)(SessionVm + 192);
    v25 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v18) != 0 && v25 <= 0xFu )
    {
      v51 = KeGetCurrentPrcb()->SchedulerAssist;
      v51[5] |= (-1 << (v25 + 1)) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v24, v25);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v27 = CurrentPrcb->SchedulerAssist;
      if ( v27 )
      {
        if ( CurrentPrcb->NestingLevel <= (unsigned __int8)v18 )
        {
          v52 = v27[6];
          v27[6] = v18 + v52;
          if ( !((_DWORD)v18 + v52) )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v24);
      v28 = *v24 & 0x7FFFFFFF;
      if ( v28 != _InterlockedCompareExchange(v24, v28 + 1, v28) )
      {
        v39 = CurrentPrcb->SchedulerAssist;
        if ( v39 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v53 = v39[6] - 1;
            v39[6] = v53;
            if ( !v53 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v24, v25);
      }
    }
    if ( v24[1] )
      _InterlockedExchange(v24 + 1, 0);
    CurrentIrql = v25;
    v20 = v54;
  }
  v30 = *v19;
  v31 = *v19 & 0xF;
  *(_BYTE *)(a1 + 68) = CurrentIrql;
  if ( v31 == 1 && *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1264LL) )
    *v19 = v30 | 0x10;
  if ( v17 == 8 )
  {
    v34 = *(_QWORD *)(MiGetSystemCacheReverseMap(v16) + 24);
    v35 = v34 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v34 & 1) == 0 )
      v35 = v34;
    *v20 = *(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(*(_QWORD *)v35 + 60LL) & 0x3FF)) + 7232LL;
  }
  return 0LL;
}
