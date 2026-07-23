/*
 * XREFs of MiUnlockImageSection @ 0x140325780
 * Callers:
 *     MiLockPagableImageSection @ 0x140327240 (MiLockPagableImageSection.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x140214048 (ExpUnblockPushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiPfnReferenceCountIsZero @ 0x140330B40 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x140332020 (MiIsPfnCommitNotCharged.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403F48DC (MiBadRefCount.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

int __fastcall MiUnlockImageSection(
        volatile signed __int32 *a1,
        unsigned __int64 Process,
        unsigned __int64 a3,
        ULONG_PTR SchedulerAssist)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v5; // r14
  __int64 CurrentIrql; // rdi
  signed __int32 v8; // ecx
  int result; // eax
  unsigned int v10; // eax
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
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int64 v30; // r11
  int v31; // r10d
  __int64 v32; // r11
  __int64 v33; // rdi
  unsigned __int64 v34; // r9
  struct _KPRCB *v35; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v40; // r9
  int v41; // eax
  signed __int32 v42[8]; // [rsp+0h] [rbp-88h] BYREF
  int v43; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v44; // [rsp+34h] [rbp-54h]
  unsigned __int64 v45; // [rsp+40h] [rbp-48h] BYREF
  struct _KTHREAD *v46; // [rsp+48h] [rbp-40h]
  __int64 v47; // [rsp+50h] [rbp-38h]
  unsigned __int64 v48; // [rsp+A0h] [rbp+18h]

  v48 = a3;
  CurrentThread = KeGetCurrentThread();
  v5 = Process;
  v46 = CurrentThread;
  CurrentIrql = KeGetCurrentIrql();
  v47 = CurrentIrql;
  if ( !(_BYTE)CurrentIrql )
    --CurrentThread->KernelApcDisable;
  v8 = _InterlockedDecrement(a1);
  result = v8 + 1;
  if ( (unsigned int)(v8 + 1) <= 1 )
    KeBugCheckEx(0x1Au, 0x1010uLL, (__int64)(Process << 25) >> 16, SchedulerAssist, v8);
  if ( v8 == 1 )
  {
    if ( Process <= a3 )
    {
      v10 = MiPteInShadowRange(&v45);
      SchedulerAssist = v10;
      v44 = v10;
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
        v45 = v12;
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
                v14 = *(_QWORD *)(a3 + 8 * (((unsigned __int64)&v45 >> 3) & 0x1FF));
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
        v43 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v43, Process, a3, SchedulerAssist);
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
            v38 = KeGetCurrentIrql();
            if ( v38 <= 0xFu && v17 <= 0xFu && v38 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v40 = CurrentPrcb->SchedulerAssist;
              v41 = ~(unsigned __int16)(-1LL << (v17 + 1));
              v19 = (v41 & v40[5]) == 0;
              v40[5] &= v41;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        result = v17;
        __writecr8(v17);
        SchedulerAssist = v44;
        v5 += 8LL;
        v11 = 1;
        Process = 0xFFFFF6FB7DBED7F8uLL;
        a3 = 0xFFFFF6FB7DBED000uLL;
        if ( v5 > v48 )
        {
          CurrentThread = v46;
          LOBYTE(CurrentIrql) = v47;
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
        if ( (unsigned int)MI_PFN_IS_PROTO(v16) && (*(_DWORD *)(v16 + 16) & 0x400LL) != 0 )
        {
          v31 = 1;
        }
        else if ( (unsigned int)MiIsPfnCommitNotCharged(v28, v27, v29) )
        {
          v31 = 1;
        }
        else if ( v24 == 1 && (v22 & 0x4000000000000000LL) != 0 )
        {
          v31 = 1;
        }
        v32 = (v30 >> 39) & 0x3FF;
        v33 = *(_QWORD *)(qword_140C4E688 + 8 * v32);
        if ( v31 == 1 )
          MiReturnCommit(*(_QWORD *)(qword_140C4E688 + 8 * v32), 1LL);
        v34 = 1LL;
        if ( (ULONG_PTR *)v33 == &MiSystemPartition )
        {
          v35 = KeGetCurrentPrcb();
          CachedResidentAvailable = (int)v35->CachedResidentAvailable;
          if ( (_DWORD)CachedResidentAvailable != -1 )
          {
            if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
            {
              while ( 1 )
              {
                v37 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&v35->CachedResidentAvailable,
                        CachedResidentAvailable + 1,
                        CachedResidentAvailable);
                v19 = (_DWORD)CachedResidentAvailable == v37;
                LODWORD(CachedResidentAvailable) = v37;
                if ( v19 )
                  break;
                if ( v37 == -1 || (unsigned __int64)(v37 + 1LL) > 0x100 )
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
                                                      (volatile signed __int32 *)&v35->CachedResidentAvailable,
                                                      192,
                                                      CachedResidentAvailable) )
            {
              v34 = (int)CachedResidentAvailable - 192 + 1LL;
            }
            if ( !v34 )
              goto LABEL_77;
          }
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v33 + 7168), v34);
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
    _InterlockedOr(v42, 0);
    if ( qword_140C4CD98 )
      result = ExpUnblockPushLock(&qword_140C4CD98, 0LL, 0);
  }
  if ( !(_BYTE)CurrentIrql )
    return (unsigned int)KeLeaveCriticalRegionThread((__int64)CurrentThread, Process, a3, SchedulerAssist);
  return result;
}
