/*
 * XREFs of MiFreePageFileHashPfns @ 0x1402402EC
 * Callers:
 *     MiScanPagefiles @ 0x1402402B8 (MiScanPagefiles.c)
 *     MiDeletePagefile @ 0x1408CBB3C (MiDeletePagefile.c)
 * Callees:
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedFlushSList @ 0x1403FDDE0 (RtlpInterlockedFlushSList.c)
 *     MiFreePageFileHashPfn @ 0x140557A8C (MiFreePageFileHashPfn.c)
 */

unsigned __int64 __fastcall MiFreePageFileHashPfns(__int64 a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 result; // rax
  _SLIST_HEADER **v3; // r15
  __int64 v4; // rbp
  _SLIST_HEADER *v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r12
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf
  unsigned __int64 v14; // r8
  struct _KPRCB *v15; // r9
  __int64 CachedResidentAvailable; // rdx

  v1 = 0LL;
  result = *(unsigned int *)(a1 + 6936);
  if ( (_DWORD)result )
  {
    v3 = (_SLIST_HEADER **)(a1 + 6944);
    v4 = (unsigned int)result;
    do
    {
      v5 = *v3 + 5;
      if ( LOWORD(v5->Alignment) )
      {
        result = (unsigned __int64)RtlpInterlockedFlushSList(v5);
        v7 = result;
        if ( result )
        {
          do
          {
            v8 = *(_QWORD *)v7;
            v9 = (unsigned __int8)MiLockPageInline(
                                    v7,
                                    (unsigned __int128)((__int64)(v7 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
                                    v6);
            MiFreePageFileHashPfn((__int64)(v7 + 0x58000000000LL) / 48);
            _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            result = (unsigned int)KiIrqlFlags;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
                  v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
                  v6 = (unsigned int)result & SchedulerAssist[5];
                  SchedulerAssist[5] = v6;
                  if ( v13 )
                    result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
            }
            __writecr8(v9);
            ++v1;
            v7 = v8;
          }
          while ( v8 );
        }
      }
      ++v3;
      --v4;
    }
    while ( v4 );
    if ( v1 )
    {
      MiReturnCommit(a1, v1);
      result = (unsigned __int64)&MiSystemPartition;
      v14 = v1;
      if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      {
        v15 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v15->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          for ( ; v1 + CachedResidentAvailable <= 0x100; result = v1 + (int)result )
          {
            if ( v1 >= 0x80000 )
              break;
            result = (unsigned int)_InterlockedCompareExchange(
                                     (volatile signed __int32 *)&v15->CachedResidentAvailable,
                                     CachedResidentAvailable + v1,
                                     CachedResidentAvailable);
            v13 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
            CachedResidentAvailable = (int)result;
            if ( v13 )
              goto LABEL_29;
            if ( (_DWORD)result == -1 )
              break;
          }
          if ( (int)CachedResidentAvailable > 192 )
          {
            result = (unsigned int)_InterlockedCompareExchange(
                                     (volatile signed __int32 *)&v15->CachedResidentAvailable,
                                     192,
                                     CachedResidentAvailable);
            if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
            {
              result = (unsigned int)(CachedResidentAvailable - 192);
              v14 = v1 + (int)result;
            }
          }
        }
      }
      if ( v14 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v14);
LABEL_29:
      _InterlockedExchangeAdd64(&qword_140C4F768, -(__int64)v1);
    }
  }
  return result;
}
