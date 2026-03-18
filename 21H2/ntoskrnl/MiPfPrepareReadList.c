/*
 * XREFs of MiPfPrepareReadList @ 0x1407BD420
 * Callers:
 *     MmPrefetchPagesEx @ 0x1406FA730 (MmPrefetchPagesEx.c)
 * Callees:
 *     MmGetCurrentProcessorColor @ 0x140221E50 (MmGetCurrentProcessorColor.c)
 *     MiUnlockDynamicMemoryShared @ 0x14022B0E0 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x14023502C (MiLockDynamicMemoryShared.c)
 *     MiReturnFaultCharges @ 0x14024AA58 (MiReturnFaultCharges.c)
 *     MiPrefetchNormally @ 0x140266AD0 (MiPrefetchNormally.c)
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     MiReadPteShadow @ 0x14027D890 (MiReadPteShadow.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140283DF0 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiOffsetToProtos @ 0x140286F90 (MiOffsetToProtos.c)
 *     MiLocateSubsectionNode @ 0x140287180 (MiLocateSubsectionNode.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     MiGetNextPageColor @ 0x1402EB3DC (MiGetNextPageColor.c)
 *     MiGetSlabPage @ 0x1402EB440 (MiGetSlabPage.c)
 *     ExAllocatePoolMm @ 0x14030B860 (ExAllocatePoolMm.c)
 *     MiGetControlAreaPartition @ 0x14030EC14 (MiGetControlAreaPartition.c)
 *     MiAddViewsForSection @ 0x140311CC0 (MiAddViewsForSection.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     MiSetPfnLink @ 0x140313D14 (MiSetPfnLink.c)
 *     MiUseSlabAllocator @ 0x140313D20 (MiUseSlabAllocator.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140316E90 (MiUpdatePfnForPrefetchByPte.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x140329630 (MiObtainFaultCharges.c)
 *     MiStartingOffsetNeedLock @ 0x140334364 (MiStartingOffsetNeedLock.c)
 *     MiInitializePageColorBase @ 0x140339C20 (MiInitializePageColorBase.c)
 *     MiEndingOffsetWithLock @ 0x14033DFC0 (MiEndingOffsetWithLock.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14033FD38 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiRefillPurgedExtents @ 0x1405A0A20 (MiRefillPurgedExtents.c)
 *     MiNotifyPageHeat @ 0x1405B7E7C (MiNotifyPageHeat.c)
 *     MiPfAllocateMdls @ 0x1406F4A80 (MiPfAllocateMdls.c)
 *     MiReleaseReadListResources @ 0x1406FACF8 (MiReleaseReadListResources.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfPrepareReadList(__int64 *a1, __int64 *a2, _QWORD *a3, unsigned int *a4)
{
  unsigned int v4; // r14d
  __int64 *v5; // rbp
  unsigned int v6; // ebx
  __int64 v7; // rax
  bool v8; // zf
  __int64 *v9; // rcx
  __int64 v10; // rdi
  int v11; // eax
  int v12; // r8d
  _QWORD *PoolMm; // rax
  __int64 v14; // r13
  _QWORD *v15; // rax
  _QWORD *SubsectionNode; // r15
  __int64 Process; // rsi
  ULONG_PTR *ControlAreaPartition; // rax
  int v19; // ecx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r12
  int v22; // edi
  __int64 *v23; // r10
  unsigned __int64 v24; // r11
  __int64 v25; // r9
  unsigned __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 *v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // r8
  __int64 *v31; // rax
  __int64 PteAddress; // rax
  __int64 v33; // rdx
  __int64 *v34; // rbp
  ULONG_PTR *v35; // rsi
  unsigned int NextPageColor; // esi
  int v37; // eax
  unsigned int v38; // ebx
  unsigned int v39; // edx
  ULONG_PTR *v40; // rsi
  __int64 SlabPage; // rax
  _QWORD *v42; // r8
  __int64 v43; // r8
  _DWORD *v44; // rsi
  int v45; // ebp
  unsigned __int64 v46; // rax
  __int64 v47; // r9
  unsigned __int64 v48; // r11
  bool v49; // cf
  int v50; // eax
  __int64 v51; // rdx
  __int64 *v52; // rax
  __int64 v53; // rcx
  __int64 *v54; // rax
  unsigned int Mdls; // ebx
  unsigned int v57; // esi
  int v58; // eax
  _DWORD *v59; // rcx
  _QWORD *v60; // rsi
  _DWORD *Pool; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // r9
  int v65; // ebx
  char v67; // r9
  unsigned int v68; // r8d
  __int64 v69; // rax
  __int64 v70; // r8
  int v71; // eax
  int v72; // [rsp+30h] [rbp-D8h]
  __int64 v73; // [rsp+38h] [rbp-D0h]
  __int64 *v74; // [rsp+40h] [rbp-C8h]
  __int64 *v75; // [rsp+48h] [rbp-C0h]
  unsigned int SessionId; // [rsp+50h] [rbp-B8h]
  __int64 *v77; // [rsp+58h] [rbp-B0h]
  unsigned int v78; // [rsp+60h] [rbp-A8h]
  unsigned int v79; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v80; // [rsp+68h] [rbp-A0h]
  __int64 v81; // [rsp+70h] [rbp-98h]
  ULONG_PTR *v82; // [rsp+78h] [rbp-90h]
  unsigned __int64 v83; // [rsp+80h] [rbp-88h]
  __int64 *v84; // [rsp+88h] [rbp-80h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-78h]
  _QWORD *v86; // [rsp+98h] [rbp-70h]
  __int64 *v87; // [rsp+A0h] [rbp-68h]
  _OWORD v88[2]; // [rsp+A8h] [rbp-60h] BYREF

  v4 = 0;
  *a2 = 0LL;
  v5 = a1;
  v6 = *((_DWORD *)a1 + 4);
  v84 = 0LL;
  v88[0] = 0LL;
  if ( (v6 & 0x180) != 0 )
    return 3221225711LL;
  v7 = *a1;
  v8 = *((_DWORD *)a1 + 3) == 0;
  v80 = *((_DWORD *)a1 + 2);
  v9 = (__int64 *)(*(_QWORD *)(v7 + 40) + 16LL);
  if ( v8 )
    v9 = *(__int64 **)(v7 + 40);
  v10 = *v9;
  v81 = v10;
  if ( (*(_DWORD *)(v10 + 56) & 0x400) != 0 || !*(_QWORD *)(v10 + 64) )
    return 3221225711LL;
  LOWORD(v11) = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, 8LL * (unsigned int)(v12 - 1) + 144, 0x6C526D4Du, v11 | 0x80000000);
  v14 = (__int64)PoolMm;
  if ( !PoolMm )
    return 3221225626LL;
  PoolMm[1] = v10;
  v15 = PoolMm + 15;
  SubsectionNode = (_QWORD *)(v10 + 128);
  v15[1] = v15;
  *v15 = v15;
  *(_QWORD *)(v14 + 32) = v14 + 24;
  *(_QWORD *)(v14 + 24) = v14 + 24;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(v10);
  v19 = *(_DWORD *)(v10 + 56);
  v82 = ControlAreaPartition;
  if ( (v19 & 0x20) != 0 )
  {
    SessionId = MmGetSessionIdEx(Process);
  }
  else
  {
    v20 = v5[2];
    if ( v20 > 0x3FFFFFFFFFF000LL || (SubsectionNode = MiOffsetToProtos(v10, v20, (unsigned __int64 *)&v84)) == 0LL )
    {
      ExFreePoolWithTag((PVOID)v14, 0);
      return 0LL;
    }
    SessionId = -1;
  }
  v84 = 0LL;
  *(_DWORD *)(v14 + 80) = v6 & 7;
  v78 = v6 & 7;
  v75 = (__int64 *)(v14 + 136);
  v83 = 0LL;
  v87 = 0LL;
  v77 = 0LL;
  v73 = 0LL;
  *(_DWORD *)(v14 + 84) = (v6 & 0x40) != 0 ? 5 : 0;
  *(_DWORD *)(v14 + 88) = (v6 >> 3) & 7;
  v21 = 0LL;
  v22 = (*(_DWORD *)(v10 + 56) >> 20) & 0x7F;
  v74 = 0LL;
  v86 = 0LL;
  v79 = 0;
  v72 = 0;
  MiInitializePageColorBase(Process + 1664, v22, (__int64)v88);
  if ( v80 <= (unsigned int)v23 )
  {
    Mdls = (unsigned int)v23;
LABEL_64:
    MiReleaseReadListResources(v14);
    ExFreePoolWithTag((PVOID)v14, 0);
    return Mdls;
  }
  while ( 1 )
  {
    v25 = 1LL;
    v26 = v5[v4 + 2] & 0xFFFFFFFFFFFFFF80uLL;
    if ( v26 >= v24 || v21 > v26 )
      break;
    v27 = SubsectionNode[1];
    v28 = (__int64 *)(v27 + 8 * ((v26 - v21) >> 12));
    if ( (unsigned __int64)v28 >= v27 + 8 * (unsigned __int64)*((unsigned int *)SubsectionNode + 11) )
      goto LABEL_60;
    if ( (*((_BYTE *)SubsectionNode + 34) & 2) != 0 && (*(_DWORD *)(v81 + 56) & 0x8000000) != 0 )
      goto LABEL_22;
LABEL_16:
    if ( v28 == v23 )
      goto LABEL_22;
    v29 = *v28;
    v77 = v28;
    if ( (unsigned __int64)v28 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v28 <= 0xFFFFF6FB7DBED7F8uLL )
      LOWORD(v29) = MiReadPteShadow((unsigned __int64)v28, v29);
    if ( (v29 & 1) != 0 )
    {
LABEL_21:
      MiUpdatePfnForPrefetchByPte((unsigned __int64)v28, v78, (__int64)a4);
      v23 = v28;
      goto LABEL_22;
    }
    if ( (v29 & 0x400) != 0 )
    {
      if ( (*(_BYTE *)(v81 + 62) & 0xC) == 4 )
      {
        if ( a4 )
        {
          MiNotifyPageHeat(a4);
          MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
          v65 = MiRefillPurgedExtents(SubsectionNode, (__int64)v28, SessionId);
          v72 = v65;
          MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
        }
        else
        {
          v65 = MiRefillPurgedExtents(SubsectionNode, (__int64)v28, SessionId);
          v72 = v65;
        }
        if ( v65 < 0 )
        {
          if ( v73 )
          {
            v34 = v75;
            v54 = v74;
            goto LABEL_81;
          }
          Mdls = -1073741670;
          goto LABEL_64;
        }
        v23 = v28;
        goto LABEL_22;
      }
LABEL_26:
      v30 = (__int64)v28;
      v31 = v75;
      if ( v74 )
        v31 = v74;
      v74 = v31;
      *v75 = (__int64)v28;
      if ( v86 != SubsectionNode
        || (MiGetPteAddress((unsigned __int64)v84),
            PteAddress = MiGetPteAddress((unsigned __int64)v28),
            v33 != PteAddress) )
      {
        v30 |= 2uLL;
        v86 = SubsectionNode;
        *v75 = v30;
      }
      v84 = v28;
      if ( v28 == v87 )
        *v75 = v30 | 1;
      v34 = v75 + 1;
      v35 = v82;
      ++v75;
      if ( !MiPrefetchNormally(v82, v25, *(_DWORD *)(v14 + 88) + 1) )
        goto LABEL_61;
      if ( a3 )
      {
        if ( !*a3 )
          goto LABEL_61;
        --*a3;
      }
      if ( !MiObtainFaultCharges(v35, 1uLL, 1) )
      {
        v71 = v72;
        v53 = v73;
        if ( !v73 )
          v71 = -1073741670;
        v72 = v71;
        goto LABEL_62;
      }
      NextPageColor = MiGetNextPageColor((__int64)v88);
      v37 = MiUseSlabAllocator((__int64)v82, SubsectionNode, v29, (int *)&v79);
      v38 = v79;
      if ( v37 && v79 <= 3 )
      {
        v67 = 2;
        v68 = NextPageColor;
        v40 = v82;
        if ( v22 )
          v67 = 0;
        SlabPage = MiGetSlabPage((__int64)v82, v79, v68, v67, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, a4 != 0LL ? 0x20000 : 0);
      }
      else
      {
        v39 = NextPageColor;
        v40 = v82;
        SlabPage = MiGetPage((__int64)v82, v39, 0x200u);
      }
      if ( SlabPage == -1 )
      {
        MiReturnFaultCharges((__int64)v40, 1uLL, 1);
        v54 = v74;
        if ( v73 )
          goto LABEL_81;
        Mdls = -1073741801;
        goto LABEL_64;
      }
      if ( MiIsPfnFromSlabAllocation(48 * SlabPage - 0x220000000000LL) )
      {
        if ( v38 > 3 )
          v38 -= 4;
        MiSetPfnLink(v42, *(_QWORD *)(v14 + 8LL * v38 + 48));
        *(_QWORD *)(v14 + 8 * v69 + 48) = v70;
      }
      else
      {
        MiSetPfnLink(v42, *(_QWORD *)(v14 + 40));
        *(_QWORD *)(v14 + 40) = v43;
      }
      ++v73;
LABEL_42:
      v23 = v77;
      goto LABEL_22;
    }
    if ( (v29 & 0x800) != 0 )
      goto LABEL_21;
    if ( IS_PTE_NOT_DEMAND_ZERO(v29) )
      goto LABEL_26;
LABEL_22:
    if ( ++v4 >= v80 )
      goto LABEL_60;
    v24 = v83;
    v5 = a1;
  }
  v44 = (_DWORD *)v81;
  v45 = 0;
  while ( 1 )
  {
    if ( (v44[14] & 0x20) != 0
      && !*((_DWORD *)SubsectionNode + 9)
      && SubsectionNode[1] != *(_QWORD *)(*(_QWORD *)v44 + 64LL) )
    {
      SubsectionNode = (_QWORD *)SubsectionNode[2];
      goto LABEL_59;
    }
    v21 = MiStartingOffsetNeedLock(SubsectionNode, SessionId);
    v46 = MiEndingOffsetWithLock(SubsectionNode);
    v83 = v46;
    v48 = v46;
    if ( v21 > v26 )
      goto LABEL_42;
    v49 = v26 < v46;
    v50 = v44[14];
    if ( v49 )
      break;
    if ( (v50 & 0x20) != 0 )
    {
      SubsectionNode = (_QWORD *)SubsectionNode[2];
    }
    else
    {
      if ( v26 > 0x3FFFFFFFFFF000LL )
        goto LABEL_60;
      SubsectionNode = MiLocateSubsectionNode((__int64)v44, v26, 0);
    }
LABEL_59:
    if ( !SubsectionNode )
      goto LABEL_60;
  }
  if ( (v50 & 0x20) != 0 )
    goto LABEL_51;
  v57 = 4;
  if ( a4 )
    v57 = 2052;
  v58 = MiAddViewsForSection(SubsectionNode, *((unsigned int *)SubsectionNode + 11), (_DWORD *)v57, v47);
  v72 = v58;
  if ( v58 < 0 )
  {
    if ( (v57 & 0x800) == 0 )
      goto LABEL_60;
    if ( v58 != -1073741078 )
      goto LABEL_60;
    MiNotifyPageHeat(a4);
    MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
    v72 = MiAddViewsForSection(
            SubsectionNode,
            *((unsigned int *)SubsectionNode + 11),
            (_DWORD *)(v57 & 0xFFFFF7FF),
            v64);
    MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
    if ( v72 < 0 )
      goto LABEL_60;
  }
  v59 = *(_DWORD **)(v14 + 32);
  v60 = (_QWORD *)(v14 + 24);
  if ( (_QWORD *)*v60 != v60 )
  {
    v63 = (unsigned int)v59[4];
    if ( (_DWORD)v63 != 5 )
    {
LABEL_75:
      v48 = v83;
      *(_QWORD *)&v59[2 * v63 + 6] = SubsectionNode;
      ++v59[4];
      if ( !*(_QWORD *)(v14 + 16) )
        *(_QWORD *)(v14 + 16) = SubsectionNode;
LABEL_51:
      v51 = SubsectionNode[1];
      v28 = (__int64 *)(v51 + 8 * ((v26 - v21) >> 12));
      if ( (unsigned __int64)v28 >= v51 + 8 * (unsigned __int64)*((unsigned int *)SubsectionNode + 11) )
        goto LABEL_60;
      v25 = 1LL;
      if ( (*((_BYTE *)SubsectionNode + 34) & 2) != 0 && (*(_DWORD *)(v81 + 56) & 0x8000000) != 0 )
        v45 = 1;
      if ( (((_WORD)v48 - (_WORD)v21) & 0xFFF) != 0 )
        v52 = (__int64 *)(v51 + 8 * (((v48 - v21 + 4095) >> 12) - 1));
      else
        v52 = 0LL;
      v23 = v77;
      v87 = v52;
      if ( v45 )
        goto LABEL_22;
      goto LABEL_16;
    }
  }
  Pool = MiAllocatePool(256, 0x40uLL, 0x6C536D4Du);
  v59 = Pool;
  if ( Pool )
  {
    Pool[4] = 0;
    v62 = *(_QWORD **)(v14 + 32);
    if ( (_QWORD *)*v62 != v60 )
      __fastfail(3u);
    *(_QWORD *)v59 = v60;
    *((_QWORD *)v59 + 1) = v62;
    *v62 = v59;
    *(_QWORD *)(v14 + 32) = v59;
    v63 = (unsigned int)v59[4];
    goto LABEL_75;
  }
  MiRemoveViewsFromSectionWithPfn(SubsectionNode);
LABEL_60:
  v34 = v75;
LABEL_61:
  v53 = v73;
LABEL_62:
  v54 = v74;
  if ( !v53 )
  {
    Mdls = v72;
    goto LABEL_64;
  }
LABEL_81:
  *(_QWORD *)(v14 + 96) = v54;
  *(_DWORD *)(v14 + 92) = ((__int64)v34 - v14 - 136) >> 3;
  Mdls = MiPfAllocateMdls(v14, SessionId, 0LL);
  if ( *(_QWORD *)(v14 + 120) == v14 + 120 )
  {
    MiReleaseReadListResources(v14);
    ExFreePoolWithTag((PVOID)v14, 0);
    v14 = 0LL;
  }
  else
  {
    Mdls = 0;
  }
  *a2 = v14;
  return Mdls;
}
