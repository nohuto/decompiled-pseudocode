/*
 * XREFs of MmRotatePhysicalView @ 0x1405E48E0
 * Callers:
 *     <none>
 * Callees:
 *     MiReferenceIoPages @ 0x1402176E4 (MiReferenceIoPages.c)
 *     MiSanitizePage @ 0x140217B28 (MiSanitizePage.c)
 *     MiDereferenceIoPages @ 0x1402183E8 (MiDereferenceIoPages.c)
 *     MiRotateComplete @ 0x140218ACC (MiRotateComplete.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140218B54 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDeleteRotateAndStopFaults @ 0x1402190A4 (MiDeleteRotateAndStopFaults.c)
 *     MmSizeOfMdl @ 0x140219160 (MmSizeOfMdl.c)
 *     MiReplaceRotateWithDemandZero @ 0x140219184 (MiReplaceRotateWithDemandZero.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MmBuildMdlForNonPagedPool @ 0x140287D70 (MmBuildMdlForNonPagedPool.c)
 *     MmProbeAndLockPages @ 0x1402AE010 (MmProbeAndLockPages.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x1402BF640 (MiGetProcessPartition.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     MiLegitimatePageForDriversToMap @ 0x14030A93C (MiLegitimatePageForDriversToMap.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiIsPfn @ 0x140353EA0 (MiIsPfn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiMarkMdlComplete @ 0x140539E00 (MiMarkMdlComplete.c)
 *     MiSlowRotateCopy @ 0x140539F3C (MiSlowRotateCopy.c)
 *     MiSwitchToTransition @ 0x14053A154 (MiSwitchToTransition.c)
 *     MiLogVirtualRotateEvent @ 0x1408C8794 (MiLogVirtualRotateEvent.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  __int64 v12; // rax
  int v13; // r8d
  int v14; // eax
  SIZE_T v15; // rdx
  unsigned __int64 *v16; // rcx
  SIZE_T v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  NTSTATUS v20; // ebx
  SIZE_T v21; // rax
  struct _MDL *Pool; // rax
  struct _MDL *v23; // rbx
  int v25; // ebx
  int v26; // r12d
  PSIZE_T v27; // rdi
  unsigned __int64 *v28; // r13
  __int64 v29; // rdi
  SIZE_T v30; // rax
  SIZE_T v31; // rax
  PMDL v32; // rcx
  __int16 v33; // r14
  CSHORT v34; // si
  unsigned __int64 v35; // rdi
  int v36; // r14d
  __int64 v37; // rsi
  char *v38; // rdi
  __int64 ByteCount; // rcx
  PMDL v40; // r14
  unsigned __int64 v41; // rsi
  unsigned __int64 *v42; // r14
  PVOID v43; // rdi
  int v44; // [rsp+40h] [rbp-258h]
  unsigned int v46; // [rsp+50h] [rbp-248h]
  int v47; // [rsp+50h] [rbp-248h]
  NTSTATUS v48; // [rsp+54h] [rbp-244h] BYREF
  PMDL MemoryDescriptorList; // [rsp+58h] [rbp-240h]
  MM_ROTATE_DIRECTION v50; // [rsp+60h] [rbp-238h]
  PVOID P; // [rsp+68h] [rbp-230h]
  __int64 v52; // [rsp+70h] [rbp-228h]
  unsigned __int64 v53; // [rsp+78h] [rbp-220h]
  __int64 ProcessPartition; // [rsp+80h] [rbp-218h]
  ULONG_PTR v55; // [rsp+88h] [rbp-210h]
  unsigned __int64 v56; // [rsp+90h] [rbp-208h]
  PVOID v57; // [rsp+98h] [rbp-200h]
  PVOID v58; // [rsp+A0h] [rbp-1F8h]
  PMM_ROTATE_COPY_CALLBACK_FUNCTION v59; // [rsp+A8h] [rbp-1F0h]
  PSIZE_T v60; // [rsp+B0h] [rbp-1E8h]
  __int128 v61; // [rsp+B8h] [rbp-1E0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-1D0h]
  _BYTE v63[192]; // [rsp+D0h] [rbp-1C8h] BYREF
  struct _MDL v64[4]; // [rsp+190h] [rbp-108h] BYREF

  v50 = Direction;
  v7 = NewMdl;
  v9 = (unsigned __int64)VirtualAddress;
  P = VirtualAddress;
  v60 = NumberOfBytes;
  MemoryDescriptorList = NewMdl;
  v59 = CopyFunction;
  v58 = Context;
  v48 = 0;
  v61 = 0LL;
  CurrentThread = 0LL;
  memset(v63, 0, 0xB8uLL);
  memset(v64, 0, 0xB8uLL);
  v10 = 0LL;
  v44 = 0;
  v11 = *NumberOfBytes;
  v55 = 0LL;
  if ( (v9 & 0xFFF) != 0 )
  {
    v20 = -1073741585;
    goto LABEL_30;
  }
  if ( (v11 & 0xFFF) != 0 )
    goto LABEL_31;
  if ( Direction >= MmMaximumRotateDirection )
  {
    v20 = -1073741583;
    goto LABEL_30;
  }
  v56 = v11 + v9 - 1;
  if ( v56 <= v9 )
  {
LABEL_31:
    v20 = -1073741584;
LABEL_30:
    v26 = 0;
    goto LABEL_41;
  }
  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  while ( 1 )
  {
    v12 = MiObtainReferencedVadEx(v9, 0, &v48);
    v10 = (char *)v12;
    v57 = (PVOID)v12;
    if ( !v12 )
    {
      v20 = v48;
      v26 = 0;
      if ( v48 == -1073741664 )
        v20 = -1073741819;
LABEL_41:
      v27 = NumberOfBytes;
      if ( v10 )
        MiUnlockAndDereferenceVad(v10);
      if ( v20 < 0 )
      {
        v28 = (unsigned __int64 *)&v7[1];
        while ( v26 )
        {
          v29 = *v28;
          if ( !(unsigned int)MiIsPfn(*v28) )
          {
            MiDereferenceIoPages(1, v29, 1uLL);
            --v26;
          }
          ++v28;
        }
        v27 = NumberOfBytes;
      }
      *v27 = v55;
      return v20;
    }
    v13 = *(_DWORD *)(v12 + 48);
    if ( (v13 & 0x70) != 0x40
      || (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) < v56 >> 12 )
    {
      v20 = -1073741800;
      goto LABEL_38;
    }
    if ( (v13 & 0x380) != 0 && (v13 & 0xC00) == 3072 )
      v14 = 2;
    else
      v14 = (v13 & 0xC00) != 1024;
    v46 = v14;
    v15 = v11;
    v52 = v11;
    v53 = v11 >> 12;
    if ( Direction <= MmToFrameBufferNoCopy )
    {
      if ( v11 <= 0xFFFFFFFF )
      {
        v16 = (unsigned __int64 *)&v7[1];
        P = &v7[1];
        v17 = 0LL;
        while ( 1 )
        {
          v48 = v17;
          if ( v17 >= v11 >> 12 )
            break;
          v18 = *v16;
          if ( (unsigned int)MiIsPfn(*v16) )
          {
            v20 = MiLegitimatePageForDriversToMap(48 * v18 - 0x58000000000LL);
            if ( v20 < 0 )
              goto LABEL_40;
          }
          else
          {
            v19 = MiSanitizePage(v18);
            v20 = MiReferenceIoPages(1u, v19, 1LL, v46, 0LL, 0LL);
            if ( v20 < 0 )
              goto LABEL_40;
            ++v44;
          }
          v17 = (unsigned int)(v48 + 1);
          v16 = (unsigned __int64 *)((char *)P + 8);
          P = (char *)P + 8;
        }
        if ( (unsigned int)MiChargeCommit(ProcessPartition, v11 >> 12, 0) )
        {
          v21 = MmSizeOfMdl((PVOID)v9, v11);
          Pool = (struct _MDL *)MiAllocatePool(64, v21, 0x6F666E49u);
          v23 = Pool;
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
            *((_QWORD *)&v61 + 1) = v10;
            CurrentThread = KeGetCurrentThread();
            MiDeleteRotateAndStopFaults(v9, v56, (unsigned __int64 *)&v61);
            if ( v50 == MmToFrameBuffer )
            {
              v23->MdlFlags |= 0x2000u;
              if ( ((int (__fastcall *)(struct _MDL *, struct _MDL *, PVOID))v59)(v7, v23, v58) < 0 )
                MiSlowRotateCopy((__int64)v7, (__int64)v23, (__int64)v10);
            }
            MiMapLockedPagesInUserSpaceHelper(v9, (__int64)&v7[1], &v23[1].Next, v46, v11 >> 12, 0LL, 16);
            MiRotateComplete((unsigned __int64 *)&v61);
            MiUnlockAndDereferenceVad(v10);
            MmUnlockPages(v23);
            ExFreePoolWithTag(v23, 0);
            *NumberOfBytes = v11;
            if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v11 )
              MiLogVirtualRotateEvent(v9, v11, (unsigned int)v50);
            return 0;
          }
          MiReturnCommit(ProcessPartition, v11 >> 12);
        }
        v20 = -1073741670;
LABEL_40:
        v26 = v44;
        goto LABEL_41;
      }
      v20 = -1073741306;
LABEL_38:
      v26 = 0;
      goto LABEL_41;
    }
    if ( Direction == MmToRegularMemoryNoCopy )
      break;
    if ( v11 > 0x10000 )
    {
      if ( v11 <= 0xFFFFFFFF
        && (v30 = MmSizeOfMdl((PVOID)v9, v11), (MemoryDescriptorList = (PMDL)MiAllocatePool(64, v30, 0x6F666E49u)) != 0LL) )
      {
        v15 = v52;
      }
      else
      {
        MemoryDescriptorList = (PMDL)v63;
        v15 = 0x10000LL;
        v52 = 0x10000LL;
      }
    }
    else
    {
      MemoryDescriptorList = (PMDL)v63;
    }
    if ( v15 > 0x10000 )
    {
      v31 = MmSizeOfMdl((PVOID)v9, v15);
      v7 = (struct _MDL *)MiAllocatePool(64, v31, 0x6F666E49u);
      if ( v7 )
      {
        v15 = v52;
      }
      else
      {
        v7 = v64;
        v15 = 0x10000LL;
        v52 = 0x10000LL;
      }
    }
    else
    {
      v7 = v64;
    }
    v32 = MemoryDescriptorList;
    MemoryDescriptorList->Next = 0LL;
    v33 = v9;
    v34 = 8 * (((v15 + (v9 & 0xFFF) + 4095) >> 12) + 6);
    v32->Size = v34;
    v32->MdlFlags = 0;
    v35 = v9 & 0xFFFFFFFFFFFFF000uLL;
    v32->StartVa = (PVOID)v35;
    v36 = v33 & 0xFFF;
    v32->ByteOffset = v36;
    v32->ByteCount = v15;
    MmBuildMdlForNonPagedPool(v32);
    MemoryDescriptorList->MdlFlags |= 0x2000u;
    v7->Next = 0LL;
    v7->Size = v34;
    v7->StartVa = (PVOID)v35;
    v7->ByteOffset = v36;
    v37 = v52;
    v7->ByteCount = v52;
    v7->MdlFlags = 0x2000;
    v38 = (char *)v57;
    v47 = MiSwitchToTransition((ULONG_PTR)v7, (__int64)v57, v46);
    ByteCount = v7->ByteCount;
    v40 = MemoryDescriptorList;
    if ( ByteCount != v37 )
    {
      v52 = v7->ByteCount;
      MemoryDescriptorList->ByteCount = ByteCount;
      LODWORD(ByteCount) = v7->ByteCount;
    }
    if ( (_DWORD)ByteCount )
    {
      v48 = ((__int64 (__fastcall *)(struct _MDL *, PMDL, PVOID))v59)(v7, v40, v58);
      if ( v48 < 0 )
        MiSlowRotateCopy((__int64)v7, (__int64)v40, (__int64)v38);
      MiMarkMdlComplete((__int64)v7, (__int64)v38);
      v41 = (unsigned __int64)v40->ByteCount >> 12;
      v42 = (unsigned __int64 *)&v40[1];
      while ( v41 )
      {
        v53 = *v42;
        if ( !(unsigned int)MiIsPfn(v53) )
          MiDereferenceIoPages(1, v53, 1uLL);
        ++v42;
        --v41;
      }
      v40 = MemoryDescriptorList;
    }
    MiUnlockAndDereferenceVad(v38);
    v10 = 0LL;
    v43 = P;
    if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v52 )
      MiLogVirtualRotateEvent(P, v52, (unsigned int)Direction);
    if ( v40 != (PMDL)v63 )
      ExFreePoolWithTag(v40, 0);
    if ( v7->ByteCount )
      MmUnlockPages(v7);
    if ( v7 != v64 )
      ExFreePoolWithTag(v7, 0);
    v55 += v52;
    v9 = (unsigned __int64)v43 + v52;
    P = (PVOID)v9;
    if ( v47 == 1 )
    {
      v20 = 1073741849;
      goto LABEL_30;
    }
    v11 -= v52;
    if ( !v11 )
    {
      v20 = 0;
      v26 = 0;
      goto LABEL_41;
    }
    v7 = 0LL;
    MemoryDescriptorList = 0LL;
  }
  v25 = MiReplaceRotateWithDemandZero(v9, v56);
  MiUnlockAndDereferenceVad(v10);
  *NumberOfBytes = v11;
  if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v11 )
    MiLogVirtualRotateEvent(v9, v11, 3LL);
  if ( v25 == 1 )
    return 1073741849;
  else
    return 0;
}
