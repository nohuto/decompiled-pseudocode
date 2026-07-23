/*
 * XREFs of MmCopyToCachedPage @ 0x14027CC60
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14027BC80 (CcMapAndCopyInToCache.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiControlAreaUsingExtents @ 0x14027D210 (MiControlAreaUsingExtents.c)
 *     MiAddLockedPageCharge @ 0x1402826F0 (MiAddLockedPageCharge.c)
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiMakePageAvoidRead @ 0x14028B560 (MiMakePageAvoidRead.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiMakeSystemCachePteValid @ 0x1402BB58C (MiMakeSystemCachePteValid.c)
 *     MiDirtySystemCachePte @ 0x1402BDA7C (MiDirtySystemCachePte.c)
 *     MiUnlinkStandbyPfn @ 0x140300770 (MiUnlinkStandbyPfn.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiLockLeafPage @ 0x140352AD0 (MiLockLeafPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     RtlCopyMemoryNonTemporal @ 0x1403FE690 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     MiMapFrame @ 0x140531464 (MiMapFrame.c)
 *     MiMapSystemCachePage @ 0x140531584 (MiMapSystemCachePage.c)
 *     MiFreeTransitionPageHeatList @ 0x140559B04 (MiFreeTransitionPageHeatList.c)
 *     MiMakeTransitionHeatBatch @ 0x140559F80 (MiMakeTransitionHeatBatch.c)
 *     MiProcessTransitionHeatBatch @ 0x14055A30C (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x14055A570 (MiReplenishTransitionPageHeatList.c)
 *     MiMapCacheExceptionFilter @ 0x1408C3A9C (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MmCopyToCachedPage(
        ULONG_PTR BugCheckParameter1,
        const void *a2,
        unsigned int a3,
        ULONG_PTR a4,
        unsigned int a5)
{
  ULONG_PTR v5; // r14
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG_PTR v7; // r13
  unsigned __int64 v8; // rdx
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
  signed __int64 v19; // rbx
  __int64 v20; // rdi
  unsigned __int8 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  int PageAvoidRead; // eax
  struct _LIST_ENTRY *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r13
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  int v34; // r14d
  int v35; // r15d
  __int64 v36; // rdx
  _SLIST_ENTRY *v37; // rdi
  _QWORD *v38; // r14
  int v39; // ebx
  __int64 v40; // rcx
  int v41; // edi
  void *v42; // rcx
  _QWORD *v43; // rsi
  __int64 v44; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v46; // rax
  struct _LIST_ENTRY *v47; // rdx
  __int64 v48; // rax
  struct _LIST_ENTRY *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  int v52; // eax
  int v53; // eax
  unsigned __int64 v54; // rbx
  struct _LIST_ENTRY *v55; // rdx
  __int64 v56; // rax
  unsigned __int64 v57; // rbx
  __int64 v58; // rdx
  unsigned __int64 v59; // rdx
  struct _LIST_ENTRY *v60; // r8
  __int64 v61; // rax
  __int64 v62; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v64; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v67; // eax
  bool v68; // zf
  unsigned __int8 v69[4]; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v70; // [rsp+44h] [rbp-84h] BYREF
  _QWORD *v71; // [rsp+48h] [rbp-80h]
  __int64 v72; // [rsp+50h] [rbp-78h] BYREF
  __int64 v73; // [rsp+58h] [rbp-70h]
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-68h]
  unsigned __int64 v75; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v76; // [rsp+70h] [rbp-58h] BYREF
  __int64 v77; // [rsp+78h] [rbp-50h]
  __int64 v78; // [rsp+80h] [rbp-48h]

  v5 = a4;
  BugCheckParameter4 = a3;
  v7 = BugCheckParameter1;
  v72 = 0LL;
  v70 = 0;
  v73 = 0LL;
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
      v46 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
      v8 = v9 | 0x20;
      if ( (v46 & 0x20) == 0 )
        v8 = v9;
      v9 = v8;
      if ( (v46 & 0x42) != 0 )
        v9 = v8 | 0x42;
    }
  }
  v76 = v9;
  if ( (unsigned int)MiPteInShadowRange(&v76, v8)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v27 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v27 )
    {
      v28 = *((_QWORD *)&v27->Flink + (((unsigned __int64)&v76 >> 3) & 0x1FF));
      v29 = v9 | 0x20;
      if ( (v28 & 0x20) == 0 )
        v29 = v9;
      v9 = v29;
      if ( (v28 & 0x42) != 0 )
        v9 = v29 | 0x42;
    }
  }
  v10 = *(_QWORD *)(48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16);
  if ( v10 )
    v10 += 40 * ((v7 >> 18) & 7);
  v11 = *(_QWORD *)(v10 + 24);
  v12 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v11 & 1) == 0 )
    v12 = (__int64 *)v11;
  v78 = *v12;
  v13 = *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(v78 + 60) & 0x3FF)) + 7232LL;
  v77 = v13;
  if ( BugCheckParameter4 + v5 > 0x1000 || BugCheckParameter4 + v5 < v5 )
    KeBugCheckEx(0x1Au, 0x776uLL, v7, v5, BugCheckParameter4);
  v14 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = a5;
  if ( (a5 & 4) != 0 && ((a3 & 0x3F) != 0 || (v5 & 0x3F) != 0) )
    return 3221226612LL;
  if ( (a5 & 8) != 0 )
  {
    v16 = MiReservePtes((__int64)&qword_140C4EE80, 1LL);
    v71 = (_QWORD *)v16;
    if ( !v16 )
      return 3221225626LL;
    v13 = v77;
  }
  else
  {
    v16 = 0LL;
    v71 = 0LL;
  }
  v17 = *(_QWORD *)v14;
  if ( v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v17 & 1) != 0
      && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
    {
      v47 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v47 )
      {
        v48 = *((_QWORD *)&v47->Flink + ((v14 >> 3) & 0x1FF));
        LOBYTE(v47) = v17 | 0x20;
        if ( (v48 & 0x20) == 0 )
          v47 = *(struct _LIST_ENTRY **)v14;
        LOBYTE(v17) = (_BYTE)v47;
        if ( (v48 & 0x42) != 0 )
          LOBYTE(v17) = (unsigned __int8)v47 | 0x42;
      }
    }
    v16 = (ULONG_PTR)v71;
  }
  if ( (v17 & 1) == 0 )
    goto LABEL_14;
  v44 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v16 )
  {
    MiDirtySystemCachePte(v13, v44);
    goto LABEL_72;
  }
  v40 = MiMapSystemCachePage(v16, v44, a5);
  v73 = v40;
  if ( !v40 )
  {
    v16 = (ULONG_PTR)v71;
LABEL_14:
    v18 = *(_QWORD *)v14;
    if ( v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v18 & 1) != 0
        && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
      {
        v49 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v49 )
        {
          v50 = *((_QWORD *)&v49->Flink + ((v14 >> 3) & 0x1FF));
          v51 = v18 | 0x20;
          if ( (v50 & 0x20) == 0 )
            v51 = *(_QWORD *)v14;
          v18 = v51;
          if ( (v50 & 0x42) != 0 )
            v18 = v51 | 0x42;
        }
      }
      v16 = (ULONG_PTR)v71;
    }
    if ( (v18 & 1) != 0 )
    {
      if ( !v16 )
      {
        v40 = v73;
        goto LABEL_73;
      }
      v40 = MiMapSystemCachePage(v16, ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, a5);
      v73 = v40;
      if ( v40 )
        goto LABEL_73;
    }
    if ( qword_140C4DE80 )
    {
      if ( (v18 & 0x10) != 0 )
        v18 &= ~0x10uLL;
      else
        v18 &= ~qword_140C4DE80;
    }
    v19 = v18 >> 16;
    while ( 1 )
    {
      while ( 1 )
      {
        v20 = 0LL;
        v21 = 17;
        v69[0] = 17;
        v22 = MI_READ_PTE_LOCK_FREE(v19);
        v72 = v22;
        if ( (v22 & 1) == 0 && (v22 & 0x400) != 0 )
          goto LABEL_22;
        while ( 1 )
        {
          v20 = MiLockProtoPoolPage(v19, v69);
          if ( v20 )
            break;
          MmAccessFault(2uLL, v19, 0, 0LL);
        }
        v30 = MiLockLeafPage(v19, 0LL);
        v31 = MI_READ_PTE_LOCK_FREE(v19);
        v72 = v31;
        if ( v30 )
          break;
        v21 = v69[0];
        v7 = BugCheckParameter1;
LABEL_22:
        if ( v20 )
          MiUnlockProtoPoolPage(v20, v21);
        if ( (unsigned int)MiControlAreaUsingExtents(v78, v23, v24) )
        {
          v41 = MmAccessFault(0LL, v7, 0, 0LL);
          v70 = v41;
          if ( v41 < 0 )
            goto LABEL_68;
        }
        else
        {
          v5 = a4;
          PageAvoidRead = MiMakePageAvoidRead(v19, a2, a3, a4, v15, &v72, &v70);
          if ( !PageAvoidRead )
            return v70;
          v52 = PageAvoidRead - 1;
          if ( v52 )
          {
            v53 = v52 - 2;
            if ( !v53 )
            {
              v39 = 0;
              goto LABEL_61;
            }
            if ( v53 != 1 )
            {
              v39 = 1;
LABEL_61:
              MiMakeSystemCachePteValid(v77, v14, v72, v15);
              v40 = v73;
              goto LABEL_62;
            }
LABEL_72:
            v40 = v73;
            goto LABEL_73;
          }
        }
      }
      if ( (v31 & 1) != 0 )
        break;
      v32 = *(_QWORD *)(v30 + 16);
      if ( (v32 & 0x400) != 0 )
        v33 = v32 >> 11;
      else
        v33 = v32 >> 3;
      if ( (v33 & 1) != 0
        && (ListEntry = (PSLIST_ENTRY)MiMakeTransitionHeatBatch(v30, 0LL, 0LL), ListEntry == (PSLIST_ENTRY)-1LL) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v20, v69[0]);
        MiReplenishTransitionPageHeatList();
        ListEntry = 0LL;
        v7 = BugCheckParameter1;
      }
      else
      {
        v34 = MiUnlinkStandbyPfn(v19, v15);
        if ( !v34 )
          v72 = MI_READ_PTE_LOCK_FREE(v19);
LABEL_53:
        v70 = 0;
        v35 = 0;
        if ( v71 && !v34 && !(unsigned int)MiAddLockedPageCharge(v30, 0LL) )
        {
          v70 = -1073741670;
          v35 = -1073741670;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v20, v69[0]);
        v37 = ListEntry;
        if ( ListEntry )
        {
          MiProcessTransitionHeatBatch(ListEntry);
          MiFreeTransitionPageHeatList(v37);
          ListEntry = 0LL;
        }
        if ( v35 < 0 )
        {
          v41 = v70;
          goto LABEL_68;
        }
        v15 = a5;
        v7 = BugCheckParameter1;
        if ( v34 != 1 )
        {
          if ( v34 != 2 )
          {
            v38 = v71;
            if ( v71 )
            {
              v54 = v72;
              if ( (unsigned int)MiPteInShadowRange(&v72, v36)
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v54 & 1) != 0
                && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
              {
                v55 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v55 )
                {
                  v56 = *((_QWORD *)&v55->Flink + (((unsigned __int64)&v72 >> 3) & 0x1FF));
                  if ( (v56 & 0x20) != 0 )
                    v54 |= 0x20uLL;
                  if ( (v56 & 0x42) != 0 )
                    v54 |= 0x42uLL;
                }
                else
                {
                  v54 = v72;
                }
              }
              v73 = MiMapFrame(v38, (v54 >> 12) & 0xFFFFFFFFFLL);
            }
            v7 = BugCheckParameter1;
            v5 = a4;
            v39 = 1;
            goto LABEL_61;
          }
          v7 = BugCheckParameter1;
          v41 = MmAccessFault(0LL, BugCheckParameter1, 0, 0LL);
          v70 = v41;
          if ( v41 < 0 )
            goto LABEL_68;
        }
      }
    }
    *(_QWORD *)(v30 + 24) ^= (((*(_QWORD *)(v30 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(v30 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    v34 = 0;
    goto LABEL_53;
  }
LABEL_73:
  v39 = 1;
LABEL_62:
  v41 = 0;
  v70 = 0;
  if ( v39 )
  {
    if ( !v40 )
      v40 = v7;
    v42 = (void *)(a3 + v40);
    if ( (v15 & 4) != 0 )
      RtlCopyMemoryNonTemporal(v42, a2, v5);
    else
      memmove(v42, a2, v5);
  }
LABEL_68:
  v43 = v71;
  if ( v71 )
  {
    v57 = MI_READ_PTE_LOCK_FREE(v71);
    v75 = v57;
    MiReleasePtes((__int64)&qword_140C4EE80, v43, 1u);
    if ( (v57 & 1) != 0 )
    {
      if ( (unsigned int)MiPteInShadowRange(&v75, v58) )
      {
        if ( (MiFlags & 0xC00000) != 0 && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
        {
          v59 = v57;
          if ( (v57 & 0x20) == 0 || (v57 & 0x42) == 0 )
          {
            v60 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v60 )
            {
              v61 = *((_QWORD *)&v60->Flink + (((unsigned __int64)&v75 >> 3) & 0x1FF));
              if ( (v61 & 0x20) != 0 )
                v57 |= 0x20uLL;
              if ( (v61 & 0x42) != 0 )
                v57 |= 0x42uLL;
            }
            else
            {
              v57 = v75;
            }
          }
        }
      }
      v62 = 48 * ((v57 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v69[0] = MiLockPageInline(v62, v59, v60);
      MiRemoveLockedPageChargeAndDecRef(v62);
      _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v64 = v69[0];
        if ( v69[0] <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v64 = v69[0];
          v67 = ~(unsigned __int16)(-1LL << (v69[0] + 1));
          v68 = (v67 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v67;
          if ( v68 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v64 = v69[0];
      }
      __writecr8(v64);
      return v70;
    }
  }
  return (unsigned int)v41;
}
