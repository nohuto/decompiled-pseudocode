/*
 * XREFs of MiExtendPagingFileMaximum @ 0x14059BFB0
 * Callers:
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 * Callees:
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetPfnPteFrame @ 0x14033C3E0 (MiSetPfnPteFrame.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x14037E128 (MiDerefPageFileSpaceBitmaps.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiExtendPagingFileMaximum(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  KIRQL v6; // al
  __int64 v7; // rsi
  unsigned __int64 v8; // r12
  unsigned int v9; // r13d
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rbp
  unsigned int v12; // edi
  ULONG v13; // edx
  ULONG v14; // edi
  __int128 v15; // xmm1
  _DWORD *v16; // rbx
  volatile LONG *v17; // r13
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  _QWORD *v23; // r15
  unsigned int v24; // edi
  unsigned __int64 v25; // r12
  __int64 v26; // rbx
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rsi
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  _DWORD *v37[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v38; // [rsp+30h] [rbp-58h]
  __int64 v39; // [rsp+40h] [rbp-48h]
  unsigned __int64 v40; // [rsp+90h] [rbp+8h]
  _QWORD *v41; // [rsp+98h] [rbp+10h]
  unsigned __int64 v42; // [rsp+A0h] [rbp+18h] BYREF

  v42 = a3;
  RtlSetAllBits((PRTL_BITMAP)(a2 + 8));
  RtlSetAllBits((PRTL_BITMAP)(a2 + 24));
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  v7 = *(_QWORD *)(a1 + 112);
  v8 = v6;
  v9 = *(_DWORD *)(v7 + 8);
  if ( a3 )
  {
    v10 = (_QWORD *)(((*(_QWORD *)(a1 + 216) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v41 = v10;
    v11 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v40 = (((unsigned int)dword_140C531CC * (unsigned __int64)v9) >> 12)
        + ((((unsigned int)dword_140C531CC * (unsigned __int64)v9) & 0xFFF) != 0);
    memmove((void *)v11, v10, 8 * v40);
    memset(v10, 0, 8 * v40);
  }
  else
  {
    v41 = 0LL;
    v11 = 0LL;
    v40 = 0LL;
  }
  v12 = 8 * ((v9 >> 6) + ((v9 & 0x3F) != 0));
  memmove(*(void **)(a2 + 16), *(const void **)(v7 + 16), v12);
  memmove(*(void **)(a2 + 32), *(const void **)(v7 + 32), v12);
  v13 = *(_DWORD *)(v7 + 8);
  v14 = (((v9 >> 6) + ((v9 & 0x3F) != 0)) << 6) - v13;
  if ( v14 )
  {
    RtlSetBits((PRTL_BITMAP)(a2 + 8), v13, v14);
    RtlSetBits((PRTL_BITMAP)(a2 + 24), *(_DWORD *)(v7 + 24), v14);
  }
  *(_QWORD *)(a1 + 8) = *(unsigned int *)(a2 + 8);
  v15 = *(_OWORD *)(v7 + 16);
  v37[1] = *(_DWORD **)(v7 + 8);
  v37[0] = (_DWORD *)v7;
  v39 = *(_QWORD *)(v7 + 32);
  v38 = v15;
  v16 = MiDerefPageFileSpaceBitmaps(a1, v37, 1);
  *(_QWORD *)(a1 + 112) = a2;
  v17 = (volatile LONG *)(a1 + 232);
  *(_QWORD *)(a1 + 216) = v42;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v22 = (v21 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  v23 = v41;
  if ( v41 )
  {
    v24 = v40;
    if ( v40 )
    {
      v25 = v40;
      do
      {
        v42 = MI_READ_PTE_LOCK_FREE(v11);
        if ( (v42 & 1) != 0 )
        {
          v26 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v42) >> 12) & 0xFFFFFFFFFFLL)
              - 0x220000000000LL;
          if ( (*(_QWORD *)(v26 + 8) | 0x8000000000000000uLL) != v11 )
          {
            v27 = (unsigned __int8)MiLockPageInline(v26);
            v28 = ExAcquireSpinLockExclusive(v17);
            v42 = MI_READ_PTE_LOCK_FREE(v11);
            if ( (v42 & 1) != 0
              && v26 == 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v42) >> 12) & 0xFFFFFFFFFFLL)
                      - 0x220000000000LL
              && (*(_QWORD *)(v26 + 8) | 0x8000000000000000uLL) != v11 )
            {
              v42 = MI_READ_PTE_LOCK_FREE(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
              MiSetPfnPteFrame(v26, (v42 >> 12) & 0xFFFFFFFFFFLL);
              *(_QWORD *)(v26 + 8) = v11;
            }
            ExReleaseSpinLockExclusiveFromDpcLevel(v17);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v29 = KeGetCurrentIrql();
                if ( v29 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v29 >= 2u )
                {
                  v30 = KeGetCurrentPrcb();
                  v31 = v30->SchedulerAssist;
                  v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
                  v22 = (v32 & v31[5]) == 0;
                  v31[5] &= v32;
                  if ( v22 )
                    KiRemoveSystemWorkPriorityKick((__int64)v30);
                }
              }
            }
            __writecr8(v28);
            _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v33 = KeGetCurrentIrql();
                if ( v33 <= 0xFu && (unsigned __int8)v27 <= 0xFu && v33 >= 2u )
                {
                  v34 = KeGetCurrentPrcb();
                  v35 = v34->SchedulerAssist;
                  v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
                  v22 = (v36 & v35[5]) == 0;
                  v35[5] &= v36;
                  if ( v22 )
                    KiRemoveSystemWorkPriorityKick((__int64)v34);
                }
              }
            }
            __writecr8(v27);
          }
        }
        v11 += 8LL;
        --v25;
      }
      while ( v25 );
      v24 = v40;
      v23 = v41;
    }
    MiReleasePtes((__int64)&qword_140C534C0, v23, v24);
  }
}
