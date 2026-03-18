/*
 * XREFs of MiProbeAndLockPrepare @ 0x1402A7E50
 * Callers:
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140307A70 (MmProbeAndLockSelectedPages.c)
 *     MmStoreProbeAndLockPages @ 0x1403458AC (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021A7A0 (MiUnlockAndDereferenceVad.c)
 *     MiVadPureReserve @ 0x14021AF70 (MiVadPureReserve.c)
 *     MiGetSystemCacheReverseMap @ 0x14022B3C0 (MiGetSystemCacheReverseMap.c)
 *     MiGetSessionVm @ 0x14022B5AC (MiGetSessionVm.c)
 *     MiObtainReferencedVadEx @ 0x140267570 (MiObtainReferencedVadEx.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402EF840 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405AFFD4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x1405EDAE0 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiProbeAndLockPrepare(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5,
        int a6,
        int a7)
{
  int v8; // r8d
  unsigned __int64 v10; // rdi
  __int64 v11; // r14
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdi
  __int16 v14; // cx
  __int16 v15; // ax
  __int16 v16; // cx
  __int64 v17; // rcx
  unsigned __int64 v18; // r14
  int v19; // r15d
  __int64 v20; // r10
  int *v21; // rsi
  __int64 *v22; // r12
  char *SessionVm; // rdi
  unsigned int v24; // edx
  unsigned __int8 v25; // al
  LONG *v26; // rdi
  unsigned __int8 v27; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _DWORD *v29; // rcx
  signed __int32 v30; // ett
  unsigned __int8 CurrentIrql; // r9
  int v32; // ecx
  char v33; // al
  __int64 AnyMultiplexedVm; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  unsigned int v38; // edx
  __int64 v39; // rax
  int v40; // edx
  _DWORD *v41; // rcx
  volatile signed __int32 *v42; // rax
  volatile signed __int32 *v43; // r15
  __int64 v44; // rax
  int v45; // ecx
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  unsigned int v48; // edi
  __int64 v49; // rax
  int v50; // edx
  _DWORD *SchedulerAssist; // r8
  _DWORD *v52; // r9
  int v53; // eax
  int v54; // eax
  __int64 *v55; // [rsp+60h] [rbp+8h]
  unsigned int v56; // [rsp+78h] [rbp+20h] BYREF

  v8 = a6;
  v10 = a3 + a4;
  *(_QWORD *)(a1 + 72) = KeGetCurrentThread();
  v56 = 0;
  *(_QWORD *)(a1 + 56) = a2;
  *(_DWORD *)(a1 + 88) = v8;
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = v10;
  if ( a5 && (v10 > 0x7FFFFFFF0000LL || a3 >= v10) )
  {
    ++dword_140C4E6B8;
    return 3221225477LL;
  }
  v11 = *(unsigned int *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = a2 + 48;
  v12 = ((a3 & 0xFFF) + v11 + 4095) >> 12;
  v13 = v10 - 1;
  *(_QWORD *)(a1 + 16) = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 24) = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 136) = 0xFFFFFFFFFLL;
  v14 = *(_WORD *)(a2 + 10);
  v15 = v14 | 0x80;
  v16 = v14 & 0xFF7F;
  if ( v8 )
    v16 = v15;
  *(_WORD *)(a2 + 10) = v16 | 2;
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
    v17 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 184LL);
    *(_QWORD *)(a1 + 80) = v17;
    *(_QWORD *)(a2 + 16) = v17;
    if ( v8 == 3 )
    {
      v42 = MiObtainReferencedVadEx(*(_QWORD *)a1, 0, (int *)&v56);
      v43 = v42;
      if ( !v42 )
        return v56;
      if ( (unsigned int)MiVadPureReserve((__int64)v42)
        || (v44 = *((unsigned int *)v43 + 13),
            LODWORD(v44) = v44 & 0x7FFFFFFF,
            (v44 | ((unsigned __int64)*((unsigned __int8 *)v43 + 34) << 31)) >= 0x7FFFFFFFDLL)
        || (v45 = *((_DWORD *)v43 + 12), (v45 & 0x70) == 0x10)
        || (v45 & 0x100000) == 0 && (v45 & 0x70) != 0x20 )
      {
        MiUnlockAndDereferenceVad((char *)v43);
        return 3221225477LL;
      }
      v46 = (*((unsigned int *)v43 + 6) | ((unsigned __int64)*((unsigned __int8 *)v43 + 32) << 32)) << 12;
      if ( a3 < v46
        || (v47 = ((*((unsigned int *)v43 + 7) | ((unsigned __int64)*((unsigned __int8 *)v43 + 33) << 32)) << 12) | 0xFFF,
            a3 > v47)
        || v13 < v46
        || v13 > v47 )
      {
        MiUnlockAndDereferenceVad((char *)v43);
        return 3221225496LL;
      }
      v56 = MiChargeFullProcessCommitment(*(_QWORD *)(a1 + 80), v12);
      v48 = v56;
      if ( (v56 & 0x80000000) != 0 )
      {
        MiUnlockAndDereferenceVad((char *)v43);
        return v48;
      }
      *(_QWORD *)(a1 + 120) = v43;
      *(_QWORD *)(a1 + 112) = v12;
    }
    if ( a7 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 80) + 1280LL), v12);
  }
  v18 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v18 >= 0xFFFF800000000000uLL )
    v19 = byte_140C4F908[((v18 >> 39) & 0x1FF) - 256];
  else
    v19 = 0;
  v20 = 1LL;
  if ( v18 >= 0x7FFFFFFF0000LL )
  {
    if ( v19 == 1 )
    {
      v21 = (int *)(a1 + 64);
      *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 8;
      v22 = (__int64 *)(a1 + 96);
      SessionVm = (char *)MiGetSessionVm();
      *(_QWORD *)(a1 + 96) = SessionVm;
      goto LABEL_15;
    }
    if ( v19 == 6 )
    {
      v21 = (int *)(a1 + 64);
      v22 = (__int64 *)(a1 + 96);
      SessionVm = (char *)&unk_140C4F1C0;
      v24 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 3;
      *(_QWORD *)(a1 + 96) = &unk_140C4F1C0;
    }
    else
    {
      if ( v19 == 8 )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(0LL);
        v21 = (int *)(a1 + 64);
        v24 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 2;
      }
      else
      {
        if ( v19 != 5 && v19 != 15 )
        {
          v22 = (__int64 *)(a1 + 96);
          v55 = (__int64 *)(a1 + 96);
          v21 = (int *)(a1 + 64);
          if ( v19 == 12 )
          {
            SessionVm = (char *)MiGetAnyMultiplexedVm(1LL);
            v38 = *v21 & 0xFFFFFFF6;
            *v22 = (__int64)SessionVm;
            v24 = v38 | 6;
            *v21 = v24;
            goto LABEL_16;
          }
          v55 = (__int64 *)(a1 + 96);
          if ( v19 == 14 )
          {
            v39 = MiGetAnyMultiplexedVm(4LL);
            *v22 = v39;
            v24 = v40 & 0xFFFFFFF0 | 7;
            SessionVm = (char *)v39;
            *v21 = v24;
            goto LABEL_16;
          }
          v49 = MiGetAnyMultiplexedVm(3LL);
          *v22 = v49;
          v24 = v50 & 0xFFFFFFF0 | 5;
          SessionVm = (char *)v49;
          goto LABEL_14;
        }
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(5LL);
        v21 = (int *)(a1 + 64);
        v24 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 4;
      }
      v22 = (__int64 *)(a1 + 96);
      SessionVm = (char *)AnyMultiplexedVm;
      *(_QWORD *)(a1 + 96) = AnyMultiplexedVm;
    }
  }
  else
  {
    v21 = (int *)(a1 + 64);
    v22 = (__int64 *)(a1 + 96);
    SessionVm = (char *)(*(_QWORD *)(a1 + 80) + 1664LL);
    v24 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 1;
    *(_QWORD *)(a1 + 96) = SessionVm;
  }
LABEL_14:
  *v21 = v24;
LABEL_15:
  v55 = v22;
LABEL_16:
  *v21 = v24 & 0xFFFFFFCF;
  v25 = SessionVm[184] & 7;
  if ( v25 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v20) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= ~((unsigned __int8)(v20 << (CurrentIrql + 1)) - 1) & 4;
    }
  }
  else
  {
    if ( v25 == 2 )
      v26 = &dword_140C4F6C0;
    else
      v26 = (LONG *)(SessionVm + 192);
    v27 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v20) != 0 && v27 <= 0xFu )
    {
      v52 = KeGetCurrentPrcb()->SchedulerAssist;
      v52[5] |= (-1 << (v27 + 1)) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v26, v27);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v29 = CurrentPrcb->SchedulerAssist;
      if ( v29 )
      {
        if ( CurrentPrcb->NestingLevel <= (unsigned __int8)v20 )
        {
          v53 = v29[6];
          v29[6] = v20 + v53;
          if ( !((_DWORD)v20 + v53) )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v26);
      v30 = *v26 & 0x7FFFFFFF;
      if ( v30 != _InterlockedCompareExchange(v26, v30 + 1, v30) )
      {
        v41 = CurrentPrcb->SchedulerAssist;
        if ( v41 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v54 = v41[6] - 1;
            v41[6] = v54;
            if ( !v54 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v26, v27);
      }
    }
    if ( v26[1] )
      _InterlockedExchange(v26 + 1, 0);
    CurrentIrql = v27;
    v22 = v55;
  }
  v32 = *v21;
  v33 = *v21 & 0xF;
  *(_BYTE *)(a1 + 68) = CurrentIrql;
  if ( v33 == 1 && *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1264LL) )
    *v21 = v32 | 0x10;
  if ( v19 == 8 )
  {
    v36 = *(_QWORD *)(MiGetSystemCacheReverseMap(v18) + 24);
    v37 = v36 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v36 & 1) == 0 )
      v37 = v36;
    *v22 = *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(*(_QWORD *)v37 + 60LL) & 0x3FF)) + 7232LL;
  }
  return 0LL;
}
