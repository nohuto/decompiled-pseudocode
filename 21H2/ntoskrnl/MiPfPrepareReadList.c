/*
 * XREFs of MiPfPrepareReadList @ 0x140706CF0
 * Callers:
 *     MmPrefetchPagesEx @ 0x140685FC4 (MmPrefetchPagesEx.c)
 * Callees:
 *     MiReturnFaultCharges @ 0x14020B384 (MiReturnFaultCharges.c)
 *     MiPrefetchNormally @ 0x14025F878 (MiPrefetchNormally.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiGetControlAreaPartition @ 0x14027C914 (MiGetControlAreaPartition.c)
 *     MiGetNextPageColor @ 0x140296F58 (MiGetNextPageColor.c)
 *     MiGetSlabPage @ 0x14029938C (MiGetSlabPage.c)
 *     MiGetSlabAllocator @ 0x14029959C (MiGetSlabAllocator.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x1402C0390 (MiObtainFaultCharges.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402E08FC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14030772C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     MiReadPteShadow @ 0x140310780 (MiReadPteShadow.c)
 *     MiAddViewsForSection @ 0x140320340 (MiAddViewsForSection.c)
 *     MiLocateSubsectionNode @ 0x140321830 (MiLocateSubsectionNode.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MiSetPfnLink @ 0x140322EDC (MiSetPfnLink.c)
 *     MiUseSlabAllocator @ 0x140322EE8 (MiUseSlabAllocator.c)
 *     MiControlAreaUsingCopyExtents @ 0x140322F4C (MiControlAreaUsingCopyExtents.c)
 *     MiEndingOffsetWithLock @ 0x1403274E0 (MiEndingOffsetWithLock.c)
 *     MiStartingOffsetNeedLock @ 0x140327D54 (MiStartingOffsetNeedLock.c)
 *     MiOffsetToProtos @ 0x14032B8A0 (MiOffsetToProtos.c)
 *     MiUpdatePfnPriorityByPte @ 0x140336C60 (MiUpdatePfnPriorityByPte.c)
 *     MiControlAreaUsingExtents @ 0x14033D9A0 (MiControlAreaUsingExtents.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     MiRefillPurgedExtents @ 0x140542290 (MiRefillPurgedExtents.c)
 *     MiReleaseReadListResources @ 0x1406FFEF4 (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x140700080 (MiPfAllocateMdls.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfPrepareReadList(unsigned __int64 *a1, __int64 *a2, _QWORD *a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rax
  unsigned int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rbp
  _QWORD *Pool; // rax
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  _QWORD *SubsectionNode; // rsi
  _KPROCESS *Process; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r12
  __int64 *v17; // r15
  unsigned int v18; // r10d
  __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 *v22; // r9
  __int64 v23; // rbx
  __int64 v24; // rcx
  unsigned __int64 v25; // r9
  __int64 v26; // r11
  unsigned __int64 v27; // r8
  __int64 *v28; // r10
  __int64 *v29; // rax
  unsigned __int64 v30; // r9
  __int64 PteAddress; // rax
  __int64 v32; // rdx
  __int64 v33; // rbp
  ULONG_PTR *v34; // rcx
  __int64 *v35; // r10
  unsigned int v36; // r9d
  unsigned int v37; // r11d
  __int64 SlabPage; // rax
  _QWORD *v39; // r11
  __int64 v40; // r11
  _DWORD *v41; // rcx
  int v42; // ebp
  unsigned __int64 v43; // rax
  __int64 v44; // r9
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 *v48; // rax
  _DWORD *v50; // rcx
  _DWORD *v51; // rax
  _QWORD *v52; // rax
  int v53; // edx
  unsigned int v54; // edx
  unsigned int Mdls; // ebx
  __int64 SlabAllocator; // rax
  _QWORD *v57; // r11
  __int64 v58; // rax
  __int64 v59; // r11
  int v60; // eax
  __int64 v61; // [rsp+30h] [rbp-B8h]
  __int64 *v62; // [rsp+38h] [rbp-B0h]
  char *P; // [rsp+40h] [rbp-A8h]
  __int64 *v64; // [rsp+48h] [rbp-A0h]
  __int64 v65; // [rsp+50h] [rbp-98h]
  unsigned int v66; // [rsp+58h] [rbp-90h]
  _BYTE v67[12]; // [rsp+5Ch] [rbp-8Ch]
  _QWORD *v68; // [rsp+70h] [rbp-78h]
  unsigned __int64 v69; // [rsp+78h] [rbp-70h]
  __int64 ControlAreaPartition; // [rsp+80h] [rbp-68h]
  _OWORD v71[2]; // [rsp+88h] [rbp-60h] BYREF
  unsigned __int64 v72; // [rsp+F0h] [rbp+8h] BYREF
  __int64 *v73; // [rsp+F8h] [rbp+10h]
  _QWORD *v74; // [rsp+100h] [rbp+18h]
  unsigned int SessionId; // [rsp+108h] [rbp+20h]

  v74 = a3;
  v73 = a2;
  *a2 = 0LL;
  v71[0] = 0LL;
  v4 = *((_DWORD *)a1 + 4);
  v72 = 0LL;
  if ( (v4 & 0x180) != 0 )
    return 3221225711LL;
  v5 = *a1;
  v6 = *((_DWORD *)a1 + 2);
  v66 = v6;
  v7 = *(_QWORD *)(*a1 + 40) + 16LL;
  if ( !*((_DWORD *)a1 + 3) )
    v7 = *(_QWORD *)(v5 + 40);
  v8 = *(_QWORD *)v7;
  v65 = *(_QWORD *)v7;
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 56LL) & 0x400) != 0 || !*(_QWORD *)(v8 + 64) )
    return 3221225711LL;
  Pool = MiAllocatePool(64, 8LL * (v6 - 1) + 144, 0x6C526D4Du);
  P = (char *)Pool;
  v10 = Pool;
  if ( !Pool )
    return 3221225626LL;
  Pool[1] = v8;
  v11 = Pool + 15;
  SubsectionNode = (_QWORD *)(v8 + 128);
  v11[1] = v11;
  *v11 = v11;
  v10[4] = v10 + 3;
  v10[3] = v10 + 3;
  v68 = v10 + 3;
  Process = KeGetCurrentThread()->ApcState.Process;
  ControlAreaPartition = MiGetControlAreaPartition(v8);
  if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 )
  {
    SessionId = MmGetSessionIdEx((__int64)Process);
  }
  else
  {
    v14 = a1[2];
    if ( v14 > 0x3FFFFFFFFFF000LL || (SubsectionNode = MiOffsetToProtos(v8, v14, &v72)) == 0LL )
    {
      ExFreePoolWithTag(v10, 0);
      return 0LL;
    }
    SessionId = -1;
  }
  v15 = 0LL;
  v16 = 0LL;
  v69 = 0LL;
  v61 = 0LL;
  v64 = (__int64 *)(P + 136);
  v62 = 0LL;
  *(_DWORD *)&v67[8] = 0;
  v17 = 0LL;
  *((_DWORD *)P + 20) = v4 & 7;
  *(_QWORD *)v67 = v4 & 7;
  *((_DWORD *)P + 21) = (v4 & 0x40) != 0 ? 5 : 0;
  LODWORD(v72) = 0;
  *((_DWORD *)P + 22) = (v4 >> 3) & 7;
  MiInitializePageColorBase(
    (__int64)&Process[1].ActiveProcessorsPadding[6],
    (*(_DWORD *)(v8 + 56) >> 20) & 0x3F,
    (__int64)v71);
  v19 = 0LL;
  if ( !v66 )
    goto LABEL_61;
  while ( 1 )
  {
    v20 = a1[v19 + 2] & 0xFFFFFFFFFFFFFF80uLL;
    if ( v20 >= v16 || v15 > v20 )
      break;
    v21 = SubsectionNode[1];
    v22 = (__int64 *)(v21 + 8 * ((v20 - v15) >> 12));
    if ( (unsigned __int64)v22 >= v21 + 8 * (unsigned __int64)*((unsigned int *)SubsectionNode + 11) )
      goto LABEL_57;
    if ( (*((_BYTE *)SubsectionNode + 34) & 2) != 0 && (*(_DWORD *)(v8 + 56) & 0x4000000) != 0 )
      goto LABEL_20;
LABEL_16:
    if ( v22 == v17 )
      goto LABEL_20;
    v23 = *v22;
    v17 = v22;
    if ( (unsigned __int64)v22 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v22 <= 0xFFFFF6FB7DBED7F8uLL )
      LOWORD(v23) = MiReadPteShadow((unsigned __int64)v22, *v22);
    if ( (v23 & 1) != 0 )
    {
LABEL_19:
      MiUpdatePfnPriorityByPte((unsigned __int64)v22, v18);
      goto LABEL_20;
    }
    if ( (v23 & 0x400) != 0 )
    {
      if ( !MiControlAreaUsingExtents(v8) )
      {
        if ( MiControlAreaUsingCopyExtents(v24) )
          goto LABEL_20;
LABEL_29:
        v27 = v25;
        v28 = v64;
        v29 = v64;
        if ( v62 )
          v29 = v62;
        v62 = v29;
        *v64 = v25;
        if ( *(_QWORD **)&v67[4] != SubsectionNode
          || (MiGetPteAddress(v69), PteAddress = MiGetPteAddress(v30), v32 != PteAddress) )
        {
          v27 |= 2uLL;
          *(_QWORD *)&v67[4] = SubsectionNode;
          *v28 = v27;
        }
        v69 = v25;
        if ( v25 == v26 )
          *v28 = v27 | 1;
        v33 = (__int64)P;
        v64 = v28 + 1;
        if ( !MiPrefetchNormally(ControlAreaPartition, (unsigned int)(*((_DWORD *)P + 22) + 1)) )
          goto LABEL_58;
        if ( v74 )
        {
          if ( !*v74 )
            goto LABEL_58;
          --*v74;
        }
        if ( !(unsigned int)MiObtainFaultCharges(v34, 1u, 1) )
        {
          v60 = v72;
          v47 = v61;
          v35 = v64;
          if ( !v61 )
            v60 = -1073741670;
          LODWORD(v72) = v60;
          goto LABEL_59;
        }
        MiGetNextPageColor((__int64)v71);
        if ( (unsigned int)MiUseSlabAllocator(ControlAreaPartition, SubsectionNode, v23, 0LL) )
          SlabPage = MiGetSlabPage(
                       ControlAreaPartition,
                       (*((unsigned __int16 *)SubsectionNode + 16) >> 1) & 0x1F,
                       0,
                       (__int64 *)0xFFFFFFFFFFFFFFFFLL,
                       v36);
        else
          SlabPage = MiGetPage(ControlAreaPartition, v37, 512LL);
        if ( SlabPage == -1 )
        {
          MiReturnFaultCharges(ControlAreaPartition, 1uLL, 1LL);
          v48 = v62;
          if ( !v61 )
          {
            LODWORD(v19) = -1073741801;
            goto LABEL_61;
          }
LABEL_105:
          v35 = v64;
          goto LABEL_76;
        }
        if ( MiIsPfnFromSlabAllocation(48 * SlabPage - 0x58000000000LL) )
        {
          SlabAllocator = MiGetSlabAllocator(
                            ControlAreaPartition,
                            0,
                            (*((unsigned __int16 *)SubsectionNode + 16) >> 1) & 0x1F);
          MiSetPfnLink(v57, *(_QWORD *)&P[8 * *(int *)(SlabAllocator + 52) + 48]);
          *(_QWORD *)&P[8 * *(int *)(v58 + 52) + 48] = v59;
        }
        else
        {
          MiSetPfnLink(v39, *((_QWORD *)P + 5));
          *((_QWORD *)P + 5) = v40;
        }
        ++v61;
        goto LABEL_20;
      }
      LODWORD(v72) = MiRefillPurgedExtents(SubsectionNode);
      if ( (v72 & 0x80000000) == 0LL )
        goto LABEL_20;
      if ( v61 )
      {
        v33 = (__int64)P;
        v48 = v62;
        goto LABEL_105;
      }
      LODWORD(v19) = -1073741670;
LABEL_61:
      MiReleaseReadListResources((__int64)P);
      ExFreePoolWithTag(P, 0);
      return (unsigned int)v19;
    }
    if ( (v23 & 0x800) != 0 )
      goto LABEL_19;
    if ( IS_PTE_NOT_DEMAND_ZERO(v23) )
      goto LABEL_29;
LABEL_20:
    v19 = (unsigned int)(v19 + 1);
    if ( (unsigned int)v19 >= v66 )
      goto LABEL_57;
    v8 = v65;
    v18 = *(_DWORD *)v67;
  }
  v41 = (_DWORD *)v65;
  v42 = 0;
  while ( 1 )
  {
    if ( (v41[14] & 0x20) != 0
      && !*((_DWORD *)SubsectionNode + 9)
      && SubsectionNode[1] != *(_QWORD *)(*(_QWORD *)v41 + 64LL) )
    {
      SubsectionNode = (_QWORD *)SubsectionNode[2];
LABEL_71:
      v41 = (_DWORD *)v65;
      goto LABEL_56;
    }
    v15 = MiStartingOffsetNeedLock(SubsectionNode, SessionId);
    v43 = MiEndingOffsetWithLock(SubsectionNode);
    v16 = v43;
    if ( v15 > v20 )
      goto LABEL_20;
    if ( v20 < v43 )
      break;
    v41 = (_DWORD *)v65;
    if ( (*(_DWORD *)(v65 + 56) & 0x20) == 0 )
    {
      if ( v20 > 0x3FFFFFFFFFF000LL )
        goto LABEL_57;
      SubsectionNode = MiLocateSubsectionNode(v65, v20, 0);
      goto LABEL_71;
    }
    SubsectionNode = (_QWORD *)SubsectionNode[2];
LABEL_56:
    if ( !SubsectionNode )
      goto LABEL_57;
  }
  v45 = v65;
  if ( (*(_DWORD *)(v65 + 56) & 0x20) != 0 )
    goto LABEL_50;
  LODWORD(v72) = MiAddViewsForSection(SubsectionNode, *((unsigned int *)SubsectionNode + 11), (_DWORD *)4, v44);
  if ( (v72 & 0x80000000) != 0LL )
    goto LABEL_57;
  v50 = (_DWORD *)*((_QWORD *)P + 4);
  if ( (_QWORD *)*v68 != v68 )
  {
    v53 = v50[4];
    if ( v53 != 5 )
    {
LABEL_67:
      v45 = v65;
      *(_QWORD *)&v50[2 * v53 + 6] = SubsectionNode;
      ++v50[4];
      if ( !*((_QWORD *)P + 2) )
        *((_QWORD *)P + 2) = SubsectionNode;
LABEL_50:
      v46 = SubsectionNode[1];
      v22 = (__int64 *)(v46 + 8 * ((v20 - v15) >> 12));
      if ( (unsigned __int64)v22 >= v46 + 8 * (unsigned __int64)*((unsigned int *)SubsectionNode + 11) )
        goto LABEL_57;
      if ( (*((_BYTE *)SubsectionNode + 34) & 2) != 0 && (*(_DWORD *)(v45 + 56) & 0x4000000) != 0 )
        v42 = 1;
      if ( v42 == 1 )
        goto LABEL_20;
      v8 = v65;
      v18 = *(_DWORD *)v67;
      goto LABEL_16;
    }
  }
  v51 = MiAllocatePool(256, 0x40uLL, 0x6C536D4Du);
  v50 = v51;
  if ( v51 )
  {
    v51[4] = 0;
    v52 = (_QWORD *)v68[1];
    if ( (_QWORD *)*v52 != v68 )
      __fastfail(3u);
    *(_QWORD *)v50 = v68;
    *((_QWORD *)v50 + 1) = v52;
    *v52 = v50;
    v68[1] = v50;
    v53 = v50[4];
    goto LABEL_67;
  }
  MiRemoveViewsFromSectionWithPfn(SubsectionNode);
LABEL_57:
  v33 = (__int64)P;
  v35 = v64;
LABEL_58:
  v47 = v61;
LABEL_59:
  v48 = v62;
  if ( !v47 )
  {
    LODWORD(v19) = v72;
    goto LABEL_61;
  }
LABEL_76:
  v54 = SessionId;
  *(_QWORD *)(v33 + 96) = v48;
  *(_DWORD *)(v33 + 92) = ((__int64)v35 - v33 - 136) >> 3;
  Mdls = MiPfAllocateMdls(v33, v54, 0LL);
  if ( *(_QWORD *)(v33 + 120) == v33 + 120 )
  {
    MiReleaseReadListResources(v33);
    ExFreePoolWithTag((PVOID)v33, 0);
    v33 = 0LL;
  }
  else
  {
    Mdls = 0;
  }
  *v73 = v33;
  return Mdls;
}
