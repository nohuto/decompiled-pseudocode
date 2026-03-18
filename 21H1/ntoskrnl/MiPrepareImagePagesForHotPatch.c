/*
 * XREFs of MiPrepareImagePagesForHotPatch @ 0x1405390AC
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1408C8CE8 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     IoAllocateMdl @ 0x1402BE6D0 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1402C0A80 (IoFreeMdl.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiCountSharedPages @ 0x1403420A0 (MiCountSharedPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556408 (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1405EDAE0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x14062FA68 (MiReturnFullProcessCommitment.c)
 *     MiLogHotPatchPagesLocked @ 0x1408C7498 (MiLogHotPatchPagesLocked.c)
 */

__int64 __fastcall MiPrepareImagePagesForHotPatch(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // rbx
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 result; // rax
  unsigned __int64 v12; // rsi
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  __int16 v17; // bx
  __int64 v18; // r15
  int v19; // r15d
  int v20; // edi
  struct _MDL *v21; // rax
  struct _MDL *v22; // rbx
  unsigned int v23; // edi
  _KPROCESS *v24; // rcx
  __int64 v25; // rdx
  _DWORD *SchedulerAssist; // r9
  __int64 v27; // rsi
  struct _MDL *v28; // r10
  unsigned __int64 v29; // r11
  unsigned __int8 CurrentIrql; // r14
  __int64 v31; // r8
  __int64 v32; // rdi
  unsigned int v33; // ecx
  unsigned __int8 v34; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v36; // r8
  int v37; // eax
  bool v38; // zf
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned __int64 v41; // r8
  __int64 v42; // r13
  int v43; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v44; // [rsp+38h] [rbp-A0h]
  int v45; // [rsp+48h] [rbp-90h] BYREF
  __int64 v46; // [rsp+50h] [rbp-88h]
  __int64 v47; // [rsp+58h] [rbp-80h]
  PMDL Mdl; // [rsp+60h] [rbp-78h]
  unsigned __int64 v49; // [rsp+68h] [rbp-70h]
  __int64 v50; // [rsp+70h] [rbp-68h] BYREF
  _KPROCESS *v51; // [rsp+78h] [rbp-60h]
  _KPROCESS *v52; // [rsp+80h] [rbp-58h]
  __int64 v53; // [rsp+88h] [rbp-50h]
  __int64 v54[9]; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int8 v58; // [rsp+F8h] [rbp+20h]
  struct _MDL *v59; // [rsp+F8h] [rbp+20h]

  v50 = 0LL;
  v54[0] = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v51 = Process;
  v52 = Process;
  v5 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v6 = *a1;
  v46 = v6;
  Mdl = 0LL;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v49 = v7 + 8 * (a3 - 1);
  v8 = 0LL;
  v47 = 0LL;
  v9 = MiCountSharedPages(v6, v7, v49);
  v10 = v9;
  v53 = v9;
  if ( v9 )
  {
    result = MiChargeFullProcessCommitment(Process, v9);
    if ( (int)result < 0 )
      return result;
  }
  v44 = a2;
  v12 = 0LL;
  v13 = 1;
  v43 = 1;
  v58 = MiLockWorkingSetShared(v5);
  while ( v7 <= v49 )
  {
    if ( v13 || (v7 & 0xFFF) == 0 )
    {
      if ( v12 )
        MiUnlockPageTableInternal(v5, v12, v14);
      v12 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v7, 0LL, (*(_DWORD *)(v6 + 48) >> 12) & 0x3F, v58, 0);
      v43 = 0;
    }
    v15 = MI_READ_PTE_LOCK_FREE(v7);
    v17 = v15;
    v50 = v15;
    if ( (*(_BYTE *)v7 & 1) != 0 )
    {
      v18 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v50) >> 12) & 0xFFFFFFFFFLL)
          - 0x58000000000LL;
      if ( MI_PFN_IS_PROTO(v18)
        && ((*(_QWORD *)(v18 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v18 + 8) <= 0)
        && (*(_QWORD *)(v18 + 8) | 0x8000000000000000uLL) == MiGetProtoPteAddress(v46, v44 >> 12, 0, v54) )
      {
        v19 = MiCopyOnWrite(v44, (ULONG_PTR *)v7, 0xFFFFFFFFFFFFFFFFuLL, 0);
        if ( v19 >= 0 )
        {
          if ( (v17 & 0x200) == 0 )
            v47 = ++v8;
          goto LABEL_20;
        }
        MiUnlockPageTableInternal(v5, v12, v14);
        MiUnlockWorkingSetShared(v5, v58);
        v12 = 0LL;
        MiCopyOnWriteCheckConditions(v5, (unsigned int)v19);
        v13 = 1;
        v43 = 1;
        MiLockWorkingSetShared(v5);
        v6 = v46;
      }
      else
      {
LABEL_20:
        v7 += 8LL;
        v44 += 4096LL;
        v6 = v46;
        v13 = v43;
      }
    }
    else
    {
      MiUnlockPageTableInternal(v5, v12, v16);
      MiUnlockWorkingSetShared(v5, v58);
      v12 = 0LL;
      v13 = 1;
      v43 = 1;
      MiLockWorkingSetShared(v5);
    }
  }
  MiUnlockPageTableInternal(v5, v12, v14);
  MiUnlockWorkingSetShared(v5, v58);
  v20 = a3;
  v21 = IoAllocateMdl((PVOID)a2, (_DWORD)a3 << 12, 0, 0, 0LL);
  v22 = v21;
  Mdl = v21;
  if ( v21 )
  {
    MiProbeAndLockPages(v21, 0, 0);
    v22->MdlFlags |= 0x80u;
    v27 = 0LL;
    v28 = v22 + 1;
    v59 = v22 + 1;
    v29 = (unsigned __int64)&v22[1] + 8 * a3;
    v49 = v29;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v25 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v25;
    }
    if ( (unsigned __int64)v28 < v29 )
    {
      do
      {
        v31 = v27;
        v32 = 48 * (__int64)v28->Next - 0x58000000000LL;
        v45 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v45, v25, v31, (__int64)SchedulerAssist);
            while ( *(__int64 *)(v32 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) );
          v28 = v59;
          v29 = v49;
          v31 = v27;
        }
        v25 = (unsigned int)((*(_QWORD *)(v32 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 1;
        v33 = ((*(_QWORD *)(v32 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 2;
        if ( (*(_BYTE *)(v32 + 34) & 8) == 0 )
          v33 = ((*(_QWORD *)(v32 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 1;
        v27 = v31 + 1;
        if ( *(unsigned __int16 *)(v32 + 32) <= v33 )
          v27 = v31;
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v28 = (struct _MDL *)((char *)v28 + 8);
        v59 = v28;
      }
      while ( (unsigned __int64)v28 < v29 );
      v20 = a3;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v34 = KeGetCurrentIrql();
        if ( v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v36 = CurrentPrcb->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v38 = (v37 & v36[5]) == 0;
          v36[5] &= v37;
          if ( v38 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v27 )
    {
      v39 = *(_QWORD *)(***(_QWORD ***)(v6 + 72) + 56LL);
      MiLogHotPatchPagesLocked(a2, (v20 << 12) + a2 - 1, *(_DWORD *)(v39 + 60), *(_DWORD *)(v39 + 72), v27);
    }
    v40 = a1[7];
    if ( v40 )
      v22->Next = (struct _MDL *)v40;
    a1[7] = (__int64)v22;
    v23 = 0;
  }
  else
  {
    v23 = -1073741670;
  }
  v24 = v51;
  if ( v8 )
  {
    v41 = v8 + (*(_DWORD *)(v6 + 52) & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v6 + 34) << 31));
    *(_DWORD *)(v6 + 52) ^= (*(_DWORD *)(v6 + 52) ^ (v8
                                                   + (*(_DWORD *)(v6 + 52) & 0x7FFFFFFF | (*(unsigned __int8 *)(v6 + 34) << 31)))) & 0x7FFFFFFF;
    *(_BYTE *)(v6 + 34) = v41 >> 31;
  }
  v42 = v10 - v8;
  if ( v42 )
    MiReturnFullProcessCommitment(v24, v42);
  return v23;
}
