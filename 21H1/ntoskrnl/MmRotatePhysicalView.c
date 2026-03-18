/*
 * XREFs of MmRotatePhysicalView @ 0x1406BD3F0
 * Callers:
 *     <none>
 * Callees:
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x14021A6D0 (MiGetProcessPartition.c)
 *     MiUnlockAndDereferenceVad @ 0x14021A7A0 (MiUnlockAndDereferenceVad.c)
 *     MmBuildMdlForNonPagedPool @ 0x14023A430 (MmBuildMdlForNonPagedPool.c)
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     MiIsPfn @ 0x14025F1A0 (MiIsPfn.c)
 *     MiObtainReferencedVadEx @ 0x140267570 (MiObtainReferencedVadEx.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MmProbeAndLockPages @ 0x1402A68D0 (MmProbeAndLockPages.c)
 *     MiReplaceRotateWithDemandZero @ 0x1402F7C80 (MiReplaceRotateWithDemandZero.c)
 *     MiReferenceIoPages @ 0x1402F9AE4 (MiReferenceIoPages.c)
 *     MiSanitizePage @ 0x1402F9F28 (MiSanitizePage.c)
 *     MiDereferenceIoPages @ 0x1402FA7E8 (MiDereferenceIoPages.c)
 *     MiRotateComplete @ 0x1402FAECC (MiRotateComplete.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402FAF54 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDeleteRotateAndStopFaults @ 0x1402FB4A4 (MiDeleteRotateAndStopFaults.c)
 *     MmSizeOfMdl @ 0x1402FB560 (MmSizeOfMdl.c)
 *     MiLegitimatePageForDriversToMap @ 0x1403476D4 (MiLegitimatePageForDriversToMap.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiMarkMdlComplete @ 0x1405340A0 (MiMarkMdlComplete.c)
 *     MiSlowRotateCopy @ 0x1405341DC (MiSlowRotateCopy.c)
 *     MiSwitchToTransition @ 0x1405343F4 (MiSwitchToTransition.c)
 *     MiLogVirtualRotateEvent @ 0x1408C3CE4 (MiLogVirtualRotateEvent.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall MmRotatePhysicalView(
        PVOID VirtualAddress,
        PSIZE_T NumberOfBytes,
        PMDL NewMdl,
        MM_ROTATE_DIRECTION Direction,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
        PVOID Context)
{
  struct _MDL *v7; // r13
  unsigned __int64 v9; // rdi
  char *v10; // rsi
  SIZE_T v11; // r12
  volatile signed __int32 *v12; // rax
  int v13; // r8d
  int v14; // eax
  SIZE_T v15; // rdx
  unsigned __int64 *v16; // rcx
  SIZE_T v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  NTSTATUS v22; // ebx
  SIZE_T v23; // rax
  struct _MDL *Pool; // rax
  struct _MDL *v25; // rbx
  int v27; // ebx
  int v28; // r12d
  PSIZE_T v29; // rdi
  unsigned __int64 *v30; // r13
  __int64 v31; // rdi
  SIZE_T v32; // rax
  SIZE_T v33; // rax
  PMDL v34; // rcx
  __int16 v35; // r14
  CSHORT v36; // si
  unsigned __int64 v37; // rdi
  int v38; // r14d
  __int64 v39; // rsi
  char *v40; // rdi
  __int64 ByteCount; // rcx
  PMDL v42; // r14
  unsigned __int64 v43; // rsi
  unsigned __int64 *v44; // r14
  PVOID v45; // rdi
  int v46; // [rsp+40h] [rbp-258h]
  unsigned int v48; // [rsp+50h] [rbp-248h]
  int v49; // [rsp+50h] [rbp-248h]
  NTSTATUS v50; // [rsp+54h] [rbp-244h] BYREF
  PMDL MemoryDescriptorList; // [rsp+58h] [rbp-240h]
  MM_ROTATE_DIRECTION v52; // [rsp+60h] [rbp-238h]
  PVOID P; // [rsp+68h] [rbp-230h]
  __int64 v54; // [rsp+70h] [rbp-228h]
  unsigned __int64 v55; // [rsp+78h] [rbp-220h]
  __int64 ProcessPartition; // [rsp+80h] [rbp-218h]
  ULONG_PTR v57; // [rsp+88h] [rbp-210h]
  SIZE_T v58; // [rsp+90h] [rbp-208h]
  PVOID v59; // [rsp+98h] [rbp-200h]
  PVOID v60; // [rsp+A0h] [rbp-1F8h]
  PMM_ROTATE_COPY_CALLBACK_FUNCTION v61; // [rsp+A8h] [rbp-1F0h]
  PSIZE_T v62; // [rsp+B0h] [rbp-1E8h]
  __int128 v63; // [rsp+B8h] [rbp-1E0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-1D0h]
  _BYTE v65[192]; // [rsp+D0h] [rbp-1C8h] BYREF
  struct _MDL v66[4]; // [rsp+190h] [rbp-108h] BYREF

  v52 = Direction;
  v7 = NewMdl;
  v9 = (unsigned __int64)VirtualAddress;
  P = VirtualAddress;
  v62 = NumberOfBytes;
  MemoryDescriptorList = NewMdl;
  v61 = CopyFunction;
  v60 = Context;
  v50 = 0;
  v63 = 0LL;
  CurrentThread = 0LL;
  memset(v65, 0, 0xB8uLL);
  memset(v66, 0, 0xB8uLL);
  v10 = 0LL;
  v46 = 0;
  v11 = *NumberOfBytes;
  v57 = 0LL;
  if ( (v9 & 0xFFF) != 0 )
  {
    v22 = -1073741585;
    goto LABEL_30;
  }
  if ( (v11 & 0xFFF) != 0 )
    goto LABEL_31;
  if ( Direction >= MmMaximumRotateDirection )
  {
    v22 = -1073741583;
    goto LABEL_30;
  }
  v58 = v11 + v9 - 1;
  if ( v58 <= v9 )
  {
LABEL_31:
    v22 = -1073741584;
LABEL_30:
    v28 = 0;
    goto LABEL_41;
  }
  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  while ( 1 )
  {
    v12 = MiObtainReferencedVadEx(v9, 0, &v50);
    v10 = (char *)v12;
    v59 = (PVOID)v12;
    if ( !v12 )
    {
      v22 = v50;
      v28 = 0;
      if ( v50 == -1073741664 )
        v22 = -1073741819;
LABEL_41:
      v29 = NumberOfBytes;
      if ( v10 )
        MiUnlockAndDereferenceVad(v10);
      if ( v22 < 0 )
      {
        v30 = (unsigned __int64 *)&v7[1];
        while ( v28 )
        {
          v31 = *v30;
          if ( !(unsigned int)MiIsPfn(*v30) )
          {
            MiDereferenceIoPages(1, v31, 1uLL);
            --v28;
          }
          ++v30;
        }
        v29 = NumberOfBytes;
      }
      *v29 = v57;
      return v22;
    }
    v13 = *((_DWORD *)v12 + 12);
    if ( (v13 & 0x70) != 0x40
      || (*((unsigned int *)v12 + 7) | ((unsigned __int64)*((unsigned __int8 *)v12 + 33) << 32)) < v58 >> 12 )
    {
      v22 = -1073741800;
      goto LABEL_38;
    }
    if ( (v13 & 0x380) != 0 && (v13 & 0xC00) == 3072 )
      v14 = 2;
    else
      v14 = (v13 & 0xC00) != 1024;
    v48 = v14;
    v15 = v11;
    v54 = v11;
    v55 = v11 >> 12;
    if ( Direction <= MmToFrameBufferNoCopy )
    {
      if ( v11 <= 0xFFFFFFFF )
      {
        v16 = (unsigned __int64 *)&v7[1];
        P = &v7[1];
        v17 = 0LL;
        while ( 1 )
        {
          v50 = v17;
          if ( v17 >= v11 >> 12 )
            break;
          v18 = *v16;
          if ( (unsigned int)MiIsPfn(*v16) )
          {
            v22 = MiLegitimatePageForDriversToMap(48 * v18 - 0x58000000000LL, v19, v20);
            if ( v22 < 0 )
              goto LABEL_40;
          }
          else
          {
            v21 = MiSanitizePage(v18);
            v22 = MiReferenceIoPages(1u, v21, 1LL, v48, 0LL, 0LL);
            if ( v22 < 0 )
              goto LABEL_40;
            ++v46;
          }
          v17 = (unsigned int)(v50 + 1);
          v16 = (unsigned __int64 *)((char *)P + 8);
          P = (char *)P + 8;
        }
        if ( (unsigned int)MiChargeCommit(ProcessPartition, v11 >> 12, 0) )
        {
          v23 = MmSizeOfMdl((PVOID)v9, v11);
          Pool = (struct _MDL *)MiAllocatePool(64, v23, 0x6F666E49u);
          v25 = Pool;
          P = Pool;
          if ( Pool )
          {
            Pool->Next = 0LL;
            Pool->Size = 8 * (((v11 + (v9 & 0xFFF) + 4095) >> 12) + 6);
            Pool->MdlFlags = 0;
            Pool->StartVa = (PVOID)(v9 & 0xFFFFFFFFFFFFF000uLL);
            Pool->ByteOffset = v9 & 0xFFF;
            Pool->ByteCount = v11;
            MmProbeAndLockPages(Pool, 1, IoReadAccess);
            *((_QWORD *)&v63 + 1) = v10;
            CurrentThread = KeGetCurrentThread();
            MiDeleteRotateAndStopFaults(v9, v58, &v63);
            if ( v52 == MmToFrameBuffer )
            {
              v25->MdlFlags |= 0x2000u;
              if ( ((int (__fastcall *)(struct _MDL *, struct _MDL *, PVOID))v61)(v7, v25, v60) < 0 )
                MiSlowRotateCopy((__int64)v7, (__int64)v25, (__int64)v10);
            }
            MiMapLockedPagesInUserSpaceHelper(v9, (__int64)&v7[1], &v25[1].Next, (_DWORD *)v48, v11 >> 12, 0LL, 16);
            MiRotateComplete((unsigned __int64 *)&v63);
            MiUnlockAndDereferenceVad(v10);
            MmUnlockPages(v25);
            ExFreePoolWithTag(v25, 0);
            *NumberOfBytes = v11;
            if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v11 )
              MiLogVirtualRotateEvent(v9, v11, (unsigned int)v52);
            return 0;
          }
          MiReturnCommit(ProcessPartition, v11 >> 12);
        }
        v22 = -1073741670;
LABEL_40:
        v28 = v46;
        goto LABEL_41;
      }
      v22 = -1073741306;
LABEL_38:
      v28 = 0;
      goto LABEL_41;
    }
    if ( Direction == MmToRegularMemoryNoCopy )
      break;
    if ( v11 > 0x10000 )
    {
      if ( v11 <= 0xFFFFFFFF
        && (v32 = MmSizeOfMdl((PVOID)v9, v11), (MemoryDescriptorList = (PMDL)MiAllocatePool(64, v32, 0x6F666E49u)) != 0LL) )
      {
        v15 = v54;
      }
      else
      {
        MemoryDescriptorList = (PMDL)v65;
        v15 = 0x10000LL;
        v54 = 0x10000LL;
      }
    }
    else
    {
      MemoryDescriptorList = (PMDL)v65;
    }
    if ( v15 > 0x10000 )
    {
      v33 = MmSizeOfMdl((PVOID)v9, v15);
      v7 = (struct _MDL *)MiAllocatePool(64, v33, 0x6F666E49u);
      if ( v7 )
      {
        v15 = v54;
      }
      else
      {
        v7 = v66;
        v15 = 0x10000LL;
        v54 = 0x10000LL;
      }
    }
    else
    {
      v7 = v66;
    }
    v34 = MemoryDescriptorList;
    MemoryDescriptorList->Next = 0LL;
    v35 = v9;
    v36 = 8 * (((v15 + (v9 & 0xFFF) + 4095) >> 12) + 6);
    v34->Size = v36;
    v34->MdlFlags = 0;
    v37 = v9 & 0xFFFFFFFFFFFFF000uLL;
    v34->StartVa = (PVOID)v37;
    v38 = v35 & 0xFFF;
    v34->ByteOffset = v38;
    v34->ByteCount = v15;
    MmBuildMdlForNonPagedPool(v34);
    MemoryDescriptorList->MdlFlags |= 0x2000u;
    v7->Next = 0LL;
    v7->Size = v36;
    v7->StartVa = (PVOID)v37;
    v7->ByteOffset = v38;
    v39 = v54;
    v7->ByteCount = v54;
    v7->MdlFlags = 0x2000;
    v40 = (char *)v59;
    v49 = MiSwitchToTransition((ULONG_PTR)v7, (__int64)v59, v48);
    ByteCount = v7->ByteCount;
    v42 = MemoryDescriptorList;
    if ( ByteCount != v39 )
    {
      v54 = v7->ByteCount;
      MemoryDescriptorList->ByteCount = ByteCount;
      LODWORD(ByteCount) = v7->ByteCount;
    }
    if ( (_DWORD)ByteCount )
    {
      v50 = ((__int64 (__fastcall *)(struct _MDL *, PMDL, PVOID))v61)(v7, v42, v60);
      if ( v50 < 0 )
        MiSlowRotateCopy((__int64)v7, (__int64)v42, (__int64)v40);
      MiMarkMdlComplete((__int64)v7, (__int64)v40);
      v43 = (unsigned __int64)v42->ByteCount >> 12;
      v44 = (unsigned __int64 *)&v42[1];
      while ( v43 )
      {
        v55 = *v44;
        if ( !(unsigned int)MiIsPfn(v55) )
          MiDereferenceIoPages(1, v55, 1uLL);
        ++v44;
        --v43;
      }
      v42 = MemoryDescriptorList;
    }
    MiUnlockAndDereferenceVad(v40);
    v10 = 0LL;
    v45 = P;
    if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v54 )
      MiLogVirtualRotateEvent(P, v54, (unsigned int)Direction);
    if ( v42 != (PMDL)v65 )
      ExFreePoolWithTag(v42, 0);
    if ( v7->ByteCount )
      MmUnlockPages(v7);
    if ( v7 != v66 )
      ExFreePoolWithTag(v7, 0);
    v57 += v54;
    v9 = (unsigned __int64)v45 + v54;
    P = (PVOID)v9;
    if ( v49 == 1 )
    {
      v22 = 1073741849;
      goto LABEL_30;
    }
    v11 -= v54;
    if ( !v11 )
    {
      v22 = 0;
      v28 = 0;
      goto LABEL_41;
    }
    v7 = 0LL;
    MemoryDescriptorList = 0LL;
  }
  v27 = MiReplaceRotateWithDemandZero(v9, v58);
  MiUnlockAndDereferenceVad(v10);
  *NumberOfBytes = v11;
  if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v11 )
    MiLogVirtualRotateEvent(v9, v11, 3LL);
  if ( v27 == 1 )
    return 1073741849;
  else
    return 0;
}
