/*
 * XREFs of MiFreeLargeProcessPagesToCache @ 0x1405C20CC
 * Callers:
 *     MiFreeLargePages @ 0x1405C1CE0 (MiFreeLargePages.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x14026E05C (MiFreeLargeZeroPages.c)
 *     MiInitializeLargePfnList @ 0x14026E1F4 (MiInitializeLargePfnList.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiCoalesceActivePagesIntoFree @ 0x1405B4A34 (MiCoalesceActivePagesIntoFree.c)
 *     MiAppendTailList @ 0x1405C1154 (MiAppendTailList.c)
 */

__int64 __fastcall MiFreeLargeProcessPagesToCache(ULONG_PTR *a1, __int64 a2)
{
  ULONG_PTR *v3; // rbx
  ULONG_PTR v4; // rcx
  _KPROCESS *Process; // rdi
  unsigned __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v15; // zf
  signed __int32 v16; // eax
  volatile LONG *v17; // rsi
  unsigned __int64 v18; // rbx
  ULONG_PTR v19; // rdx
  _QWORD *v20; // r10
  _QWORD *v21; // rax
  __int64 v22; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v24; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // edx
  __int64 result; // rax
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  _QWORD v31[12]; // [rsp+30h] [rbp-49h] BYREF

  v3 = a1;
  memset(v31, 0, sizeof(v31));
  v4 = *v3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = Process[1].ActiveProcessors.StaticBitmap[28];
  v7 = *(_QWORD *)(v6 + 328);
  LODWORD(v3) = *(unsigned __int8 *)(48 * *v3 - 0x220000000000LL + 34) >> 6;
  MiSearchNumaNodeTable(v4);
  v8 = *(_QWORD *)(qword_140C51F48 + 8LL * Process[1].IdealProcessor[25]);
  MiInitializeLargePfnList(v31);
  v9 = (unsigned int)v3 * (unsigned __int16)KeNumberNodes;
  v10 = 16 * a2;
  *(_DWORD *)(v7 + 24) = *(_DWORD *)(v8 + 15912);
  v12 = (_QWORD *)(v7 + 8 * (v11 + v9 + 2 * (v11 + v9 + 2)));
  if ( 16 * a2 )
  {
    MiReturnCommit(v8, 16 * a2);
    if ( (ULONG_PTR *)v8 != &MiSystemPartition )
      goto LABEL_13;
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_13;
    if ( v10 + CachedResidentAvailable <= 0x100 )
    {
      do
      {
        if ( v10 >= 0x80000 )
          break;
        v16 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                v10 + CachedResidentAvailable,
                CachedResidentAvailable);
        v15 = (_DWORD)CachedResidentAvailable == v16;
        LODWORD(CachedResidentAvailable) = v16;
        if ( v15 )
          goto LABEL_14;
      }
      while ( v16 != -1 && v10 + v16 <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v10 += (int)CachedResidentAvailable - 192;
    }
    if ( v10 )
LABEL_13:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16960), v10);
  }
LABEL_14:
  v17 = (volatile LONG *)(v6 + 336);
  v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 336));
  if ( a2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v19 = a1[--a2];
        v20 = (_QWORD *)(48 * v19 - 0x220000000000LL);
        if ( (_QWORD *)*v12 != v12
          && (((0xAAAAAAAAAAAAAAABuLL * ((*v12 + 0x220000000000LL) >> 4)) ^ v19) & 0xFFFFFFFFFFFFFE00uLL) != 0 )
        {
          MiAppendTailList(&v31[6], v12);
          v31[8] += v12[2];
          v12[2] = 0LL;
        }
        v21 = (_QWORD *)v12[1];
        if ( (_QWORD *)*v21 != v12 )
          __fastfail(3u);
        *v20 = v12;
        v20[1] = v21;
        *v21 = v20;
        v12[1] = v20;
        if ( ++v12[2] == 32LL )
        {
          MiAppendTailList(&v31[6], v12);
          v31[8] += v12[2];
          v12[2] = 0LL;
        }
        if ( v31[8] )
          break;
        if ( !a2 )
          goto LABEL_35;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v17);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
          {
            v24 = KeGetCurrentPrcb();
            v22 = (unsigned int)(v18 + 1);
            SchedulerAssist = v24->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
            v15 = (v26 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v26;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick((__int64)v24);
          }
        }
      }
      __writecr8(v18);
      if ( v31[8] != 32LL
        || (result = MiCoalesceActivePagesIntoFree(
                       v22,
                       (0xAAAAAAAAAAAAAAABuLL * ((v31[6] + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFFFFE00uLL),
            !(_DWORD)result) )
      {
        result = MiFreeLargeZeroPages(v8, (__int64)v31, 1u, 0LL);
      }
      if ( !a2 )
        break;
      MiInitializeLargePfnList(v31);
      ExAcquireSpinLockExclusive(v17);
    }
  }
  else
  {
LABEL_35:
    ExReleaseSpinLockExclusiveFromDpcLevel(v17);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v18 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v29 = v28->SchedulerAssist;
          v15 = ((unsigned int)result & v29[5]) == 0;
          v29[5] &= result;
          if ( v15 )
            result = KiRemoveSystemWorkPriorityKick((__int64)v28);
        }
      }
    }
    __writecr8(v18);
  }
  return result;
}
