/*
 * XREFs of MiFreePhysicalPageChain @ 0x140546718
 * Callers:
 *     MiDeletePagablePteRange @ 0x140242470 (MiDeletePagablePteRange.c)
 *     NtMapUserPhysicalPages @ 0x1408D36E0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408D39A0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiFreePagesFromMdl @ 0x140317C94 (MiFreePagesFromMdl.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140331DC0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140332ED0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiGetAweInfoPartition @ 0x140546EC4 (MiGetAweInfoPartition.c)
 *     MiReturnProcessPhysicalPages @ 0x1408D40C0 (MiReturnProcessPhysicalPages.c)
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
  __int64 v22; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v25; // eax
  bool v26; // zf
  __int64 AweInfoPartition; // rax
  unsigned __int64 v28; // r8
  unsigned __int8 v29; // [rsp+20h] [rbp-E0h]
  ULONG_PTR *v31; // [rsp+28h] [rbp-D8h]
  __int64 v32; // [rsp+28h] [rbp-D8h]
  __int64 v33; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v34; // [rsp+38h] [rbp-C8h]
  signed __int64 *v35; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v36; // [rsp+48h] [rbp-B8h]
  unsigned int *v37; // [rsp+50h] [rbp-B0h]
  struct _KTHREAD *v38; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2[518]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = *(unsigned int **)(a1 + 32);
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  CurrentThread = KeGetCurrentThread();
  v7 = *((_QWORD *)v3 + 1);
  v8 = 0;
  v31 = &BugCheckParameter2[6];
  v9 = 0LL;
  v37 = v3;
  v38 = CurrentThread;
  v34 = v7;
  if ( !a3 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)(v3 + 14), 0LL);
    v7 = v34;
  }
  result = *((_QWORD *)v3 + 3);
  v35 = (signed __int64 *)result;
  if ( a2 )
  {
    v11 = a2;
    do
    {
      v12 = v11;
      v33 = *(_QWORD *)(v11 + 16);
      v13 = 0LL;
      v14 = 0LL;
      v15 = (v11 + 0x58000000000LL) / 48;
      v16 = v15 % v7;
      v36 = v15 / v7;
      v17 = v31;
      v18 = v12 + 24;
      do
      {
        v32 = v13;
        v19 = MiLockPageInline(v18 - 24, v16, v7, SchedulerAssist);
        v16 = *(_QWORD *)v18;
        v20 = v19;
        v29 = v19;
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
        v22 = 0x3FFFFFFFFFFFFFFFLL;
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
                v25 = ~(unsigned __int16)v16;
                v26 = (v25 & SchedulerAssist[5]) == 0;
                v22 = (unsigned int)v25 & SchedulerAssist[5];
                SchedulerAssist[5] = v22;
                if ( v26 )
                {
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                  v20 = v29;
                }
              }
            }
          }
        }
        result = v20;
        __writecr8(v20);
        if ( v14 )
          v13 = v32;
        if ( !v13 )
        {
          if ( !v14 )
          {
            result = (__int64)v35;
            _bittestandreset64(v35, v36);
          }
          if ( v8 == 512 )
          {
            BugCheckParameter2[0] = 0LL;
            BugCheckParameter2[4] = 0LL;
            LODWORD(BugCheckParameter2[1]) = 135216;
            BugCheckParameter2[5] = 0x200000LL;
            result = (__int64)MiFreePagesFromMdl((ULONG_PTR)BugCheckParameter2, 0, v22);
            v9 += 512LL;
            v17 = &BugCheckParameter2[6];
            v8 = 0;
          }
          *v17++ = v15;
          ++v8;
        }
        v7 = v34;
        ++v14;
        v18 += 48LL;
        ++v15;
      }
      while ( v14 < v34 );
      v31 = v17;
      v11 = v33;
    }
    while ( v33 );
    v3 = v37;
    CurrentThread = v38;
    if ( v8 )
    {
      BugCheckParameter2[0] = 0LL;
      BugCheckParameter2[4] = 0LL;
      BugCheckParameter2[5] = v8 << 12;
      LOWORD(BugCheckParameter2[1]) = 8 * (v8 + 6);
      WORD1(BugCheckParameter2[1]) = 2;
      MiFreePagesFromMdl((ULONG_PTR)BugCheckParameter2, 0, v34);
      result = v8;
      v9 += v8;
    }
    if ( v9 )
    {
      AweInfoPartition = MiGetAweInfoPartition(v37, v16, -v9);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(AweInfoPartition + 7608), v28);
      result = *v37;
      if ( (result & 1) != 0 )
        result = MiReturnProcessPhysicalPages(v38->ApcState.Process, v9);
    }
  }
  if ( !a3 )
  {
    ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)(v3 + 14), 0LL);
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
