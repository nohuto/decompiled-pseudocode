/*
 * XREFs of MiExtendPagingFileMaximum @ 0x1405432D0
 * Callers:
 *     MiCreatePagingFile @ 0x1407B6B3C (MiCreatePagingFile.c)
 * Callees:
 *     MiDerefPageFileSpaceBitmaps @ 0x140242220 (MiDerefPageFileSpaceBitmaps.c)
 *     RtlSetAllBits @ 0x1402934B0 (RtlSetAllBits.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     RtlSetBits @ 0x140363CC0 (RtlSetBits.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiExtendPagingFileMaximum(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _RTL_BITMAP *v3; // r13
  KIRQL v7; // al
  __int64 v8; // rsi
  unsigned __int64 v9; // r12
  unsigned int v10; // ecx
  _QWORD *v11; // rdi
  unsigned int v12; // edi
  ULONG v13; // edx
  ULONG v14; // edi
  __int128 v15; // xmm1
  _DWORD *v16; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  _QWORD *v22; // r13
  unsigned int v23; // r12d
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rbx
  _KPROCESS *Process; // rdx
  BOOL v28; // edi
  struct _LIST_ENTRY *Flink; // r8
  _DWORD *v30; // r9
  __int64 v31; // rax
  __int64 v32; // rbx
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rdx
  struct _LIST_ENTRY *v36; // r9
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  _DWORD *v41; // r9
  int v42; // eax
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r9
  int v46; // eax
  void *v47; // [rsp+20h] [rbp-48h]
  volatile LONG *SpinLock; // [rsp+28h] [rbp-40h]
  _DWORD *v49[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v50; // [rsp+40h] [rbp-28h]
  __int64 v51; // [rsp+50h] [rbp-18h]
  unsigned int v52; // [rsp+B0h] [rbp+48h]
  unsigned __int64 v53; // [rsp+B0h] [rbp+48h]
  unsigned __int64 v54; // [rsp+B8h] [rbp+50h]
  unsigned __int64 v55; // [rsp+C0h] [rbp+58h] BYREF
  _QWORD *v56; // [rsp+C8h] [rbp+60h]

  v55 = a3;
  v3 = (_RTL_BITMAP *)(a2 + 8);
  RtlSetAllBits((PRTL_BITMAP)(a2 + 8));
  RtlSetAllBits((PRTL_BITMAP)(a2 + 24));
  SpinLock = (volatile LONG *)(a1 + 232);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  v8 = *(_QWORD *)(a1 + 112);
  v9 = v7;
  v10 = *(_DWORD *)(v8 + 8);
  v52 = v10;
  if ( a3 )
  {
    v11 = (_QWORD *)(((*(_QWORD *)(a1 + 216) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v56 = v11;
    v47 = (void *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v54 = ((4 * (unsigned __int64)v10) >> 12) + (((4LL * v10) & 0xFFF) != 0);
    memmove(v47, v11, 8 * v54);
    memset(v11, 0, 8 * v54);
    v10 = v52;
  }
  else
  {
    v56 = 0LL;
    v47 = 0LL;
    v54 = 0LL;
  }
  v12 = 8 * ((v10 >> 6) + ((v10 & 0x3F) != 0));
  memmove(*(void **)(a2 + 16), *(const void **)(v8 + 16), v12);
  memmove(*(void **)(a2 + 32), *(const void **)(v8 + 32), v12);
  v13 = *(_DWORD *)(v8 + 8);
  v14 = 8 * v12 - v13;
  if ( v14 )
  {
    RtlSetBits(v3, v13, v14);
    RtlSetBits((PRTL_BITMAP)(a2 + 24), *(_DWORD *)(v8 + 24), v14);
  }
  *(_QWORD *)(a1 + 8) = v3->SizeOfBitMap;
  v15 = *(_OWORD *)(v8 + 16);
  v49[1] = *(_DWORD **)(v8 + 8);
  v49[0] = (_DWORD *)v8;
  v51 = *(_QWORD *)(v8 + 32);
  v50 = v15;
  v16 = MiDerefPageFileSpaceBitmaps(a1, v49, 1);
  *(_QWORD *)(a1 + 112) = a2;
  *(_QWORD *)(a1 + 216) = v55;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v21 = (v20 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  v22 = v56;
  if ( v56 )
  {
    v23 = v54;
    if ( v54 )
    {
      v24 = (unsigned __int64)v47;
      v25 = v54;
      v53 = v54;
      do
      {
        v55 = MI_READ_PTE_LOCK_FREE(v24);
        v26 = v55;
        if ( (v55 & 1) != 0 )
        {
          v28 = MiPteInShadowRange((unsigned __int64)&v55);
          if ( v28 )
          {
            if ( (MiFlags & 0xC00000) != 0 )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( Process->AddressPolicy != 1 )
              {
                Process = (_KPROCESS *)v26;
                if ( (v26 & 0x20) == 0 || (v26 & 0x42) == 0 )
                {
                  Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( Flink )
                  {
                    v31 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v55 >> 3) & 0x1FF));
                    if ( (v31 & 0x20) != 0 )
                      v26 |= 0x20uLL;
                    if ( (v31 & 0x42) != 0 )
                      v26 |= 0x42uLL;
                  }
                  else
                  {
                    v26 = v55;
                  }
                }
              }
            }
          }
          v32 = 48 * ((v26 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          if ( (*(_QWORD *)(v32 + 8) | 0x8000000000000000uLL) != v24 )
          {
            v33 = (unsigned __int8)MiLockPageInline(v32, (__int64)Process, (__int64)Flink, v30);
            v34 = ExAcquireSpinLockExclusive(SpinLock);
            v55 = MI_READ_PTE_LOCK_FREE(v24);
            v35 = v55;
            if ( (v55 & 1) != 0 )
            {
              if ( v28
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && ((v55 & 0x20) == 0 || (v55 & 0x42) == 0) )
              {
                v36 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v36 )
                {
                  v37 = *((_QWORD *)&v36->Flink + (((unsigned __int64)&v55 >> 3) & 0x1FF));
                  if ( (v37 & 0x20) != 0 )
                    v35 = v55 | 0x20;
                  if ( (v37 & 0x42) != 0 )
                    v35 |= 0x42uLL;
                }
                else
                {
                  v35 = v55;
                }
              }
              if ( v32 == 48 * ((v35 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL
                && (*(_QWORD *)(v32 + 8) | 0x8000000000000000uLL) != v24 )
              {
                v55 = MI_READ_PTE_LOCK_FREE(((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                v38 = (*(_QWORD *)(v32 + 40) ^ (v55 >> 12)) & 0xFFFFFFFFFLL;
                *(_QWORD *)(v32 + 8) = v24;
                *(_QWORD *)(v32 + 40) ^= v38;
              }
            }
            ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v39 = KeGetCurrentIrql();
                if ( v39 <= 0xFu && (unsigned __int8)v34 <= 0xFu && v39 >= 2u )
                {
                  v40 = KeGetCurrentPrcb();
                  v41 = v40->SchedulerAssist;
                  v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
                  v21 = (v42 & v41[5]) == 0;
                  v41[5] &= v42;
                  if ( v21 )
                    KiRemoveSystemWorkPriorityKick((__int64)v40);
                }
              }
            }
            __writecr8(v34);
            _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v43 = KeGetCurrentIrql();
                if ( v43 <= 0xFu && (unsigned __int8)v33 <= 0xFu && v43 >= 2u )
                {
                  v44 = KeGetCurrentPrcb();
                  v45 = v44->SchedulerAssist;
                  v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v33 + 1));
                  v21 = (v46 & v45[5]) == 0;
                  v45[5] &= v46;
                  if ( v21 )
                    KiRemoveSystemWorkPriorityKick((__int64)v44);
                }
              }
            }
            __writecr8(v33);
            v25 = v53;
          }
        }
        v24 += 8LL;
        v53 = --v25;
      }
      while ( v25 );
      v23 = v54;
      v22 = v56;
    }
    MiReleasePtes((__int64)&qword_140C4EF80, v22, v23);
  }
}
