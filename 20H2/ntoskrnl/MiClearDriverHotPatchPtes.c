/*
 * XREFs of MiClearDriverHotPatchPtes @ 0x14053C928
 * Callers:
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiDecrementShareCount @ 0x140290770 (MiDecrementShareCount.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x1402B1DC0 (MiMakeTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiLockNestedPageAtDpcInline @ 0x14030DC80 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 */

char __fastcall MiClearDriverHotPatchPtes(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rsi
  _QWORD *v4; // r12
  unsigned int v5; // r14d
  __int64 CurrentThread; // rax
  unsigned int v7; // r15d
  unsigned __int64 v8; // rbp
  _KPROCESS *v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 TransitionPte; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9
  unsigned __int64 v16; // r13
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  __int64 v21; // r8
  _DWORD *v22; // r9
  ULONG_PTR v23; // rbx
  __int64 v24; // rdi
  unsigned __int64 v25; // rbp
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rbx
  unsigned __int64 v30; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  unsigned __int64 v35; // rbx
  int v36; // edi
  __int64 v37; // r8
  bool v38; // zf
  int v40; // [rsp+30h] [rbp-118h]
  unsigned __int64 v41; // [rsp+40h] [rbp-108h] BYREF
  _QWORD v42[24]; // [rsp+50h] [rbp-F8h] BYREF

  memset(v42, 0, 0xB8uLL);
  v2 = *(_QWORD *)(a1 + 48);
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
  {
    v3 = *(_QWORD *)(a1 + 288);
    v40 = 1;
  }
  else
  {
    v40 = 0;
    v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL)
       - 0x98000000000LL
       + 8LL * ((*(_DWORD *)(a1 + 64) >> 12) + (unsigned int)((*(_DWORD *)(a1 + 64) & 0xFFF) != 0));
  }
  v4 = (_QWORD *)v3;
  v5 = ((unsigned int)dword_140C4CB30 >> 12) + ((dword_140C4CB30 & 0xFFF) != 0);
  LOBYTE(CurrentThread) = 0;
  v7 = 0;
  LODWORD(v42[1]) = 20;
  v8 = v3 << 25 >> 16;
  v42[3] = 0LL;
  if ( v5 )
  {
    do
    {
      CurrentThread = MI_READ_PTE_LOCK_FREE((unsigned __int64)v4);
      v41 = CurrentThread;
      if ( !CurrentThread )
        break;
      if ( (CurrentThread & 1) != 0 )
      {
        MiInsertTbFlushEntry((__int64)v42, v8, 1LL, 0);
        v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v41) >> 12) & 0xFFFFFFFFFLL;
        v11 = 48 * v10 - 0x58000000000LL;
        TransitionPte = MiMakeTransitionPte(v10, 1);
        v16 = (unsigned __int8)MiLockPageInline(v11, v13, v14, v15);
        *v4 = TransitionPte;
        MiDecrementShareCount(v11);
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(CurrentThread) = KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            LOBYTE(CurrentThread) = KeGetCurrentIrql();
            if ( (unsigned __int8)CurrentThread <= 0xFu
              && (unsigned __int8)v16 <= 0xFu
              && (unsigned __int8)CurrentThread >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v9 = (_KPROCESS *)(-1LL << ((unsigned __int8)v16 + 1));
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              LODWORD(CurrentThread) = ~(unsigned __int16)v9;
              v38 = ((unsigned int)CurrentThread & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= CurrentThread;
              if ( v38 )
                LOBYTE(CurrentThread) = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v16);
      }
      ++v4;
      v8 += 4096LL;
      ++v7;
    }
    while ( v7 < v5 );
    if ( v7 )
    {
      MiFlushTbList((unsigned int *)v42, v9);
      do
      {
        v20 = MI_READ_PTE_LOCK_FREE(v3);
        v41 = v20;
        if ( qword_140C4DDC0 )
        {
          if ( (v20 & 0x10) != 0 )
            v20 &= ~0x10uLL;
          else
            v20 &= ~qword_140C4DDC0;
        }
        v23 = (v20 >> 12) & 0xFFFFFFFFFLL;
        v24 = 48 * v23 - 0x58000000000LL;
        v25 = (unsigned __int8)MiLockPageInline(v24, v19, v21, v22);
        v28 = *(_QWORD *)(v24 + 24);
        if ( (v28 & 0x3FFFFFFFFFFFFFFFLL) != 0 )
          KeBugCheckEx(0x1Au, 0x18951uLL, v3, v23, *(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFLL);
        *(_BYTE *)(v24 + 34) = *(_BYTE *)(v24 + 34) & 0xF8 | 6;
        *(_QWORD *)(v24 + 24) = v28 & 0x8000000000000000uLL | 0x4000000000000001LL;
        v29 = 48 * (*(_QWORD *)(v24 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        MiLockNestedPageAtDpcInline(v29, 0x3FFFFFFFFFFFFFFFLL, v26, v27);
        *(_QWORD *)(v29 + 24) ^= ((*(_QWORD *)(v29 + 24) - 1LL) ^ *(_QWORD *)(v29 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v30 = *(_QWORD *)(v24 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
        *(_QWORD *)(v24 + 40) = v30;
        if ( v40 )
          *(_QWORD *)(v24 + 40) = v30 & 0x7FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 16) = 0LL;
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v25 <= 0xFu && CurrentIrql >= 2u )
            {
              v32 = KeGetCurrentPrcb();
              v33 = v32->SchedulerAssist;
              v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
              v38 = (v34 & v33[5]) == 0;
              v33[5] &= v34;
              if ( v38 )
                KiRemoveSystemWorkPriorityKick((__int64)v32);
            }
          }
        }
        __writecr8(v25);
        v35 = ZeroPte;
        v36 = 0;
        LODWORD(CurrentThread) = MiPteInShadowRange(v3);
        if ( !(_DWORD)CurrentThread )
          goto LABEL_40;
        LODWORD(CurrentThread) = MiPteHasShadow();
        if ( (_DWORD)CurrentThread )
        {
          v36 = 1;
          if ( !HIBYTE(word_140C4DE88) )
          {
            v38 = (ZeroPte & 1) == 0;
            goto LABEL_38;
          }
        }
        else
        {
          CurrentThread = (__int64)KeGetCurrentThread();
          if ( (*(_DWORD *)(*(_QWORD *)(CurrentThread + 184) + 2172LL) & 0x1000) != 0 )
          {
            v38 = (ZeroPte & 1) == 0;
LABEL_38:
            if ( !v38 )
              v35 = ZeroPte | 0x8000000000000000uLL;
          }
        }
LABEL_40:
        *(_QWORD *)v3 = v35;
        if ( v36 )
          LOBYTE(CurrentThread) = MiWritePteShadow(v3, v35, v37);
        v3 += 8LL;
        --v7;
      }
      while ( v7 );
    }
  }
  return CurrentThread;
}
