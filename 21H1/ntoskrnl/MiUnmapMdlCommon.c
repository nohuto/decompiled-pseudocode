/*
 * XREFs of MiUnmapMdlCommon @ 0x14052BC04
 * Callers:
 *     MmUnmapReservedMapping @ 0x14052C170 (MmUnmapReservedMapping.c)
 *     MmUnmapLockedRestartPages @ 0x1408C0220 (MmUnmapLockedRestartPages.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiWriteValidPteNewPage @ 0x1402F19B0 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402FB584 (MiInsertLargeTbFlushEntry.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 */

void __fastcall MiUnmapMdlCommon(ULONG_PTR a1, __int64 a2, int a3, __int64 a4, ULONG_PTR a5)
{
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rbx
  unsigned int v14; // r8d
  _QWORD *v15; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  __int64 v20; // rdi
  unsigned __int64 v21; // r14
  unsigned __int8 v22; // r15
  unsigned __int64 v23; // rbx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  _DWORD *v29; // r9
  unsigned __int8 v30; // al
  unsigned __int64 v31; // rbx
  unsigned __int8 v32; // cl
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  unsigned __int64 v36; // rbx
  int v37; // edi
  bool v38; // zf
  __int64 v39; // r8
  unsigned __int64 ValidPte; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-C8h]
  _QWORD *v42; // [rsp+40h] [rbp-C0h]
  _QWORD *v43; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v44; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-A0h]
  _QWORD v47[24]; // [rsp+70h] [rbp-90h] BYREF

  LODWORD(BugCheckParameter3) = a3;
  BugCheckParameter2 = a1;
  BugCheckParameter4 = a5;
  memset(v47, 0, 0xB8uLL);
  v47[3] = 0LL;
  v43 = (_QWORD *)(a4 + 48);
  LODWORD(v47[1]) = 20;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = v8 + 8 * a5;
  v44 = v9;
  v10 = (__int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)v10) & 0x80u) == 0LL )
  {
    v20 = 0LL;
    v42 = 0LL;
  }
  else
  {
    v13 = ExAcquireSpinLockExclusive(&dword_140C4EB00);
    v14 = 0;
    v42 = (_QWORD *)qword_140C4EB10;
    v15 = (_QWORD *)qword_140C4EB10;
    if ( a5 >> 9 != 1 )
    {
      do
      {
        v15 = (_QWORD *)*v15;
        ++v14;
      }
      while ( v14 < (a5 >> 9) - 1 );
    }
    qword_140C4EB10 = *v15;
    *v15 = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4EB00);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = -1LL << ((unsigned __int8)v13 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)v11;
          v38 = (v19 & SchedulerAssist[5]) == 0;
          v12 = (unsigned int)v19 & SchedulerAssist[5];
          SchedulerAssist[5] = v12;
          if ( v38 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
    v20 = (__int64)v42;
    v9 = v44;
  }
  v21 = 0LL;
  if ( a2 )
    v22 = MiLockWorkingSetShared(a2);
  else
    v22 = 17;
  if ( v8 < v9 )
  {
    while ( 1 )
    {
      if ( v22 == 17 )
        goto LABEL_22;
      if ( v21 )
      {
        if ( (v8 & 0xFFF) != 0 )
          goto LABEL_22;
        MiUnlockPageTableInternal(a2, v21, v12);
      }
      v21 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(a2, v21, 0LL);
LABEL_22:
      if ( v20 )
      {
        ValidPte = MI_READ_PTE_LOCK_FREE((unsigned __int64)v10);
        v23 = ValidPte;
        if ( (ValidPte & 0x80u) == 0LL )
          goto LABEL_59;
        if ( MiPteInShadowRange((unsigned __int64)&ValidPte)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v23 & 1) != 0
          && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v25 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&ValidPte >> 3) & 0x1FF));
            if ( (v25 & 0x20) != 0 )
              v23 |= 0x20uLL;
            if ( (v25 & 0x42) != 0 )
              v23 |= 0x42uLL;
          }
          else
          {
            v23 = ValidPte;
          }
        }
        if ( *v43 != ((v23 >> 12) & 0xFFFFFFFFFLL) )
LABEL_59:
          KeBugCheckEx(0xDAu, 0x10EuLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, BugCheckParameter4);
        v42 = (_QWORD *)*v42;
        MiInsertLargeTbFlushEntry((__int64)v47, 1u, (unsigned __int64)v10);
        ValidPte = MiMakeValidPte(v8, (v20 + 0x58000000000LL) / 48, 2952790022LL, v26);
        v30 = MiLockPageInline(v20, v27, v28, v29);
        *(_QWORD *)v20 = 0LL;
        v31 = v30;
        *(_QWORD *)(v20 + 8) = v10;
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v32 = KeGetCurrentIrql();
            if ( v32 <= 0xFu && v30 <= 0xFu && v32 >= 2u )
            {
              v33 = KeGetCurrentPrcb();
              v34 = v33->SchedulerAssist;
              v35 = ~(unsigned __int16)(-1LL << (v30 + 1));
              v38 = (v35 & v34[5]) == 0;
              v34[5] &= v35;
              if ( v38 )
                KiRemoveSystemWorkPriorityKick((__int64)v33);
            }
          }
        }
        __writecr8(v31);
        MiWriteValidPteNewPage(v10++, ValidPte, 0);
        v11 = 4096LL;
        goto LABEL_57;
      }
      ValidPte = MI_READ_PTE_LOCK_FREE(v8);
      if ( (ValidPte & 1) == 0 )
        KeBugCheckEx(0xDAu, 0x10BuLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, BugCheckParameter4);
      MiInsertTbFlushEntry((__int64)v47, (__int64)(v8 << 25) >> 16, 1LL, 0);
      v36 = ZeroPte;
      v37 = 0;
      if ( MiPteInShadowRange(v8) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v37 = 1;
          if ( !HIBYTE(word_140C4DF48) )
          {
            v38 = (ZeroPte & 1) == 0;
            goto LABEL_52;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v38 = (ZeroPte & 1) == 0;
LABEL_52:
          if ( !v38 )
            v36 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v8 = v36;
      if ( v37 )
        MiWritePteShadow(v8, v36);
      v11 = 8LL;
LABEL_57:
      v43 = (_QWORD *)((char *)v43 + v11);
      v8 += v11;
      if ( v8 >= v44 )
        break;
      v20 = (__int64)v42;
    }
  }
  MiFlushTbList((__int64)v47, (_KPROCESS *)v11);
  if ( v22 != 17 )
  {
    if ( v21 )
      MiUnlockPageTableInternal(a2, v21, v39);
    MiUnlockWorkingSetShared(a2, v22);
  }
}
