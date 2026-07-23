/*
 * XREFs of MmCopyToCachedPage @ 0x140223C10
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140222C30 (CcMapAndCopyInToCache.c)
 * Callees:
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 *     MiControlAreaUsingExtents @ 0x1402241C0 (MiControlAreaUsingExtents.c)
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiMakePageAvoidRead @ 0x140232510 (MiMakePageAvoidRead.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiMakeSystemCachePteValid @ 0x14026255C (MiMakeSystemCachePteValid.c)
 *     MiDirtySystemCachePte @ 0x140264A4C (MiDirtySystemCachePte.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiLockLeafPage @ 0x1402F6AF0 (MiLockLeafPage.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiUnlinkStandbyPfn @ 0x14033D070 (MiUnlinkStandbyPfn.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     RtlCopyMemoryNonTemporal @ 0x1403FF920 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     MiMapFrame @ 0x140531AB4 (MiMapFrame.c)
 *     MiMapSystemCachePage @ 0x140531BD4 (MiMapSystemCachePage.c)
 *     MiFreeTransitionPageHeatList @ 0x14055A154 (MiFreeTransitionPageHeatList.c)
 *     MiMakeTransitionHeatBatch @ 0x14055A5D0 (MiMakeTransitionHeatBatch.c)
 *     MiProcessTransitionHeatBatch @ 0x14055A95C (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x14055ABC0 (MiReplenishTransitionPageHeatList.c)
 *     MiMapCacheExceptionFilter @ 0x1408C4DEC (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MmCopyToCachedPage(
        ULONG_PTR BugCheckParameter2,
        const void *a2,
        unsigned int a3,
        ULONG_PTR a4,
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
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rsi
  unsigned int v16; // r15d
  ULONG_PTR v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  ULONG_PTR v20; // rbx
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
  ULONG_PTR v36; // r14
  int v37; // ebx
  __int64 v38; // rcx
  int v39; // edi
  void *v40; // rcx
  ULONG_PTR v41; // rsi
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
  struct _LIST_ENTRY *v57; // r8
  __int64 v58; // rax
  __int64 v59; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v61; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v64; // eax
  bool v65; // zf
  unsigned __int8 v66[4]; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v67; // [rsp+44h] [rbp-84h] BYREF
  ULONG_PTR v68; // [rsp+48h] [rbp-80h]
  __int64 v69; // [rsp+50h] [rbp-78h] BYREF
  __int64 v70; // [rsp+58h] [rbp-70h]
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-68h]
  unsigned __int64 v72; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v73; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v74; // [rsp+78h] [rbp-50h]
  __int64 v75; // [rsp+80h] [rbp-48h]

  v5 = a4;
  BugCheckParameter4 = a3;
  v7 = BugCheckParameter2;
  v69 = 0LL;
  v67 = 0;
  v70 = 0LL;
  ListEntry = 0LL;
  v8 = ((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
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
  v73 = v9;
  if ( (unsigned int)MiPteInShadowRange(&v73)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v26 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v26 )
    {
      v27 = *((_QWORD *)&v26->Flink + (((unsigned __int64)&v73 >> 3) & 0x1FF));
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
  v75 = *v13;
  v14 = *(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(v75 + 60) & 0x3FF)) + 7232LL;
  v74 = v14;
  if ( BugCheckParameter4 + v5 > 0x1000 || BugCheckParameter4 + v5 < v5 )
    KeBugCheckEx(0x1Au, 0x776uLL, v7, v5, BugCheckParameter4);
  v15 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = a5;
  if ( (a5 & 4) != 0 && ((a3 & 0x3F) != 0 || (v5 & 0x3F) != 0) )
    return 3221226612LL;
  if ( (a5 & 8) != 0 )
  {
    v17 = MiReservePtes((__int64)&qword_140C4ED40, 1u, v10, v14);
    v68 = v17;
    if ( !v17 )
      return 3221225626LL;
    v14 = v74;
  }
  else
  {
    v17 = 0LL;
    v68 = 0LL;
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
        LOBYTE(v46) = v18 | 0x20;
        if ( (v47 & 0x20) == 0 )
          v46 = *(struct _LIST_ENTRY **)v15;
        LOBYTE(v18) = (_BYTE)v46;
        if ( (v47 & 0x42) != 0 )
          LOBYTE(v18) = (unsigned __int8)v46 | 0x42;
      }
    }
    v17 = v68;
  }
  if ( (v18 & 1) == 0 )
    goto LABEL_14;
  v42 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v17 )
  {
    MiDirtySystemCachePte(v14, v42);
    goto LABEL_72;
  }
  v38 = MiMapSystemCachePage(v17, v42, a5);
  v70 = v38;
  if ( !v38 )
  {
    v17 = v68;
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
      v17 = v68;
    }
    if ( (v19 & 1) != 0 )
    {
      if ( !v17 )
      {
        v38 = v70;
        goto LABEL_73;
      }
      v38 = MiMapSystemCachePage(v17, ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, a5);
      v70 = v38;
      if ( v38 )
        goto LABEL_73;
    }
    if ( qword_140C4DD40 )
    {
      if ( (v19 & 0x10) != 0 )
        v19 &= ~0x10uLL;
      else
        v19 &= ~qword_140C4DD40;
    }
    v20 = v19 >> 16;
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = 0LL;
        v22 = 17;
        v66[0] = 17;
        v23 = MI_READ_PTE_LOCK_FREE(v20);
        v69 = v23;
        if ( (v23 & 1) == 0 && (v23 & 0x400) != 0 )
          goto LABEL_22;
        while ( 1 )
        {
          v21 = MiLockProtoPoolPage(v20, v66);
          if ( v21 )
            break;
          MmAccessFault(2uLL, v20);
        }
        v29 = MiLockLeafPage(v20, 0LL);
        v30 = MI_READ_PTE_LOCK_FREE(v20);
        v69 = v30;
        if ( v29 )
          break;
        v22 = v66[0];
        v7 = BugCheckParameter2;
LABEL_22:
        if ( v21 )
          MiUnlockProtoPoolPage(v21, v22);
        if ( (unsigned int)MiControlAreaUsingExtents(v75) )
        {
          v39 = MmAccessFault(0LL, v7);
          v67 = v39;
          if ( v39 < 0 )
            goto LABEL_68;
        }
        else
        {
          v5 = a4;
          PageAvoidRead = MiMakePageAvoidRead(v20, a2, a3, a4, v16, &v69, &v67);
          if ( !PageAvoidRead )
            return v67;
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
              MiMakeSystemCachePteValid(v74, v15, v69, v16);
              v38 = v70;
              goto LABEL_62;
            }
LABEL_72:
            v38 = v70;
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
        MiUnlockProtoPoolPage(v21, v66[0]);
        MiReplenishTransitionPageHeatList();
        ListEntry = 0LL;
        v7 = BugCheckParameter2;
      }
      else
      {
        v33 = MiUnlinkStandbyPfn(v20, v16);
        if ( !v33 )
          v69 = MI_READ_PTE_LOCK_FREE(v20);
LABEL_53:
        v67 = 0;
        v34 = 0;
        if ( v68 && !v33 && !(unsigned int)MiAddLockedPageCharge(v29, 0LL) )
        {
          v67 = -1073741670;
          v34 = -1073741670;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v21, v66[0]);
        v35 = ListEntry;
        if ( ListEntry )
        {
          MiProcessTransitionHeatBatch(ListEntry);
          MiFreeTransitionPageHeatList(v35);
          ListEntry = 0LL;
        }
        if ( v34 < 0 )
        {
          v39 = v67;
          goto LABEL_68;
        }
        v16 = a5;
        v7 = BugCheckParameter2;
        if ( v33 != 1 )
        {
          if ( v33 != 2 )
          {
            v36 = v68;
            if ( v68 )
            {
              v53 = v69;
              if ( (unsigned int)MiPteInShadowRange(&v69)
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v53 & 1) != 0
                && ((v53 & 0x20) == 0 || (v53 & 0x42) == 0) )
              {
                v54 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v54 )
                {
                  v55 = *((_QWORD *)&v54->Flink + (((unsigned __int64)&v69 >> 3) & 0x1FF));
                  if ( (v55 & 0x20) != 0 )
                    v53 |= 0x20uLL;
                  if ( (v55 & 0x42) != 0 )
                    v53 |= 0x42uLL;
                }
                else
                {
                  v53 = v69;
                }
              }
              v70 = MiMapFrame(v36, (v53 >> 12) & 0xFFFFFFFFFLL);
            }
            v7 = BugCheckParameter2;
            v5 = a4;
            v37 = 1;
            goto LABEL_61;
          }
          v7 = BugCheckParameter2;
          v39 = MmAccessFault(0LL, BugCheckParameter2);
          v67 = v39;
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
  v67 = 0;
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
  v41 = v68;
  if ( v68 )
  {
    v56 = MI_READ_PTE_LOCK_FREE(v68);
    v72 = v56;
    MiReleasePtes(&qword_140C4ED40, v41, 1LL);
    if ( (v56 & 1) != 0 )
    {
      if ( (unsigned int)MiPteInShadowRange(&v72)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v56 & 0x20) == 0 || (v56 & 0x42) == 0) )
      {
        v57 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v57 )
        {
          v58 = *((_QWORD *)&v57->Flink + (((unsigned __int64)&v72 >> 3) & 0x1FF));
          if ( (v58 & 0x20) != 0 )
            v56 |= 0x20uLL;
          if ( (v58 & 0x42) != 0 )
            v56 |= 0x42uLL;
        }
        else
        {
          v56 = v72;
        }
      }
      v59 = 48 * ((v56 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v66[0] = MiLockPageInline(v59);
      MiRemoveLockedPageChargeAndDecRef(v59);
      _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v61 = v66[0];
        if ( v66[0] <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v61 = v66[0];
          v64 = ~(unsigned __int16)(-1LL << (v66[0] + 1));
          v65 = (v64 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v64;
          if ( v65 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v61 = v66[0];
      }
      __writecr8(v61);
      return v67;
    }
  }
  return (unsigned int)v39;
}
