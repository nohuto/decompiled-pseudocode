/*
 * XREFs of MiProbeAndLockPrepare @ 0x1402AEBF0
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140235640 (MmProbeAndLockSelectedPages.c)
 *     MmStoreProbeAndLockPages @ 0x140235900 (MmStoreProbeAndLockPages.c)
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140213930 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     MiVadPureReserve @ 0x1402C0290 (MiVadPureReserve.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiGetSystemCacheReverseMap @ 0x14031CD00 (MiGetSystemCacheReverseMap.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5E94 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x1406E8830 (MiChargeFullProcessCommitment.c)
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
  __int64 v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r14
  int v18; // r15d
  __int64 v19; // r10
  int *v20; // rsi
  __int64 *v21; // r12
  char *SessionVm; // rdi
  unsigned int v23; // edx
  unsigned __int8 v24; // al
  LONG *v25; // rdi
  unsigned __int8 v26; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _DWORD *v28; // rcx
  signed __int32 v29; // ett
  unsigned __int8 CurrentIrql; // r9
  int v31; // ecx
  char v32; // al
  __int64 AnyMultiplexedVm; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned int v37; // edx
  __int64 v38; // rax
  int v39; // edx
  _DWORD *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r15
  __int64 v45; // rax
  int v46; // ecx
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  unsigned int v49; // edi
  __int64 v50; // rax
  int v51; // edx
  __int64 v52; // rdx
  _DWORD *SchedulerAssist; // r8
  int v54; // eax
  int v55; // eax
  __int64 *v56; // [rsp+60h] [rbp+8h]
  int v57; // [rsp+78h] [rbp+20h] BYREF

  v8 = a6;
  v10 = a3 + a4;
  *(_QWORD *)(a1 + 72) = KeGetCurrentThread();
  v57 = 0;
  *(_QWORD *)(a1 + 56) = a2;
  *(_DWORD *)(a1 + 88) = v8;
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = v10;
  if ( a5 && (v10 > 0x7FFFFFFF0000LL || a3 >= v10) )
  {
    ++dword_140C4E7B8;
    return 3221225477LL;
  }
  v11 = *(unsigned int *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = a2 + 48;
  v12 = ((a3 & 0xFFF) + v11 + 4095) >> 12;
  v13 = v10 - 1;
  *(_QWORD *)(a1 + 16) = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 24) = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 136) = 0xFFFFFFFFFLL;
  v16 = *(unsigned __int16 *)(a2 + 10);
  v14 = v16 | 0x80;
  v15 = 4294967167LL;
  LOWORD(v16) = v16 & 0xFF7F;
  if ( (_DWORD)v8 )
    LOWORD(v16) = v14;
  LOWORD(v16) = v16 | 2;
  *(_WORD *)(a2 + 10) = v16;
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
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 184LL);
    *(_QWORD *)(a1 + 80) = v16;
    *(_QWORD *)(a2 + 16) = v16;
    if ( (_DWORD)v8 == 3 )
    {
      v41 = MiObtainReferencedVadEx(*(_QWORD *)a1, 0LL, &v57);
      v44 = v41;
      if ( !v41 )
        return (unsigned int)v57;
      if ( (unsigned int)MiVadPureReserve(v41, v42, v43)
        || (v45 = *(unsigned int *)(v44 + 52),
            LODWORD(v45) = v45 & 0x7FFFFFFF,
            (v45 | ((unsigned __int64)*(unsigned __int8 *)(v44 + 34) << 31)) >= 0x7FFFFFFFDLL)
        || (v46 = *(_DWORD *)(v44 + 48), (v46 & 0x70) == 0x10)
        || (v46 & 0x100000) == 0 && (v46 & 0x70) != 0x20 )
      {
        MiUnlockAndDereferenceVad((PVOID)v44);
        return 3221225477LL;
      }
      v47 = (*(unsigned int *)(v44 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v44 + 32) << 32)) << 12;
      if ( a3 < v47
        || (v48 = ((*(unsigned int *)(v44 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v44 + 33) << 32)) << 12) | 0xFFF,
            a3 > v48)
        || v13 < v47
        || v13 > v48 )
      {
        MiUnlockAndDereferenceVad((PVOID)v44);
        return 3221225496LL;
      }
      v57 = MiChargeFullProcessCommitment(*(_QWORD *)(a1 + 80), v12);
      v49 = v57;
      if ( v57 < 0 )
      {
        MiUnlockAndDereferenceVad((PVOID)v44);
        return v49;
      }
      *(_QWORD *)(a1 + 120) = v44;
      *(_QWORD *)(a1 + 112) = v12;
    }
    if ( a7 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 80) + 1280LL), v12);
  }
  v17 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v17 >= 0xFFFF800000000000uLL )
  {
    v16 = ((v17 >> 39) & 0x1FF) - 256;
    v18 = (unsigned __int8)byte_140C4FA08[v16];
  }
  else
  {
    v18 = 0;
  }
  v19 = 1LL;
  if ( v17 >= 0x7FFFFFFF0000LL )
  {
    if ( v18 == 1 )
    {
      v20 = (int *)(a1 + 64);
      v52 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 8;
      *(_DWORD *)(a1 + 64) = v52;
      v21 = (__int64 *)(a1 + 96);
      SessionVm = (char *)MiGetSessionVm(v16, v52, v8);
      *(_QWORD *)(a1 + 96) = SessionVm;
      goto LABEL_15;
    }
    if ( v18 == 6 )
    {
      v20 = (int *)(a1 + 64);
      v21 = (__int64 *)(a1 + 96);
      SessionVm = (char *)&unk_140C4F2C0;
      v23 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 3;
      *(_QWORD *)(a1 + 96) = &unk_140C4F2C0;
    }
    else
    {
      if ( v18 == 8 )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(0LL);
        v20 = (int *)(a1 + 64);
        v23 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 2;
      }
      else
      {
        if ( v18 != 5 && v18 != 15 )
        {
          v21 = (__int64 *)(a1 + 96);
          v56 = (__int64 *)(a1 + 96);
          v20 = (int *)(a1 + 64);
          if ( v18 == 12 )
          {
            SessionVm = (char *)MiGetAnyMultiplexedVm(1LL);
            v37 = *v20 & 0xFFFFFFF6;
            *v21 = (__int64)SessionVm;
            v23 = v37 | 6;
            *v20 = v23;
            goto LABEL_16;
          }
          v56 = (__int64 *)(a1 + 96);
          if ( v18 == 14 )
          {
            v38 = MiGetAnyMultiplexedVm(4LL);
            *v21 = v38;
            v23 = v39 & 0xFFFFFFF0 | 7;
            SessionVm = (char *)v38;
            *v20 = v23;
            goto LABEL_16;
          }
          v50 = MiGetAnyMultiplexedVm(3LL);
          *v21 = v50;
          v23 = v51 & 0xFFFFFFF0 | 5;
          SessionVm = (char *)v50;
          goto LABEL_14;
        }
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(5LL);
        v20 = (int *)(a1 + 64);
        v23 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 4;
      }
      v21 = (__int64 *)(a1 + 96);
      SessionVm = (char *)AnyMultiplexedVm;
      *(_QWORD *)(a1 + 96) = AnyMultiplexedVm;
    }
  }
  else
  {
    v20 = (int *)(a1 + 64);
    v21 = (__int64 *)(a1 + 96);
    SessionVm = (char *)(*(_QWORD *)(a1 + 80) + 1664LL);
    v23 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 1;
    *(_QWORD *)(a1 + 96) = SessionVm;
  }
LABEL_14:
  *v20 = v23;
LABEL_15:
  v56 = v21;
LABEL_16:
  *v20 = v23 & 0xFFFFFFCF;
  v24 = SessionVm[184] & 7;
  if ( v24 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v19) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= ~((unsigned __int8)(v19 << (CurrentIrql + 1)) - 1) & 4;
    }
  }
  else
  {
    if ( v24 == 2 )
      v25 = &dword_140C4F7C0;
    else
      v25 = (LONG *)(SessionVm + 192);
    v26 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v19) != 0 && v26 <= 0xFu )
    {
      v15 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
      v8 = (-1 << (v26 + 1)) & 4u | *(_DWORD *)(v15 + 20);
      *(_DWORD *)(v15 + 20) = v8;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v25, v26, v8, v15);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v28 = CurrentPrcb->SchedulerAssist;
      if ( v28 )
      {
        if ( CurrentPrcb->NestingLevel <= (unsigned __int8)v19 )
        {
          v54 = v28[6];
          v28[6] = v19 + v54;
          if ( !((_DWORD)v19 + v54) )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v25);
      v29 = *v25 & 0x7FFFFFFF;
      if ( v29 != _InterlockedCompareExchange(v25, v29 + 1, v29) )
      {
        v40 = CurrentPrcb->SchedulerAssist;
        if ( v40 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v55 = v40[6] - 1;
            v40[6] = v55;
            if ( !v55 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v25, v26);
      }
    }
    if ( v25[1] )
      _InterlockedExchange(v25 + 1, 0);
    CurrentIrql = v26;
    v21 = v56;
  }
  v31 = *v20;
  v32 = *v20 & 0xF;
  *(_BYTE *)(a1 + 68) = CurrentIrql;
  if ( v32 == 1 && *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1264LL) )
    *v20 = v31 | 0x10;
  if ( v18 == 8 )
  {
    v35 = *(_QWORD *)(MiGetSystemCacheReverseMap(v17) + 24);
    v36 = v35 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v35 & 1) == 0 )
      v36 = v35;
    *v21 = *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(*(_QWORD *)v36 + 60LL) & 0x3FF)) + 7232LL;
  }
  return 0LL;
}
