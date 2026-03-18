/*
 * XREFs of MmMapViewInSystemCache @ 0x1402BCE70
 * Callers:
 *     CcGetVacbMiss @ 0x1402BE330 (CcGetVacbMiss.c)
 * Callees:
 *     MiOffsetToProtos @ 0x14022EFF0 (MiOffsetToProtos.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiSectionControlArea @ 0x140248900 (MiSectionControlArea.c)
 *     MiAddViewsForSection @ 0x140248C90 (MiAddViewsForSection.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiObtainSystemCacheView @ 0x1402B94B0 (MiObtainSystemCacheView.c)
 *     MiGetPteLink @ 0x1402B9B90 (MiGetPteLink.c)
 *     MiManageSubsectionView @ 0x1402BD190 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x1402BE040 (MiGetSystemCacheReverseMap.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCompareTbFlushTimeStamp @ 0x14033CBB4 (MiCompareTbFlushTimeStamp.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiRemoveSystemCacheReferences @ 0x140531F80 (MiRemoveSystemCacheReferences.c)
 */

__int64 __fastcall MmMapViewInSystemCache(__int64 a1, __int64 *a2, unsigned __int64 *a3, _DWORD *a4)
{
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  BOOL v10; // edx
  int v11; // ecx
  __int64 v12; // r15
  __int64 **v13; // rbp
  __int64 v14; // r9
  __int64 result; // rax
  __int64 v16; // rcx
  _WORD *v17; // r13
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 *v40; // rcx
  unsigned __int64 v41; // rsi
  __int64 v42; // rax
  unsigned __int64 v43; // rbp
  __int64 *v44; // r14
  _QWORD *SystemCacheReverseMap; // r9
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned __int64 v49; // r15
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  unsigned __int64 PteLink; // rax
  _KPROCESS *v57; // rdx
  signed __int32 v58[8]; // [rsp+0h] [rbp-178h] BYREF
  unsigned __int64 v59; // [rsp+30h] [rbp-148h] BYREF
  _QWORD *v60; // [rsp+38h] [rbp-140h]
  __int64 *v61; // [rsp+40h] [rbp-138h]
  unsigned __int64 *v62; // [rsp+48h] [rbp-130h]
  __int64 **v63; // [rsp+50h] [rbp-128h]
  _QWORD v64[24]; // [rsp+60h] [rbp-118h] BYREF

  v62 = a3;
  v61 = a2;
  v59 = 0LL;
  memset(v64, 0, 0xB8uLL);
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    return 3221225608LL;
  v8 = MiSectionControlArea(a1);
  v9 = v8;
  v10 = (*a4 & 0xFFF) != 0;
  v11 = *a4 >> 12;
  v12 = (unsigned int)(v10 + v11);
  if ( !(v10 + v11) )
    KeBugCheckEx(0x1Au, 0x103087uLL, v8, 0LL, 0LL);
  v63 = (__int64 **)MiOffsetToProtos(v8, *a3, &v59);
  v13 = v63;
  result = MiAddViewsForSection(v63, v12 + v59, (_DWORD *)5, v14);
  if ( (int)result < 0 )
  {
    ++dword_140C4F620;
    return result;
  }
  v16 = *(_WORD *)(v9 + 60) & 0x3FF;
  v17 = *(_WORD **)(qword_140C4E448 + 8 * v16);
  if ( *a2 )
  {
    v19 = (((unsigned __int64)*a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( MiGetPteLink(*(_QWORD *)(v19 + 24)) == 2 )
    {
      PteLink = MiGetPteLink(*(_QWORD *)(v19 + 16));
      if ( (unsigned __int8)MiCompareTbFlushTimeStamp(PteLink, 0xFFFFFLL) )
      {
        LODWORD(v64[1]) = 20;
        v64[3] = 0LL;
        MiInsertTbFlushEntry((__int64)v64, (__int64)(v19 << 25) >> 16, 64LL, 0);
        MiFlushTbList((__int64)v64, v57);
      }
    }
  }
  else
  {
    v18 = MiObtainSystemCacheView(*(_QWORD *)(qword_140C4E448 + 8 * v16));
    v19 = v18;
    if ( !v18 )
    {
      ++dword_140C4F620;
      MiRemoveSystemCacheReferences((ULONG_PTR)v13);
      return 3221225495LL;
    }
    *a2 = (__int64)(v18 << 25) >> 16;
  }
  v20 = ZeroPte;
  if ( !MiPteInShadowRange(v19) )
    goto LABEL_8;
  if ( !(unsigned int)MiPteHasShadow(v22, v21, v23, v24) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v20 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_8:
    *(_QWORD *)v19 = v20;
    goto LABEL_9;
  }
  if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
    v20 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)v19 = v20;
  MiWritePteShadow(v19, v20);
LABEL_9:
  v25 = ZeroPte;
  if ( !MiPteInShadowRange(v19 + 8) )
  {
LABEL_10:
    *(_QWORD *)(v19 + 8) = v25;
    goto LABEL_11;
  }
  if ( !(unsigned int)MiPteHasShadow(v27, v26, v28, v29) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v25 = ZeroPte | 0x8000000000000000uLL;
    }
    goto LABEL_10;
  }
  if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
    v25 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)(v19 + 8) = v25;
  MiWritePteShadow(v19 + 8, v25);
