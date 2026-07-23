/*
 * XREFs of MiFreePageFileHashPfns @ 0x140261204
 * Callers:
 *     MiScanPagefiles @ 0x14026128C (MiScanPagefiles.c)
 *     MiDeletePagefile @ 0x1408D05EC (MiDeletePagefile.c)
 * Callees:
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedFlushSList @ 0x140407B90 (RtlpInterlockedFlushSList.c)
 *     MiFreePageFileHashPfn @ 0x14055D7BC (MiFreePageFileHashPfn.c)
 */

unsigned __int64 __fastcall MiFreePageFileHashPfns(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 result; // rax
  _SLIST_HEADER **v6; // r15
  __int64 v7; // rbp
  _SLIST_HEADER *v8; // rcx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r12
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  bool v14; // zf
  unsigned __int64 v15; // r8
  struct _KPRCB *v16; // r9
  __int64 CachedResidentAvailable; // rdx

  v4 = 0LL;
  result = *(unsigned int *)(a1 + 6936);
  if ( (_DWORD)result )
  {
    v6 = (_SLIST_HEADER **)(a1 + 6944);
    v7 = (unsigned int)result;
    do
    {
      v8 = *v6 + 5;
      if ( LOWORD(v8->Alignment) )
      {
        result = (unsigned __int64)RtlpInterlockedFlushSList(v8);
        v9 = result;
        if ( result )
        {
          do
          {
            v10 = *(_QWORD *)v9;
            v11 = (unsigned __int8)MiLockPageInline(v9);
            MiFreePageFileHashPfn((__int64)(v9 + 0x58000000000LL) / 48);
            _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            result = (unsigned int)KiIrqlFlags;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
                  v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
                  a3 = (unsigned int)result & SchedulerAssist[5];
                  SchedulerAssist[5] = a3;
                  if ( v14 )
                    result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
            }
            __writecr8(v11);
            ++v4;
            v9 = v10;
          }
          while ( v10 );
        }
      }
      ++v6;
      --v7;
    }
    while ( v7 );
    if ( v4 )
    {
      MiReturnCommit(a1, v4, a3, SchedulerAssist);
      result = (unsigned __int64)&MiSystemPartition;
      v15 = v4;
      if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      {
        v16 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v16->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          for ( ; v4 + CachedResidentAvailable <= 0x100; result = v4 + (int)result )
          {
            if ( v4 >= 0x80000 )
              break;
            result = (unsigned int)_InterlockedCompareExchange(
                                     (volatile signed __int32 *)&v16->CachedResidentAvailable,
                                     CachedResidentAvailable + v4,
                                     CachedResidentAvailable);
            v14 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
            CachedResidentAvailable = (int)result;
            if ( v14 )
              goto LABEL_29;
            if ( (_DWORD)result == -1 )
              break;
          }
          if ( (int)CachedResidentAvailable > 192 )
          {
            result = (unsigned int)_InterlockedCompareExchange(
                                     (volatile signed __int32 *)&v16->CachedResidentAvailable,
                                     192,
                                     CachedResidentAvailable);
            if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
            {
              result = (unsigned int)(CachedResidentAvailable - 192);
              v15 = v4 + (int)result;
            }
          }
        }
      }
      if ( v15 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v15);
LABEL_29:
      _InterlockedExchangeAdd64(&qword_140C4F868, -(__int64)v4);
    }
  }
  return result;
}
