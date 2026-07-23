/*
 * XREFs of MiFreeBootDriverPages @ 0x140A51050
 * Callers:
 *     MiFreeInitializationCode @ 0x14075EE2C (MiFreeInitializationCode.c)
 *     MiHandleBootImage @ 0x140A50B14 (MiHandleBootImage.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x1402199E0 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockAndDecrementShareCount @ 0x140287230 (MiLockAndDecrementShareCount.c)
 *     MiFreeLargePageMemory @ 0x1403093A4 (MiFreeLargePageMemory.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiFreeLargePageCharges @ 0x14055E6BC (MiFreeLargePageCharges.c)
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
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v19; // r13
  unsigned __int64 v20; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v23; // eax
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // [rsp+20h] [rbp-148h]
  int v29; // [rsp+24h] [rbp-144h]
  __int64 v31; // [rsp+30h] [rbp-138h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-130h]
  unsigned __int64 v33; // [rsp+40h] [rbp-128h]
  __int64 v34; // [rsp+48h] [rbp-120h]
  void *v35; // [rsp+50h] [rbp-118h]
  _QWORD v36[24]; // [rsp+60h] [rbp-108h] BYREF

  v5 = a5;
  v35 = a1;
  v8 = a1;
  v9 = 0LL;
  v31 = 0LL;
  v10 = a4;
  memset(v36, 0, 0xB8uLL);
  v29 = v10 & 2;
  if ( !a5 )
  {
    LODWORD(v36[1]) = 20;
    v5 = v36;
    v36[3] = 0LL;
  }
  v11 = a2 + 8 * (a3 - 1);
  v32 = v11;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)(a2 << 25) >> 16) )
  {
    v28 = 1;
    v12 = (_KPROCESS *)0xFFFFF68000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v11 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v32 = v11;
  }
  else
  {
    v28 = 0;
    MiInsertTbFlushEntry((__int64)v5, (__int64)(a2 << 25) >> 16, (8 * (a3 - 1) + 8) >> 3, 0);
  }
  if ( a2 <= v11 )
  {
    while ( 1 )
    {
      v13 = ZeroPte;
      v31 = MI_READ_PTE_LOCK_FREE(a2);
      v14 = 0;
      if ( MiPteInShadowRange(a2) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v14 = 1;
          if ( !HIBYTE(word_140C4E048) )
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
      v33 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v31) >> 12) & 0xFFFFFFFFFLL;
      v15 = 48 * v33 - 0x58000000000LL;
      v34 = 48 * (*(_QWORD *)(v15 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( v28 )
      {
        MiInsertLargeTbFlushEntry((__int64)v5, 1u, a2);
        v19 = 512LL;
        do
        {
          v20 = (unsigned __int8)MiLockPageInline(v15, v16, v17, SchedulerAssist);
          if ( !v29 )
            ++*(_WORD *)(v15 + 32);
          *(_BYTE *)(v15 + 35) &= ~8u;
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v20 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v16 = -1LL << ((unsigned __int8)v20 + 1);
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v23 = ~(unsigned __int16)v16;
                v24 = (v23 & SchedulerAssist[5]) == 0;
                v17 = (unsigned int)v23 & SchedulerAssist[5];
                SchedulerAssist[5] = v17;
                if ( v24 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(v20);
          v15 += 48LL;
          --v19;
        }
        while ( v19 );
        MiFreeLargePageMemory(v33, 1u, v29 != 0 ? 4 : 6);
        v11 = v32;
        v25 = 512LL;
      }
      else
      {
        *(_BYTE *)(v15 + 35) &= ~8u;
        MiLockAndDecrementShareCount(v15, 1);
        MiFreeLargePageCharges((__int64)&MiSystemPartition, 1uLL, v26, v27);
        v25 = 1LL;
      }
      v9 += v25;
      MiLockAndDecrementShareCount(v34, 0);
      a2 += 8LL;
      if ( a2 > v11 )
      {
        v8 = v35;
        v10 = a4;
        break;
      }
    }
  }
  if ( v5 == v36 )
    MiFlushTbList((__int64)v5, v12);
  if ( v8 == PsNtosImageBase || v8 == PsHalImageBase )
  {
    qword_140C4EFF0 -= v9;
  }
  else if ( (v10 & 1) != 0 )
  {
    _InterlockedExchangeAdd(&dword_140C4F010, -(int)v9);
  }
}