LABEL_11:
  v30 = ZeroPte;
  if ( !MiPteInShadowRange(v19 + 16) )
  {
LABEL_12:
    *(_QWORD *)(v19 + 16) = v30;
    goto LABEL_13;
  }
  if ( !(unsigned int)MiPteHasShadow(v32, v31, v33, v34) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v30 = ZeroPte | 0x8000000000000000uLL;
    }
    goto LABEL_12;
  }
  if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
    v30 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)(v19 + 16) = v30;
  MiWritePteShadow(v19 + 16, v30);
LABEL_13:
  v35 = ZeroPte;
  if ( MiPteInShadowRange(v19 + 24) )
  {
    if ( (unsigned int)MiPteHasShadow(v37, v36, v38, v39) )
    {
      if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
        v35 = ZeroPte | 0x8000000000000000uLL;
      *(_QWORD *)(v19 + 24) = v35;
      MiWritePteShadow(v19 + 24, v35);
      goto LABEL_15;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v35 = ZeroPte | 0x8000000000000000uLL;
    }
  }
  *(_QWORD *)(v19 + 24) = v35;
LABEL_15:
  v40 = v13[1];
  v41 = (unsigned __int64)&v40[v59];
  v42 = *((unsigned int *)v13 + 11);
  v43 = v19 + 8 * v12;
  v44 = &v40[v42];
  SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(*v61);
  v46 = (unsigned __int64)(*v17 & 0x3FF) << 6;
  v60 = SystemCacheReverseMap;
  v47 = *v62;
  SystemCacheReverseMap[2] &= 0xFFFFFFFFFFFFFFFCuLL;
  v48 = v12 & 0x3F | (v47 >> 2) & 0x3FFFFFFFFFFF0000LL | v46;
  v49 = (unsigned __int64)v63;
  SystemCacheReverseMap[3] = v63;
  SystemCacheReverseMap[4] = v48;
  if ( !*(_QWORD *)(v9 + 64) )
    SystemCacheReverseMap[3] = v49 | 1;
  for ( ; v19 < v43; v41 += 8LL )
  {
    if ( v41 >= (unsigned __int64)v44 )
    {
      v49 = *(_QWORD *)(v49 + 16);
      v41 = *(_QWORD *)(v49 + 8);
      v55 = *(unsigned int *)(v49 + 44);
      SystemCacheReverseMap[3] |= 1uLL;
      v44 = (__int64 *)(v41 + 8 * v55);
    }
    v50 = (v41 << 16) | 0x400;
    if ( qword_140C4DD40 )
    {
      if ( (qword_140C4DD40 & v50) != 0 )
        v50 = (v41 << 16) | 0x410;
      else
        v50 |= qword_140C4DD40;
    }
    if ( MiPteInShadowRange(v19) )
    {
      if ( (unsigned int)MiPteHasShadow(v52, v51, v53, v54) )
      {
        if ( !HIBYTE(word_140C4DE08) && (v50 & 1) != 0 )
          v50 |= 0x8000000000000000uLL;
        *(_QWORD *)v19 = v50;
        MiWritePteShadow(v19, v50);
        goto LABEL_25;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v50 & 1) != 0 )
      {
        v50 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v19 = v50;
LABEL_25:
    SystemCacheReverseMap = v60;
    v19 += 8LL;
  }
  _InterlockedOr(v58, 0);
  SystemCacheReverseMap[2] = *v61;
  MiManageSubsectionView(v49, SystemCacheReverseMap, (2 * (unsigned __int8)SystemCacheReverseMap[3]) & 2 | 1u);
  return 0LL;
}
