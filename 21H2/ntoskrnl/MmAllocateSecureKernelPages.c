/*
 * XREFs of MmAllocateSecureKernelPages @ 0x140553614
 * Callers:
 *     PspIumAllocatePartitionState @ 0x140583924 (PspIumAllocatePartitionState.c)
 *     PspIumAllocatePhysicalPages @ 0x140583A84 (PspIumAllocatePhysicalPages.c)
 * Callees:
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140294640 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiInitializeMdlPfn @ 0x140294B14 (MiInitializeMdlPfn.c)
 *     MiPartitionObjectToPartition @ 0x1402972D0 (MiPartitionObjectToPartition.c)
 *     MiGetSlabPage @ 0x14029938C (MiGetSlabPage.c)
 *     MiMakeProtectionMask @ 0x1402BF320 (MiMakeProtectionMask.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiReplenishSlabAllocator @ 0x140392964 (MiReplenishSlabAllocator.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MmFreeSecureKernelPages @ 0x140553944 (MmFreeSecureKernelPages.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

ULONG_PTR *__fastcall MmAllocateSecureKernelPages(ULONG_PTR **a1, __int64 a2, unsigned int a3, int a4, _DWORD *a5)
{
  __int64 v6; // rsi
  ULONG_PTR *result; // rax
  __int64 v8; // r13
  struct _MDL *Pool; // rax
  struct _MDL *PartitionNodePagesForMdl; // r14
  struct _MDL *v11; // rbp
  __int64 v12; // r12
  __int64 *v13; // r15
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  __int64 SlabPage; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  unsigned int v20; // eax
  __int64 v21; // rsi
  unsigned __int8 v22; // al
  __int64 v23; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v25; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  bool v29; // zf
  unsigned __int8 v30; // [rsp+40h] [rbp-58h]
  char v31[3]; // [rsp+41h] [rbp-57h] BYREF
  int v32; // [rsp+44h] [rbp-54h]
  unsigned int ProtectionMask; // [rsp+48h] [rbp-50h]
  __int64 v34; // [rsp+50h] [rbp-48h] BYREF
  __int64 *v35; // [rsp+58h] [rbp-40h]
  PVOID P; // [rsp+60h] [rbp-38h]

  v34 = 0LL;
  v31[0] = 0;
  v6 = a2;
  *a5 = 0;
  result = MiPartitionObjectToPartition(a1, 0, v31);
  v8 = (__int64)result;
  if ( !result )
    return result;
  if ( (*((_DWORD *)result + 1) & 8) == 0 )
    goto LABEL_32;
  ProtectionMask = MiMakeProtectionMask(a3);
  Pool = (struct _MDL *)MiAllocatePool(64, 8 * v6 + 48, 0x69646D4Du);
  P = Pool;
  PartitionNodePagesForMdl = Pool;
  if ( !Pool )
    goto LABEL_32;
  v32 = 64;
  v11 = Pool + 1;
  v12 = 8 * v6;
  v13 = (__int64 *)v11;
  v14 = (unsigned __int64)&Pool[1] + 8 * v6;
  v35 = (__int64 *)v14;
  if ( (unsigned __int64)v11 >= v14 )
    goto LABEL_31;
  v15 = v14;
  do
  {
    SlabPage = MiGetSlabPage(v8, ProtectionMask, 0, &v34, 0);
    *v13 = SlabPage;
    if ( SlabPage == -1 )
    {
      if ( !v34 )
        break;
      v20 = v32;
      while ( !(unsigned int)MiReplenishSlabAllocator(v34, v8, v12 >> 3, v20) )
      {
        if ( v13 != (__int64 *)v11 && !a4 || (v32 & 0x40) == 0 )
          goto LABEL_25;
        v20 = v32 & 0xFFFFFFBF;
        v32 &= ~0x40u;
      }
      --v13;
      v12 += 8LL;
    }
    else
    {
      v21 = 48 * SlabPage - 0x58000000000LL;
      v22 = MiLockPageInline(v21, v17, v18, v19);
      v23 = *(_QWORD *)(v21 + 40);
      *(_QWORD *)v21 = 0LL;
      v30 = v22;
      *(_QWORD *)(v21 + 40) = v23 & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
      *(_QWORD *)(v21 + 16) = ZeroPte;
      MiInitializeMdlPfn(v21, 512);
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v25 = v30;
        if ( v30 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << (v30 + 1));
          v29 = (v28 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v28;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      else
      {
        v25 = v30;
      }
      __writecr8(v25);
    }
    ++v13;
    v12 -= 8LL;
  }
  while ( (unsigned __int64)v13 < v15 );
LABEL_25:
  PartitionNodePagesForMdl = (struct _MDL *)P;
  if ( v13 == (__int64 *)v11 )
  {
    v6 = a2;
LABEL_31:
    ExFreePoolWithTag(PartitionNodePagesForMdl, 0);
    goto LABEL_32;
  }
  *(_QWORD *)P = 0LL;
  PartitionNodePagesForMdl->StartVa = 0LL;
  PartitionNodePagesForMdl->ByteOffset = 0;
  PartitionNodePagesForMdl->ByteCount = (unsigned int)(((char *)v13 - (char *)v11) >> 3) << 12;
  PartitionNodePagesForMdl->Size = 8 * ((((char *)v13 - (char *)v11) >> 3) + 6);
  PartitionNodePagesForMdl->MdlFlags = 2;
  if ( a4 && v13 != v35 )
  {
    MmFreeSecureKernelPages(PartitionNodePagesForMdl);
    ExFreePoolWithTag(PartitionNodePagesForMdl, 0);
    v6 = a2;
LABEL_32:
    PartitionNodePagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                                                0,
                                                -1,
                                                0LL,
                                                v6 << 12,
                                                1,
                                                0,
                                                a4 != 0 ? 517 : 513,
                                                (ULONG_PTR)a1);
    goto LABEL_33;
  }
  *a5 = 1;
LABEL_33:
  if ( v31[0] )
    PsDereferencePartition(*(_QWORD *)(v8 + 176));
  return (ULONG_PTR *)PartitionNodePagesForMdl;
}
