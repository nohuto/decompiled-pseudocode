/*
 * XREFs of MmCopyToCachedPage @ 0x140331500
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140331C70 (CcMapAndCopyInToCache.c)
 * Callees:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiReservePtes @ 0x1402265B0 (MiReservePtes.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     MiLockLeafPage @ 0x140269CD0 (MiLockLeafPage.c)
 *     MiUnlinkStandbyPfn @ 0x1402B07E0 (MiUnlinkStandbyPfn.c)
 *     MiDirtySystemCachePte @ 0x1402BC818 (MiDirtySystemCachePte.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiLockProtoPoolPage @ 0x14031A100 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x14031A408 (MiAddLockedPageCharge.c)
 *     MiMakePageAvoidRead @ 0x140324070 (MiMakePageAvoidRead.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140328BC0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiControlAreaUsingExtents @ 0x140332C50 (MiControlAreaUsingExtents.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiMakeSystemCachePteValid @ 0x14035E91C (MiMakeSystemCachePteValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     RtlCopyMemoryNonTemporal @ 0x140408260 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     MiMapFrame @ 0x140536F84 (MiMapFrame.c)
 *     MiMapSystemCachePage @ 0x1405370A4 (MiMapSystemCachePage.c)
 *     MiFreeTransitionPageHeatList @ 0x14055F5F4 (MiFreeTransitionPageHeatList.c)
 *     MiMakeTransitionHeatBatch @ 0x14055FA70 (MiMakeTransitionHeatBatch.c)
 *     MiProcessTransitionHeatBatch @ 0x14055FDFC (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x140560060 (MiReplenishTransitionPageHeatList.c)
 *     MiMapCacheExceptionFilter @ 0x1408C83EC (MiMapCacheExceptionFilter.c)
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
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // r9
  unsigned __int64 v15; // rsi
  unsigned int v16; // r15d
  ULONG_PTR v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rdi
  unsigned __int8 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  int PageAvoidRead; // eax
  struct _LIST_ENTRY *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r13
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  int v37; // r14d
  int v38; // r15d
  __int64 v39; // rdx
  struct _SLIST_ENTRY *v40; // rdi
  unsigned __int64 v41; // r14
  int v42; // ebx
  __int64 v43; // rcx
  int v44; // edi
  void *v45; // rcx
  _QWORD *v46; // rsi
  __int64 v47; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v49; // rax
  struct _LIST_ENTRY *v50; // rdx
  __int64 v51; // rax
  struct _LIST_ENTRY *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  int v55; // eax
  int v56; // eax
  unsigned __int64 v57; // rbx
  struct _LIST_ENTRY *v58; // rdx
  __int64 v59; // rax
  unsigned __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rdx
  struct _LIST_ENTRY *v63; // r8
  _DWORD *v64; // r9
  __int64 v65; // rax
  __int64 v66; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v68; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v71; // eax
  bool v72; // zf
  unsigned __int8 v73[4]; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v74; // [rsp+44h] [rbp-84h] BYREF
  _QWORD *v75; // [rsp+48h] [rbp-80h]
  __int64 v76; // [rsp+50h] [rbp-78h] BYREF
  __int64 v77; // [rsp+58h] [rbp-70h]
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-68h]
  unsigned __int64 v79; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v80; // [rsp+70h] [rbp-58h] BYREF
  __int64 v81; // [rsp+78h] [rbp-50h]
  __int64 v82; // [rsp+80h] [rbp-48h]

  v5 = a4;
  BugCheckParameter4 = a3;
  v7 = BugCheckParameter1;
  v76 = 0LL;
  v74 = 0;
  v77 = 0LL;
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
      v49 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
      v8 = v9 | 0x20;
      if ( (v49 & 0x20) == 0 )
        v8 = v9;
      v9 = v8;
      if ( (v49 & 0x42) != 0 )
        v9 = v8 | 0x42;
    }
  }
  v80 = v9;
  if ( (unsigned int)MiPteInShadowRange(&v80, v8)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v28 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v28 )
    {
      v29 = *((_QWORD *)&v28->Flink + (((unsigned __int64)&v80 >> 3) & 0x1FF));
      v30 = v9 | 0x20;
      if ( (v29 & 0x20) == 0 )
        v30 = v9;
      v9 = v30;
      if ( (v29 & 0x42) != 0 )
        v9 = v30 | 0x42;
    }
  }
  v11 = *(_QWORD *)(48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16);
  if ( v11 )
    v11 += 40 * ((v7 >> 18) & 7);
  v12 = *(_QWORD *)(v11 + 24);
  v13 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v12 & 1) == 0 )
    v13 = (__int64 *)v12;
  v82 = *v13;
  v14 = *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(v82 + 60) & 0x3FF)) + 7232LL;
  v81 = v14;
  if ( BugCheckParameter4 + v5 > 0x1000 || BugCheckParameter4 + v5 < v5 )
    KeBugCheckEx(0x1Au, 0x776uLL, v7, v5, BugCheckParameter4);
  v15 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = a5;
  if ( (a5 & 4) != 0 && ((a3 & 0x3F) != 0 || (v5 & 0x3F) != 0) )
    return 3221226612LL;
  if ( (a5 & 8) != 0 )
  {
    v17 = MiReservePtes((__int64)&qword_140C4EF40, 1u, v10, v14);
    v75 = (_QWORD *)v17;
    if ( !v17 )
      return 3221225626LL;
    v14 = v81;
  }
  else
  {
    v17 = 0LL;
    v75 = 0LL;
  }
  v18 = *(_QWORD *)v15;
  if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v18 & 1) != 0
      && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
    {
      v50 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v50 )
      {
        v51 = *((_QWORD *)&v50->Flink + ((v15 >> 3) & 0x1FF));
        LOWORD(v50) = v18 | 0x20;
        if ( (v51 & 0x20) == 0 )
          v50 = *(struct _LIST_ENTRY **)v15;
        LOWORD(v18) = (_WORD)v50;
        if ( (v51 & 0x42) != 0 )
          LOWORD(v18) = (unsigned __int16)v50 | 0x42;
      }
    }
    v17 = (ULONG_PTR)v75;
  }
  if ( (v18 & 1) == 0 )
    goto LABEL_14;
  v47 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v17 )
  {
    MiDirtySystemCachePte(v14, v47, v18);
    goto LABEL_72;
  }
  v43 = MiMapSystemCachePage(v17, v47, a5);
  v77 = v43;
  if ( !v43 )
  {
    v17 = (ULONG_PTR)v75;
LABEL_14:
    v19 = *(_QWORD *)v15;
    if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v19 & 1) != 0
        && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
      {
        v52 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v52 )
        {
          v53 = *((_QWORD *)&v52->Flink + ((v15 >> 3) & 0x1FF));
          v54 = v19 | 0x20;
          if ( (v53 & 0x20) == 0 )
            v54 = *(_QWORD *)v15;
          v19 = v54;
          if ( (v53 & 0x42) != 0 )
            v19 = v54 | 0x42;
        }
      }
      v17 = (ULONG_PTR)v75;
    }
    if ( (v19 & 1) != 0 )
    {
      if ( !v17 )
      {
        v43 = v77;
        goto LABEL_73;
      }
      v43 = MiMapSystemCachePage(v17, ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, a5);
      v77 = v43;
      if ( v43 )
        goto LABEL_73;
    }
    if ( qword_140C4DF40 )
    {
      if ( (v19 & 0x10) != 0 )
        v19 &= ~0x10uLL;
      else
        v19 &= ~qword_140C4DF40;
    }
    v20 = v19 >> 16;
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = 0LL;
        v22 = 17;
        v73[0] = 17;
        v23 = MI_READ_PTE_LOCK_FREE(v20);
        v76 = v23;
        if ( (v23 & 1) == 0 && (v23 & 0x400) != 0 )
          goto LABEL_22;
        while ( 1 )
        {
          v21 = MiLockProtoPoolPage(v20, (__int64)v73);
          if ( v21 )
            break;
          MmAccessFault(2uLL, v20, 0, 0LL);
        }
        v33 = MiLockLeafPage((__int64 *)v20, 0, v31, v32);
        v34 = MI_READ_PTE_LOCK_FREE(v20);
        v76 = v34;
        if ( v33 )
          break;
        v22 = v73[0];
        v7 = BugCheckParameter1;
LABEL_22:
        if ( v21 )
          MiUnlockProtoPoolPage(v21, v22);
        if ( (unsigned int)MiControlAreaUsingExtents(v82, v24, v25) )
        {
          v44 = MmAccessFault(0LL, v7, 0, 0LL);
          v74 = v44;
          if ( v44 < 0 )
            goto LABEL_68;
        }
        else
        {
          v5 = a4;
          PageAvoidRead = MiMakePageAvoidRead(v20, a2, a3, a4, v16, (unsigned __int64)&v76, &v74);
          if ( !PageAvoidRead )
            return v74;
          v55 = PageAvoidRead - 1;
          if ( v55 )
          {
            v56 = v55 - 2;
            if ( !v56 )
            {
              v42 = 0;
              goto LABEL_61;
            }
            if ( v56 != 1 )
            {
              v42 = 1;
LABEL_61:
              MiMakeSystemCachePteValid(v81, v15, v76, v16);
              v43 = v77;
              goto LABEL_62;
            }
LABEL_72:
            v43 = v77;
            goto LABEL_73;
          }
        }
      }
      if ( (v34 & 1) != 0 )
        break;
      v35 = *(_QWORD *)(v33 + 16);
      if ( (v35 & 0x400) != 0 )
        v36 = v35 >> 11;
      else
        v36 = v35 >> 3;
      if ( (v36 & 1) != 0
        && (ListEntry = (PSLIST_ENTRY)MiMakeTransitionHeatBatch(v33, 0LL, 0LL), ListEntry == (PSLIST_ENTRY)-1LL) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v21, v73[0]);
        MiReplenishTransitionPageHeatList();
        ListEntry = 0LL;
        v7 = BugCheckParameter1;
      }
      else
      {
        v37 = MiUnlinkStandbyPfn((__int64 *)v20, v16);
        if ( !v37 )
          v76 = MI_READ_PTE_LOCK_FREE(v20);
LABEL_53:
        v74 = 0;
        v38 = 0;
        if ( v75 && !v37 && !(unsigned int)MiAddLockedPageCharge(v33, 0) )
        {
          v74 = -1073741670;
          v38 = -1073741670;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v21, v73[0]);
        v40 = ListEntry;
        if ( ListEntry )
        {
          MiProcessTransitionHeatBatch(ListEntry);
          MiFreeTransitionPageHeatList(v40);
          ListEntry = 0LL;
        }
        if ( v38 < 0 )
        {
          v44 = v74;
          goto LABEL_68;
        }
        v16 = a5;
        v7 = BugCheckParameter1;
        if ( v37 != 1 )
        {
          if ( v37 != 2 )
          {
            v41 = (unsigned __int64)v75;
            if ( v75 )
            {
              v57 = v76;
              if ( (unsigned int)MiPteInShadowRange(&v76, v39)
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v57 & 1) != 0
                && ((v57 & 0x20) == 0 || (v57 & 0x42) == 0) )
              {
                v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v58 )
                {
                  v59 = *((_QWORD *)&v58->Flink + (((unsigned __int64)&v76 >> 3) & 0x1FF));
                  if ( (v59 & 0x20) != 0 )
                    v57 |= 0x20uLL;
                  if ( (v59 & 0x42) != 0 )
                    v57 |= 0x42uLL;
                }
                else
                {
                  v57 = v76;
                }
              }
              v77 = MiMapFrame(v41, (v57 >> 12) & 0xFFFFFFFFFLL);
            }
            v7 = BugCheckParameter1;
            v5 = a4;
            v42 = 1;
            goto LABEL_61;
          }
          v7 = BugCheckParameter1;
          v44 = MmAccessFault(0LL, BugCheckParameter1, 0, 0LL);
          v74 = v44;
          if ( v44 < 0 )
            goto LABEL_68;
        }
      }
    }
    *(_QWORD *)(v33 + 24) ^= (((*(_QWORD *)(v33 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(v33 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    v37 = 0;
    goto LABEL_53;
  }
LABEL_73:
  v42 = 1;
LABEL_62:
  v44 = 0;
  v74 = 0;
  if ( v42 )
  {
    if ( !v43 )
      v43 = v7;
    v45 = (void *)(a3 + v43);
    if ( (v16 & 4) != 0 )
      RtlCopyMemoryNonTemporal(v45, a2, v5);
    else
      memmove(v45, a2, v5);
  }
LABEL_68:
  v46 = v75;
  if ( v75 )
  {
    v60 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v75);
    v79 = v60;
    MiReleasePtes((__int64)&qword_140C4EF40, v46, 1u);
    if ( (v60 & 1) != 0 )
    {
      if ( (unsigned int)MiPteInShadowRange(&v79, v61) )
      {
        if ( (MiFlags & 0xC00000) != 0 && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
        {
          v62 = v60;
          if ( (v60 & 0x20) == 0 || (v60 & 0x42) == 0 )
          {
            v63 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v63 )
            {
              v65 = *((_QWORD *)&v63->Flink + (((unsigned __int64)&v79 >> 3) & 0x1FF));
              if ( (v65 & 0x20) != 0 )
                v60 |= 0x20uLL;
              if ( (v65 & 0x42) != 0 )
                v60 |= 0x42uLL;
            }
            else
            {
              v60 = v79;
            }
          }
        }
      }
      v66 = 48 * ((v60 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v73[0] = MiLockPageInline(v66, v62, (__int64)v63, v64);
      MiRemoveLockedPageChargeAndDecRef(v66);
      _InterlockedAnd64((volatile signed __int64 *)(v66 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v68 = v73[0];
        if ( v73[0] <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v68 = v73[0];
          v71 = ~(unsigned __int16)(-1LL << (v73[0] + 1));
          v72 = (v71 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v71;
          if ( v72 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v68 = v73[0];
      }
      __writecr8(v68);
      return v74;
    }
  }
  return (unsigned int)v44;
}
