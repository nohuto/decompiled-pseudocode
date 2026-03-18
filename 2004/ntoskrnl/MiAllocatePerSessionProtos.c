/*
 * XREFs of MiAllocatePerSessionProtos @ 0x14070A848
 * Callers:
 *     MiCreatePerSessionProtos @ 0x14070A724 (MiCreatePerSessionProtos.c)
 *     MiCreateSessionDriverProtos @ 0x1408D71D8 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiGetControlAreaPartition @ 0x14024B6C4 (MiGetControlAreaPartition.c)
 *     MmProbeAndLockPages @ 0x14024D8A0 (MmProbeAndLockPages.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402639D0 (MiUpdateSystemProtoPtesTree.c)
 *     MiMakeSubsectionPte @ 0x140263B4C (MiMakeSubsectionPte.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402BC1EC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiChargeResident @ 0x1402F90CC (MiChargeResident.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MmSizeOfMdl @ 0x140338590 (MmSizeOfMdl.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiFillPerSessionProtos @ 0x1408D49E0 (MiFillPerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocatePerSessionProtos(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 **a5)
{
  struct _MDL *v6; // r15
  unsigned __int64 *v7; // rdi
  __int64 ControlAreaPartition; // r12
  unsigned __int64 *Pool; // rax
  unsigned __int64 *v10; // r14
  __int64 *v11; // rax
  __int64 *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 SubsectionPte; // rdi
  unsigned __int64 *v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned int v19; // eax
  unsigned int i; // r14d
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // rdx
  int v24; // r9d
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // r12
  int v27; // ebx
  bool v29; // zf
  int v30; // edx
  bool v31; // zf
  unsigned __int64 v32; // rbx
  SIZE_T v33; // rax
  struct _MDL *v34; // rax
  int v35; // ebx
  int v36; // eax
  void *v37; // rcx
  unsigned int v38; // [rsp+50h] [rbp-88h]
  ULONG_PTR *v39; // [rsp+58h] [rbp-80h]
  unsigned __int64 *v40; // [rsp+60h] [rbp-78h]
  unsigned __int64 v41; // [rsp+68h] [rbp-70h]
  _QWORD *v42; // [rsp+70h] [rbp-68h]
  unsigned __int64 *v43; // [rsp+78h] [rbp-60h]
  _QWORD v44[2]; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v45[9]; // [rsp+90h] [rbp-48h] BYREF

  *a5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v42 = *(_QWORD **)a1;
  ControlAreaPartition = MiGetControlAreaPartition(*(_QWORD *)a1);
  v39 = (ULONG_PTR *)ControlAreaPartition;
  if ( !(unsigned int)MiChargeCommit(ControlAreaPartition, *(unsigned int *)(a1 + 44), 0) )
    return 3221225773LL;
  Pool = (unsigned __int64 *)MiAllocatePool(64, 0x58uLL, 0x73536D4Du);
  v10 = Pool;
  v43 = Pool;
  if ( !Pool )
  {
    v27 = -1073741670;
    goto LABEL_17;
  }
  *((_DWORD *)Pool + 20) = 1;
  v11 = (__int64 *)MiAllocatePool(274, 8LL * *(unsigned int *)(a1 + 44), 0x74536D4Du);
  v12 = v11;
  if ( !v11 )
  {
    v27 = -1073741670;
    goto LABEL_16;
  }
  v10[9] = (unsigned __int64)v11;
  memset(v11, 0, 8LL * *(unsigned int *)(a1 + 44));
  SubsectionPte = MiMakeSubsectionPte(a1, v13, v14, v15);
  v17 = v10 + 3;
  v40 = v10 + 3;
  v10[6] = v10[6] & 0xFFFFFFFFFFFFFFF8uLL | 3;
  v18 = *(_QWORD *)(a1 + 8);
  v41 = v18;
  v19 = 0;
  v38 = 0;
  if ( !*(_DWORD *)(a1 + 44) )
    goto LABEL_13;
  for ( i = 0; i < *(_DWORD *)(a1 + 44); ++i )
  {
    v21 = MI_READ_PTE_LOCK_FREE(v18);
    if ( !v21 )
      break;
    if ( a2 )
      goto LABEL_11;
    MiPteInShadowRange((unsigned __int64)v12);
    if ( IS_PTE_NOT_DEMAND_ZERO(v21) )
    {
      v23 = SubsectionPte;
      v24 = 0;
      if ( !(_DWORD)v22 )
        goto LABEL_10;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v24 = 1;
        if ( !HIBYTE(word_140C4DE08) )
        {
          v29 = (SubsectionPte & 1) == 0;
LABEL_31:
          if ( !v29 )
            v23 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v29 = (SubsectionPte & 1) == 0;
        goto LABEL_31;
      }
LABEL_10:
      *v12 = v23;
      if ( v24 )
        goto LABEL_43;
      goto LABEL_11;
    }
    v30 = 0;
    if ( (_DWORD)v22 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v30 = 1;
        if ( HIBYTE(word_140C4DE08) )
          goto LABEL_41;
        v31 = (v21 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_41;
        v31 = (v21 & 1) == 0;
      }
      if ( !v31 )
        v21 |= 0x8000000000000000uLL;
    }
LABEL_41:
    *v12 = v21;
    if ( v30 )
    {
      v23 = v21;
LABEL_43:
      MiWritePteShadow((__int64)v12, v23, v22);
    }
LABEL_11:
    ++v12;
    v18 = v41 + 8;
    v41 += 8LL;
  }
  v38 = i;
  v10 = v43;
  v6 = 0LL;
  v17 = v40;
  v19 = v38;
LABEL_13:
  v25 = v19;
  v10[7] = v19;
  MiUpdateSystemProtoPtesTree(v17, 1);
  v26 = v10[9];
  if ( a2 )
  {
    v32 = v25 << 12;
    v33 = MmSizeOfMdl((PVOID)a2, v25 << 12);
    v34 = (struct _MDL *)MiAllocatePool(64, v33, 0x206C644Du);
    v6 = v34;
    if ( !v34 )
      goto LABEL_50;
    v34->Next = 0LL;
    v34->Size = 8 * (((v32 + (a2 & 0xFFF) + 4095) >> 12) + 6);
    v34->MdlFlags = 0;
    v34->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
    v34->ByteOffset = a2 & 0xFFF;
    v34->ByteCount = v32;
    MmProbeAndLockPages(v34, 0, IoReadAccess);
    v35 = (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F;
    if ( (unsigned int)MiChargeResident(v39, v25, 0LL) )
    {
      if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 && (v35 & 2) != 0 )
      {
        v45[1] = *(_QWORD *)(v42[12] + 56LL);
        v45[0] = (unsigned __int64)a3 << 12;
        v44[1] = 0LL;
        v44[0] = a4 + v45[0] + *(_QWORD *)(*v42 + 32LL);
        v36 = MiFillPerSessionProtos((_DWORD)v42, v26, (int)v6 + 48, v38, v35, a3, a4, (__int64)v45, (__int64)v44);
      }
      else
      {
        v36 = MiFillPerSessionProtos((_DWORD)v42, v26, (int)v6 + 48, v38, v35, a3, a4, 0LL, 0LL);
      }
      v27 = v36;
      if ( v36 >= 0 )
        goto LABEL_14;
    }
    else
    {
LABEL_50:
      v27 = -1073741670;
    }
  }
  else
  {
LABEL_14:
    *a5 = v10;
    v10 = 0LL;
    v27 = 0;
  }
  v7 = v40;
LABEL_16:
  ControlAreaPartition = (__int64)v39;
LABEL_17:
  if ( v6 )
  {
    MmUnlockPages(v6);
    ExFreePoolWithTag(v6, 0);
  }
  if ( v10 )
  {
    if ( v7 )
      MiUpdateSystemProtoPtesTree(v7, 0);
    v37 = (void *)v10[9];
    if ( v37 )
      ExFreePoolWithTag(v37, 0);
    ExFreePoolWithTag(v10, 0);
  }
  if ( v27 < 0 )
    MiReturnCommit(ControlAreaPartition, *(unsigned int *)(a1 + 44));
  return (unsigned int)v27;
}
