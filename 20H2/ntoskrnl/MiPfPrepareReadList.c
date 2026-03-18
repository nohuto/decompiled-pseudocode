/*
 * XREFs of MiPfPrepareReadList @ 0x140680D90
 * Callers:
 *     MmPrefetchPagesEx @ 0x1406580A8 (MmPrefetchPagesEx.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     MiGetControlAreaPartition @ 0x14022C1C4 (MiGetControlAreaPartition.c)
 *     MiAddViewsForSection @ 0x14022C750 (MiAddViewsForSection.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiLocateSubsectionNode @ 0x14022E700 (MiLocateSubsectionNode.c)
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiSetPfnLink @ 0x1402301EC (MiSetPfnLink.c)
 *     MiUseSlabAllocator @ 0x1402301F8 (MiUseSlabAllocator.c)
 *     MiControlAreaUsingCopyExtents @ 0x14023025C (MiControlAreaUsingCopyExtents.c)
 *     MiInitializePageColorBase @ 0x140231F50 (MiInitializePageColorBase.c)
 *     MiReadPteShadow @ 0x1402366E0 (MiReadPteShadow.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14024E10C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x14027D270 (MiObtainFaultCharges.c)
 *     MiEndingOffsetWithLock @ 0x140297080 (MiEndingOffsetWithLock.c)
 *     MiStartingOffsetNeedLock @ 0x1402A0754 (MiStartingOffsetNeedLock.c)
 *     MiOffsetToProtos @ 0x1402A42A0 (MiOffsetToProtos.c)
 *     MiUpdatePfnPriorityByPte @ 0x1402AF320 (MiUpdatePfnPriorityByPte.c)
 *     MiControlAreaUsingExtents @ 0x1402B5EA0 (MiControlAreaUsingExtents.c)
 *     MiReturnFaultCharges @ 0x140329604 (MiReturnFaultCharges.c)
 *     MiPrefetchNormally @ 0x1403328A4 (MiPrefetchNormally.c)
 *     MiGetSlabPage @ 0x140332E88 (MiGetSlabPage.c)
 *     MiGetSlabAllocator @ 0x140333098 (MiGetSlabAllocator.c)
 *     MiGetNextPageColor @ 0x140336AE8 (MiGetNextPageColor.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140349584 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiIsPfnFromSlabAllocation @ 0x14034D190 (MiIsPfnFromSlabAllocation.c)
 *     MiRefillPurgedExtents @ 0x140540550 (MiRefillPurgedExtents.c)
 *     MiReleaseReadListResources @ 0x140658424 (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x1406585B0 (MiPfAllocateMdls.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  __int64 SubsectionNode; // rsi
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
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 *v47; // rax
  _DWORD *v49; // rcx
  _DWORD *v50; // rax
  _QWORD *v51; // rax
  int v52; // edx
  unsigned int v53; // edx
  unsigned int Mdls; // ebx
  __int64 SlabAllocator; // rax
  _QWORD *v56; // r11
  __int64 v57; // rax
  __int64 v58; // r11
  int v59; // eax
  __int64 v60; // [rsp+30h] [rbp-B8h]
  __int64 *v61; // [rsp+38h] [rbp-B0h]
  char *P; // [rsp+40h] [rbp-A8h]
  __int64 *v63; // [rsp+48h] [rbp-A0h]
  __int64 v64; // [rsp+50h] [rbp-98h]
  unsigned int v65; // [rsp+58h] [rbp-90h]
  _BYTE v66[12]; // [rsp+5Ch] [rbp-8Ch]
  _QWORD *v67; // [rsp+70h] [rbp-78h]
  unsigned __int64 v68; // [rsp+78h] [rbp-70h]
  __int64 ControlAreaPartition; // [rsp+80h] [rbp-68h]
  _OWORD v70[2]; // [rsp+88h] [rbp-60h] BYREF
  unsigned __int64 v71; // [rsp+F0h] [rbp+8h] BYREF
  __int64 *v72; // [rsp+F8h] [rbp+10h]
  _QWORD *v73; // [rsp+100h] [rbp+18h]
  unsigned int SessionId; // [rsp+108h] [rbp+20h]

  v73 = a3;
  v72 = a2;
  *a2 = 0LL;
  v70[0] = 0LL;
  v4 = *((_DWORD *)a1 + 4);
  v71 = 0LL;
  if ( (v4 & 0x180) != 0 )
    return 3221225711LL;
  v5 = *a1;
  v6 = *((_DWORD *)a1 + 2);
  v65 = v6;
  v7 = *(_QWORD *)(*a1 + 40) + 16LL;
  if ( !*((_DWORD *)a1 + 3) )
    v7 = *(_QWORD *)(v5 + 40);
  v8 = *(_QWORD *)v7;
  v64 = *(_QWORD *)v7;
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 56LL) & 0x400) != 0 || !*(_QWORD *)(v8 + 64) )
    return 3221225711LL;
  Pool = MiAllocatePool(64, 8LL * (v6 - 1) + 144, 0x6C526D4Du);
  P = (char *)Pool;
  v10 = Pool;
  if ( !Pool )
    return 3221225626LL;
  Pool[1] = v8;
  v11 = Pool + 15;
  SubsectionNode = v8 + 128;
  v11[1] = v11;
  *v11 = v11;
  v10[4] = v10 + 3;
  v10[3] = v10 + 3;
  v67 = v10 + 3;
  Process = KeGetCurrentThread()->ApcState.Process;
  ControlAreaPartition = MiGetControlAreaPartition(v8);
  if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 )
  {
    SessionId = MmGetSessionIdEx((__int64)Process);
  }
  else
  {
    v14 = a1[2];
    if ( v14 > 0x3FFFFFFFFFF000LL || (SubsectionNode = MiOffsetToProtos(v8, v14, &v71)) == 0 )
    {
      ExFreePoolWithTag(v10, 0);
      return 0LL;
    }
    SessionId = -1;
  }
  v15 = 0LL;
  v16 = 0LL;
  v68 = 0LL;
  v60 = 0LL;
  v63 = (__int64 *)(P + 136);
  v61 = 0LL;
  *(_DWORD *)&v66[8] = 0;
  v17 = 0LL;
  *((_DWORD *)P + 20) = v4 & 7;
  *(_QWORD *)v66 = v4 & 7;
  *((_DWORD *)P + 21) = (v4 & 0x40) != 0 ? 5 : 0;
  LODWORD(v71) = 0;
  *((_DWORD *)P + 22) = (v4 >> 3) & 7;
  MiInitializePageColorBase(
    (__int64)&Process[1].ActiveProcessorsPadding[6],
    (*(_DWORD *)(v8 + 56) >> 20) & 0x3F,
    (__int64)v70);
  v19 = 0LL;
  if ( !v65 )
    goto LABEL_61;
  while ( 1 )
  {
    v20 = a1[v19 + 2] & 0xFFFFFFFFFFFFFF80uLL;
    if ( v20 >= v16 || v15 > v20 )
      break;
    v21 = *(_QWORD *)(SubsectionNode + 8);
    v22 = (__int64 *)(v21 + 8 * ((v20 - v15) >> 12));
    if ( (unsigned __int64)v22 >= v21 + 8 * (unsigned __int64)*(unsigned int *)(SubsectionNode + 44) )
      goto LABEL_57;
    if ( (*(_BYTE *)(SubsectionNode + 34) & 2) != 0 && (*(_DWORD *)(v8 + 56) & 0x4000000) != 0 )
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
        v28 = v63;
        v29 = v63;
        if ( v61 )
          v29 = v61;
        v61 = v29;
        *v63 = v25;
        if ( *(_QWORD *)&v66[4] != SubsectionNode
          || (MiGetPteAddress(v68), PteAddress = MiGetPteAddress(v30), v32 != PteAddress) )
        {
          v27 |= 2uLL;
          *(_QWORD *)&v66[4] = SubsectionNode;
          *v28 = v27;
        }
        v68 = v25;
        if ( v25 == v26 )
          *v28 = v27 | 1;
        v33 = (__int64)P;
        v63 = v28 + 1;
        if ( !MiPrefetchNormally(ControlAreaPartition, (unsigned int)(*((_DWORD *)P + 22) + 1)) )
          goto LABEL_58;
        if ( v73 )
        {
          if ( !*v73 )
            goto LABEL_58;
          --*v73;
        }
        if ( !(unsigned int)MiObtainFaultCharges(v34, 1u, 1) )
        {
          v59 = v71;
          v46 = v60;
          v35 = v63;
          if ( !v60 )
            v59 = -1073741670;
          LODWORD(v71) = v59;
          goto LABEL_59;
        }
        MiGetNextPageColor((__int64)v70);
        if ( (unsigned int)MiUseSlabAllocator(ControlAreaPartition, (_BYTE *)SubsectionNode, v23, 0LL) )
          SlabPage = MiGetSlabPage(
                       ControlAreaPartition,
                       (*(unsigned __int16 *)(SubsectionNode + 32) >> 1) & 0x1F,
                       0,
                       (__int64 *)0xFFFFFFFFFFFFFFFFLL,
                       v36);
        else
          SlabPage = MiGetPage(ControlAreaPartition, v37, 512LL);
        if ( SlabPage == -1 )
        {
          MiReturnFaultCharges(ControlAreaPartition, 1uLL, 1);
          v47 = v61;
          if ( !v60 )
          {
            LODWORD(v19) = -1073741801;
            goto LABEL_61;
          }
LABEL_105:
          v35 = v63;
          goto LABEL_76;
        }
        if ( MiIsPfnFromSlabAllocation(48 * SlabPage - 0x58000000000LL) )
        {
          SlabAllocator = MiGetSlabAllocator(
                            ControlAreaPartition,
                            0,
                            (*(unsigned __int16 *)(SubsectionNode + 32) >> 1) & 0x1F);
          MiSetPfnLink(v56, *(_QWORD *)&P[8 * *(int *)(SlabAllocator + 52) + 48]);
          *(_QWORD *)&P[8 * *(int *)(v57 + 52) + 48] = v58;
        }
        else
        {
          MiSetPfnLink(v39, *((_QWORD *)P + 5));
          *((_QWORD *)P + 5) = v40;
        }
        ++v60;
        goto LABEL_20;
      }
      LODWORD(v71) = MiRefillPurgedExtents((__int64 *)SubsectionNode);
      if ( (v71 & 0x80000000) == 0LL )
        goto LABEL_20;
      if ( v60 )
      {
        v33 = (__int64)P;
        v47 = v61;
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
    if ( (unsigned int)v19 >= v65 )
      goto LABEL_57;
    v8 = v64;
    v18 = *(_DWORD *)v66;
  }
  v41 = (_DWORD *)v64;
  v42 = 0;
  while ( 1 )
  {
    if ( (v41[14] & 0x20) != 0
      && !*(_DWORD *)(SubsectionNode + 36)
      && *(_QWORD *)(SubsectionNode + 8) != *(_QWORD *)(*(_QWORD *)v41 + 64LL) )
    {
      SubsectionNode = *(_QWORD *)(SubsectionNode + 16);
LABEL_71:
      v41 = (_DWORD *)v64;
      goto LABEL_56;
    }
    v15 = MiStartingOffsetNeedLock((_QWORD *)SubsectionNode, SessionId);
    v43 = MiEndingOffsetWithLock((__int64 *)SubsectionNode);
    v16 = v43;
    if ( v15 > v20 )
      goto LABEL_20;
    if ( v20 < v43 )
      break;
    v41 = (_DWORD *)v64;
    if ( (*(_DWORD *)(v64 + 56) & 0x20) == 0 )
    {
      if ( v20 > 0x3FFFFFFFFFF000LL )
        goto LABEL_57;
      SubsectionNode = (__int64)MiLocateSubsectionNode(v64, v20, 0);
      goto LABEL_71;
    }
    SubsectionNode = *(_QWORD *)(SubsectionNode + 16);
LABEL_56:
    if ( !SubsectionNode )
      goto LABEL_57;
  }
  v44 = v64;
  if ( (*(_DWORD *)(v64 + 56) & 0x20) != 0 )
    goto LABEL_50;
  LODWORD(v71) = MiAddViewsForSection((__int64 **)SubsectionNode, *(unsigned int *)(SubsectionNode + 44), (_DWORD *)4);
  if ( (v71 & 0x80000000) != 0LL )
    goto LABEL_57;
  v49 = (_DWORD *)*((_QWORD *)P + 4);
  if ( (_QWORD *)*v67 != v67 )
  {
    v52 = v49[4];
    if ( v52 != 5 )
    {
LABEL_67:
      v44 = v64;
      *(_QWORD *)&v49[2 * v52 + 6] = SubsectionNode;
      ++v49[4];
      if ( !*((_QWORD *)P + 2) )
        *((_QWORD *)P + 2) = SubsectionNode;
LABEL_50:
      v45 = *(_QWORD *)(SubsectionNode + 8);
      v22 = (__int64 *)(v45 + 8 * ((v20 - v15) >> 12));
      if ( (unsigned __int64)v22 >= v45 + 8 * (unsigned __int64)*(unsigned int *)(SubsectionNode + 44) )
        goto LABEL_57;
      if ( (*(_BYTE *)(SubsectionNode + 34) & 2) != 0 && (*(_DWORD *)(v44 + 56) & 0x4000000) != 0 )
        v42 = 1;
      if ( v42 == 1 )
        goto LABEL_20;
      v8 = v64;
      v18 = *(_DWORD *)v66;
      goto LABEL_16;
    }
  }
  v50 = MiAllocatePool(256, 0x40uLL, 0x6C536D4Du);
  v49 = v50;
  if ( v50 )
  {
    v50[4] = 0;
    v51 = (_QWORD *)v67[1];
    if ( (_QWORD *)*v51 != v67 )
      __fastfail(3u);
    *(_QWORD *)v49 = v67;
    *((_QWORD *)v49 + 1) = v51;
    *v51 = v49;
    v67[1] = v49;
    v52 = v49[4];
    goto LABEL_67;
  }
  MiRemoveViewsFromSectionWithPfn((__int64 *)SubsectionNode, *(unsigned int *)(SubsectionNode + 44), 4u);
LABEL_57:
  v33 = (__int64)P;
  v35 = v63;
LABEL_58:
  v46 = v60;
LABEL_59:
  v47 = v61;
  if ( !v46 )
  {
    LODWORD(v19) = v71;
    goto LABEL_61;
  }
LABEL_76:
  v53 = SessionId;
  *(_QWORD *)(v33 + 96) = v47;
  *(_DWORD *)(v33 + 92) = ((__int64)v35 - v33 - 136) >> 3;
  Mdls = MiPfAllocateMdls(v33, v53, 0LL);
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
  *v72 = v33;
  return Mdls;
}
