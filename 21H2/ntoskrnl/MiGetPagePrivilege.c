/*
 * XREFs of MiGetPagePrivilege @ 0x140313B20
 * Callers:
 *     MiClearPfnImageVerified @ 0x14023CC50 (MiClearPfnImageVerified.c)
 *     MiDeletePerSessionProtos @ 0x14025592C (MiDeletePerSessionProtos.c)
 *     MiMarkPfnVerified @ 0x14026C644 (MiMarkPfnVerified.c)
 *     MiReferencePageForModifiedWrite @ 0x14028C14C (MiReferencePageForModifiedWrite.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiWsleFree @ 0x1402C2AD0 (MiWsleFree.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiActivePageTradeable @ 0x1402EABF8 (MiActivePageTradeable.c)
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MiCombineCandidate @ 0x1403137B0 (MiCombineCandidate.c)
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 *     MiAllocateWsle @ 0x140322F10 (MiAllocateWsle.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     MiRevertValidPte @ 0x14032E130 (MiRevertValidPte.c)
 *     MiSetSystemCodeProtection @ 0x14033EF50 (MiSetSystemCodeProtection.c)
 *     MiPageMightBeZero @ 0x14033FFD4 (MiPageMightBeZero.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14038E608 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDbgWriteCheck @ 0x1403AD16C (MiDbgWriteCheck.c)
 *     MiProtectDriverSectionPte @ 0x140582320 (MiProtectDriverSectionPte.c)
 *     MmChangeImageProtection @ 0x1406F5800 (MmChangeImageProtection.c)
 * Callees:
 *     MiGetTopLevelPfn @ 0x14026B1C0 (MiGetTopLevelPfn.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPagePrivilege(ULONG_PTR BugCheckParameter2, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // rdi
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r10
  unsigned __int64 v14; // rdx
  int v15; // r11d
  unsigned __int64 v16; // r9
  unsigned int v17; // r14d
  unsigned __int64 v18; // rbp
  unsigned __int8 v19; // r15
  __int64 TopLevelPfn; // rax
  unsigned __int64 v21; // r13
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  bool v26; // zf

  v3 = a3;
  if ( (MiFlags & 0x1000) == 0 )
    return 0LL;
  v7 = *(_QWORD *)(BugCheckParameter2 + 40);
  if ( (((unsigned __int64)v7 >> 60) & 7) != 3 || (v7 & 0x20000000000000LL) != 0 )
    return 0LL;
  if ( a3 && (MiFlags & 0x4000) == 0 )
    v3 = 0LL;
  v8 = *(_QWORD *)(BugCheckParameter2 + 8);
  v9 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
  if ( v7 >= 0 )
  {
    if ( (MiFlags & 0x20000) != 0 )
    {
      v17 = 17;
      if ( (unsigned __int64)((__int64)(v9 << 25) >> 16) < 0xFFFF800000000000uLL )
        return 2;
    }
    else if ( v8 )
    {
      v18 = (__int64)(v9 << 25) >> 16;
      if ( v18 < 0xFFFF800000000000uLL )
      {
        v17 = 20;
        if ( v3 )
        {
          if ( a2 )
            v19 = 17;
          else
            v19 = MiLockPageInline(BugCheckParameter2);
          TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
          v21 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !a2 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && v19 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v25 = ~(unsigned __int16)(-1LL << (v19 + 1));
                  v26 = (v25 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v25;
                  if ( v26 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
            }
            __writecr8(v19);
          }
          if ( *(_QWORD *)(v21 + 992) )
          {
            *v3 = v18;
            v3[1] = *(_QWORD *)(v21 + 992);
          }
          else
          {
            return 0;
          }
        }
      }
      else
      {
        v17 = 1;
        if ( (((unsigned __int8)*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 2) == 0 )
          v17 = 64;
        if ( v3 )
        {
          *v3 = v18;
          v3[1] = 0LL;
        }
      }
    }
    else
    {
      v17 = 4;
      if ( v3 )
      {
        *v3 = 0LL;
        v3[1] = 0LL;
      }
    }
    return v17;
  }
  else
  {
    v10 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (v10 & 0x400) != 0 )
    {
      v11 = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( qword_140C50780 && (v10 & 0x10) == 0 )
        v11 = ~qword_140C50780 & v10;
      v12 = v11 >> 16;
      v13 = *(_QWORD *)v12;
      if ( (*(_DWORD *)(*(_QWORD *)v12 + 56LL) & 0x20) == 0 )
        return 2LL;
      v14 = *(_QWORD *)(v12 + 8);
      if ( v9 >= v14 && v9 < v14 + 8LL * *(unsigned int *)(v12 + 44) )
      {
        v15 = *(_DWORD *)(v13 + 92);
        if ( (v15 & 0xC0000) != 0 && (v15 & 0x20000) != 0 && v12 != v13 + 128 )
          return 40LL;
        v16 = v10 >> 5;
        if ( (MiFlags & 0x20000) != 0 )
        {
          result = 2LL;
          if ( (v15 & 0xC0000) == 0 )
            goto LABEL_21;
          result = 10LL;
          if ( (v16 & 2) == 0 )
            goto LABEL_21;
LABEL_23:
          result = 11LL;
LABEL_21:
          if ( v3 )
          {
            v3[1] = *(_QWORD *)(*(_QWORD *)(v13 + 96) + 56LL);
            *v3 = (__int64)(v9 - *(_QWORD *)(v13 + 136)) >> 3 << 12;
          }
          return result;
        }
        if ( (v15 & 0xC0000) != 0 )
        {
          result = 8LL;
          if ( (v16 & 2) == 0 )
            goto LABEL_21;
          goto LABEL_23;
        }
      }
      return 0LL;
    }
    result = 16 * (((unsigned int)MiFlags >> 17) & 1) + 3;
    if ( v3 )
    {
      *v3 = 0LL;
      v3[1] = 0LL;
    }
  }
  return result;
}
