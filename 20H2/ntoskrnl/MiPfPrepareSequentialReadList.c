/*
 * XREFs of MiPfPrepareSequentialReadList @ 0x1406253C0
 * Callers:
 *     MmPrefetchForCacheManager @ 0x14065829C (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x14070F6A0 (MiPrefetchControlArea.c)
 * Callees:
 *     MiGetControlAreaPartition @ 0x14022C1C4 (MiGetControlAreaPartition.c)
 *     MiAddViewsForSection @ 0x14022C750 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x14022D05C (MiGetControlAreaPtes.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiSetPfnBlink @ 0x140230190 (MiSetPfnBlink.c)
 *     MiSetPfnLink @ 0x1402301EC (MiSetPfnLink.c)
 *     MiUseSlabAllocator @ 0x1402301F8 (MiUseSlabAllocator.c)
 *     MiControlAreaUsingCopyExtents @ 0x14023025C (MiControlAreaUsingCopyExtents.c)
 *     MiInitializePageColorBase @ 0x140231F50 (MiInitializePageColorBase.c)
 *     MiReadPteShadow @ 0x1402366E0 (MiReadPteShadow.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14024E10C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiGetPageChain @ 0x140274030 (MiGetPageChain.c)
 *     MiObtainFaultCharges @ 0x14027D270 (MiObtainFaultCharges.c)
 *     MiProtectionToCacheAttribute @ 0x14028E480 (MiProtectionToCacheAttribute.c)
 *     MiEndingOffsetWithLock @ 0x140297080 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x1402A1B60 (MiStartingOffset.c)
 *     MiOffsetToProtos @ 0x1402A42A0 (MiOffsetToProtos.c)
 *     MiUpdatePfnPriorityByPte @ 0x1402AF320 (MiUpdatePfnPriorityByPte.c)
 *     MiControlAreaUsingExtents @ 0x1402B5EA0 (MiControlAreaUsingExtents.c)
 *     MiGetAvailablePagesExcludeSlists @ 0x140326D1C (MiGetAvailablePagesExcludeSlists.c)
 *     MiReturnFaultCharges @ 0x140329604 (MiReturnFaultCharges.c)
 *     MiGetSlabPage @ 0x140332E88 (MiGetSlabPage.c)
 *     MiGetSlabAllocator @ 0x140333098 (MiGetSlabAllocator.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140349584 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiGetSharedProtos @ 0x1403A5948 (MiGetSharedProtos.c)
 *     MiRefillPurgedExtents @ 0x140540550 (MiRefillPurgedExtents.c)
 *     MiReleaseReadListResources @ 0x140658424 (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x1406585B0 (MiPfAllocateMdls.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfPrepareSequentialReadList(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        _QWORD *a8)
{
  bool v8; // zf
  __int64 v10; // r14
  unsigned __int64 ControlAreaPtes; // rcx
  unsigned __int64 v13; // r12
  _QWORD *Pool; // rax
  _QWORD *v15; // r15
  _QWORD *v16; // rax
  __int64 *v17; // rbx
  __int64 *v18; // r8
  __int64 *v19; // rsi
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rdi
  int v22; // edx
  unsigned int v23; // ebp
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 *v26; // rdx
  _QWORD *v27; // r10
  ULONG_PTR *v28; // r11
  unsigned __int64 *v29; // rcx
  _QWORD *v30; // rax
  __int64 *v31; // r9
  unsigned __int64 v32; // r8
  _QWORD *v33; // r14
  __int64 PteAddress; // rax
  __int64 v35; // rdx
  __int64 v36; // r11
  unsigned __int64 v37; // rbx
  int v38; // ecx
  unsigned __int64 v39; // r14
  _QWORD *v40; // rsi
  _QWORD *v41; // rcx
  _QWORD *v42; // rax
  unsigned __int64 v43; // rbx
  __int64 v44; // rax
  _QWORD *v45; // rbp
  __int64 v46; // r14
  unsigned int v47; // r12d
  unsigned int v48; // eax
  int v49; // r8d
  __int64 v50; // r11
  __int64 PageChain; // rax
  unsigned __int64 v52; // rbx
  _QWORD *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rcx
  __int64 v57; // rax
  unsigned int Mdls; // ebx
  unsigned __int64 *v60; // rax
  __int64 SharedProtos; // rax
  int v62; // eax
  __int64 SlabAllocator; // rax
  _QWORD *v64; // r11
  __int64 v65; // rax
  __int64 v66; // r11
  int v67; // eax
  int v68; // eax
  __int64 ControlAreaPartition; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v70; // [rsp+48h] [rbp-C0h]
  __int64 v71; // [rsp+50h] [rbp-B8h]
  _QWORD *v72; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v73; // [rsp+60h] [rbp-A8h] BYREF
  __int64 *v74; // [rsp+68h] [rbp-A0h]
  __int64 *v75; // [rsp+70h] [rbp-98h]
  unsigned __int64 *v76; // [rsp+78h] [rbp-90h]
  char *v77; // [rsp+80h] [rbp-88h]
  unsigned __int64 v78; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v79; // [rsp+90h] [rbp-78h]
  unsigned __int64 v80; // [rsp+98h] [rbp-70h]
  __int64 *v81; // [rsp+A0h] [rbp-68h]
  __int64 *v82; // [rsp+A8h] [rbp-60h]
  __int64 AvailablePagesExcludeSlists; // [rsp+B0h] [rbp-58h]
  unsigned __int64 *v84; // [rsp+B8h] [rbp-50h]
  __int128 v85; // [rsp+C0h] [rbp-48h] BYREF
  int v88; // [rsp+128h] [rbp+20h]

  v8 = (*(_DWORD *)(a2 + 56) & 0x400) == 0;
  v10 = a2;
  v85 = 0LL;
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
  v15 = Pool;
  if ( !Pool )
    return 3221225626LL;
  Pool[1] = v10;
  v16 = Pool + 15;
  v78 = 0LL;
  v71 = 0LL;
  v16[1] = v16;
  *v16 = v16;
  v15[4] = v15 + 3;
  v15[3] = v15 + 3;
  v74 = (__int64 *)(v10 + 128);
  LODWORD(v16) = (*(unsigned __int16 *)(v10 + 160) >> 1) & 0x1F;
  v70 = 0LL;
  v72 = 0LL;
  v82 = 0LL;
  v79 = (unsigned int)v16;
  if ( a5 )
  {
    v17 = (__int64 *)MiOffsetToProtos(v10, a3, &v78);
    v74 = v17;
  }
  else
  {
    v17 = (__int64 *)(v10 + 128);
  }
  ControlAreaPartition = MiGetControlAreaPartition(v10);
  AvailablePagesExcludeSlists = MiGetAvailablePagesExcludeSlists(ControlAreaPartition);
  v19 = v18;
  v81 = v18;
  v20 = (unsigned __int64)v18;
  v80 = (unsigned __int64)v18;
  if ( a1 )
  {
    v60 = *(unsigned __int64 **)(a1 + 32);
    v73 = __PAIR64__(HIDWORD(v18), *(_DWORD *)(a1 + 12) & 0x1FF | 0x200u);
    v21 = v73;
    v76 = v60;
  }
  else
  {
    v76 = (unsigned __int64 *)v18;
    v21 = (unsigned __int64)v18;
  }
  *((_DWORD *)v15 + 20) = a6;
  *((_DWORD *)v15 + 21) = 5;
  *((_DWORD *)v15 + 22) = 7;
  v22 = (*(_DWORD *)(v10 + 56) >> 20) & 0x3F;
  v77 = (char *)(v15 + 17);
  v84 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  MiInitializePageColorBase((__int64)v84, v22, (__int64)&v85);
  v88 = 0;
  v23 = 0;
  v75 = 0LL;
  if ( !(_DWORD)v13 )
  {
    v37 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    v47 = 0;
    goto LABEL_55;
  }
  while ( 1 )
  {
    if ( (unsigned __int64)v19 >= v20 )
    {
      if ( v19 )
      {
        v17 = (__int64 *)v17[2];
        v74 = v17;
        if ( !v17 )
        {
LABEL_53:
          v37 = v70;
          v45 = v72;
          v46 = v71;
          goto LABEL_54;
        }
        v78 = 0LL;
      }
      v38 = *(_DWORD *)(v10 + 56);
      if ( (v38 & 0x20) != 0 )
      {
        v39 = v17[1];
        if ( (*((_BYTE *)v17 + 34) & 2) != 0 && (v38 & 0x4000000) != 0 )
        {
          if ( !v17[3] )
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
          v39 = *(_QWORD *)(SharedProtos + 72);
        }
      }
      else
      {
        v88 = MiAddViewsForSection((__int64 **)v17, *((unsigned int *)v17 + 11), (_DWORD *)4);
        if ( v88 < 0 )
        {
          if ( v70 )
            MiReturnFaultCharges(ControlAreaPartition, v70, 1);
          MiReleaseReadListResources(v15);
          ExFreePoolWithTag(v15, 0);
          return (unsigned int)v88;
        }
        v39 = v17[1];
        v40 = v15 + 3;
        v41 = (_QWORD *)v15[4];
        if ( (_QWORD *)*v40 == v40 || *((_DWORD *)v41 + 4) == 5 )
        {
          v41 = MiAllocatePool(256, 0x40uLL, 0x6C536D4Du);
          if ( !v41 )
          {
            MiRemoveViewsFromSectionWithPfn(v17, *((unsigned int *)v17 + 11), 4u);
            MiReleaseReadListResources(v15);
            ExFreePoolWithTag(v15, 0);
            return 3221225626LL;
          }
          v42 = (_QWORD *)v15[4];
          if ( (_QWORD *)*v42 != v40 )
            __fastfail(3u);
          *v41 = v40;
          v41[1] = v42;
          *v42 = v41;
          v15[4] = v41;
        }
        if ( !v15[2] )
          v15[2] = v17;
        v41[(unsigned int)(*((_DWORD *)v41 + 4))++ + 3] = v17;
      }
      v19 = (__int64 *)(v39 + 8 * v78);
      v20 = v39 + 8LL * *((unsigned int *)v17 + 11);
      v43 = MiStartingOffset(v17, v39, a7);
      v44 = MiEndingOffsetWithLock(v74);
      if ( (((_WORD)v44 - (_WORD)v43) & 0xFFF) != 0 )
        v81 = (__int64 *)(v39 + 8 * (((v44 - v43 + 4095) >> 12) - 1));
      else
        v81 = 0LL;
      if ( v76 )
      {
        v73 = v43;
        v80 = v39;
        LODWORD(v73) = v43 & 0xFFFFFE00 | *(_DWORD *)(a1 + 12) & 0x1FF | 0x200;
        v21 = v73;
      }
      v10 = a2;
    }
    v24 = *v19;
    if ( (unsigned __int64)v19 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v19 <= 0xFFFFF6FB7DBED7F8uLL )
      LOWORD(v24) = MiReadPteShadow((unsigned __int64)v19, *v19);
    if ( (v24 & 1) != 0 )
    {
LABEL_37:
      MiUpdatePfnPriorityByPte((unsigned __int64)v19, a6);
      goto LABEL_31;
    }
    if ( (v24 & 0x400) != 0 )
      break;
    if ( (v24 & 0x800) != 0 )
      goto LABEL_37;
    if ( IS_PTE_NOT_DEMAND_ZERO(v24) )
      goto LABEL_20;
LABEL_31:
    ++v23;
    ++v19;
    if ( v23 >= (unsigned int)v13 )
      goto LABEL_53;
    v10 = a2;
    v17 = v74;
  }
  if ( MiControlAreaUsingExtents(v10) )
  {
    v62 = MiRefillPurgedExtents(v74);
    v88 = v62;
    if ( v62 < 0 )
    {
      v46 = v71;
      v37 = v70;
      v45 = v72;
      if ( v71 )
      {
        v47 = v62;
      }
      else
      {
        v47 = -1073741670;
        v88 = -1073741670;
      }
      goto LABEL_55;
    }
    goto LABEL_31;
  }
  if ( MiControlAreaUsingCopyExtents(v25) )
    goto LABEL_31;
  v29 = v76;
  if ( v76 )
  {
    v21 += (__int64)((__int64)v19 - v80) >> 3 << 12;
    v80 = (unsigned __int64)v19;
    *v76 = v21;
    v76 = v29 + 1;
  }
LABEL_20:
  v30 = v27;
  v31 = v74;
  *v27 = v19;
  v32 = (unsigned __int64)v19;
  if ( v72 )
    v30 = v72;
  v72 = v30;
  v33 = v30;
  if ( v26 != v31
    || (MiGetPteAddress((unsigned __int64)v82), PteAddress = MiGetPteAddress((unsigned __int64)v19), v35 != PteAddress) )
  {
    v32 |= 2uLL;
    v75 = v31;
    *v27 = v32;
  }
  v82 = v19;
  if ( v19 == v81 )
    *v27 = v32 | 1;
  v77 = (char *)(v27 + 1);
  if ( (unsigned int)MiObtainFaultCharges(v28, 1u, 1) )
  {
    if ( (unsigned int)MiUseSlabAllocator(ControlAreaPartition, v74, v24, 0LL) )
    {
      if ( MiGetSlabPage(
             v36,
             (*((unsigned __int16 *)v74 + 16) >> 1) & 0x1F,
             0,
             (__int64 *)0xFFFFFFFFFFFFFFFFLL,
             0x20000u) == -1 )
      {
        v37 = v70;
        v36 = ControlAreaPartition;
LABEL_103:
        MiReturnFaultCharges(v36, 1uLL, 1);
        v45 = v33;
        v46 = v71;
        if ( !v71 )
        {
          v47 = -1073741801;
          v88 = -1073741801;
          goto LABEL_55;
        }
LABEL_54:
        v47 = v88;
        goto LABEL_55;
      }
      SlabAllocator = MiGetSlabAllocator(ControlAreaPartition, 0, (*((unsigned __int16 *)v74 + 16) >> 1) & 0x1F);
      MiSetPfnLink(v64, v15[*(int *)(SlabAllocator + 52) + 6]);
      v15[*(int *)(v65 + 52) + 6] = v66;
    }
    else
    {
      v37 = v70;
      if ( v70 > AvailablePagesExcludeSlists + 160 )
        goto LABEL_103;
      ++v70;
    }
    ++v71;
    goto LABEL_31;
  }
  v67 = v88;
  v46 = v71;
  v45 = v72;
  v37 = v70;
  if ( !v71 )
    v67 = -1073741670;
  v88 = v67;
  v47 = v67;
LABEL_55:
  if ( a1 )
    *(_QWORD *)(a1 + 24) = v76;
  if ( !v46 )
    goto LABEL_71;
  if ( v37 )
  {
    v73 = v37;
    v48 = MiProtectionToCacheAttribute(v79);
    PageChain = MiGetPageChain(v50, (__int64)v84, v49, v48, 0, -1LL, &v73);
    v52 = v73;
    v53 = (_QWORD *)PageChain;
    if ( v73 != v70 )
    {
      MiReturnFaultCharges(ControlAreaPartition, v70 - v73, 1);
      v68 = v88;
      v46 += v52 - v70;
      if ( !v46 )
        v68 = -1073741801;
      v88 = v68;
      v47 = v68;
    }
    if ( v53 )
    {
      do
      {
        v54 = v53[3] & 0xFFFFFFFFFLL;
        if ( v54 == 0xFFFFFFFFFLL )
          v55 = 0LL;
        else
          v55 = 48 * v54 - 0x58000000000LL;
        MiSetPfnLink(v53, v15[5]);
        v15[5] = v53;
        MiSetPfnBlink(v56, 0LL, 0);
        v53 = (_QWORD *)v55;
      }
      while ( v55 );
      v47 = v88;
    }
  }
  if ( v46 )
  {
    v57 = v77 - (char *)v15 - 136;
    v15[12] = v45;
    *((_DWORD *)v15 + 23) = v57 >> 3;
    Mdls = MiPfAllocateMdls(v15, a7, 0LL);
    if ( (_QWORD *)v15[15] == v15 + 15 )
    {
      MiReleaseReadListResources(v15);
      ExFreePoolWithTag(v15, 0);
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
    ExFreePoolWithTag(v15, 0);
    return v47;
  }
}
