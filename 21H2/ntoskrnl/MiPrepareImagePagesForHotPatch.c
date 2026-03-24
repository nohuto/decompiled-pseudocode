/*
 * XREFs of MiPrepareImagePagesForHotPatch @ 0x14053EBCC
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1408CD638 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14020A860 (MiProbeAndLockPages.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiCountSharedPages @ 0x14028C460 (MiCountSharedPages.c)
 *     IoAllocateMdl @ 0x1402E8BB0 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1402E9600 (IoFreeMdl.c)
 *     MiMakeSystemAddressValid @ 0x14030E390 (MiMakeSystemAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140330B40 (MiGetProtoPteAddress.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055BEF8 (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1405F90D0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1406EE838 (MiReturnFullProcessCommitment.c)
 *     MiLogHotPatchPagesLocked @ 0x1408CBDE8 (MiLogHotPatchPagesLocked.c)
 */

__int64 __fastcall MiPrepareImagePagesForHotPatch(__int64 *a1, ULONG_PTR a2, __int64 a3, _DWORD *a4)
{
  _KPROCESS *Process; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  __int64 v14; // r13
  __int64 result; // rax
  unsigned __int64 v16; // rsi
  int v17; // ebx
  __int64 v18; // rax
  __int16 v19; // bx
  __int64 v20; // rdx
  __int64 v21; // r8
  _DWORD *v22; // r9
  __int64 v23; // r15
  int v24; // r15d
  __int64 v25; // rdx
  __int64 v26; // r8
  _DWORD *v27; // r9
  int v28; // edi
  struct _MDL *v29; // rax
  struct _MDL *v30; // rbx
  unsigned int v31; // edi
  _KPROCESS *v32; // rcx
  __int64 v33; // rdx
  _DWORD *SchedulerAssist; // r9
  __int64 v35; // rsi
  struct _MDL *v36; // r10
  unsigned __int64 v37; // r11
  unsigned __int8 CurrentIrql; // r14
  __int64 v39; // r8
  __int64 v40; // rdi
  unsigned int v41; // ecx
  unsigned __int8 v42; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v44; // r8
  int v45; // eax
  bool v46; // zf
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int64 v49; // r8
  int v50; // [rsp+30h] [rbp-A8h]
  ULONG_PTR v51; // [rsp+38h] [rbp-A0h]
  int v52; // [rsp+48h] [rbp-90h] BYREF
  __int64 v53; // [rsp+50h] [rbp-88h]
  __int64 v54; // [rsp+58h] [rbp-80h]
  PMDL Mdl; // [rsp+60h] [rbp-78h]
  unsigned __int64 v56; // [rsp+68h] [rbp-70h]
  __int64 v57; // [rsp+70h] [rbp-68h] BYREF
  _KPROCESS *v58; // [rsp+78h] [rbp-60h]
  _KPROCESS *v59; // [rsp+80h] [rbp-58h]
  __int64 v60; // [rsp+88h] [rbp-50h]
  __int64 v61[9]; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int8 v65; // [rsp+F8h] [rbp+20h]
  struct _MDL *v66; // [rsp+F8h] [rbp+20h]

  v57 = 0LL;
  v61[0] = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v58 = Process;
  v59 = Process;
  v6 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v7 = *a1;
  v53 = v7;
  Mdl = 0LL;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v56 = v8 + 8 * (a3 - 1);
  v9 = 0LL;
  v54 = 0LL;
  v10 = MiCountSharedPages(v7, v8, v56, a4);
  v14 = v10;
  v60 = v10;
  if ( v10 )
  {
    result = MiChargeFullProcessCommitment(Process, v10);
    if ( (int)result < 0 )
      return result;
  }
  v51 = a2;
  v16 = 0LL;
  v17 = 1;
  v50 = 1;
  v65 = MiLockWorkingSetShared(v6, v11, v12, v13);
  while ( v8 <= v56 )
  {
    if ( v17 || (v8 & 0xFFF) == 0 )
    {
      if ( v16 )
        MiUnlockPageTableInternal(v6, v16);
      v16 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v8, 0LL, (*(_DWORD *)(v7 + 48) >> 12) & 0x3F, v65, 0);
      v50 = 0;
    }
    v18 = MI_READ_PTE_LOCK_FREE(v8);
    v19 = v18;
    v57 = v18;
    if ( (*(_BYTE *)v8 & 1) != 0 )
    {
      v23 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v57) >> 12) & 0xFFFFFFFFFLL)
          - 0x58000000000LL;
      if ( MI_PFN_IS_PROTO(v23)
        && ((*(_QWORD *)(v23 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v23 + 8) <= 0)
        && (*(_QWORD *)(v23 + 8) | 0x8000000000000000uLL) == MiGetProtoPteAddress(v53, v51 >> 12, 0, v61) )
      {
        v24 = MiCopyOnWrite(v51, (ULONG_PTR *)v8, -1LL, 0);
        if ( v24 >= 0 )
        {
          if ( (v19 & 0x200) == 0 )
            v54 = ++v9;
          goto LABEL_20;
        }
        MiUnlockPageTableInternal(v6, v16);
        MiUnlockWorkingSetShared(v6, v65);
        v16 = 0LL;
        MiCopyOnWriteCheckConditions(v6, (unsigned int)v24);
        v17 = 1;
        v50 = 1;
        MiLockWorkingSetShared(v6, v25, v26, v27);
        v7 = v53;
      }
      else
      {
LABEL_20:
        v8 += 8LL;
        v51 += 4096LL;
        v7 = v53;
        v17 = v50;
      }
    }
    else
    {
      MiUnlockPageTableInternal(v6, v16);
      MiUnlockWorkingSetShared(v6, v65);
      v16 = 0LL;
      v17 = 1;
      v50 = 1;
      MiLockWorkingSetShared(v6, v20, v21, v22);
    }
  }
  MiUnlockPageTableInternal(v6, v16);
  MiUnlockWorkingSetShared(v6, v65);
  v28 = a3;
  v29 = IoAllocateMdl((PVOID)a2, (_DWORD)a3 << 12, 0, 0, 0LL);
  v30 = v29;
  Mdl = v29;
  if ( v29 )
  {
    MiProbeAndLockPages((__int64)v29, 0, 0);
    v30->MdlFlags |= 0x80u;
    v35 = 0LL;
    v36 = v30 + 1;
    v66 = v30 + 1;
    v37 = (unsigned __int64)&v30[1] + 8 * a3;
    v56 = v37;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v33 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v33;
    }
    if ( (unsigned __int64)v36 < v37 )
    {
      do
      {
        v39 = v35;
        v40 = 48 * (__int64)v36->Next - 0x58000000000LL;
        v52 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v52, v33, v39, (__int64)SchedulerAssist);
            while ( *(__int64 *)(v40 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) );
          v36 = v66;
          v37 = v56;
          v39 = v35;
        }
        v33 = (unsigned int)((*(_QWORD *)(v40 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 1;
        v41 = ((*(_QWORD *)(v40 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 2;
        if ( (*(_BYTE *)(v40 + 34) & 8) == 0 )
          v41 = ((*(_QWORD *)(v40 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 1;
        v35 = v39 + 1;
        if ( *(unsigned __int16 *)(v40 + 32) <= v41 )
          v35 = v39;
        _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v36 = (struct _MDL *)((char *)v36 + 8);
        v66 = v36;
      }
      while ( (unsigned __int64)v36 < v37 );
      v28 = a3;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v42 = KeGetCurrentIrql();
        if ( v42 <= 0xFu && CurrentIrql <= 0xFu && v42 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v44 = CurrentPrcb->SchedulerAssist;
          v45 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v46 = (v45 & v44[5]) == 0;
          v44[5] &= v45;
          if ( v46 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v35 )
    {
      v47 = *(_QWORD *)(***(_QWORD ***)(v7 + 72) + 56LL);
      MiLogHotPatchPagesLocked(a2, (v28 << 12) + a2 - 1, *(_DWORD *)(v47 + 60), *(_DWORD *)(v47 + 72), v35);
    }
    v48 = a1[7];
    if ( v48 )
      v30->Next = (struct _MDL *)v48;
    a1[7] = (__int64)v30;
    v31 = 0;
  }
  else
  {
    v31 = -1073741670;
  }
  v32 = v58;
  if ( v9 )
  {
    v49 = v9 + (*(_DWORD *)(v7 + 52) & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v7 + 34) << 31));
    *(_DWORD *)(v7 + 52) ^= (*(_DWORD *)(v7 + 52) ^ (v9
                                                   + (*(_DWORD *)(v7 + 52) & 0x7FFFFFFF | (*(unsigned __int8 *)(v7 + 34) << 31)))) & 0x7FFFFFFF;
    *(_BYTE *)(v7 + 34) = v49 >> 31;
  }
  if ( v14 != v9 )
    MiReturnFullProcessCommitment(v32);
  return v31;
}
