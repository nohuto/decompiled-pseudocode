/*
 * XREFs of MiAllocatePerSessionProtos @ 0x1406DDC90
 * Callers:
 *     MiCreatePerSessionProtos @ 0x1406DDB48 (MiCreatePerSessionProtos.c)
 *     MiCreateSessionDriverProtos @ 0x140981070 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MmSizeOfMdl @ 0x140231480 (MmSizeOfMdl.c)
 *     MiMakeSubsectionPte @ 0x14026EA48 (MiMakeSubsectionPte.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14026EA80 (MiUpdateSystemProtoPtesTree.c)
 *     MiChargeResident @ 0x1402821F4 (MiChargeResident.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     MiGetControlAreaPartition @ 0x14030EC14 (MiGetControlAreaPartition.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14033FD38 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiFillPerSessionProtos @ 0x140983680 (MiFillPerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocatePerSessionProtos(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  struct _MDL *v6; // r15
  __int64 v7; // rdi
  __int64 ControlAreaPartition; // r12
  _QWORD *Pool; // rax
  _QWORD *v10; // r14
  __int64 *v11; // rax
  __int64 *v12; // r12
  __int64 v13; // rdx
  __int64 SubsectionPte; // rdi
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned int v17; // eax
  unsigned int i; // r14d
  __int64 v19; // rbx
  int v20; // r8d
  __int64 v21; // rdx
  int v22; // r9d
  unsigned __int64 v23; // rdi
  __int64 v24; // r12
  int v25; // ebx
  bool v27; // zf
  int v28; // edx
  bool v29; // zf
  unsigned __int64 v30; // rbx
  SIZE_T v31; // rax
  struct _MDL *v32; // rax
  int v33; // ebx
  __int64 v34; // r11
  int v35; // eax
  void *v36; // rcx
  unsigned int v37; // [rsp+50h] [rbp-78h]
  ULONG_PTR *v38; // [rsp+58h] [rbp-70h]
  _QWORD *v39; // [rsp+60h] [rbp-68h]
  unsigned __int64 v40; // [rsp+68h] [rbp-60h]
  __int64 v41[2]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v42[9]; // [rsp+80h] [rbp-48h] BYREF

  *a5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v41[0] = *(_QWORD *)a1;
  ControlAreaPartition = MiGetControlAreaPartition(v41[0]);
  v38 = (ULONG_PTR *)ControlAreaPartition;
  if ( !(unsigned int)MiChargeCommit(ControlAreaPartition, *(unsigned int *)(a1 + 44), 0) )
    return 3221225773LL;
  Pool = MiAllocatePool(64, 0x58uLL, 0x73536D4Du);
  v10 = Pool;
  v42[0] = Pool;
  if ( !Pool )
  {
    v25 = -1073741670;
    goto LABEL_17;
  }
  *((_DWORD *)Pool + 20) = 1;
  v11 = (__int64 *)MiAllocatePool(274, 8LL * *(unsigned int *)(a1 + 44), 0x74536D4Du);
  v12 = v11;
  if ( !v11 )
  {
    v25 = -1073741670;
    goto LABEL_16;
  }
  v10[9] = v11;
  memset(v11, 0, 8LL * *(unsigned int *)(a1 + 44));
  SubsectionPte = MiMakeSubsectionPte(a1, v13);
  v15 = (__int64)(v10 + 3);
  v39 = v10 + 3;
  v10[6] = v10[6] & 0xFFFFFFFFFFFFFFF8uLL | 3;
  v16 = *(_QWORD *)(a1 + 8);
  v40 = v16;
  v17 = 0;
  v37 = 0;
  if ( !*(_DWORD *)(a1 + 44) )
    goto LABEL_13;
  for ( i = 0; i < *(_DWORD *)(a1 + 44); ++i )
  {
    v19 = MI_READ_PTE_LOCK_FREE(v16);
    if ( !v19 )
      break;
    if ( a2 )
      goto LABEL_11;
    MiPteInShadowRange((unsigned __int64)v12);
    if ( IS_PTE_NOT_DEMAND_ZERO(v19) )
    {
      v21 = SubsectionPte;
      v22 = 0;
      if ( !v20 )
        goto LABEL_10;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v22 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v27 = (SubsectionPte & 1) == 0;
LABEL_31:
          if ( !v27 )
            v21 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v27 = (SubsectionPte & 1) == 0;
        goto LABEL_31;
      }
LABEL_10:
      *v12 = v21;
      if ( v22 )
        goto LABEL_43;
      goto LABEL_11;
    }
    v28 = 0;
    if ( v20 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v28 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_41;
        v29 = (v19 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_41;
        v29 = (v19 & 1) == 0;
      }
      if ( !v29 )
        v19 |= 0x8000000000000000uLL;
    }
LABEL_41:
    *v12 = v19;
    if ( v28 )
    {
      v21 = v19;
LABEL_43:
      MiWritePteShadow((__int64)v12, v21);
    }
LABEL_11:
    ++v12;
    v16 = v40 + 8;
    v40 += 8LL;
  }
  v37 = i;
  v10 = (_QWORD *)v42[0];
  v6 = 0LL;
  v15 = (__int64)v39;
  v17 = v37;
LABEL_13:
  v23 = v17;
  v10[7] = v17;
  MiUpdateSystemProtoPtesTree(v15, 1);
  v24 = v10[9];
  if ( a2 )
  {
    v30 = v23 << 12;
    v31 = MmSizeOfMdl((PVOID)a2, v23 << 12);
    v32 = (struct _MDL *)MiAllocatePool(64, v31, 0x206C644Du);
    v6 = v32;
    if ( !v32 )
      goto LABEL_50;
    v32->Next = 0LL;
    v32->Size = 8 * (((v30 + (a2 & 0xFFF) + 4095) >> 12) + 6);
    v32->MdlFlags = 0;
    v32->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
    v32->ByteOffset = a2 & 0xFFF;
    v32->ByteCount = v30;
    MmProbeAndLockPages(v32, 0, IoReadAccess);
    v33 = (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F;
    if ( (unsigned int)MiChargeResident(v38, v23, 0LL) )
    {
      if ( (MiFlags & 0x8000) != 0 && (MiFlags & 0x4000) != 0 && (v33 & 2) != 0 )
      {
        v34 = v41[0];
        v41[1] = *(_QWORD *)(*(_QWORD *)(v41[0] + 96) + 56LL);
        v41[0] = (unsigned __int64)a3 << 12;
        v42[1] = 0LL;
        v42[0] = a4 + v41[0] + *(_QWORD *)(*(_QWORD *)v34 + 32LL);
        v35 = MiFillPerSessionProtos(v34, v24, (int)v6 + 48, v37, v33, a3, a4, (__int64)v41, (__int64)v42);
      }
      else
      {
        v35 = MiFillPerSessionProtos(v41[0], v24, (int)v6 + 48, v37, v33, a3, a4, 0LL, 0LL);
      }
      v25 = v35;
      if ( v35 >= 0 )
        goto LABEL_14;
    }
    else
    {
LABEL_50:
      v25 = -1073741670;
    }
  }
  else
  {
LABEL_14:
    *a5 = v10;
    v10 = 0LL;
    v25 = 0;
  }
  v7 = (__int64)v39;
LABEL_16:
  ControlAreaPartition = (__int64)v38;
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
    v36 = (void *)v10[9];
    if ( v36 )
      ExFreePoolWithTag(v36, 0);
    ExFreePoolWithTag(v10, 0);
  }
  if ( v25 < 0 )
    MiReturnCommit(ControlAreaPartition, *(unsigned int *)(a1 + 44));
  return (unsigned int)v25;
}
