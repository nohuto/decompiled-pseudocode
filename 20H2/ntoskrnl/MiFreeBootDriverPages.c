/*
 * XREFs of MiFreeBootDriverPages @ 0x140A4E704
 * Callers:
 *     MiFreeInitializationCode @ 0x140757DAC (MiFreeInitializationCode.c)
 *     MiHandleBootImage @ 0x140A4E1C8 (MiHandleBootImage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiLockAndDecrementShareCount @ 0x140250E00 (MiLockAndDecrementShareCount.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140295510 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiFreeLargePageMemory @ 0x1402F19BC (MiFreeLargePageMemory.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x140319B24 (MiInsertLargeTbFlushEntry.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiFreeLargePageCharges @ 0x14055C9AC (MiFreeLargePageCharges.c)
 */

void __fastcall MiFreeBootDriverPages(void *a1, unsigned __int64 a2, __int64 a3, char a4, unsigned int *a5)
{
  unsigned int *v5; // r14
  PVOID v8; // r15
  __int64 v9; // rsi
  char v10; // r13
  unsigned __int64 v11; // rbp
  _KPROCESS *v12; // rdx
  unsigned __int64 v13; // rbx
  int v14; // r15d
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v20; // r13
  unsigned __int64 v21; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v24; // eax
  bool v25; // zf
  __int64 v26; // rax
  int v27; // [rsp+20h] [rbp-148h]
  int v28; // [rsp+24h] [rbp-144h]
  __int64 v30; // [rsp+30h] [rbp-138h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-130h]
  unsigned __int64 v32; // [rsp+40h] [rbp-128h]
  __int64 v33; // [rsp+48h] [rbp-120h]
  void *v34; // [rsp+50h] [rbp-118h]
  _QWORD v35[24]; // [rsp+60h] [rbp-108h] BYREF

  v5 = a5;
  v34 = a1;
  v8 = a1;
  v9 = 0LL;
  v30 = 0LL;
  v10 = a4;
  memset(v35, 0, 0xB8uLL);
  v28 = v10 & 2;
  if ( !a5 )
  {
    LODWORD(v35[1]) = 20;
    v5 = (unsigned int *)v35;
    v35[3] = 0LL;
  }
  v11 = a2 + 8 * (a3 - 1);
  v31 = v11;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)(a2 << 25) >> 16) )
  {
    v27 = 1;
    v12 = (_KPROCESS *)0xFFFFF68000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v11 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v31 = v11;
  }
  else
  {
    v27 = 0;
    MiInsertTbFlushEntry((__int64)v5, (__int64)(a2 << 25) >> 16, (8 * (a3 - 1) + 8) >> 3, 0);
  }
  if ( a2 <= v11 )
  {
    while ( 1 )
    {
      v13 = ZeroPte;
      v30 = MI_READ_PTE_LOCK_FREE(a2);
      v14 = 0;
      if ( MiPteInShadowRange(a2) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v14 = 1;
          if ( !HIBYTE(word_140C4DE88) )
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
        MiWritePteShadow(a2, v13, v15);
      v32 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v30) >> 12) & 0xFFFFFFFFFLL;
      v16 = 48 * v32 - 0x58000000000LL;
      v33 = 48 * (*(_QWORD *)(v16 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( v27 )
      {
        MiInsertLargeTbFlushEntry((__int64)v5, 1u, a2);
        v20 = 512LL;
        do
        {
          v21 = (unsigned __int8)MiLockPageInline(v16, v17, v18, SchedulerAssist);
          if ( !v28 )
            ++*(_WORD *)(v16 + 32);
          *(_BYTE *)(v16 + 35) &= ~8u;
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v21 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v17 = -1LL << ((unsigned __int8)v21 + 1);
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v24 = ~(unsigned __int16)v17;
                v25 = (v24 & SchedulerAssist[5]) == 0;
                v18 = (unsigned int)v24 & SchedulerAssist[5];
                SchedulerAssist[5] = v18;
                if ( v25 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(v21);
          v16 += 48LL;
          --v20;
        }
        while ( v20 );
        MiFreeLargePageMemory(v32, 1u, v28 != 0 ? 4 : 6);
        v11 = v31;
        v26 = 512LL;
      }
      else
      {
        *(_BYTE *)(v16 + 35) &= ~8u;
        MiLockAndDecrementShareCount(v16, 1);
        MiFreeLargePageCharges((__int64)&MiSystemPartition, 1LL);
        v26 = 1LL;
      }
      v9 += v26;
      MiLockAndDecrementShareCount(v33, 0);
      a2 += 8LL;
      if ( a2 > v11 )
      {
        v8 = v34;
        v10 = a4;
        break;
      }
    }
  }
  if ( v5 == (unsigned int *)v35 )
    MiFlushTbList(v5, v12);
  if ( v8 == PsNtosImageBase || v8 == PsHalImageBase )
  {
    qword_140C4EE30 -= v9;
  }
  else if ( (v10 & 1) != 0 )
  {
    _InterlockedExchangeAdd(&dword_140C4EE50, -(int)v9);
  }
}
