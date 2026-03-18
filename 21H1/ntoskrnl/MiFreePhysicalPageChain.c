/*
 * XREFs of MiFreePhysicalPageChain @ 0x1405460C8
 * Callers:
 *     MiDeletePagablePteRange @ 0x14029B4A0 (MiDeletePagablePteRange.c)
 *     NtMapUserPhysicalPages @ 0x1408D2390 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408D2650 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402F5090 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402F6030 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiFreePagesFromMdl @ 0x140346FD4 (MiFreePagesFromMdl.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiGetAweInfoPartition @ 0x140546874 (MiGetAweInfoPartition.c)
 *     MiReturnProcessPhysicalPages @ 0x1408D2D70 (MiReturnProcessPhysicalPages.c)
 */

__int64 __fastcall MiFreePhysicalPageChain(__int64 a1, __int64 a2, int a3)
{
  unsigned int *v3; // rdi
  _DWORD *SchedulerAssist; // r9
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v7; // r8
  unsigned int v8; // r14d
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r13
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r12
  __int64 v16; // rdx
  ULONG_PTR *v17; // rdi
  __int64 v18; // rsi
  unsigned __int8 v19; // al
  unsigned __int8 v20; // r11
  char v21; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v24; // eax
  bool v25; // zf
  __int64 AweInfoPartition; // rax
  unsigned __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int8 v31; // [rsp+20h] [rbp-E0h]
  ULONG_PTR *v33; // [rsp+28h] [rbp-D8h]
  __int64 v34; // [rsp+28h] [rbp-D8h]
  __int64 v35; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v36; // [rsp+38h] [rbp-C8h]
  signed __int64 *v37; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v38; // [rsp+48h] [rbp-B8h]
  unsigned int *v39; // [rsp+50h] [rbp-B0h]
  struct _KTHREAD *v40; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2[518]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = *(unsigned int **)(a1 + 32);
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  CurrentThread = KeGetCurrentThread();
  v7 = *((_QWORD *)v3 + 1);
  v8 = 0;
  v33 = &BugCheckParameter2[6];
  v9 = 0LL;
  v39 = v3;
  v40 = CurrentThread;
  v36 = v7;
  if ( !a3 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)(v3 + 14), 0LL);
    v7 = v36;
  }
  result = *((_QWORD *)v3 + 3);
  v37 = (signed __int64 *)result;
  if ( a2 )
  {
    v11 = a2;
    do
    {
      v12 = v11;
      v35 = *(_QWORD *)(v11 + 16);
      v13 = 0LL;
      v14 = 0LL;
      v15 = (v11 + 0x58000000000LL) / 48;
      v16 = v15 % v7;
      v38 = v15 / v7;
      v17 = v33;
      v18 = v12 + 24;
      do
      {
        v34 = v13;
        v19 = MiLockPageInline(v18 - 24, v16, v7, SchedulerAssist);
        v16 = *(_QWORD *)v18;
        v20 = v19;
        v31 = v19;
        if ( (*(_QWORD *)v18 & 0x4000000000000000LL) == 0 )
        {
          v16 |= 0x4000000000000000uLL;
          *(_QWORD *)v18 = v16;
        }
        v21 = *(_BYTE *)(v18 + 10);
        if ( (v21 & 8) != 0 )
        {
          v16 = *(_QWORD *)v18;
          *(_BYTE *)(v18 + 10) = v21 & 0xF7;
        }
        v13 = v16 & 0x3FFFFFFFFFFFFFFFLL;
        if ( (v16 & 0x3FFFFFFFFFFFFFFFLL) == 0 )
        {
          *(_QWORD *)(v18 - 8) = 0LL;
          *(_QWORD *)v18 = v16 ^ (v16 ^ 1) & 0x3FFFFFFFFFFFFFFFLL;
        }
        _InterlockedAnd64((volatile signed __int64 *)v18, 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v20 <= 0xFu )
            {
              v16 = 2LL;
              if ( CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v16 = -1LL << (v20 + 1);
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v24 = ~(unsigned __int16)v16;
                v25 = (v24 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v24;
                if ( v25 )
                {
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                  v20 = v31;
                }
              }
            }
          }
        }
        result = v20;
        __writecr8(v20);
        if ( v14 )
          v13 = v34;
        if ( !v13 )
        {
          if ( !v14 )
          {
            result = (__int64)v37;
            _bittestandreset64(v37, v38);
          }
          if ( v8 == 512 )
          {
            BugCheckParameter2[0] = 0LL;
            BugCheckParameter2[4] = 0LL;
            LODWORD(BugCheckParameter2[1]) = 135216;
            BugCheckParameter2[5] = 0x200000LL;
            result = (__int64)MiFreePagesFromMdl((ULONG_PTR)BugCheckParameter2, 0);
            v9 += 512LL;
            v17 = &BugCheckParameter2[6];
            v8 = 0;
          }
          *v17++ = v15;
          ++v8;
        }
        v7 = v36;
        ++v14;
        v18 += 48LL;
        ++v15;
      }
      while ( v14 < v36 );
      v33 = v17;
      v11 = v35;
    }
    while ( v35 );
    v3 = v39;
    CurrentThread = v40;
    if ( v8 )
    {
      BugCheckParameter2[0] = 0LL;
      BugCheckParameter2[4] = 0LL;
      BugCheckParameter2[5] = v8 << 12;
      LOWORD(BugCheckParameter2[1]) = 8 * (v8 + 6);
      WORD1(BugCheckParameter2[1]) = 2;
      MiFreePagesFromMdl((ULONG_PTR)BugCheckParameter2, 0);
      result = v8;
      v9 += v8;
    }
    if ( v9 )
    {
      AweInfoPartition = MiGetAweInfoPartition(v39, v16, -v9);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(AweInfoPartition + 7608), v27);
      result = *v39;
      if ( (result & 1) != 0 )
        result = MiReturnProcessPhysicalPages(v40->ApcState.Process, v9);
    }
  }
  if ( !a3 )
  {
    ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)(v3 + 14), 0LL);
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v28, v29, v30);
  }
  return result;
}
