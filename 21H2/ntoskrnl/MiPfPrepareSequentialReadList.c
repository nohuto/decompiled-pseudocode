/*
 * XREFs of MiPfPrepareSequentialReadList @ 0x1407051B0
 * Callers:
 *     MiPrefetchControlArea @ 0x1406C3FE8 (MiPrefetchControlArea.c)
 *     MmPrefetchForCacheManager @ 0x1406FFD6C (MmPrefetchForCacheManager.c)
 * Callees:
 *     MiReturnFaultCharges @ 0x14020B384 (MiReturnFaultCharges.c)
 *     MiGetAvailablePagesExcludeSlists @ 0x1402463F0 (MiGetAvailablePagesExcludeSlists.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiGetControlAreaPartition @ 0x14027C914 (MiGetControlAreaPartition.c)
 *     MiGetSlabPage @ 0x14029938C (MiGetSlabPage.c)
 *     MiGetSlabAllocator @ 0x14029959C (MiGetSlabAllocator.c)
 *     MiGetPageChain @ 0x1402B7610 (MiGetPageChain.c)
 *     MiObtainFaultCharges @ 0x1402C0390 (MiObtainFaultCharges.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402E08FC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiProtectionToCacheAttribute @ 0x1402E6690 (MiProtectionToCacheAttribute.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14030772C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiReadPteShadow @ 0x140310780 (MiReadPteShadow.c)
 *     MiAddViewsForSection @ 0x140320340 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x140320C4C (MiGetControlAreaPtes.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MiSetPfnBlink @ 0x140322E80 (MiSetPfnBlink.c)
 *     MiSetPfnLink @ 0x140322EDC (MiSetPfnLink.c)
 *     MiUseSlabAllocator @ 0x140322EE8 (MiUseSlabAllocator.c)
 *     MiControlAreaUsingCopyExtents @ 0x140322F4C (MiControlAreaUsingCopyExtents.c)
 *     MiEndingOffsetWithLock @ 0x1403274E0 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x140329160 (MiStartingOffset.c)
 *     MiOffsetToProtos @ 0x14032B8A0 (MiOffsetToProtos.c)
 *     MiUpdatePfnPriorityByPte @ 0x140336C60 (MiUpdatePfnPriorityByPte.c)
 *     MiControlAreaUsingExtents @ 0x14033D9A0 (MiControlAreaUsingExtents.c)
 *     MiGetSharedProtos @ 0x1403A6358 (MiGetSharedProtos.c)
 *     MiRefillPurgedExtents @ 0x140542290 (MiRefillPurgedExtents.c)
 *     MiReleaseReadListResources @ 0x1406FFEF4 (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x140700080 (MiPfAllocateMdls.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfPrepareSequentialReadList(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        __int64 *a8)
{
  bool v8; // zf
  __int64 v10; // r14
  unsigned __int64 ControlAreaPtes; // rcx
  unsigned __int64 v13; // r12
  _QWORD *Pool; // rax
  __int64 v15; // r15
  _QWORD *v16; // rax
  unsigned int *v17; // rbx
  __int64 *v18; // r8
  __int64 *v19; // rsi
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rdi
  int v22; // edx
  __int64 v23; // r9
  unsigned int v24; // ebp
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 *v27; // rdx
  _QWORD *v28; // r10
  ULONG_PTR *v29; // r11
  unsigned __int64 *v30; // rcx
  _QWORD *v31; // rax
  __int64 *v32; // r9
  unsigned __int64 v33; // r8
  _QWORD *v34; // r14
  __int64 PteAddress; // rax
  __int64 v36; // rdx
  __int64 v37; // r11
  unsigned __int64 v38; // rbx
  int v39; // ecx
  unsigned __int64 v40; // r14
  _QWORD *v41; // rsi
  _QWORD *v42; // rcx
  _QWORD *v43; // rax
  unsigned __int64 v44; // rbx
  __int64 v45; // rax
  _QWORD *v46; // rbp
  __int64 v47; // r14
  unsigned int v48; // r12d
  unsigned int v49; // eax
  int v50; // r8d
  __int64 v51; // r11
  __int64 PageChain; // rax
  unsigned __int64 v53; // rbx
  _QWORD *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rcx
  __int64 v58; // rax
  unsigned int Mdls; // ebx
  unsigned __int64 *v61; // rax
  __int64 SharedProtos; // rax
  int v63; // eax
  __int64 SlabAllocator; // rax
  _QWORD *v65; // r11
  __int64 v66; // rax
  __int64 v67; // r11
  int v68; // eax
  int v69; // eax
  __int64 ControlAreaPartition; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v71; // [rsp+48h] [rbp-C0h]
  __int64 v72; // [rsp+50h] [rbp-B8h]
  _QWORD *v73; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v74; // [rsp+60h] [rbp-A8h] BYREF
  __int64 *v75; // [rsp+68h] [rbp-A0h]
  __int64 *v76; // [rsp+70h] [rbp-98h]
  unsigned __int64 *v77; // [rsp+78h] [rbp-90h]
  _QWORD *v78; // [rsp+80h] [rbp-88h]
  unsigned __int64 v79; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v80; // [rsp+90h] [rbp-78h]
  unsigned __int64 v81; // [rsp+98h] [rbp-70h]
  __int64 *v82; // [rsp+A0h] [rbp-68h]
  __int64 *v83; // [rsp+A8h] [rbp-60h]
  __int64 AvailablePagesExcludeSlists; // [rsp+B0h] [rbp-58h]
  unsigned __int64 *v85; // [rsp+B8h] [rbp-50h]
  __int128 v86; // [rsp+C0h] [rbp-48h] BYREF
  int v89; // [rsp+128h] [rbp+20h]

  v8 = (*(_DWORD *)(a2 + 56) & 0x400) == 0;
  v10 = a2;
  v86 = 0LL;
  *a8 = 0LL;
  if ( !v8 || !*(_QWORD *)(a2 + 64) )
    return 3221225711LL;
  ControlAreaPtes = MiGetControlAreaPtes(a2);
  if ( a5 )
  {
    v13 = a5 >> 12;
    if ( a5 >> 12 < 0x100000000LL && (unsigned int)v13 <= ControlAreaPtes )
      goto LABEL_6;
    return 3221225713LL;
  }
  if ( ControlAreaPtes >= 0x100000000LL )
    return 3221225713LL;
  LODWORD(v13) = ControlAreaPtes;
LABEL_6:
  Pool = MiAllocatePool(64, 8LL * (unsigned int)(v13 - 1) + 144, 0x6C526D4Du);
  v15 = (__int64)Pool;
  if ( !Pool )
    return 3221225626LL;
  Pool[1] = v10;
  v16 = Pool + 15;
  v79 = 0LL;
  v72 = 0LL;
  v16[1] = v16;
  *v16 = v16;
  *(_QWORD *)(v15 + 32) = v15 + 24;
  *(_QWORD *)(v15 + 24) = v15 + 24;
  v75 = (__int64 *)(v10 + 128);
  LODWORD(v16) = (*(unsigned __int16 *)(v10 + 160) >> 1) & 0x1F;
  v71 = 0LL;
  v73 = 0LL;
  v83 = 0LL;
  v80 = (unsigned int)v16;
  if ( a5 )
  {
    v17 = MiOffsetToProtos(v10, a3, &v79);
    v75 = (__int64 *)v17;
  }
  else
  {
    v17 = (unsigned int *)(v10 + 128);
  }
  ControlAreaPartition = MiGetControlAreaPartition(v10);
  AvailablePagesExcludeSlists = MiGetAvailablePagesExcludeSlists(ControlAreaPartition);
  v19 = v18;
  v82 = v18;
  v20 = (unsigned __int64)v18;
  v81 = (unsigned __int64)v18;
  if ( a1 )
  {
    v61 = *(unsigned __int64 **)(a1 + 32);
    v74 = __PAIR64__(HIDWORD(v18), *(_DWORD *)(a1 + 12) & 0x1FF | 0x200u);
    v21 = v74;
    v77 = v61;
  }
  else
  {
    v77 = (unsigned __int64 *)v18;
    v21 = (unsigned __int64)v18;
  }
  *(_DWORD *)(v15 + 80) = a6;
  *(_DWORD *)(v15 + 84) = 5;
  *(_DWORD *)(v15 + 88) = 7;
  v22 = (*(_DWORD *)(v10 + 56) >> 20) & 0x3F;
  v78 = (_QWORD *)(v15 + 136);
  v85 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  MiInitializePageColorBase((__int64)v85, v22, (__int64)&v86);
  v89 = 0;
  v24 = 0;
  v76 = 0LL;
  if ( !(_DWORD)v13 )
  {
    v38 = 0LL;
    v46 = 0LL;
    v47 = 0LL;
    v48 = 0;
    goto LABEL_55;
  }
  while ( 1 )
  {
    if ( (unsigned __int64)v19 >= v20 )
    {
      if ( v19 )
      {
        v17 = (unsigned int *)*((_QWORD *)v17 + 2);
        v75 = (__int64 *)v17;
        if ( !v17 )
        {
LABEL_53:
          v38 = v71;
          v46 = v73;
          v47 = v72;
          goto LABEL_54;
        }
        v79 = 0LL;
      }
      v39 = *(_DWORD *)(v10 + 56);
      if ( (v39 & 0x20) != 0 )
      {
        v40 = *((_QWORD *)v17 + 1);
        if ( (*((_BYTE *)v17 + 34) & 2) != 0 && (v39 & 0x4000000) != 0 )
        {
          if ( !*((_QWORD *)v17 + 3) )
          {
            v19 = (__int64 *)(v20 - 8);
            goto LABEL_31;
          }
          SharedProtos = MiGetSharedProtos(a2, a7, (__int64)v17);
          if ( !SharedProtos )
          {
            v19 = (__int64 *)(v20 - 8);
            goto LABEL_31;
          }
          v40 = *(_QWORD *)(SharedProtos + 72);
        }
      }
      else
      {
        v89 = MiAddViewsForSection((__int64 *)v17, v17[11], (_DWORD *)4, v23);
        if ( v89 < 0 )
        {
          if ( v71 )
            MiReturnFaultCharges(ControlAreaPartition, v71, 1LL);
          MiReleaseReadListResources(v15);
          ExFreePoolWithTag((PVOID)v15, 0);
          return (unsigned int)v89;
        }
        v40 = *((_QWORD *)v17 + 1);
        v41 = (_QWORD *)(v15 + 24);
        v42 = *(_QWORD **)(v15 + 32);
        if ( (_QWORD *)*v41 == v41 || *((_DWORD *)v42 + 4) == 5 )
        {
          v42 = MiAllocatePool(256, 0x40uLL, 0x6C536D4Du);
          if ( !v42 )
          {
            MiRemoveViewsFromSectionWithPfn((__int64 *)v17);
            MiReleaseReadListResources(v15);
            ExFreePoolWithTag((PVOID)v15, 0);
            return 3221225626LL;
          }
          v43 = *(_QWORD **)(v15 + 32);
          if ( (_QWORD *)*v43 != v41 )
            __fastfail(3u);
          *v42 = v41;
          v42[1] = v43;
          *v43 = v42;
          *(_QWORD *)(v15 + 32) = v42;
        }
        if ( !*(_QWORD *)(v15 + 16) )
          *(_QWORD *)(v15 + 16) = v17;
        v42[(unsigned int)(*((_DWORD *)v42 + 4))++ + 3] = v17;
      }
      v19 = (__int64 *)(v40 + 8 * v79);
      v20 = v40 + 8LL * v17[11];
      v44 = MiStartingOffset((__int64 *)v17, v40, a7);
      v45 = MiEndingOffsetWithLock(v75);
      if ( (((_WORD)v45 - (_WORD)v44) & 0xFFF) != 0 )
        v82 = (__int64 *)(v40 + 8 * (((v45 - v44 + 4095) >> 12) - 1));
      else
        v82 = 0LL;
      if ( v77 )
      {
        v74 = v44;
        v81 = v40;
        LODWORD(v74) = v44 & 0xFFFFFE00 | *(_DWORD *)(a1 + 12) & 0x1FF | 0x200;
        v21 = v74;
      }
      v10 = a2;
    }
    v25 = *v19;
    if ( (unsigned __int64)v19 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v19 <= 0xFFFFF6FB7DBED7F8uLL )
      LOWORD(v25) = MiReadPteShadow((unsigned __int64)v19, *v19);
    if ( (v25 & 1) != 0 )
    {
LABEL_37:
      MiUpdatePfnPriorityByPte((unsigned __int64)v19, a6);
      goto LABEL_31;
    }
    if ( (v25 & 0x400) != 0 )
      break;
    if ( (v25 & 0x800) != 0 )
      goto LABEL_37;
    if ( IS_PTE_NOT_DEMAND_ZERO(v25) )
      goto LABEL_20;
LABEL_31:
    ++v24;
    ++v19;
    if ( v24 >= (unsigned int)v13 )
      goto LABEL_53;
    v10 = a2;
    v17 = (unsigned int *)v75;
  }
  if ( MiControlAreaUsingExtents(v10) )
  {
    v63 = MiRefillPurgedExtents(v75);
    v89 = v63;
    if ( v63 < 0 )
    {
      v47 = v72;
      v38 = v71;
      v46 = v73;
      if ( v72 )
      {
        v48 = v63;
      }
      else
      {
        v48 = -1073741670;
        v89 = -1073741670;
      }
      goto LABEL_55;
    }
    goto LABEL_31;
  }
  if ( MiControlAreaUsingCopyExtents(v26) )
    goto LABEL_31;
  v30 = v77;
  if ( v77 )
  {
    v21 += (__int64)((__int64)v19 - v81) >> 3 << 12;
    v81 = (unsigned __int64)v19;
    *v77 = v21;
    v77 = v30 + 1;
  }
LABEL_20:
  v31 = v28;
  v32 = v75;
  *v28 = v19;
  v33 = (unsigned __int64)v19;
  if ( v73 )
    v31 = v73;
  v73 = v31;
  v34 = v31;
  if ( v27 != v32
    || (MiGetPteAddress((unsigned __int64)v83), PteAddress = MiGetPteAddress((unsigned __int64)v19), v36 != PteAddress) )
  {
    v33 |= 2uLL;
    v76 = v32;
    *v28 = v33;
  }
  v83 = v19;
  if ( v19 == v82 )
    *v28 = v33 | 1;
  v78 = v28 + 1;
  if ( (unsigned int)MiObtainFaultCharges(v29, 1u, 1) )
  {
    if ( (unsigned int)MiUseSlabAllocator(ControlAreaPartition, v75, v25, 0LL) )
    {
      if ( MiGetSlabPage(
             v37,
             (*((unsigned __int16 *)v75 + 16) >> 1) & 0x1F,
             0,
             (__int64 *)0xFFFFFFFFFFFFFFFFLL,
             0x20000u) == -1 )
      {
        v38 = v71;
        v37 = ControlAreaPartition;
LABEL_103:
        MiReturnFaultCharges(v37, 1uLL, 1LL);
        v46 = v34;
        v47 = v72;
        if ( !v72 )
        {
          v48 = -1073741801;
          v89 = -1073741801;
          goto LABEL_55;
        }
LABEL_54:
        v48 = v89;
        goto LABEL_55;
      }
      SlabAllocator = MiGetSlabAllocator(ControlAreaPartition, 0, (*((unsigned __int16 *)v75 + 16) >> 1) & 0x1F);
      MiSetPfnLink(v65, *(_QWORD *)(v15 + 8LL * *(int *)(SlabAllocator + 52) + 48));
      *(_QWORD *)(v15 + 8LL * *(int *)(v66 + 52) + 48) = v67;
    }
    else
    {
      v38 = v71;
      if ( v71 > AvailablePagesExcludeSlists + 160 )
        goto LABEL_103;
      ++v71;
    }
    ++v72;
    goto LABEL_31;
  }
  v68 = v89;
  v47 = v72;
  v46 = v73;
  v38 = v71;
  if ( !v72 )
    v68 = -1073741670;
  v89 = v68;
  v48 = v68;
LABEL_55:
  if ( a1 )
    *(_QWORD *)(a1 + 24) = v77;
  if ( !v47 )
    goto LABEL_71;
  if ( v38 )
  {
    v74 = v38;
    v49 = MiProtectionToCacheAttribute(v80);
    PageChain = MiGetPageChain(v51, (__int64)v85, v50, v49, 0, -1LL, &v74);
    v53 = v74;
    v54 = (_QWORD *)PageChain;
    if ( v74 != v71 )
    {
      MiReturnFaultCharges(ControlAreaPartition, v71 - v74, 1LL);
      v69 = v89;
      v47 += v53 - v71;
      if ( !v47 )
        v69 = -1073741801;
      v89 = v69;
      v48 = v69;
    }
    if ( v54 )
    {
      do
      {
        v55 = v54[3] & 0xFFFFFFFFFLL;
        if ( v55 == 0xFFFFFFFFFLL )
          v56 = 0LL;
        else
          v56 = 48 * v55 - 0x58000000000LL;
        MiSetPfnLink(v54, *(_QWORD *)(v15 + 40));
        *(_QWORD *)(v15 + 40) = v54;
        MiSetPfnBlink(v57, 0LL, 0);
        v54 = (_QWORD *)v56;
      }
      while ( v56 );
      v48 = v89;
    }
  }
  if ( v47 )
  {
    v58 = (__int64)v78 - v15 - 136;
    *(_QWORD *)(v15 + 96) = v46;
    *(_DWORD *)(v15 + 92) = v58 >> 3;
    Mdls = MiPfAllocateMdls(v15, a7, 0LL);
    if ( *(_QWORD *)(v15 + 120) == v15 + 120 )
    {
      MiReleaseReadListResources(v15);
      ExFreePoolWithTag((PVOID)v15, 0);
      v15 = 0LL;
    }
    else
    {
      Mdls = 0;
    }
    *a8 = v15;
    return Mdls;
  }
  else
  {
LABEL_71:
    MiReleaseReadListResources(v15);
    ExFreePoolWithTag((PVOID)v15, 0);
    return v48;
  }
}
