/*
 * XREFs of MiUnmapMdlCommon @ 0x140531964
 * Callers:
 *     MmUnmapReservedMapping @ 0x140531ED0 (MmUnmapReservedMapping.c)
 *     MmUnmapLockedRestartPages @ 0x1408C4CD0 (MmUnmapLockedRestartPages.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402199E0 (MiInsertLargeTbFlushEntry.c)
 *     MiWriteValidPteNewPage @ 0x140234AD8 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 */

void __fastcall MiUnmapMdlCommon(ULONG_PTR a1, __int64 a2, int a3, __int64 a4, ULONG_PTR a5)
{
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v14; // rbx
  unsigned int v15; // r8d
  _QWORD *v16; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v19; // eax
  __int64 v20; // rdi
  unsigned __int64 v21; // r14
  unsigned __int8 v22; // r15
  unsigned __int64 v23; // rbx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v25; // rax
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
  bool v37; // zf
  unsigned __int64 ValidPte; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-C8h]
  _QWORD *v40; // [rsp+40h] [rbp-C0h]
  _QWORD *v41; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v42; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-A0h]
  _QWORD v45[24]; // [rsp+70h] [rbp-90h] BYREF

  LODWORD(BugCheckParameter3) = a3;
  BugCheckParameter2 = a1;
  BugCheckParameter4 = a5;
  memset(v45, 0, 0xB8uLL);
  v45[3] = 0LL;
  v41 = (_QWORD *)(a4 + 48);
  LODWORD(v45[1]) = 20;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = v8 + 8 * a5;
  v42 = v9;
  v10 = (__int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)v10) & 0x80u) == 0LL )
  {
    v20 = 0LL;
    v40 = 0LL;
  }
  else
  {
    v14 = ExAcquireSpinLockExclusive(&dword_140C4EC00);
    v15 = 0;
    v40 = (_QWORD *)qword_140C4EC10;
    v16 = (_QWORD *)qword_140C4EC10;
    if ( a5 >> 9 != 1 )
    {
      do
      {
        v16 = (_QWORD *)*v16;
        ++v15;
      }
      while ( v15 < (a5 >> 9) - 1 );
    }
    qword_140C4EC10 = *v16;
    *v16 = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4EC00);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = -1LL << ((unsigned __int8)v14 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)v11;
          v37 = (v19 & SchedulerAssist[5]) == 0;
          v12 = (unsigned int)v19 & SchedulerAssist[5];
          SchedulerAssist[5] = v12;
          if ( v37 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v14);
    v20 = (__int64)v40;
    v9 = v42;
  }
  v21 = 0LL;
  if ( a2 )
    v22 = MiLockWorkingSetShared(a2, v11, v12, SchedulerAssist);
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
        MiUnlockPageTableInternal(a2, v21);
      }
      v21 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(a2, v21, 0);
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
        if ( *v41 != ((v23 >> 12) & 0xFFFFFFFFFLL) )
LABEL_59:
          KeBugCheckEx(0xDAu, 0x10EuLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, BugCheckParameter4);
        v40 = (_QWORD *)*v40;
        MiInsertLargeTbFlushEntry((__int64)v45, 1u, (__int64)v10);
        ValidPte = MiMakeValidPte(v8, (v20 + 0x58000000000LL) / 48, -1342177274);
        v29 = MiLockPageInline(v20, v26, v27, v28);
        *(_QWORD *)v20 = 0LL;
        v30 = v29;
        *(_QWORD *)(v20 + 8) = v10;
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
              v37 = (v34 & v33[5]) == 0;
              v33[5] &= v34;
              if ( v37 )
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
      MiInsertTbFlushEntry((__int64)v45, (__int64)(v8 << 25) >> 16, 1LL, 0);
      v35 = ZeroPte;
      v36 = 0;
      if ( MiPteInShadowRange(v8) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v36 = 1;
          if ( !HIBYTE(word_140C4E048) )
          {
            v37 = (ZeroPte & 1) == 0;
            goto LABEL_52;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v37 = (ZeroPte & 1) == 0;
LABEL_52:
          if ( !v37 )
            v35 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v8 = v35;
      if ( v36 )
        MiWritePteShadow(v8, v35);
      v11 = 8LL;
LABEL_57:
      v41 = (_QWORD *)((char *)v41 + v11);
      v8 += v11;
      if ( v8 >= v42 )
        break;
      v20 = (__int64)v40;
    }
  }
  MiFlushTbList((__int64)v45, (_KPROCESS *)v11);
  if ( v22 != 17 )
  {
    if ( v21 )
      MiUnlockPageTableInternal(a2, v21);
    MiUnlockWorkingSetShared(a2, v22);
  }
}
