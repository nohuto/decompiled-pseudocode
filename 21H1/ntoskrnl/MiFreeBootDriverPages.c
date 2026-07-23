/*
 * XREFs of MiFreeBootDriverPages @ 0x140A42C14
 * Callers:
 *     MiFreeInitializationCode @ 0x14074764C (MiFreeInitializationCode.c)
 *     MiHandleBootImage @ 0x140A426D8 (MiHandleBootImage.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14027DD60 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402FB584 (MiInsertLargeTbFlushEntry.c)
 *     MiFreeLargePageMemory @ 0x140345AB8 (MiFreeLargePageMemory.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiLockAndDecrementShareCount @ 0x140351040 (MiLockAndDecrementShareCount.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiFreeLargePageCharges @ 0x14055898C (MiFreeLargePageCharges.c)
 */

void __fastcall MiFreeBootDriverPages(void *a1, unsigned __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  _QWORD *v5; // r14
  PVOID v8; // r15
  __int64 v9; // rsi
  char v10; // r13
  unsigned __int64 v11; // rbp
  _KPROCESS *v12; // rdx
  unsigned __int64 v13; // rbx
  int v14; // r15d
  __int64 v15; // r8
  _DWORD *v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v21; // r13
  unsigned __int64 v22; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v25; // eax
  bool v26; // zf
  __int64 v27; // r8
  _DWORD *v28; // r9
  __int64 v29; // rax
  int v30; // [rsp+20h] [rbp-148h]
  int v31; // [rsp+24h] [rbp-144h]
  __int64 v33; // [rsp+30h] [rbp-138h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-130h]
  unsigned __int64 v35; // [rsp+40h] [rbp-128h]
  __int64 v36; // [rsp+48h] [rbp-120h]
  void *v37; // [rsp+50h] [rbp-118h]
  _QWORD v38[24]; // [rsp+60h] [rbp-108h] BYREF

  v5 = a5;
  v37 = a1;
  v8 = a1;
  v9 = 0LL;
  v33 = 0LL;
  v10 = a4;
  memset(v38, 0, 0xB8uLL);
  v31 = v10 & 2;
  if ( !a5 )
  {
    LODWORD(v38[1]) = 20;
    v5 = v38;
    v38[3] = 0LL;
  }
  v11 = a2 + 8 * (a3 - 1);
  v34 = v11;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)(a2 << 25) >> 16) )
  {
    v30 = 1;
    v12 = (_KPROCESS *)0xFFFFF68000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v11 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v34 = v11;
  }
  else
  {
    v30 = 0;
    MiInsertTbFlushEntry((__int64)v5, (__int64)(a2 << 25) >> 16, (8 * (a3 - 1) + 8) >> 3, 0);
  }
  if ( a2 <= v11 )
  {
    while ( 1 )
    {
      v13 = ZeroPte;
      v33 = MI_READ_PTE_LOCK_FREE(a2);
      v14 = 0;
      if ( MiPteInShadowRange(a2) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v14 = 1;
          if ( !HIBYTE(word_140C4DF48) )
            goto LABEL_10;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_10:
          if ( (ZeroPte & 1) != 0 )
            v13 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)a2 = v13;
      if ( v14 )
        MiWritePteShadow(a2, v13);
      v35 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v33) >> 12) & 0xFFFFFFFFFLL;
      v17 = 48 * v35 - 0x58000000000LL;
      v36 = 48 * (*(_QWORD *)(v17 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( v30 )
      {
        MiInsertLargeTbFlushEntry((__int64)v5, 1u, a2);
        v21 = 512LL;
        do
        {
          v22 = (unsigned __int8)MiLockPageInline(v17, v18, v19, SchedulerAssist);
          if ( !v31 )
            ++*(_WORD *)(v17 + 32);
          *(_BYTE *)(v17 + 35) &= ~8u;
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v22 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v18 = -1LL << ((unsigned __int8)v22 + 1);
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v25 = ~(unsigned __int16)v18;
                v26 = (v25 & SchedulerAssist[5]) == 0;
                v19 = (unsigned int)v25 & SchedulerAssist[5];
                SchedulerAssist[5] = v19;
                if ( v26 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(v22);
          v17 += 48LL;
          --v21;
        }
        while ( v21 );
        MiFreeLargePageMemory(v35, 1u, v31 != 0 ? 4 : 6);
        v11 = v34;
        v29 = 512LL;
      }
      else
      {
        *(_BYTE *)(v17 + 35) &= ~8u;
        MiLockAndDecrementShareCount(v17, 1LL, v15, v16);
        MiFreeLargePageCharges((__int64)&MiSystemPartition, 1LL);
        v29 = 1LL;
      }
      v9 += v29;
      MiLockAndDecrementShareCount(v36, 0LL, v27, v28);
      a2 += 8LL;
      if ( a2 > v11 )
      {
        v8 = v37;
        v10 = a4;
        break;
      }
    }
  }
  if ( v5 == v38 )
    MiFlushTbList((__int64)v5, v12);
  if ( v8 == PsNtosImageBase || v8 == PsHalImageBase )
  {
    qword_140C4EEF0 -= v9;
  }
  else if ( (v10 & 1) != 0 )
  {
    _InterlockedExchangeAdd(&dword_140C4EF10, -(int)v9);
  }
}
