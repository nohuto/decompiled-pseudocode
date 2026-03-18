/*
 * XREFs of MiUnmapMdlCommon @ 0x14052C254
 * Callers:
 *     MmUnmapReservedMapping @ 0x14052C7C0 (MmUnmapReservedMapping.c)
 *     MmUnmapLockedRestartPages @ 0x1408C1570 (MmUnmapLockedRestartPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiWriteValidPteNewPage @ 0x14032D750 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403385B4 (MiInsertLargeTbFlushEntry.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 */

void __fastcall MiUnmapMdlCommon(ULONG_PTR a1, __int64 a2, int a3, __int64 a4, ULONG_PTR a5)
{
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 *v10; // r13
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned int v13; // r8d
  _QWORD *v14; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  __int64 v19; // rdi
  unsigned __int64 v20; // r14
  unsigned __int8 v21; // r15
  unsigned __int64 v22; // rbx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // r9
  unsigned __int8 v29; // al
  unsigned __int64 v30; // rbx
  unsigned __int8 v31; // cl
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  unsigned __int64 v35; // rbx
  int v36; // edi
  __int64 v37; // r8
  bool v38; // zf
  unsigned __int64 ValidPte; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-C8h]
  _QWORD *v41; // [rsp+40h] [rbp-C0h]
  _QWORD *v42; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v43; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-A0h]
  _QWORD v46[24]; // [rsp+70h] [rbp-90h] BYREF

  LODWORD(BugCheckParameter3) = a3;
  BugCheckParameter2 = a1;
  BugCheckParameter4 = a5;
  memset(v46, 0, 0xB8uLL);
  v46[3] = 0LL;
  v42 = (_QWORD *)(a4 + 48);
  LODWORD(v46[1]) = 20;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = v8 + 8 * a5;
  v43 = v9;
  v10 = (__int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)v10) & 0x80u) == 0LL )
  {
    v19 = 0LL;
    v41 = 0LL;
  }
  else
  {
    v12 = ExAcquireSpinLockExclusive(&dword_140C4E9C0);
    v13 = 0;
    v41 = (_QWORD *)qword_140C4E9D0;
    v14 = (_QWORD *)qword_140C4E9D0;
    if ( a5 >> 9 != 1 )
    {
      do
      {
        v14 = (_QWORD *)*v14;
        ++v13;
      }
      while ( v13 < (a5 >> 9) - 1 );
    }
    qword_140C4E9D0 = *v14;
    *v14 = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4E9C0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = -1LL << ((unsigned __int8)v12 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)v11;
          v38 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v38 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v12);
    v19 = (__int64)v41;
    v9 = v43;
  }
  v20 = 0LL;
  if ( a2 )
    v21 = MiLockWorkingSetShared(a2);
  else
    v21 = 17;
  if ( v8 < v9 )
  {
    while ( 1 )
    {
      if ( v21 == 17 )
        goto LABEL_22;
      if ( v20 )
      {
        if ( (v8 & 0xFFF) != 0 )
          goto LABEL_22;
        MiUnlockPageTableInternal(a2, v20);
      }
      v20 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(a2, v20, 0LL);
LABEL_22:
      if ( v19 )
      {
        ValidPte = MI_READ_PTE_LOCK_FREE((unsigned __int64)v10);
        v22 = ValidPte;
        if ( (ValidPte & 0x80u) == 0LL )
          goto LABEL_59;
        if ( MiPteInShadowRange((unsigned __int64)&ValidPte)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v22 & 1) != 0
          && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v24 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&ValidPte >> 3) & 0x1FF));
            if ( (v24 & 0x20) != 0 )
              v22 |= 0x20uLL;
            if ( (v24 & 0x42) != 0 )
              v22 |= 0x42uLL;
          }
          else
          {
            v22 = ValidPte;
          }
        }
        if ( *v42 != ((v22 >> 12) & 0xFFFFFFFFFLL) )
LABEL_59:
          KeBugCheckEx(0xDAu, 0x10EuLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, BugCheckParameter4);
        v41 = (_QWORD *)*v41;
        MiInsertLargeTbFlushEntry((__int64)v46, 1u, (unsigned __int64)v10);
        ValidPte = MiMakeValidPte(v8, (v19 + 0x58000000000LL) / 48, 2952790022LL, v25);
        v29 = MiLockPageInline(v19, v26, v27, v28);
        *(_QWORD *)v19 = 0LL;
        v30 = v29;
        *(_QWORD *)(v19 + 8) = v10;
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v31 = KeGetCurrentIrql();
            if ( v31 <= 0xFu && v29 <= 0xFu && v31 >= 2u )
            {
              v32 = KeGetCurrentPrcb();
              v33 = v32->SchedulerAssist;
              v34 = ~(unsigned __int16)(-1LL << (v29 + 1));
              v38 = (v34 & v33[5]) == 0;
              v33[5] &= v34;
              if ( v38 )
                KiRemoveSystemWorkPriorityKick((__int64)v32);
            }
          }
        }
        __writecr8(v30);
        MiWriteValidPteNewPage(v10++, ValidPte, 0);
        v11 = 4096LL;
        goto LABEL_57;
      }
      ValidPte = MI_READ_PTE_LOCK_FREE(v8);
      if ( (ValidPte & 1) == 0 )
        KeBugCheckEx(0xDAu, 0x10BuLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, BugCheckParameter4);
      MiInsertTbFlushEntry((__int64)v46, (__int64)(v8 << 25) >> 16, 1LL, 0);
      v35 = ZeroPte;
      v36 = 0;
      if ( MiPteInShadowRange(v8) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v36 = 1;
          if ( !HIBYTE(word_140C4DE08) )
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
            v35 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v8 = v35;
      if ( v36 )
        MiWritePteShadow(v8, v35, v37);
      v11 = 8LL;
LABEL_57:
      v42 = (_QWORD *)((char *)v42 + v11);
      v8 += v11;
      if ( v8 >= v43 )
        break;
      v19 = (__int64)v41;
    }
  }
  MiFlushTbList((__int64)v46, (_KPROCESS *)v11);
  if ( v21 != 17 )
  {
    if ( v20 )
      MiUnlockPageTableInternal(a2, v20);
    MiUnlockWorkingSetShared(a2, v21);
  }
}
