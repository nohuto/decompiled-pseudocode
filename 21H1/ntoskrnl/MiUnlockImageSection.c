/*
 * XREFs of MiUnlockImageSection @ 0x1402EB5D0
 * Callers:
 *     MiLockPagableImageSection @ 0x14027D910 (MiLockPagableImageSection.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x1402186F0 (MiIsPfnFileOnly.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiIsPfnCommitNotCharged @ 0x140285FB0 (MiIsPfnCommitNotCharged.c)
 *     MiPfnReferenceCountIsZero @ 0x14028D5B0 (MiPfnReferenceCountIsZero.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     ExpUnblockPushLock @ 0x1402EBE18 (ExpUnblockPushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403ED8CC (MiBadRefCount.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockImageSection(
        volatile signed __int32 *a1,
        unsigned __int64 Process,
        unsigned __int64 a3,
        ULONG_PTR SchedulerAssist)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v5; // r14
  __int64 CurrentIrql; // rdi
  signed __int32 v8; // ecx
  __int64 result; // rax
  BOOL v10; // eax
  int v11; // r10d
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rbx
  unsigned __int8 v17; // bp
  __int16 v18; // dx
  bool v19; // zf
  __int16 v20; // dx
  __int64 v21; // r11
  __int64 v22; // rdi
  __int64 v23; // rax
  int v24; // esi
  unsigned __int64 v25; // rcx
  char v26; // al
  __int64 v27; // rcx
  unsigned __int64 v28; // r11
  int v29; // r10d
  __int64 v30; // r11
  __int64 v31; // rdi
  unsigned __int64 v32; // r9
  struct _KPRCB *v33; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v38; // r9
  int v39; // eax
  signed __int32 v40[8]; // [rsp+0h] [rbp-88h] BYREF
  int v41; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v42; // [rsp+34h] [rbp-54h]
  unsigned __int64 v43; // [rsp+40h] [rbp-48h] BYREF
  struct _KTHREAD *v44; // [rsp+48h] [rbp-40h]
  __int64 v45; // [rsp+50h] [rbp-38h]
  unsigned __int64 v46; // [rsp+A0h] [rbp+18h]

  v46 = a3;
  CurrentThread = KeGetCurrentThread();
  v5 = Process;
  v44 = CurrentThread;
  CurrentIrql = KeGetCurrentIrql();
  v45 = CurrentIrql;
  if ( !(_BYTE)CurrentIrql )
    --CurrentThread->KernelApcDisable;
  v8 = _InterlockedDecrement(a1);
  result = (unsigned int)(v8 + 1);
  if ( (unsigned int)result <= 1 )
    KeBugCheckEx(0x1Au, 0x1010uLL, (__int64)(Process << 25) >> 16, SchedulerAssist, v8);
  if ( v8 == 1 )
  {
    if ( Process <= a3 )
    {
      v10 = MiPteInShadowRange((unsigned __int64)&v43);
      SchedulerAssist = v10;
      v42 = v10;
      a3 = 0xFFFFF6FB7DBED000uLL;
      Process = 0xFFFFF6FB7DBED7F8uLL;
      v11 = 1;
      while ( 1 )
      {
        v12 = *(_QWORD *)v5;
        if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Process + 912) != 1 && (v12 & 1) != 0 && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            a3 = *(_QWORD *)(Process + 1928);
            if ( a3 )
            {
              v13 = *(_QWORD *)(a3 + 8 * ((v5 >> 3) & 0x1FF));
              a3 = v12 | 0x20;
              Process = (unsigned __int8)v13;
              LOBYTE(Process) = v13 & 0x20;
              if ( (v13 & 0x20) == 0 )
                a3 = *(_QWORD *)v5;
              v12 = a3;
              if ( (v13 & 0x42) != 0 )
                v12 = a3 | 0x42;
            }
          }
        }
        v43 = v12;
        if ( (_DWORD)SchedulerAssist )
        {
          if ( (MiFlags & 0xC00000) != 0 )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            if ( *(_BYTE *)(Process + 912) != 1 && (v12 & 1) != 0 && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              a3 = *(_QWORD *)(Process + 1928);
              if ( a3 )
              {
                v14 = *(_QWORD *)(a3 + 8 * (((unsigned __int64)&v43 >> 3) & 0x1FF));
                a3 = v12 | 0x20;
                Process = (unsigned __int8)v14;
                LOBYTE(Process) = v14 & 0x20;
                if ( (v14 & 0x20) == 0 )
                  a3 = v12;
                v12 = a3;
                if ( (v14 & 0x42) != 0 )
                  v12 = a3 | 0x42;
              }
            }
          }
        }
        v15 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL);
        v16 = v15 - 0x58000000000LL;
        v17 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v17 <= 0xFu )
        {
          SchedulerAssist = (ULONG_PTR)KeGetCurrentPrcb()->SchedulerAssist;
          Process = (-1LL << (v17 + 1)) & 4;
          a3 = (unsigned int)Process | *(_DWORD *)(SchedulerAssist + 20);
          *(_DWORD *)(SchedulerAssist + 20) = a3;
        }
        v41 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v41, Process, a3, SchedulerAssist);
            while ( *(__int64 *)(v16 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) );
          v11 = 1;
        }
        v18 = *(_WORD *)(v16 + 32);
        if ( !v18 )
          MiBadRefCount(v16);
        v19 = v18 == 1;
        v20 = v18 - 1;
        *(_WORD *)(v16 + 32) = v20;
        if ( !v19 || !MiIsPfnFileOnly(v16) )
          break;
LABEL_78:
        MiPfnReferenceCountIsZero(v16, v15 / 48);
LABEL_79:
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v36 = KeGetCurrentIrql();
            if ( v36 <= 0xFu && v17 <= 0xFu && v36 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v38 = CurrentPrcb->SchedulerAssist;
              v39 = ~(unsigned __int16)(-1LL << (v17 + 1));
              v19 = (v39 & v38[5]) == 0;
              v38[5] &= v39;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        result = v17;
        __writecr8(v17);
        SchedulerAssist = v42;
        v5 += 8LL;
        v11 = 1;
        Process = 0xFFFFF6FB7DBED7F8uLL;
        a3 = 0xFFFFF6FB7DBED000uLL;
        if ( v5 > v46 )
        {
          CurrentThread = v44;
          LOBYTE(CurrentIrql) = v45;
          goto LABEL_88;
        }
      }
      v21 = *(_QWORD *)(v16 + 40);
      if ( (v21 & 0x1000000000LL) != 0 || (v21 & 0x2000000000000LL) != 0 )
        goto LABEL_79;
      v22 = *(_QWORD *)(v16 + 24);
      v23 = v22 & 0x3FFFFFFFFFFFFFFFLL;
      if ( !v20 )
      {
        v24 = v11;
LABEL_52:
        v25 = *(_QWORD *)(v16 + 8) | 0x8000000000000000uLL;
        if ( v25 > 0xFFFFF6BFFFFFFF78uLL || v25 < 0xFFFFF68000000000uLL )
        {
          v26 = *(_BYTE *)(v16 + 35);
          if ( (v26 & 0x20) != 0 )
          {
            *(_BYTE *)(v16 + 35) = v26 & 0xDF;
            goto LABEL_77;
          }
        }
        if ( (unsigned int)MI_PFN_IS_PROTO(v16, 0x8000000000000000uLL, a3) && (*(_DWORD *)(v16 + 16) & 0x400LL) != 0 )
        {
          v29 = 1;
        }
        else if ( (unsigned int)MiIsPfnCommitNotCharged(v27) )
        {
          v29 = 1;
        }
        else if ( v24 == 1 && (v22 & 0x4000000000000000LL) != 0 )
        {
          v29 = 1;
        }
        v30 = (v28 >> 39) & 0x3FF;
        v31 = *(_QWORD *)(qword_140C4E588 + 8 * v30);
        if ( v29 == 1 )
          MiReturnCommit(*(_QWORD *)(qword_140C4E588 + 8 * v30), 1LL);
        v32 = 1LL;
        if ( (ULONG_PTR *)v31 == &MiSystemPartition )
        {
          v33 = KeGetCurrentPrcb();
          CachedResidentAvailable = (int)v33->CachedResidentAvailable;
          if ( (_DWORD)CachedResidentAvailable != -1 )
          {
            if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
            {
              while ( 1 )
              {
                v35 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&v33->CachedResidentAvailable,
                        CachedResidentAvailable + 1,
                        CachedResidentAvailable);
                v19 = (_DWORD)CachedResidentAvailable == v35;
                LODWORD(CachedResidentAvailable) = v35;
                if ( v19 )
                  break;
                if ( v35 == -1 || (unsigned __int64)(v35 + 1LL) > 0x100 )
                  goto LABEL_72;
              }
LABEL_77:
              if ( !v24 )
                goto LABEL_79;
              goto LABEL_78;
            }
LABEL_72:
            if ( (int)CachedResidentAvailable > 192
              && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                      (volatile signed __int32 *)&v33->CachedResidentAvailable,
                                                      192,
                                                      CachedResidentAvailable) )
            {
              v32 = (int)CachedResidentAvailable - 192 + 1LL;
            }
            if ( !v32 )
              goto LABEL_77;
          }
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 7168), v32);
        goto LABEL_77;
      }
      if ( v20 == 1 )
      {
        if ( v23 )
        {
LABEL_50:
          v24 = 0;
          goto LABEL_52;
        }
      }
      else if ( v20 != 2 || !v23 )
      {
        goto LABEL_79;
      }
      if ( (*(_BYTE *)(v16 + 34) & 8) == 0 )
        goto LABEL_79;
      goto LABEL_50;
    }
LABEL_88:
    _InterlockedDecrement(a1);
    _InterlockedOr(v40, 0);
    if ( qword_140C4CC98 )
      result = ExpUnblockPushLock(&qword_140C4CC98, 0LL, 0LL);
  }
  if ( !(_BYTE)CurrentIrql )
    return (__int64)KeLeaveCriticalRegionThread((__int64)CurrentThread, Process, a3, SchedulerAssist);
  return result;
}
