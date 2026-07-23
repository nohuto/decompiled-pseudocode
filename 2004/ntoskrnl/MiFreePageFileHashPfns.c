/*
 * XREFs of MiFreePageFileHashPfns @ 0x1402F35EC
 * Callers:
 *     MiScanPagefiles @ 0x1402F35B8 (MiScanPagefiles.c)
 *     MiDeletePagefile @ 0x1408CCE8C (MiDeletePagefile.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedFlushSList @ 0x1403FF070 (RtlpInterlockedFlushSList.c)
 *     MiFreePageFileHashPfn @ 0x1405580DC (MiFreePageFileHashPfn.c)
 */

unsigned __int64 __fastcall MiFreePageFileHashPfns(__int64 a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 result; // rax
  _SLIST_HEADER **v3; // r15
  __int64 v4; // rbp
  _SLIST_HEADER *v5; // rcx
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r12
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
  unsigned __int64 v13; // r8
  struct _KPRCB *v14; // r9
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
        v6 = result;
        if ( result )
        {
          do
          {
            v7 = *(_QWORD *)v6;
            v8 = (unsigned __int8)MiLockPageInline(v6);
            MiFreePageFileHashPfn((__int64)(v6 + 0x58000000000LL) / 48);
            _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            result = (unsigned int)KiIrqlFlags;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
                  v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= result;
                  if ( v12 )
                    result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
            }
            __writecr8(v8);
            ++v1;
            v6 = v7;
          }
          while ( v7 );
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
      v13 = v1;
      if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      {
        v14 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v14->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          for ( ; v1 + CachedResidentAvailable <= 0x100; result = v1 + (int)result )
          {
            if ( v1 >= 0x80000 )
              break;
            result = (unsigned int)_InterlockedCompareExchange(
                                     (volatile signed __int32 *)&v14->CachedResidentAvailable,
                                     CachedResidentAvailable + v1,
                                     CachedResidentAvailable);
            v12 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
            CachedResidentAvailable = (int)result;
            if ( v12 )
              goto LABEL_29;
            if ( (_DWORD)result == -1 )
              break;
          }
          if ( (int)CachedResidentAvailable > 192 )
          {
            result = (unsigned int)_InterlockedCompareExchange(
                                     (volatile signed __int32 *)&v14->CachedResidentAvailable,
                                     192,
                                     CachedResidentAvailable);
            if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
            {
              result = (unsigned int)(CachedResidentAvailable - 192);
              v13 = v1 + (int)result;
            }
          }
        }
      }
      if ( v13 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v13);
LABEL_29:
      _InterlockedExchangeAdd64(&qword_140C4F628, -(__int64)v1);
    }
  }
  return result;
}
