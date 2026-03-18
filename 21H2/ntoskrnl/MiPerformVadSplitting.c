/*
 * XREFs of MiPerformVadSplitting @ 0x1402ED194
 * Callers:
 *     MiDeletePartialVad @ 0x1402ECFD8 (MiDeletePartialVad.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
 *     MiUnlockVadTree @ 0x1402806E0 (MiUnlockVadTree.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     MiComputePageCommitment @ 0x14028EDD0 (MiComputePageCommitment.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     MiCountSharedPages @ 0x1402D0500 (MiCountSharedPages.c)
 *     MiLockVadTree @ 0x1402ED128 (MiLockVadTree.c)
 *     MiPostInsertVad @ 0x1402ED750 (MiPostInsertVad.c)
 *     MiAdvanceVadView @ 0x1402ED77C (MiAdvanceVadView.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiInsertVad @ 0x14030E390 (MiInsertVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiCapturePartialVadSubsections @ 0x14097EB90 (MiCapturePartialVadSubsections.c)
 *     MiLockNestedVad @ 0x14097EE0C (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x14097EE28 (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiPerformVadSplitting(__int64 a1)
{
  int v1; // ebx
  BOOL v2; // edx
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  int v11; // eax
  volatile LONG *v12; // rdi
  KIRQL v13; // al
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned int v18; // edx
  unsigned __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rcx
  struct _KPROCESS *v22; // r14
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned int v26; // ecx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rdx
  unsigned __int64 v32; // rsi
  struct _KTHREAD *v33; // rdi
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  __int64 v36; // rdx
  __int64 v37; // r8
  int v38; // r9d
  bool v39; // zf
  __int64 result; // rax
  volatile LONG *SharedVm; // rdi
  KIRQL v42; // r14
  unsigned int v43; // edx
  unsigned __int64 v44; // rax
  int v45; // edx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // r14
  unsigned __int64 v56; // rdi
  unsigned __int64 v57; // r14
  unsigned __int64 v58; // rcx
  volatile LONG *v59; // rdi
  KIRQL v60; // al
  unsigned __int64 v61; // [rsp+40h] [rbp-78h]
  __int64 v62; // [rsp+48h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-68h]
  unsigned __int64 v64; // [rsp+58h] [rbp-60h]
  unsigned __int64 v65; // [rsp+60h] [rbp-58h]
  char v66; // [rsp+C0h] [rbp+8h]
  __int64 v67; // [rsp+D0h] [rbp+18h]
  struct _KPROCESS *Process; // [rsp+D8h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 16);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v62 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v65 = *(_QWORD *)(a1 + 24);
  v64 = *(_QWORD *)(a1 + 32);
  if ( (*(_DWORD *)(v3 + 48) & 0x200000) == 0 )
  {
    v53 = *(_QWORD *)(v3 + 72);
    if ( *(_QWORD *)(*(_QWORD *)v53 + 64LL) )
      v2 = (*(_DWORD *)(*(_QWORD *)v53 + 56LL) & 0x420) == 0;
  }
  v4 = *(_QWORD *)a1;
  if ( v1 == 1 )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = *(_QWORD *)a1;
    if ( v1 == 2 )
      v4 = 0LL;
    else
      v4 = *(_QWORD *)v4;
  }
  if ( v2 )
    MiCapturePartialVadSubsections(a1, v5, v4, 1LL);
  v6 = *(unsigned int *)(v3 + 52);
  LODWORD(v6) = v6 & 0x7FFFFFFF;
  v7 = 0LL;
  v8 = v6 | ((unsigned __int64)*(unsigned __int8 *)(v3 + 34) << 31);
  v9 = 0LL;
  v10 = 0x7FFFFFFFDLL;
  if ( v8 != 0x7FFFFFFFDLL )
  {
    v10 = 0LL;
    v7 = v8;
  }
  v61 = v10;
  if ( v1 == 3 )
  {
    v54 = v5;
    if ( (*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32))
       - (*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32))
       + 1 > (*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32))
           - (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32))
           + 1 )
      v54 = v4;
    v67 = v54;
    MiLockNestedVad(v54);
  }
  else
  {
    v67 = 0LL;
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.StaticBitmap[8], 0LL);
  v11 = *(_DWORD *)(v3 + 48) & 0x200000;
  if ( v7 )
  {
    if ( v11 )
    {
      SharedVm = (volatile LONG *)MiGetSharedVm(v62);
      v42 = ExAcquireSpinLockExclusive(SharedVm);
      *((_DWORD *)SharedVm + 1) = 0;
      v66 = v42;
      v9 = MiComputePageCommitment(v65, v64, v3, v42, 4, 0LL, 0LL);
    }
    else
    {
      v42 = 17;
      v66 = 17;
      v9 = ((__int64)(((v64 >> 9) & 0x7FFFFFFFF8LL) - ((v65 >> 9) & 0x7FFFFFFFF8LL)) >> 3)
         - MiCountSharedPages(
             v3,
             ((v65 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
             ((v64 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
         + 1;
    }
    if ( v1 == 1 )
    {
      v55 = v7;
      v14 = v61;
      v15 = v55 - v9;
    }
    else if ( v1 == 2 )
    {
      v15 = v61;
      v14 = v7 - v9;
    }
    else
    {
      if ( (*(_DWORD *)(v3 + 48) & 0x200000) != 0 )
      {
        v15 = MiComputePageCommitment(
                (*(unsigned int *)(v67 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v67 + 32) << 32)) << 12,
                ((*(unsigned int *)(v67 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v67 + 33) << 32)) << 12) | 0xFFF,
                v67,
                v42,
                4,
                0LL,
                0LL);
      }
      else
      {
        v56 = 8
            * ((*(unsigned int *)(v67 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v67 + 32) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v57 = 8
            * ((*(unsigned int *)(v67 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v67 + 33) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v15 = ((__int64)(v57 - v56) >> 3) - MiCountSharedPages(v67, v56, v57) + 1;
      }
      v14 = v7 - v9 - v15;
      v58 = v14;
      if ( v67 == v5 )
      {
        v14 = v15;
        v15 = v58;
      }
    }
  }
  else
  {
    if ( v11 )
    {
      v12 = (volatile LONG *)MiGetSharedVm(v62);
      v13 = ExAcquireSpinLockExclusive(v12);
      *((_DWORD *)v12 + 1) = 0;
      v66 = v13;
    }
    else
    {
      v66 = 17;
    }
    v14 = v61;
    v15 = v61;
  }
  if ( v66 == 17 )
  {
    v59 = (volatile LONG *)MiGetSharedVm(v62);
    v60 = ExAcquireSpinLockExclusive(v59);
    *((_DWORD *)v59 + 1) = 0;
    v66 = v60;
  }
  MiLockVadTree(3);
  LOBYTE(v16) = 15;
  if ( v5 )
  {
    v43 = *(_DWORD *)(v5 + 52) & 0x80000000;
    if ( (*(_DWORD *)(v5 + 52) & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v5 + 34) << 31)) == 0x7FFFFFFFDLL )
    {
      LOBYTE(v44) = 15;
      v45 = v43 | 0x7FFFFFFD;
    }
    else
    {
      v44 = v14 >> 31;
      v45 = v14 & 0x7FFFFFFF | v43;
    }
    v46 = *(unsigned __int8 *)(v5 + 33);
    v47 = *(unsigned __int8 *)(v5 + 32);
    *(_BYTE *)(v5 + 34) = v44;
    v48 = *(unsigned int *)(v5 + 24);
    *(_DWORD *)(v5 + 52) = v45;
    v49 = *(unsigned int *)(v5 + 28);
    v50 = v48 | (v47 << 32);
    v51 = (unsigned int)v46;
    v52 = (v49 | (v46 << 32)) + 1;
    *(_DWORD *)(v3 + 24) = v52;
    *(_BYTE *)(v3 + 32) = BYTE4(v52);
    v17 = 8 * ((v49 | (v51 << 32)) - v50) + 8;
    MiInsertVad(v5, Process, 3LL);
  }
  else
  {
    v17 = 0LL;
  }
  if ( v4 )
  {
    v18 = *(_DWORD *)(v4 + 52) & 0x80000000;
    if ( (((unsigned __int64)*(unsigned __int8 *)(v4 + 34) << 31) | *(_DWORD *)(v4 + 52) & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
    {
      LOBYTE(v19) = 15;
      v20 = v18 | 0x7FFFFFFD;
    }
    else
    {
      v19 = v15 >> 31;
      v20 = v15 & 0x7FFFFFFF | v18;
    }
    v21 = *(unsigned __int8 *)(v4 + 33);
    v22 = Process;
    *(_BYTE *)(v4 + 34) = v19;
    v23 = *(unsigned int *)(v4 + 24);
    *(_DWORD *)(v4 + 52) = v20;
    v24 = v23 | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32);
    v25 = (*(unsigned int *)(v4 + 28) | (unsigned __int64)(v21 << 32)) - v24;
    *(_DWORD *)(v3 + 28) = v23 - 1;
    v17 += 8 * v25 + 8;
    *(_BYTE *)(v3 + 33) = (v24 - 1) >> 32;
    MiInsertVad(v4, Process, 3LL);
  }
  else
  {
    v22 = Process;
  }
  v26 = *(_DWORD *)(v3 + 52);
  v27 = v26;
  LODWORD(v27) = v26 & 0x7FFFFFFF;
  v28 = v27 | ((unsigned __int64)*(unsigned __int8 *)(v3 + 34) << 31);
  if ( v28 == 0x7FFFFFFFDLL )
  {
    v29 = v26 & 0x80000000 | 0x7FFFFFFD;
  }
  else
  {
    if ( (*(_DWORD *)(v3 + 48) & 0x200000) == 0 && v28 < 0x7FFFFFFFDLL && v17 )
    {
      PsReturnProcessPagedPoolQuota(v22, v17);
      v26 = *(_DWORD *)(v3 + 52);
    }
    v16 = v9 >> 31;
    v29 = (v9 ^ v26) & 0x7FFFFFFF ^ v26;
  }
  *(_DWORD *)(v3 + 52) = v29;
  *(_BYTE *)(v3 + 34) = v16;
  MiAdvanceVadView(v3, 0LL);
  MiUnlockVadTree(3, 0x11u);
  LOBYTE(v30) = v66;
  MiUnlockWorkingSetExclusive(&v22[1].ActiveProcessors.StaticBitmap[26], v30);
  if ( v5 )
    MiPostInsertVad(v5, v31, 0LL);
  if ( v4 )
    MiPostInsertVad(v4, v31, 0LL);
  v32 = (unsigned __int64)&v22[1].Affinity.StaticBitmap[8];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v22[1].Affinity.StaticBitmap[8], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&v22[1].Affinity.StaticBitmap[8]);
  v33 = KeGetCurrentThread();
  if ( v32 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx((__int64)v33->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (char *)&v33[1].Process;
  v36 = 0LL;
  v37 = v32 & 0x7FFFFFFFFFFFFFFCLL;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v37
       || !p_Process[18]
       || (*(_DWORD *)p_Process & 1) != 0
       || *((_DWORD *)p_Process + 2) != SessionId )
  {
    v36 = (unsigned int)(v36 + 1);
    p_Process += 96;
    if ( (unsigned int)v36 >= 6 )
      goto LABEL_49;
  }
  p_Process[18] = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process, v36, v37);
      _disable();
    }
    v38 = *((_DWORD *)p_Process + 22);
    *((_DWORD *)p_Process + 22) = 0;
    p_Process[17] = 0;
    *(_QWORD *)p_Process = 0LL;
    v33->AbEntrySummary |= 1 << p_Process[16];
    _enable();
    if ( v38 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v33, (__int64)&v22[1].Affinity.StaticBitmap[8], v38);
    goto LABEL_43;
  }
LABEL_49:
  if ( (*((_DWORD *)&v33->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v33, (ULONG_PTR)&v22[1].Affinity.StaticBitmap[8], SessionId, 0LL);
  _enable();
LABEL_43:
  v39 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v39 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  result = v67;
  if ( v67 )
    return MiUnlockNestedVad(v67);
  return result;
}
