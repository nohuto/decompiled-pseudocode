/*
 * XREFs of MmCopyToCachedPage @ 0x14033C250
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14033C9C0 (CcMapAndCopyInToCache.c)
 * Callees:
 *     MiUnlinkStandbyPfn @ 0x14022EB40 (MiUnlinkStandbyPfn.c)
 *     MiDirtySystemCachePte @ 0x14023ADA8 (MiDirtySystemCachePte.c)
 *     MiLockLeafPage @ 0x140257C70 (MiLockLeafPage.c)
 *     MiMakeSystemCachePteValid @ 0x1402A384C (MiMakeSystemCachePteValid.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x140325158 (MiAddLockedPageCharge.c)
 *     MiMakePageAvoidRead @ 0x14032EDC0 (MiMakePageAvoidRead.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiControlAreaUsingExtents @ 0x14033D9A0 (MiControlAreaUsingExtents.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     RtlCopyMemoryNonTemporal @ 0x140408440 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MiMapFrame @ 0x1405371C4 (MiMapFrame.c)
 *     MiMapSystemCachePage @ 0x1405372E4 (MiMapSystemCachePage.c)
 *     MiFreeTransitionPageHeatList @ 0x14055F834 (MiFreeTransitionPageHeatList.c)
 *     MiMakeTransitionHeatBatch @ 0x14055FCB0 (MiMakeTransitionHeatBatch.c)
 *     MiProcessTransitionHeatBatch @ 0x14056003C (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x1405602A0 (MiReplenishTransitionPageHeatList.c)
 *     MiMapCacheExceptionFilter @ 0x1408C854C (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MmCopyToCachedPage(
        ULONG_PTR BugCheckParameter1,
        void *a2,
        unsigned int a3,
        size_t a4,
        unsigned int a5)
{
  ULONG_PTR v5; // r14
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG_PTR v7; // r13
  ULONG_PTR v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // r9
  unsigned __int64 v15; // rsi
  char v16; // r15
  ULONG_PTR v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rdi
  unsigned __int8 v22; // r14
  __int64 v23; // rax
  int PageAvoidRead; // eax
  struct _LIST_ENTRY *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r13
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  int v33; // r14d
  int v34; // r15d
  _SLIST_ENTRY *v35; // rdi
  unsigned __int64 v36; // r14
  int v37; // ebx
  __int64 v38; // rcx
  int v39; // edi
  void *v40; // rcx
  _QWORD *v41; // rsi
  __int64 v42; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  struct _LIST_ENTRY *v46; // rdx
  __int64 v47; // rax
  struct _LIST_ENTRY *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  int v51; // eax
  int v52; // eax
  unsigned __int64 v53; // rbx
  struct _LIST_ENTRY *v54; // rdx
  __int64 v55; // rax
  unsigned __int64 v56; // rbx
  __int64 v57; // rdx
  struct _LIST_ENTRY *v58; // r8
  _DWORD *v59; // r9
  __int64 v60; // rax
  __int64 v61; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v63; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v66; // eax
  bool v67; // zf
  unsigned __int8 v68[4]; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v69; // [rsp+44h] [rbp-84h] BYREF
  _QWORD *v70; // [rsp+48h] [rbp-80h]
  unsigned __int64 v71; // [rsp+50h] [rbp-78h] BYREF
  __int64 v72; // [rsp+58h] [rbp-70h]
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-68h]
  unsigned __int64 v74; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v75; // [rsp+70h] [rbp-58h] BYREF
  __int64 v76; // [rsp+78h] [rbp-50h]
  __int64 v77; // [rsp+80h] [rbp-48h]

  v5 = a4;
  BugCheckParameter4 = a3;
  v7 = BugCheckParameter1;
  v71 = 0LL;
  v69 = 0;
  v72 = 0LL;
  ListEntry = 0LL;
  v8 = ((BugCheckParameter1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v9 = *(_QWORD *)v8;
  if ( v8 >= 0xFFFFF6FB7DBED000uLL
    && v8 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v44 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
      v45 = v9 | 0x20;
      if ( (v44 & 0x20) == 0 )
        v45 = v9;
      v9 = v45;
      if ( (v44 & 0x42) != 0 )
        v9 = v45 | 0x42;
    }
  }
  v75 = v9;
  if ( (unsigned int)MiPteInShadowRange(&v75)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v26 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v26 )
    {
      v27 = *((_QWORD *)&v26->Flink + (((unsigned __int64)&v75 >> 3) & 0x1FF));
      v28 = v9 | 0x20;
      if ( (v27 & 0x20) == 0 )
        v28 = v9;
      v9 = v28;
      if ( (v27 & 0x42) != 0 )
        v9 = v28 | 0x42;
    }
  }
  v11 = *(_QWORD *)(48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16);
  if ( v11 )
    v11 += 40 * ((v7 >> 18) & 7);
  v12 = *(_QWORD *)(v11 + 24);
  v13 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v12 & 1) == 0 )
    v13 = (__int64 *)v12;
  v77 = *v13;
  v14 = *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(v77 + 60) & 0x3FF)) + 7232LL;
  v76 = v14;
  if ( BugCheckParameter4 + v5 > 0x1000 || BugCheckParameter4 + v5 < v5 )
    KeBugCheckEx(0x1Au, 0x776uLL, v7, v5, BugCheckParameter4);
  v15 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = a5;
  if ( (a5 & 4) != 0 && ((a3 & 0x3F) != 0 || (v5 & 0x3F) != 0) )
    return 3221226612LL;
  if ( (a5 & 8) != 0 )
  {
    v17 = MiReservePtes((__int64)&qword_140C4EF80, 1u, v10, v14);
    v70 = (_QWORD *)v17;
    if ( !v17 )
      return 3221225626LL;
    v14 = v76;
  }
  else
  {
    v17 = 0LL;
    v70 = 0LL;
  }
  v18 = *(_QWORD *)v15;
  if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v18 & 1) != 0
      && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
    {
      v46 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v46 )
      {
        v47 = *((_QWORD *)&v46->Flink + ((v15 >> 3) & 0x1FF));
        LOWORD(v46) = v18 | 0x20;
        if ( (v47 & 0x20) == 0 )
          v46 = *(struct _LIST_ENTRY **)v15;
        LOWORD(v18) = (_WORD)v46;
        if ( (v47 & 0x42) != 0 )
          LOWORD(v18) = (unsigned __int16)v46 | 0x42;
      }
    }
    v17 = (ULONG_PTR)v70;
  }
  if ( (v18 & 1) == 0 )
    goto LABEL_14;
  v42 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v17 )
  {
    MiDirtySystemCachePte(v14, v42, v18);
    goto LABEL_72;
  }
  v38 = MiMapSystemCachePage(v17, v42, a5);
  v72 = v38;
  if ( !v38 )
  {
    v17 = (ULONG_PTR)v70;
LABEL_14:
    v19 = *(_QWORD *)v15;
    if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v19 & 1) != 0
        && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
      {
        v48 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v48 )
        {
          v49 = *((_QWORD *)&v48->Flink + ((v15 >> 3) & 0x1FF));
          v50 = v19 | 0x20;
          if ( (v49 & 0x20) == 0 )
            v50 = *(_QWORD *)v15;
          v19 = v50;
          if ( (v49 & 0x42) != 0 )
            v19 = v50 | 0x42;
        }
      }
      v17 = (ULONG_PTR)v70;
    }
    if ( (v19 & 1) != 0 )
    {
      if ( !v17 )
      {
        v38 = v72;
        goto LABEL_73;
      }
      v38 = MiMapSystemCachePage(v17, ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, a5);
      v72 = v38;
      if ( v38 )
        goto LABEL_73;
    }
    if ( qword_140C4DF80 )
    {
      if ( (v19 & 0x10) != 0 )
        v19 &= ~0x10uLL;
      else
        v19 &= ~qword_140C4DF80;
    }
    v20 = v19 >> 16;
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = 0LL;
        v22 = 17;
        v68[0] = 17;
        v23 = MI_READ_PTE_LOCK_FREE(v20);
        v71 = v23;
        if ( (v23 & 1) == 0 && (v23 & 0x400) != 0 )
          goto LABEL_22;
        while ( 1 )
        {
          v21 = MiLockProtoPoolPage(v20, v68);
          if ( v21 )
            break;
          MmAccessFault(2uLL, v20, 0, 0LL);
        }
        v29 = MiLockLeafPage((unsigned __int64 *)v20, 0LL);
        v30 = MI_READ_PTE_LOCK_FREE(v20);
        v71 = v30;
        if ( v29 )
          break;
        v22 = v68[0];
        v7 = BugCheckParameter1;
LABEL_22:
        if ( v21 )
          MiUnlockProtoPoolPage(v21, v22);
        if ( (unsigned int)MiControlAreaUsingExtents(v77) )
        {
          v39 = MmAccessFault(0LL, v7, 0, 0LL);
          v69 = v39;
          if ( v39 < 0 )
            goto LABEL_68;
        }
        else
        {
          v5 = a4;
          PageAvoidRead = MiMakePageAvoidRead(v20, a2, a3, a4, v16, (unsigned __int64)&v71, &v69);
          if ( !PageAvoidRead )
            return v69;
          v51 = PageAvoidRead - 1;
          if ( v51 )
          {
            v52 = v51 - 2;
            if ( !v52 )
            {
              v37 = 0;
              goto LABEL_61;
            }
            if ( v52 != 1 )
            {
              v37 = 1;
LABEL_61:
              MiMakeSystemCachePteValid(v76, v15, v71, v16);
              v38 = v72;
              goto LABEL_62;
            }
LABEL_72:
            v38 = v72;
            goto LABEL_73;
          }
        }
      }
      if ( (v30 & 1) != 0 )
        break;
      v31 = *(_QWORD *)(v29 + 16);
      if ( (v31 & 0x400) != 0 )
        v32 = v31 >> 11;
      else
        v32 = v31 >> 3;
      if ( (v32 & 1) != 0
        && (ListEntry = (PSLIST_ENTRY)MiMakeTransitionHeatBatch(v29, 0LL, 0LL), ListEntry == (PSLIST_ENTRY)-1LL) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v21, v68[0]);
        MiReplenishTransitionPageHeatList();
        ListEntry = 0LL;
        v7 = BugCheckParameter1;
      }
      else
      {
        v33 = MiUnlinkStandbyPfn((__int64 *)v20, v16);
        if ( !v33 )
          v71 = MI_READ_PTE_LOCK_FREE(v20);
LABEL_53:
        v69 = 0;
        v34 = 0;
        if ( v70 && !v33 && !(unsigned int)MiAddLockedPageCharge(v29, 0) )
        {
          v69 = -1073741670;
          v34 = -1073741670;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v21, v68[0]);
        v35 = ListEntry;
        if ( ListEntry )
        {
          MiProcessTransitionHeatBatch(ListEntry);
          MiFreeTransitionPageHeatList(v35);
          ListEntry = 0LL;
        }
        if ( v34 < 0 )
        {
          v39 = v69;
          goto LABEL_68;
        }
        v16 = a5;
        v7 = BugCheckParameter1;
        if ( v33 != 1 )
        {
          if ( v33 != 2 )
          {
            v36 = (unsigned __int64)v70;
            if ( v70 )
            {
              v53 = v71;
              if ( (unsigned int)MiPteInShadowRange(&v71)
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v53 & 1) != 0
                && ((v53 & 0x20) == 0 || (v53 & 0x42) == 0) )
              {
                v54 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v54 )
                {
                  v55 = *((_QWORD *)&v54->Flink + (((unsigned __int64)&v71 >> 3) & 0x1FF));
                  if ( (v55 & 0x20) != 0 )
                    v53 |= 0x20uLL;
                  if ( (v55 & 0x42) != 0 )
                    v53 |= 0x42uLL;
                }
                else
                {
                  v53 = v71;
                }
              }
              v72 = MiMapFrame(v36, (v53 >> 12) & 0xFFFFFFFFFLL);
            }
            v7 = BugCheckParameter1;
            v5 = a4;
            v37 = 1;
            goto LABEL_61;
          }
          v7 = BugCheckParameter1;
          v39 = MmAccessFault(0LL, BugCheckParameter1, 0, 0LL);
          v69 = v39;
          if ( v39 < 0 )
            goto LABEL_68;
        }
      }
    }
    *(_QWORD *)(v29 + 24) ^= (((*(_QWORD *)(v29 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(v29 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    v33 = 0;
    goto LABEL_53;
  }
LABEL_73:
  v37 = 1;
LABEL_62:
  v39 = 0;
  v69 = 0;
  if ( v37 )
  {
    if ( !v38 )
      v38 = v7;
    v40 = (void *)(a3 + v38);
    if ( (v16 & 4) != 0 )
      RtlCopyMemoryNonTemporal(v40, a2, v5);
    else
      memmove(v40, a2, v5);
  }
LABEL_68:
  v41 = v70;
  if ( v70 )
  {
    v56 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v70);
    v74 = v56;
    MiReleasePtes((__int64)&qword_140C4EF80, v41, 1u);
    if ( (v56 & 1) != 0 )
    {
      if ( (unsigned int)MiPteInShadowRange(&v74) )
      {
        if ( (MiFlags & 0xC00000) != 0 && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
        {
          v57 = v56;
          if ( (v56 & 0x20) == 0 || (v56 & 0x42) == 0 )
          {
            v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v58 )
            {
              v60 = *((_QWORD *)&v58->Flink + (((unsigned __int64)&v74 >> 3) & 0x1FF));
              if ( (v60 & 0x20) != 0 )
                v56 |= 0x20uLL;
              if ( (v60 & 0x42) != 0 )
                v56 |= 0x42uLL;
            }
            else
            {
              v56 = v74;
            }
          }
        }
      }
      v61 = 48 * ((v56 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v68[0] = MiLockPageInline(v61, v57, (__int64)v58, v59);
      MiRemoveLockedPageChargeAndDecRef(v61);
      _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v63 = v68[0];
        if ( v68[0] <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v63 = v68[0];
          v66 = ~(unsigned __int16)(-1LL << (v68[0] + 1));
          v67 = (v66 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v66;
          if ( v67 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v63 = v68[0];
      }
      __writecr8(v63);
      return v69;
    }
  }
  return (unsigned int)v39;
}
