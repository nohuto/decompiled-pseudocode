/*
 * XREFs of MiPrepareImagePagesForHotPatch @ 0x14053D0CC
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1408CFE78 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     IoFreeMdl @ 0x14020A410 (IoFreeMdl.c)
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     IoAllocateMdl @ 0x140248500 (IoAllocateMdl.c)
 *     MiProbeAndLockPages @ 0x14026BB80 (MiProbeAndLockPages.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1402B3F50 (MiGetProtoPteAddress.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiCountSharedPages @ 0x1402FF4F0 (MiCountSharedPages.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055A428 (MiCopyOnWriteCheckConditions.c)
 *     MiReturnFullProcessCommitment @ 0x14062645C (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x14067BD20 (MiChargeFullProcessCommitment.c)
 *     MiLogHotPatchPagesLocked @ 0x1408CE628 (MiLogHotPatchPagesLocked.c)
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
  __int64 v14; // rax
  __int16 v15; // bx
  __int64 v16; // r15
  int v17; // r15d
  int v18; // edi
  struct _MDL *v19; // rax
  struct _MDL *v20; // rbx
  unsigned int v21; // edi
  _KPROCESS *v22; // rcx
  __int64 v23; // rdx
  _DWORD *SchedulerAssist; // r9
  __int64 v25; // rsi
  struct _MDL *v26; // r10
  unsigned __int64 v27; // r11
  unsigned __int8 CurrentIrql; // r14
  __int64 v29; // r8
  __int64 v30; // rdi
  unsigned int v31; // ecx
  unsigned __int8 v32; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v34; // r8
  int v35; // eax
  bool v36; // zf
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // r8
  __int64 v40; // r13
  int v41; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v42; // [rsp+38h] [rbp-A0h]
  int v43; // [rsp+48h] [rbp-90h] BYREF
  __int64 v44; // [rsp+50h] [rbp-88h]
  __int64 v45; // [rsp+58h] [rbp-80h]
  PMDL Mdl; // [rsp+60h] [rbp-78h]
  unsigned __int64 v47; // [rsp+68h] [rbp-70h]
  __int64 v48; // [rsp+70h] [rbp-68h] BYREF
  _KPROCESS *v49; // [rsp+78h] [rbp-60h]
  _KPROCESS *v50; // [rsp+80h] [rbp-58h]
  __int64 v51; // [rsp+88h] [rbp-50h]
  __int64 v52[9]; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int8 v56; // [rsp+F8h] [rbp+20h]
  struct _MDL *v57; // [rsp+F8h] [rbp+20h]

  v48 = 0LL;
  v52[0] = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v49 = Process;
  v50 = Process;
  v5 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v6 = *a1;
  v44 = v6;
  Mdl = 0LL;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v47 = v7 + 8 * (a3 - 1);
  v8 = 0LL;
  v45 = 0LL;
  v9 = MiCountSharedPages(v6, v7, v47);
  v10 = v9;
  v51 = v9;
  if ( v9 )
  {
    result = MiChargeFullProcessCommitment(Process, v9);
    if ( (int)result < 0 )
      return result;
  }
  v42 = a2;
  v12 = 0LL;
  v13 = 1;
  v41 = 1;
  v56 = MiLockWorkingSetShared(v5);
  while ( v7 <= v47 )
  {
    if ( v13 || (v7 & 0xFFF) == 0 )
    {
      if ( v12 )
        MiUnlockPageTableInternal(v5, v12);
      v12 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v7, 0LL, (*(_DWORD *)(v6 + 48) >> 12) & 0x3F, v56, 0);
      v41 = 0;
    }
    v14 = MI_READ_PTE_LOCK_FREE(v7);
    v15 = v14;
    v48 = v14;
    if ( (*(_BYTE *)v7 & 1) != 0 )
    {
      v16 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v48) >> 12) & 0xFFFFFFFFFLL)
          - 0x58000000000LL;
      if ( MI_PFN_IS_PROTO(v16)
        && ((*(_QWORD *)(v16 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v16 + 8) <= 0)
        && (*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL) == MiGetProtoPteAddress(v44, v42 >> 12, 0, v52) )
      {
        v17 = MiCopyOnWrite(v42, (ULONG_PTR *)v7, -1LL, 0);
        if ( v17 >= 0 )
        {
          if ( (v15 & 0x200) == 0 )
            v45 = ++v8;
          goto LABEL_20;
        }
        MiUnlockPageTableInternal(v5, v12);
        MiUnlockWorkingSetShared(v5, v56);
        v12 = 0LL;
        MiCopyOnWriteCheckConditions(v5, (unsigned int)v17);
        v13 = 1;
        v41 = 1;
        MiLockWorkingSetShared(v5);
        v6 = v44;
      }
      else
      {
LABEL_20:
        v7 += 8LL;
        v42 += 4096LL;
        v6 = v44;
        v13 = v41;
      }
    }
    else
    {
      MiUnlockPageTableInternal(v5, v12);
      MiUnlockWorkingSetShared(v5, v56);
      v12 = 0LL;
      v13 = 1;
      v41 = 1;
      MiLockWorkingSetShared(v5);
    }
  }
  MiUnlockPageTableInternal(v5, v12);
  MiUnlockWorkingSetShared(v5, v56);
  v18 = a3;
  v19 = IoAllocateMdl((PVOID)a2, (_DWORD)a3 << 12, 0, 0, 0LL);
  v20 = v19;
  Mdl = v19;
  if ( v19 )
  {
    MiProbeAndLockPages((__int64)v19, 0, 0);
    v20->MdlFlags |= 0x80u;
    v25 = 0LL;
    v26 = v20 + 1;
    v57 = v20 + 1;
    v27 = (unsigned __int64)&v20[1] + 8 * a3;
    v47 = v27;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v23 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v23;
    }
    if ( (unsigned __int64)v26 < v27 )
    {
      do
      {
        v29 = v25;
        v30 = 48 * (__int64)v26->Next - 0x58000000000LL;
        v43 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v43, v23, v29, (__int64)SchedulerAssist);
            while ( *(__int64 *)(v30 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) );
          v26 = v57;
          v27 = v47;
          v29 = v25;
        }
        v23 = (unsigned int)((*(_QWORD *)(v30 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 1;
        v31 = ((*(_QWORD *)(v30 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 2;
        if ( (*(_BYTE *)(v30 + 34) & 8) == 0 )
          v31 = ((*(_QWORD *)(v30 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 1;
        v25 = v29 + 1;
        if ( *(unsigned __int16 *)(v30 + 32) <= v31 )
          v25 = v29;
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v26 = (struct _MDL *)((char *)v26 + 8);
        v57 = v26;
      }
      while ( (unsigned __int64)v26 < v27 );
      v18 = a3;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v32 = KeGetCurrentIrql();
        if ( v32 <= 0xFu && CurrentIrql <= 0xFu && v32 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v34 = CurrentPrcb->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v36 = (v35 & v34[5]) == 0;
          v34[5] &= v35;
          if ( v36 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v25 )
    {
      v37 = *(_QWORD *)(***(_QWORD ***)(v6 + 72) + 56LL);
      MiLogHotPatchPagesLocked(a2, (v18 << 12) + a2 - 1, *(_DWORD *)(v37 + 60), *(_DWORD *)(v37 + 72), v25);
    }
    v38 = a1[7];
    if ( v38 )
      v20->Next = (struct _MDL *)v38;
    a1[7] = (__int64)v20;
    v21 = 0;
  }
  else
  {
    v21 = -1073741670;
  }
  v22 = v49;
  if ( v8 )
  {
    v39 = v8 + (*(_DWORD *)(v6 + 52) & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v6 + 34) << 31));
    *(_DWORD *)(v6 + 52) ^= (*(_DWORD *)(v6 + 52) ^ (v8
                                                   + (*(_DWORD *)(v6 + 52) & 0x7FFFFFFF | (*(unsigned __int8 *)(v6 + 34) << 31)))) & 0x7FFFFFFF;
    *(_BYTE *)(v6 + 34) = v39 >> 31;
  }
  v40 = v10 - v8;
  if ( v40 )
    MiReturnFullProcessCommitment(v22, v40);
  return v21;
}
