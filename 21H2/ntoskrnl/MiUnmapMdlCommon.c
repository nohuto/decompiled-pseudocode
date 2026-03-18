/*
 * XREFs of MiUnmapMdlCommon @ 0x1405853E4
 * Callers:
 *     MmUnmapReservedMapping @ 0x1405858A0 (MmUnmapReservedMapping.c)
 *     MmUnmapLockedRestartPages @ 0x140968160 (MmUnmapLockedRestartPages.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402285E8 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiWriteValidPteNewPage @ 0x14026EDE4 (MiWriteValidPteNewPage.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall MiUnmapMdlCommon(ULONG_PTR a1, __int64 a2, unsigned int a3, __int64 a4, ULONG_PTR a5)
{
  _QWORD *v7; // rbx
  ULONG_PTR v8; // r14
  __int64 *v9; // r12
  __int64 SchedulerAssist; // r9
  KIRQL v11; // al
  _QWORD *v12; // r13
  unsigned int v13; // r8d
  unsigned __int64 v14; // rbx
  _QWORD *v15; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v18; // eax
  unsigned __int64 v19; // rsi
  unsigned __int8 v20; // bp
  __int64 v21; // rdi
  unsigned __int8 v22; // al
  unsigned __int64 v23; // rbx
  unsigned __int8 v24; // cl
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  int v30; // edi
  bool v31; // zf
  __int64 ValidPte; // [rsp+38h] [rbp-130h] BYREF
  _QWORD *v34; // [rsp+40h] [rbp-128h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-120h]
  ULONG_PTR v36; // [rsp+50h] [rbp-118h]
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-110h]
  _QWORD v38[24]; // [rsp+60h] [rbp-108h] BYREF

  BugCheckParameter2 = a1;
  BugCheckParameter4 = a5;
  memset(v38, 0, 0xB8uLL);
  v7 = (_QWORD *)(a4 + 48);
  v38[3] = 0LL;
  v34 = v7;
  LODWORD(v38[1]) = 20;
  v8 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v36 = v8 + 8 * a5;
  v9 = (__int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)v9) & 0x80u) == 0LL )
  {
    v12 = 0LL;
  }
  else
  {
    v11 = ExAcquireSpinLockExclusive(&dword_140C53050);
    v12 = (_QWORD *)qword_140C53060;
    v13 = 0;
    v14 = v11;
    v15 = (_QWORD *)qword_140C53060;
    if ( a5 >> 9 != 1 )
    {
      do
      {
        v15 = (_QWORD *)*v15;
        ++v13;
      }
      while ( v13 < (a5 >> 9) - 1 );
    }
    qword_140C53060 = *v15;
    *v15 = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C53050);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v31 = (v18 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
          *(_DWORD *)(SchedulerAssist + 20) &= v18;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v14);
    v7 = v34;
  }
  v19 = 0LL;
  if ( a2 )
    v20 = MiLockWorkingSetShared(a2);
  else
    v20 = 17;
  while ( v8 < v36 )
  {
    if ( v20 == 17 )
      goto LABEL_21;
    if ( v19 )
    {
      if ( (v8 & 0xFFF) != 0 )
        goto LABEL_21;
      MiUnlockPageTableInternal(a2, v19);
    }
    v19 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(a2, v19, 0LL, SchedulerAssist);
LABEL_21:
    if ( v12 )
    {
      ValidPte = MI_READ_PTE_LOCK_FREE((unsigned __int64)v9);
      if ( (ValidPte & 0x80u) == 0LL
        || *v7 != (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte) >> 12) & 0xFFFFFFFFFFLL) )
      {
        KeBugCheckEx(0xDAu, 0x10EuLL, BugCheckParameter2, a3, BugCheckParameter4);
      }
      v21 = (__int64)v12;
      v12 = (_QWORD *)*v12;
      MiInsertLargeTbFlushEntry((__int64)v38, 1u, (__int64)v9);
      ValidPte = MiMakeValidPte(
                   (unsigned __int64)v9,
                   0xAAAAAAAAAAAAAAABuLL * ((v21 + 0x220000000000LL) >> 4),
                   -1342177274);
      v22 = MiLockPageInline(v21);
      *(_QWORD *)v21 = 0LL;
      v23 = v22;
      *(_QWORD *)(v21 + 8) = v9;
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v24 = KeGetCurrentIrql();
          if ( v24 <= 0xFu && v22 <= 0xFu && v24 >= 2u )
          {
            v25 = KeGetCurrentPrcb();
            v26 = v25->SchedulerAssist;
            v27 = ~(unsigned __int16)(-1LL << (v22 + 1));
            v31 = (v27 & v26[5]) == 0;
            v26[5] &= v27;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick((__int64)v25);
          }
        }
      }
      __writecr8(v23);
      MiWriteValidPteNewPage(v9++, ValidPte, 0);
      v28 = 512LL;
      goto LABEL_44;
    }
    ValidPte = MI_READ_PTE_LOCK_FREE(v8);
    if ( (ValidPte & 1) == 0 )
      KeBugCheckEx(0xDAu, 0x10BuLL, BugCheckParameter2, a3, BugCheckParameter4);
    MiInsertTbFlushEntry((__int64)v38, (__int64)(v8 << 25) >> 16, 1LL, 0);
    v29 = ZeroPte;
    v30 = 0;
    if ( MiPteInShadowRange(v8) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v30 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v31 = (ZeroPte & 1) == 0;
          goto LABEL_39;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v31 = (ZeroPte & 1) == 0;
LABEL_39:
        if ( !v31 )
          v29 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v8 = v29;
    if ( v30 )
      MiWritePteShadow(v8, v29);
    v28 = 1LL;
LABEL_44:
    v7 = &v34[v28];
    v34 = (_QWORD *)((char *)v34 + v28 * 8);
    v8 += v28 * 8;
  }
  MiFlushTbList((__int64)v38);
  if ( v20 != 17 )
  {
    if ( v19 )
      MiUnlockPageTableInternal(a2, v19);
    MiUnlockWorkingSetShared(a2, v20);
  }
}
