/*
 * XREFs of MiGetPagePrivilege @ 0x140333440
 * Callers:
 *     MiClearPfnImageVerified @ 0x140220654 (MiClearPfnImageVerified.c)
 *     MiTradeActivePage @ 0x1402347D0 (MiTradeActivePage.c)
 *     MiMarkPfnVerified @ 0x140236C14 (MiMarkPfnVerified.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiReferencePageForModifiedWrite @ 0x140277E5C (MiReferencePageForModifiedWrite.c)
 *     MiSetSystemCodeProtection @ 0x140297B68 (MiSetSystemCodeProtection.c)
 *     MiAllocateWsle @ 0x1402B65C0 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x1402B8690 (MiCompleteProtoPteFault.c)
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     MiWsleFree @ 0x140332C20 (MiWsleFree.c)
 *     MiRevertValidPte @ 0x14033F050 (MiRevertValidPte.c)
 *     MiCombineCandidate @ 0x140369950 (MiCombineCandidate.c)
 *     MiPageMightBeZero @ 0x14036A034 (MiPageMightBeZero.c)
 *     MiDbgWriteCheck @ 0x1405468FC (MiDbgWriteCheck.c)
 *     MmChangeImageProtection @ 0x1406A80B0 (MmChangeImageProtection.c)
 * Callees:
 *     MiGetTopLevelPfn @ 0x140258490 (MiGetTopLevelPfn.c)
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiGetPagePrivilege(ULONG_PTR BugCheckParameter2, int a2, _QWORD *a3)
{
  __int16 v6; // r9
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _DWORD *v11; // r9
  unsigned int v12; // esi
  __int64 result; // rax
  unsigned int v14; // esi
  unsigned __int64 v15; // rdi
  unsigned __int8 v16; // r14
  __int64 TopLevelPfn; // rax
  unsigned __int64 v18; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf
  unsigned __int64 v24; // r10
  unsigned int v25; // r9d
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r11
  unsigned __int64 v29; // rcx
  int v30; // ecx
  unsigned __int64 v31; // r10
  int v32; // ecx
  unsigned int v33; // r8d
  int v34; // eax

  if ( (MiFlags & 0x2000) == 0
    || ((*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7) != 3
    || MiIsPfnFileOnly(BugCheckParameter2) )
  {
    return 0LL;
  }
  if ( a3 && (v6 & 0x8000) == 0 )
    a3 = 0LL;
  v7 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
  if ( (unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) )
  {
    v24 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (v24 & 0x400) == 0 )
    {
      v25 = 16 * (((unsigned int)v11 >> 18) & 1);
      if ( a3 )
      {
        *a3 = v10;
        a3[1] = v10;
      }
      return v25 + 3;
    }
    v26 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( qword_140C4DF80 && (v24 & 0x10) == 0 )
      v26 = ~qword_140C4DF80 & v24;
    v27 = v26 >> 16;
    v28 = *(_QWORD *)v27;
    if ( (*(_DWORD *)(*(_QWORD *)v27 + 56LL) & 0x20) == 0 )
      return 2LL;
    v29 = *(_QWORD *)(v27 + 8);
    if ( v7 >= v29 && v7 < v29 + 8LL * *(unsigned int *)(v27 + 44) )
    {
      v30 = *(_DWORD *)(v28 + 92);
      if ( (v30 & 0xC0000) != 0 && (v30 & 0x20000) != 0 && v27 != v28 + 128 )
        return 40LL;
      v31 = v24 >> 5;
      v32 = v30 & 0xC0000;
      if ( ((unsigned int)v11 & 0x40000) != 0 )
      {
        v33 = 2;
        if ( v32 )
        {
          v33 = 10;
          if ( (v31 & 2) != 0 )
            v33 = 11;
        }
LABEL_60:
        if ( a3 )
        {
          a3[1] = *(_QWORD *)(*(_QWORD *)(v28 + 96) + 56LL);
          *a3 = (__int64)(v7 - *(_QWORD *)(v28 + 136)) >> 3 << 12;
        }
        return v33;
      }
      if ( v32 )
      {
        v34 = 8;
        if ( (v31 & 2) != 0 )
          v34 = 11;
        v33 = v34;
        goto LABEL_60;
      }
    }
    return 0LL;
  }
  if ( ((unsigned int)v11 & 0x40000) != 0 )
  {
    v12 = 17;
    if ( (unsigned __int64)((__int64)(v7 << 25) >> 16) < 0xFFFF800000000000uLL )
      return 2;
    return v12;
  }
  else
  {
    if ( v8 )
    {
      v15 = (__int64)(v7 << 25) >> 16;
      if ( v15 < 0xFFFF800000000000uLL )
      {
        v14 = 20;
        if ( a3 )
        {
          if ( a2 )
            v16 = 17;
          else
            v16 = MiLockPageInline(v9, v8, v10, v11);
          TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
          v18 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !a2 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && v16 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v22 = ~(unsigned __int16)(-1LL << (v16 + 1));
                  v23 = (v22 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v22;
                  if ( v23 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
            }
            __writecr8(v16);
          }
          if ( *(_QWORD *)(v18 + 992) )
          {
            *a3 = v15;
            a3[1] = *(_QWORD *)(v18 + 992);
          }
          else
          {
            return 0;
          }
        }
      }
      else
      {
        v14 = 1;
        if ( (((unsigned __int8)*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 2) == 0 )
          v14 = 64;
        if ( a3 )
        {
          result = v14;
          *a3 = v15;
          a3[1] = v10;
          return result;
        }
      }
    }
    else
    {
      v14 = 4;
      if ( a3 )
      {
        result = 4LL;
        *a3 = v10;
        a3[1] = v10;
        return result;
      }
    }
    return v14;
  }
}
