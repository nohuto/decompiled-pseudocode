/*
 * XREFs of MiAllocatePerSessionProtos @ 0x14061BC08
 * Callers:
 *     MiCreatePerSessionProtos @ 0x14061BAE4 (MiCreatePerSessionProtos.c)
 *     MiCreateSessionDriverProtos @ 0x1408DA938 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MmSizeOfMdl @ 0x140219160 (MmSizeOfMdl.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiChargeResident @ 0x14027BBC8 (MiChargeResident.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiGetControlAreaPartition @ 0x14027C914 (MiGetControlAreaPartition.c)
 *     MmProbeAndLockPages @ 0x1402AE010 (MmProbeAndLockPages.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402E08FC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140302FB0 (MiUpdateSystemProtoPtesTree.c)
 *     MiMakeSubsectionPte @ 0x14030312C (MiMakeSubsectionPte.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiFillPerSessionProtos @ 0x1408D8140 (MiFillPerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  __int64 SubsectionPte; // rdi
  unsigned __int64 *v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned int i; // r14d
  __int64 v18; // rbx
  int v19; // r8d
  __int64 v20; // rdx
  int v21; // r9d
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // r12
  int v24; // ebx
  bool v26; // zf
  int v27; // edx
  bool v28; // zf
  unsigned __int64 v29; // rbx
  SIZE_T v30; // rax
  struct _MDL *v31; // rax
  int v32; // ebx
  int v33; // eax
  void *v34; // rcx
  unsigned int v35; // [rsp+50h] [rbp-88h]
  ULONG_PTR *v36; // [rsp+58h] [rbp-80h]
  unsigned __int64 *v37; // [rsp+60h] [rbp-78h]
  unsigned __int64 v38; // [rsp+68h] [rbp-70h]
  _QWORD *v39; // [rsp+70h] [rbp-68h]
  unsigned __int64 *v40; // [rsp+78h] [rbp-60h]
  _QWORD v41[2]; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v42[9]; // [rsp+90h] [rbp-48h] BYREF

  *a5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v39 = *(_QWORD **)a1;
  ControlAreaPartition = MiGetControlAreaPartition(*(_QWORD *)a1);
  v36 = (ULONG_PTR *)ControlAreaPartition;
  if ( !(unsigned int)MiChargeCommit(ControlAreaPartition, *(unsigned int *)(a1 + 44), 0) )
    return 3221225773LL;
  Pool = (unsigned __int64 *)MiAllocatePool(64, 0x58uLL, 0x73536D4Du);
  v10 = Pool;
  v40 = Pool;
  if ( !Pool )
  {
    v24 = -1073741670;
    goto LABEL_17;
  }
  *((_DWORD *)Pool + 20) = 1;
  v11 = (__int64 *)MiAllocatePool(274, 8LL * *(unsigned int *)(a1 + 44), 0x74536D4Du);
  v12 = v11;
  if ( !v11 )
  {
    v24 = -1073741670;
    goto LABEL_16;
  }
  v10[9] = (unsigned __int64)v11;
  memset(v11, 0, 8LL * *(unsigned int *)(a1 + 44));
  SubsectionPte = MiMakeSubsectionPte(a1);
  v14 = v10 + 3;
  v37 = v10 + 3;
  v10[6] = v10[6] & 0xFFFFFFFFFFFFFFF8uLL | 3;
  v15 = *(_QWORD *)(a1 + 8);
  v38 = v15;
  v16 = 0;
  v35 = 0;
  if ( !*(_DWORD *)(a1 + 44) )
    goto LABEL_13;
  for ( i = 0; i < *(_DWORD *)(a1 + 44); ++i )
  {
    v18 = MI_READ_PTE_LOCK_FREE(v15);
    if ( !v18 )
      break;
    if ( a2 )
      goto LABEL_11;
    MiPteInShadowRange((unsigned __int64)v12);
    if ( IS_PTE_NOT_DEMAND_ZERO(v18) )
    {
      v20 = SubsectionPte;
      v21 = 0;
      if ( !v19 )
        goto LABEL_10;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v21 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
          v26 = (SubsectionPte & 1) == 0;
LABEL_31:
          if ( !v26 )
            v20 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v26 = (SubsectionPte & 1) == 0;
        goto LABEL_31;
      }
LABEL_10:
      *v12 = v20;
      if ( v21 )
        goto LABEL_43;
      goto LABEL_11;
    }
    v27 = 0;
    if ( v19 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v27 = 1;
        if ( HIBYTE(word_140C4E048) )
          goto LABEL_41;
        v28 = (v18 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_41;
        v28 = (v18 & 1) == 0;
      }
      if ( !v28 )
        v18 |= 0x8000000000000000uLL;
    }
LABEL_41:
    *v12 = v18;
    if ( v27 )
    {
      v20 = v18;
LABEL_43:
      MiWritePteShadow((__int64)v12, v20);
    }
LABEL_11:
    ++v12;
    v15 = v38 + 8;
    v38 += 8LL;
  }
  v35 = i;
  v10 = v40;
  v6 = 0LL;
  v14 = v37;
  v16 = v35;
LABEL_13:
  v22 = v16;
  v10[7] = v16;
  MiUpdateSystemProtoPtesTree(v14, 1);
  v23 = v10[9];
  if ( a2 )
  {
    v29 = v22 << 12;
    v30 = MmSizeOfMdl((PVOID)a2, v22 << 12);
    v31 = (struct _MDL *)MiAllocatePool(64, v30, 0x206C644Du);
    v6 = v31;
    if ( !v31 )
      goto LABEL_50;
    v31->Next = 0LL;
    v31->Size = 8 * (((v29 + (a2 & 0xFFF) + 4095) >> 12) + 6);
    v31->MdlFlags = 0;
    v31->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
    v31->ByteOffset = a2 & 0xFFF;
    v31->ByteCount = v29;
    MmProbeAndLockPages(v31, 0, IoReadAccess);
    v32 = (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F;
    if ( (unsigned int)MiChargeResident(v36, v22, 0LL) )
    {
      if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 && (v32 & 2) != 0 )
      {
        v42[1] = *(_QWORD *)(v39[12] + 56LL);
        v42[0] = (unsigned __int64)a3 << 12;
        v41[1] = 0LL;
        v41[0] = a4 + v42[0] + *(_QWORD *)(*v39 + 32LL);
        v33 = MiFillPerSessionProtos((_DWORD)v39, v23, (int)v6 + 48, v35, v32, a3, a4, (__int64)v42, (__int64)v41);
      }
      else
      {
        v33 = MiFillPerSessionProtos((_DWORD)v39, v23, (int)v6 + 48, v35, v32, a3, a4, 0LL, 0LL);
      }
      v24 = v33;
      if ( v33 >= 0 )
        goto LABEL_14;
    }
    else
    {
LABEL_50:
      v24 = -1073741670;
    }
  }
  else
  {
LABEL_14:
    *a5 = v10;
    v10 = 0LL;
    v24 = 0;
  }
  v7 = v37;
LABEL_16:
  ControlAreaPartition = (__int64)v36;
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
    v34 = (void *)v10[9];
    if ( v34 )
      ExFreePoolWithTag(v34, 0);
    ExFreePoolWithTag(v10, 0);
  }
  if ( v24 < 0 )
    MiReturnCommit(ControlAreaPartition, *(unsigned int *)(a1 + 44));
  return (unsigned int)v24;
}
