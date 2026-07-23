/*
 * XREFs of MiPrepareImagePagesForHotPatch @ 0x14053EE0C
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1408CD798 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiCountSharedPages @ 0x140209600 (MiCountSharedPages.c)
 *     IoAllocateMdl @ 0x140299F00 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055C138 (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1406E8830 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x140705C18 (MiReturnFullProcessCommitment.c)
 *     MiLogHotPatchPagesLocked @ 0x1408CBF48 (MiLogHotPatchPagesLocked.c)
 */

__int64 __fastcall MiPrepareImagePagesForHotPatch(__int64 *a1, ULONG_PTR a2, __int64 a3)
{
  _KPROCESS *Process; // rbx
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  __int64 v13; // r13
  __int64 result; // rax
  unsigned __int64 v15; // rsi
  int v16; // ebx
  __int64 v17; // rax
  __int16 v18; // bx
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  __int64 v22; // r15
  int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // r8
  _DWORD *v26; // r9
  int v27; // edi
  struct _MDL *v28; // rax
  struct _MDL *v29; // rbx
  unsigned int v30; // edi
  _KPROCESS *v31; // rcx
  __int64 v32; // rdx
  _DWORD *SchedulerAssist; // r9
  __int64 v34; // rsi
  struct _MDL *v35; // r10
  unsigned __int64 v36; // r11
  unsigned __int8 CurrentIrql; // r14
  __int64 v38; // r8
  __int64 v39; // rdi
  unsigned int v40; // ecx
  unsigned __int8 v41; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v43; // r8
  int v44; // eax
  bool v45; // zf
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int64 v48; // r8
  int v49; // [rsp+30h] [rbp-A8h]
  ULONG_PTR v50; // [rsp+38h] [rbp-A0h]
  int v51; // [rsp+48h] [rbp-90h] BYREF
  __int64 v52; // [rsp+50h] [rbp-88h]
  __int64 v53; // [rsp+58h] [rbp-80h]
  PMDL Mdl; // [rsp+60h] [rbp-78h]
  unsigned __int64 v55; // [rsp+68h] [rbp-70h]
  __int64 v56; // [rsp+70h] [rbp-68h] BYREF
  _KPROCESS *v57; // [rsp+78h] [rbp-60h]
  _KPROCESS *v58; // [rsp+80h] [rbp-58h]
  __int64 v59; // [rsp+88h] [rbp-50h]
  __int64 v60[9]; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int8 v64; // [rsp+F8h] [rbp+20h]
  struct _MDL *v65; // [rsp+F8h] [rbp+20h]

  v56 = 0LL;
  v60[0] = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v57 = Process;
  v58 = Process;
  v5 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v6 = *a1;
  v52 = v6;
  Mdl = 0LL;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v55 = v7 + 8 * (a3 - 1);
  v8 = 0LL;
  v53 = 0LL;
  v9 = MiCountSharedPages(v6, v7, v55);
  v13 = v9;
  v59 = v9;
  if ( v9 )
  {
    result = MiChargeFullProcessCommitment(Process, v9);
    if ( (int)result < 0 )
      return result;
  }
  v50 = a2;
  v15 = 0LL;
  v16 = 1;
  v49 = 1;
  v64 = MiLockWorkingSetShared(v5, v10, v11, v12);
  while ( v7 <= v55 )
  {
    if ( v16 || (v7 & 0xFFF) == 0 )
    {
      if ( v15 )
        MiUnlockPageTableInternal(v5, v15);
      v15 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v7, 0LL, (*(_DWORD *)(v6 + 48) >> 12) & 0x3F, v64, 0);
      v49 = 0;
    }
    v17 = MI_READ_PTE_LOCK_FREE(v7);
    v18 = v17;
    v56 = v17;
    if ( (*(_BYTE *)v7 & 1) != 0 )
    {
      v22 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v56) >> 12) & 0xFFFFFFFFFLL)
          - 0x58000000000LL;
      if ( MI_PFN_IS_PROTO(v22)
        && ((*(_QWORD *)(v22 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v22 + 8) <= 0)
        && (*(_QWORD *)(v22 + 8) | 0x8000000000000000uLL) == MiGetProtoPteAddress(v52, v50 >> 12, 0, v60) )
      {
        v23 = MiCopyOnWrite(v50, (ULONG_PTR *)v7, -1LL, 0);
        if ( v23 >= 0 )
        {
          if ( (v18 & 0x200) == 0 )
            v53 = ++v8;
          goto LABEL_20;
        }
        MiUnlockPageTableInternal(v5, v15);
        MiUnlockWorkingSetShared(v5, v64);
        v15 = 0LL;
        MiCopyOnWriteCheckConditions(v5, (unsigned int)v23);
        v16 = 1;
        v49 = 1;
        MiLockWorkingSetShared(v5, v24, v25, v26);
        v6 = v52;
      }
      else
      {
LABEL_20:
        v7 += 8LL;
        v50 += 4096LL;
        v6 = v52;
        v16 = v49;
      }
    }
    else
    {
      MiUnlockPageTableInternal(v5, v15);
      MiUnlockWorkingSetShared(v5, v64);
      v15 = 0LL;
      v16 = 1;
      v49 = 1;
      MiLockWorkingSetShared(v5, v19, v20, v21);
    }
  }
  MiUnlockPageTableInternal(v5, v15);
  MiUnlockWorkingSetShared(v5, v64);
  v27 = a3;
  v28 = IoAllocateMdl((PVOID)a2, (_DWORD)a3 << 12, 0, 0, 0LL);
  v29 = v28;
  Mdl = v28;
  if ( v28 )
  {
    MiProbeAndLockPages((__int64)v28, 0, 0);
    v29->MdlFlags |= 0x80u;
    v34 = 0LL;
    v35 = v29 + 1;
    v65 = v29 + 1;
    v36 = (unsigned __int64)&v29[1] + 8 * a3;
    v55 = v36;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v32 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v32;
    }
    if ( (unsigned __int64)v35 < v36 )
    {
      do
      {
        v38 = v34;
        v39 = 48 * (__int64)v35->Next - 0x58000000000LL;
        v51 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v51, v32, v38, (__int64)SchedulerAssist);
            while ( *(__int64 *)(v39 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) );
          v35 = v65;
          v36 = v55;
          v38 = v34;
        }
        v32 = (unsigned int)((*(_QWORD *)(v39 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 1;
        v40 = ((*(_QWORD *)(v39 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 2;
        if ( (*(_BYTE *)(v39 + 34) & 8) == 0 )
          v40 = ((*(_QWORD *)(v39 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 1;
        v34 = v38 + 1;
        if ( *(unsigned __int16 *)(v39 + 32) <= v40 )
          v34 = v38;
        _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v35 = (struct _MDL *)((char *)v35 + 8);
        v65 = v35;
      }
      while ( (unsigned __int64)v35 < v36 );
      v27 = a3;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v41 = KeGetCurrentIrql();
        if ( v41 <= 0xFu && CurrentIrql <= 0xFu && v41 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v43 = CurrentPrcb->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v45 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v45 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v34 )
    {
      v46 = *(_QWORD *)(***(_QWORD ***)(v6 + 72) + 56LL);
      MiLogHotPatchPagesLocked(a2, (v27 << 12) + a2 - 1, *(_DWORD *)(v46 + 60), *(_DWORD *)(v46 + 72), v34);
    }
    v47 = a1[7];
    if ( v47 )
      v29->Next = (struct _MDL *)v47;
    a1[7] = (__int64)v29;
    v30 = 0;
  }
  else
  {
    v30 = -1073741670;
  }
  v31 = v57;
  if ( v8 )
  {
    v48 = v8 + (*(_DWORD *)(v6 + 52) & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v6 + 34) << 31));
    *(_DWORD *)(v6 + 52) ^= (*(_DWORD *)(v6 + 52) ^ (v8
                                                   + (*(_DWORD *)(v6 + 52) & 0x7FFFFFFF | (*(unsigned __int8 *)(v6 + 34) << 31)))) & 0x7FFFFFFF;
    *(_BYTE *)(v6 + 34) = v48 >> 31;
  }
  if ( v13 != v8 )
    MiReturnFullProcessCommitment(v31);
  return v30;
}
