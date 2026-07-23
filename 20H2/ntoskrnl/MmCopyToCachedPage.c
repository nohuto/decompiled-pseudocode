/*
 * XREFs of MmCopyToCachedPage @ 0x1402B4910
 * Callers:
 *     CcMapAndCopyInToCache @ 0x1402B4EC0 (CcMapAndCopyInToCache.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiMakePageAvoidRead @ 0x1402A77C0 (MiMakePageAvoidRead.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402AC310 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiControlAreaUsingExtents @ 0x1402B5EA0 (MiControlAreaUsingExtents.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402CA9B0 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x1402CACB8 (MiAddLockedPageCharge.c)
 *     MiUnlinkStandbyPfn @ 0x14030FD50 (MiUnlinkStandbyPfn.c)
 *     MiDirtySystemCachePte @ 0x14031A254 (MiDirtySystemCachePte.c)
 *     MiLockLeafPage @ 0x14034A220 (MiLockLeafPage.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiMakeSystemCachePteValid @ 0x140356A3C (MiMakeSystemCachePteValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     RtlCopyMemoryNonTemporal @ 0x140405BF0 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     MiMapFrame @ 0x140535484 (MiMapFrame.c)
 *     MiMapSystemCachePage @ 0x1405355A4 (MiMapSystemCachePage.c)
 *     MiFreeTransitionPageHeatList @ 0x14055DB24 (MiFreeTransitionPageHeatList.c)
 *     MiMakeTransitionHeatBatch @ 0x14055DFA0 (MiMakeTransitionHeatBatch.c)
 *     MiProcessTransitionHeatBatch @ 0x14055E32C (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x14055E590 (MiReplenishTransitionPageHeatList.c)
 *     MiMapCacheExceptionFilter @ 0x1408CAC2C (MiMapCacheExceptionFilter.c)
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
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // r9
  unsigned __int64 v14; // rsi
  unsigned int v15; // r15d
  ULONG_PTR v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rdi
  unsigned __int8 v21; // r14
  __int64 v22; // rax
  int PageAvoidRead; // eax
  struct _LIST_ENTRY *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r13
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  int v32; // r14d
  int v33; // r15d
  _SLIST_ENTRY *v34; // rdi
  unsigned __int64 v35; // r14
  int v36; // ebx
  __int64 v37; // rcx
  int v38; // edi
  void *v39; // rcx
  _QWORD *v40; // rsi
  __int64 v41; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  struct _LIST_ENTRY *v45; // rdx
  __int64 v46; // rax
  struct _LIST_ENTRY *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  int v50; // eax
  int v51; // eax
  unsigned __int64 v52; // rbx
  struct _LIST_ENTRY *v53; // rdx
  __int64 v54; // rax
  unsigned __int64 v55; // rbx
  struct _LIST_ENTRY *v56; // r8
  __int64 v57; // rax
  __int64 v58; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v60; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v63; // eax
  bool v64; // zf
  unsigned __int8 v65[4]; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v66; // [rsp+44h] [rbp-84h] BYREF
  _QWORD *v67; // [rsp+48h] [rbp-80h]
  __int64 v68; // [rsp+50h] [rbp-78h] BYREF
  __int64 v69; // [rsp+58h] [rbp-70h]
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-68h]
  unsigned __int64 v71; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v72; // [rsp+70h] [rbp-58h] BYREF
  __int64 v73; // [rsp+78h] [rbp-50h]
  __int64 v74; // [rsp+80h] [rbp-48h]

  v5 = a4;
  BugCheckParameter4 = a3;
  v7 = BugCheckParameter1;
  v68 = 0LL;
  v66 = 0;
  v69 = 0LL;
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
      v43 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
      v44 = v9 | 0x20;
      if ( (v43 & 0x20) == 0 )
        v44 = v9;
      v9 = v44;
      if ( (v43 & 0x42) != 0 )
        v9 = v44 | 0x42;
    }
  }
  v72 = v9;
  if ( MiPteInShadowRange((unsigned __int64)&v72)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v25 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v25 )
    {
      v26 = *((_QWORD *)&v25->Flink + (((unsigned __int64)&v72 >> 3) & 0x1FF));
      v27 = v9 | 0x20;
      if ( (v26 & 0x20) == 0 )
        v27 = v9;
      v9 = v27;
      if ( (v26 & 0x42) != 0 )
        v9 = v27 | 0x42;
    }
  }
  v10 = *(_QWORD *)(48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16);
  if ( v10 )
    v10 += 40 * ((v7 >> 18) & 7);
  v11 = *(_QWORD *)(v10 + 24);
  v12 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v11 & 1) == 0 )
    v12 = (__int64 *)v11;
  v74 = *v12;
  v13 = *(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(v74 + 60) & 0x3FF)) + 7232LL;
  v73 = v13;
  if ( BugCheckParameter4 + v5 > 0x1000 || BugCheckParameter4 + v5 < v5 )
    KeBugCheckEx(0x1Au, 0x776uLL, v7, v5, BugCheckParameter4);
  v14 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = a5;
  if ( (a5 & 4) != 0 && ((a3 & 0x3F) != 0 || (v5 & 0x3F) != 0) )
    return 3221226612LL;
  if ( (a5 & 8) != 0 )
  {
    v16 = MiReservePtes((__int64)&qword_140C4EDC0, 1u);
    v67 = (_QWORD *)v16;
    if ( !v16 )
      return 3221225626LL;
    v13 = v73;
  }
  else
  {
    v16 = 0LL;
    v67 = 0LL;
  }
  v17 = *(_QWORD *)v14;
  if ( v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v17 & 1) != 0
      && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
    {
      v45 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v45 )
      {
        v46 = *((_QWORD *)&v45->Flink + ((v14 >> 3) & 0x1FF));
        LOBYTE(v45) = v17 | 0x20;
        if ( (v46 & 0x20) == 0 )
          v45 = *(struct _LIST_ENTRY **)v14;
        LOBYTE(v17) = (_BYTE)v45;
        if ( (v46 & 0x42) != 0 )
          LOBYTE(v17) = (unsigned __int8)v45 | 0x42;
      }
    }
    v16 = (ULONG_PTR)v67;
  }
  if ( (v17 & 1) == 0 )
    goto LABEL_14;
  v41 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v16 )
  {
    MiDirtySystemCachePte(v13, v41);
    goto LABEL_72;
  }
  v37 = MiMapSystemCachePage(v16, v41, a5);
  v69 = v37;
  if ( !v37 )
  {
    v16 = (ULONG_PTR)v67;
LABEL_14:
    v18 = *(_QWORD *)v14;
    if ( v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v18 & 1) != 0
        && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
      {
        v47 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v47 )
        {
          v48 = *((_QWORD *)&v47->Flink + ((v14 >> 3) & 0x1FF));
          v49 = v18 | 0x20;
          if ( (v48 & 0x20) == 0 )
            v49 = *(_QWORD *)v14;
          v18 = v49;
          if ( (v48 & 0x42) != 0 )
            v18 = v49 | 0x42;
        }
      }
      v16 = (ULONG_PTR)v67;
    }
    if ( (v18 & 1) != 0 )
    {
      if ( !v16 )
      {
        v37 = v69;
        goto LABEL_73;
      }
      v37 = MiMapSystemCachePage(v16, ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, a5);
      v69 = v37;
      if ( v37 )
        goto LABEL_73;
    }
    if ( qword_140C4DDC0 )
    {
      if ( (v18 & 0x10) != 0 )
        v18 &= ~0x10uLL;
      else
        v18 &= ~qword_140C4DDC0;
    }
    v19 = v18 >> 16;
    while ( 1 )
    {
      while ( 1 )
      {
        v20 = 0LL;
        v21 = 17;
        v65[0] = 17;
        v22 = MI_READ_PTE_LOCK_FREE(v19);
        v68 = v22;
        if ( (v22 & 1) == 0 && (v22 & 0x400) != 0 )
          goto LABEL_22;
        while ( 1 )
        {
          v20 = MiLockProtoPoolPage(v19, v65);
          if ( v20 )
            break;
          MmAccessFault(2uLL, v19, 0, 0LL);
        }
        v28 = MiLockLeafPage(v19, 0LL);
        v29 = MI_READ_PTE_LOCK_FREE(v19);
        v68 = v29;
        if ( v28 )
          break;
        v21 = v65[0];
        v7 = BugCheckParameter1;
LABEL_22:
        if ( v20 )
          MiUnlockProtoPoolPage(v20, v21);
        if ( (unsigned int)MiControlAreaUsingExtents(v74) )
        {
          v38 = MmAccessFault(0LL, v7, 0, 0LL);
          v66 = v38;
          if ( v38 < 0 )
            goto LABEL_68;
        }
        else
        {
          v5 = a4;
          PageAvoidRead = MiMakePageAvoidRead(v19, a2, a3, a4, v15, (unsigned __int64)&v68, &v66);
          if ( !PageAvoidRead )
            return v66;
          v50 = PageAvoidRead - 1;
          if ( v50 )
          {
            v51 = v50 - 2;
            if ( !v51 )
            {
              v36 = 0;
              goto LABEL_61;
            }
            if ( v51 != 1 )
            {
              v36 = 1;
LABEL_61:
              MiMakeSystemCachePteValid(v73, v14, v68, v15);
              v37 = v69;
              goto LABEL_62;
            }
LABEL_72:
            v37 = v69;
            goto LABEL_73;
          }
        }
      }
      if ( (v29 & 1) != 0 )
        break;
      v30 = *(_QWORD *)(v28 + 16);
      if ( (v30 & 0x400) != 0 )
        v31 = v30 >> 11;
      else
        v31 = v30 >> 3;
      if ( (v31 & 1) != 0
        && (ListEntry = (PSLIST_ENTRY)MiMakeTransitionHeatBatch(v28, 0LL, 0LL), ListEntry == (PSLIST_ENTRY)-1LL) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v20, v65[0]);
        MiReplenishTransitionPageHeatList();
        ListEntry = 0LL;
        v7 = BugCheckParameter1;
      }
      else
      {
        v32 = MiUnlinkStandbyPfn(v19, v15);
        if ( !v32 )
          v68 = MI_READ_PTE_LOCK_FREE(v19);
LABEL_53:
        v66 = 0;
        v33 = 0;
        if ( v67 && !v32 && !(unsigned int)MiAddLockedPageCharge(v28, 0LL) )
        {
          v66 = -1073741670;
          v33 = -1073741670;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v20, v65[0]);
        v34 = ListEntry;
        if ( ListEntry )
        {
          MiProcessTransitionHeatBatch(ListEntry);
          MiFreeTransitionPageHeatList(v34);
          ListEntry = 0LL;
        }
        if ( v33 < 0 )
        {
          v38 = v66;
          goto LABEL_68;
        }
        v15 = a5;
        v7 = BugCheckParameter1;
        if ( v32 != 1 )
        {
          if ( v32 != 2 )
          {
            v35 = (unsigned __int64)v67;
            if ( v67 )
            {
              v52 = v68;
              if ( MiPteInShadowRange((unsigned __int64)&v68)
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v52 & 1) != 0
                && ((v52 & 0x20) == 0 || (v52 & 0x42) == 0) )
              {
                v53 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v53 )
                {
                  v54 = *((_QWORD *)&v53->Flink + (((unsigned __int64)&v68 >> 3) & 0x1FF));
                  if ( (v54 & 0x20) != 0 )
                    v52 |= 0x20uLL;
                  if ( (v54 & 0x42) != 0 )
                    v52 |= 0x42uLL;
                }
                else
                {
                  v52 = v68;
                }
              }
              v69 = MiMapFrame(v35, (v52 >> 12) & 0xFFFFFFFFFLL);
            }
            v7 = BugCheckParameter1;
            v5 = a4;
            v36 = 1;
            goto LABEL_61;
          }
          v7 = BugCheckParameter1;
          v38 = MmAccessFault(0LL, BugCheckParameter1, 0, 0LL);
          v66 = v38;
          if ( v38 < 0 )
            goto LABEL_68;
        }
      }
    }
    *(_QWORD *)(v28 + 24) ^= (((*(_QWORD *)(v28 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(v28 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    v32 = 0;
    goto LABEL_53;
  }
LABEL_73:
  v36 = 1;
LABEL_62:
  v38 = 0;
  v66 = 0;
  if ( v36 )
  {
    if ( !v37 )
      v37 = v7;
    v39 = (void *)(a3 + v37);
    if ( (v15 & 4) != 0 )
      RtlCopyMemoryNonTemporal(v39, a2, v5);
    else
      memmove(v39, a2, v5);
  }
LABEL_68:
  v40 = v67;
  if ( v67 )
  {
    v55 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v67);
    v71 = v55;
    MiReleasePtes((__int64)&qword_140C4EDC0, v40, 1u);
    if ( (v55 & 1) != 0 )
    {
      if ( MiPteInShadowRange((unsigned __int64)&v71)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v55 & 0x20) == 0 || (v55 & 0x42) == 0) )
      {
        v56 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v56 )
        {
          v57 = *((_QWORD *)&v56->Flink + (((unsigned __int64)&v71 >> 3) & 0x1FF));
          if ( (v57 & 0x20) != 0 )
            v55 |= 0x20uLL;
          if ( (v57 & 0x42) != 0 )
            v55 |= 0x42uLL;
        }
        else
        {
          v55 = v71;
        }
      }
      v58 = 48 * ((v55 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v65[0] = MiLockPageInline(v58);
      MiRemoveLockedPageChargeAndDecRef(v58);
      _InterlockedAnd64((volatile signed __int64 *)(v58 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v60 = v65[0];
        if ( v65[0] <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v60 = v65[0];
          v63 = ~(unsigned __int16)(-1LL << (v65[0] + 1));
          v64 = (v63 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v63;
          if ( v64 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v60 = v65[0];
      }
      __writecr8(v60);
      return v66;
    }
  }
  return (unsigned int)v38;
}
