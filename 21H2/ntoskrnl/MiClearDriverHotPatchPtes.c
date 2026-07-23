/*
 * XREFs of MiClearDriverHotPatchPtes @ 0x14053E668
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x140339700 (MiMakeTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
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
  __int64 v26; // rax
  __int64 v27; // rbx
  unsigned __int64 v28; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  unsigned __int64 v33; // rbx
  int v34; // edi
  bool v35; // zf
  int v37; // [rsp+30h] [rbp-118h]
  unsigned __int64 v38; // [rsp+40h] [rbp-108h] BYREF
  _QWORD v39[24]; // [rsp+50h] [rbp-F8h] BYREF

  memset(v39, 0, 0xB8uLL);
  v2 = *(_QWORD *)(a1 + 48);
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
  {
    v3 = *(_QWORD *)(a1 + 288);
    v37 = 1;
  }
  else
  {
    v37 = 0;
    v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL)
       - 0x98000000000LL
       + 8LL * ((*(_DWORD *)(a1 + 64) >> 12) + (unsigned int)((*(_DWORD *)(a1 + 64) & 0xFFF) != 0));
  }
  v4 = (_QWORD *)v3;
  v5 = ((unsigned int)dword_140C4CCF0 >> 12) + ((dword_140C4CCF0 & 0xFFF) != 0);
  LOBYTE(CurrentThread) = 0;
  v7 = 0;
  LODWORD(v39[1]) = 20;
  v8 = v3 << 25 >> 16;
  v39[3] = 0LL;
  if ( v5 )
  {
    do
    {
      CurrentThread = MI_READ_PTE_LOCK_FREE((unsigned __int64)v4);
      v38 = CurrentThread;
      if ( !CurrentThread )
        break;
      if ( (CurrentThread & 1) != 0 )
      {
        MiInsertTbFlushEntry((__int64)v39, v8, 1LL, 0);
        v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v38) >> 12) & 0xFFFFFFFFFLL;
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
              v35 = ((unsigned int)CurrentThread & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= CurrentThread;
              if ( v35 )
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
      MiFlushTbList((__int64)v39, v9);
      do
      {
        v20 = MI_READ_PTE_LOCK_FREE(v3);
        v38 = v20;
        if ( qword_140C4DF80 )
        {
          if ( (v20 & 0x10) != 0 )
            v20 &= ~0x10uLL;
          else
            v20 &= ~qword_140C4DF80;
        }
        v23 = (v20 >> 12) & 0xFFFFFFFFFLL;
        v24 = 48 * v23 - 0x58000000000LL;
        v25 = (unsigned __int8)MiLockPageInline(v24, v19, v21, v22);
        v26 = *(_QWORD *)(v24 + 24);
        if ( (v26 & 0x3FFFFFFFFFFFFFFFLL) != 0 )
          KeBugCheckEx(0x1Au, 0x18951uLL, v3, v23, *(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFLL);
        *(_BYTE *)(v24 + 34) = *(_BYTE *)(v24 + 34) & 0xF8 | 6;
        *(_QWORD *)(v24 + 24) = v26 & 0x8000000000000000uLL | 0x4000000000000001LL;
        v27 = 48 * (*(_QWORD *)(v24 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        MiLockNestedPageAtDpcInline(v27);
        *(_QWORD *)(v27 + 24) ^= ((*(_QWORD *)(v27 + 24) - 1LL) ^ *(_QWORD *)(v27 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v28 = *(_QWORD *)(v24 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
        *(_QWORD *)(v24 + 40) = v28;
        if ( v37 )
          *(_QWORD *)(v24 + 40) = v28 & 0x7FFFFFFFFFFFFFFFLL;
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
              v30 = KeGetCurrentPrcb();
              v31 = v30->SchedulerAssist;
              v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
              v35 = (v32 & v31[5]) == 0;
              v31[5] &= v32;
              if ( v35 )
                KiRemoveSystemWorkPriorityKick((__int64)v30);
            }
          }
        }
        __writecr8(v25);
        v33 = ZeroPte;
        v34 = 0;
        LODWORD(CurrentThread) = MiPteInShadowRange(v3);
        if ( !(_DWORD)CurrentThread )
          goto LABEL_40;
        LODWORD(CurrentThread) = MiPteHasShadow();
        if ( (_DWORD)CurrentThread )
        {
          v34 = 1;
          if ( !HIBYTE(word_140C4E048) )
          {
            v35 = (ZeroPte & 1) == 0;
            goto LABEL_38;
          }
        }
        else
        {
          CurrentThread = (__int64)KeGetCurrentThread();
          if ( (*(_DWORD *)(*(_QWORD *)(CurrentThread + 184) + 2172LL) & 0x1000) != 0 )
          {
            v35 = (ZeroPte & 1) == 0;
LABEL_38:
            if ( !v35 )
              v33 = ZeroPte | 0x8000000000000000uLL;
          }
        }
LABEL_40:
        *(_QWORD *)v3 = v33;
        if ( v34 )
          LOBYTE(CurrentThread) = MiWritePteShadow(v3, v33);
        v3 += 8LL;
        --v7;
      }
      while ( v7 );
    }
  }
  return CurrentThread;
}
