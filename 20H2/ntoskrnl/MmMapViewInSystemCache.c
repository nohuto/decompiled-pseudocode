/*
 * XREFs of MmMapViewInSystemCache @ 0x1402983C0
 * Callers:
 *     CcGetVacbMiss @ 0x140297FA0 (CcGetVacbMiss.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiSectionControlArea @ 0x14022C010 (MiSectionControlArea.c)
 *     MiAddViewsForSection @ 0x14022C750 (MiAddViewsForSection.c)
 *     MiManageSubsectionView @ 0x1402986E0 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x140299590 (MiGetSystemCacheReverseMap.c)
 *     MiObtainSystemCacheView @ 0x140299AE0 (MiObtainSystemCacheView.c)
 *     MiGetPteLink @ 0x14029A1C0 (MiGetPteLink.c)
 *     MiOffsetToProtos @ 0x1402A42A0 (MiOffsetToProtos.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiCompareTbFlushTimeStamp @ 0x1402E9F34 (MiCompareTbFlushTimeStamp.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiRemoveSystemCacheReferences @ 0x140535950 (MiRemoveSystemCacheReferences.c)
 */

__int64 __fastcall MmMapViewInSystemCache(__int64 a1, __int64 *a2, unsigned __int64 *a3, _DWORD *a4)
{
  ULONG_PTR v8; // rax
  ULONG_PTR v9; // r12
  BOOL v10; // edx
  int v11; // ecx
  __int64 v12; // r15
  __int64 **v13; // rbp
  __int64 result; // rax
  __int64 v15; // rcx
  _WORD *v16; // r13
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 *v39; // rcx
  unsigned __int64 v40; // rsi
  __int64 v41; // rax
  unsigned __int64 v42; // rbp
  __int64 *v43; // r14
  _QWORD *SystemCacheReverseMap; // r9
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  __int64 v47; // rdx
  unsigned __int64 v48; // r15
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 PteLink; // rax
  __int64 v56; // rdx
  signed __int32 v57[8]; // [rsp+0h] [rbp-178h] BYREF
  __int64 v58; // [rsp+30h] [rbp-148h] BYREF
  _QWORD *v59; // [rsp+38h] [rbp-140h]
  __int64 *v60; // [rsp+40h] [rbp-138h]
  unsigned __int64 *v61; // [rsp+48h] [rbp-130h]
  __int64 **v62; // [rsp+50h] [rbp-128h]
  _QWORD v63[24]; // [rsp+60h] [rbp-118h] BYREF

  v61 = a3;
  v60 = a2;
  v58 = 0LL;
  memset(v63, 0, 0xB8uLL);
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    return 3221225608LL;
  v8 = MiSectionControlArea(a1);
  v9 = v8;
  v10 = (*a4 & 0xFFF) != 0;
  v11 = *a4 >> 12;
  v12 = (unsigned int)(v10 + v11);
  if ( !(v10 + v11) )
    KeBugCheckEx(0x1Au, 0x103087uLL, v8, 0LL, 0LL);
  v62 = (__int64 **)MiOffsetToProtos(v8, *a3, &v58);
  v13 = v62;
  result = MiAddViewsForSection(v62, v12 + v58, (_DWORD *)5);
  if ( (int)result < 0 )
  {
    ++dword_140C4F6A0;
    return result;
  }
  v15 = *(_WORD *)(v9 + 60) & 0x3FF;
  v16 = *(_WORD **)(qword_140C4E4C8 + 8 * v15);
  if ( *a2 )
  {
    v18 = (((unsigned __int64)*a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( MiGetPteLink(*(_QWORD *)(v18 + 24)) == 2 )
    {
      PteLink = MiGetPteLink(*(_QWORD *)(v18 + 16));
      if ( (unsigned __int8)MiCompareTbFlushTimeStamp(PteLink, 0xFFFFFLL) )
      {
        LODWORD(v63[1]) = 20;
        v63[3] = 0LL;
        MiInsertTbFlushEntry(v63, (__int64)(v18 << 25) >> 16, 64LL, 0LL);
        MiFlushTbList(v63, v56);
      }
    }
  }
  else
  {
    v17 = MiObtainSystemCacheView(*(_QWORD *)(qword_140C4E4C8 + 8 * v15));
    v18 = v17;
    if ( !v17 )
    {
      ++dword_140C4F6A0;
      MiRemoveSystemCacheReferences((ULONG_PTR)v13);
      return 3221225495LL;
    }
    *a2 = v17 << 25 >> 16;
  }
  v19 = ZeroPte;
  if ( !MiPteInShadowRange(v18) )
    goto LABEL_8;
  if ( !(unsigned int)MiPteHasShadow(v21, v20, v22, v23) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v19 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_8:
    *(_QWORD *)v18 = v19;
    goto LABEL_9;
  }
  if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
    v19 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)v18 = v19;
  MiWritePteShadow(v18, v19);
LABEL_9:
  v24 = ZeroPte;
  if ( !MiPteInShadowRange(v18 + 8) )
  {
LABEL_10:
    *(_QWORD *)(v18 + 8) = v24;
    goto LABEL_11;
  }
  if ( !(unsigned int)MiPteHasShadow(v26, v25, v27, v28) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v24 = ZeroPte | 0x8000000000000000uLL;
    }
    goto LABEL_10;
  }
  if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
    v24 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)(v18 + 8) = v24;
  MiWritePteShadow(v18 + 8, v24);
LABEL_11:
  v29 = ZeroPte;
  if ( !MiPteInShadowRange(v18 + 16) )
  {
LABEL_12:
    *(_QWORD *)(v18 + 16) = v29;
    goto LABEL_13;
  }
  if ( !(unsigned int)MiPteHasShadow(v31, v30, v32, v33) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v29 = ZeroPte | 0x8000000000000000uLL;
    }
    goto LABEL_12;
  }
  if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
    v29 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)(v18 + 16) = v29;
  MiWritePteShadow(v18 + 16, v29);
LABEL_13:
  v34 = ZeroPte;
  if ( MiPteInShadowRange(v18 + 24) )
  {
    if ( (unsigned int)MiPteHasShadow(v36, v35, v37, v38) )
    {
      if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
        v34 = ZeroPte | 0x8000000000000000uLL;
      *(_QWORD *)(v18 + 24) = v34;
      MiWritePteShadow(v18 + 24, v34);
      goto LABEL_15;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v34 = ZeroPte | 0x8000000000000000uLL;
    }
  }
  *(_QWORD *)(v18 + 24) = v34;
LABEL_15:
  v39 = v13[1];
  v40 = (unsigned __int64)&v39[v58];
  v41 = *((unsigned int *)v13 + 11);
  v42 = v18 + 8 * v12;
  v43 = &v39[v41];
  SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(*v60);
  v45 = (unsigned __int64)(*v16 & 0x3FF) << 6;
  v59 = SystemCacheReverseMap;
  v46 = *v61;
  SystemCacheReverseMap[2] &= 0xFFFFFFFFFFFFFFFCuLL;
  v47 = v12 & 0x3F | (v46 >> 2) & 0x3FFFFFFFFFFF0000LL | v45;
  v48 = (unsigned __int64)v62;
  SystemCacheReverseMap[3] = v62;
  SystemCacheReverseMap[4] = v47;
  if ( !*(_QWORD *)(v9 + 64) )
    SystemCacheReverseMap[3] = v48 | 1;
  for ( ; v18 < v42; v40 += 8LL )
  {
    if ( v40 >= (unsigned __int64)v43 )
    {
      v48 = *(_QWORD *)(v48 + 16);
      v40 = *(_QWORD *)(v48 + 8);
      v54 = *(unsigned int *)(v48 + 44);
      SystemCacheReverseMap[3] |= 1uLL;
      v43 = (__int64 *)(v40 + 8 * v54);
    }
    v49 = (v40 << 16) | 0x400;
    if ( qword_140C4DDC0 )
    {
      if ( (qword_140C4DDC0 & v49) != 0 )
        v49 = (v40 << 16) | 0x410;
      else
        v49 |= qword_140C4DDC0;
    }
    if ( MiPteInShadowRange(v18) )
    {
      if ( (unsigned int)MiPteHasShadow(v51, v50, v52, v53) )
      {
        if ( !HIBYTE(word_140C4DE88) && (v49 & 1) != 0 )
          v49 |= 0x8000000000000000uLL;
        *(_QWORD *)v18 = v49;
        MiWritePteShadow(v18, v49);
        goto LABEL_25;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v49 & 1) != 0 )
      {
        v49 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v18 = v49;
LABEL_25:
    SystemCacheReverseMap = v59;
    v18 += 8LL;
  }
  _InterlockedOr(v57, 0);
  SystemCacheReverseMap[2] = *v60;
  MiManageSubsectionView(v48, SystemCacheReverseMap, (2 * (unsigned __int8)SystemCacheReverseMap[3]) & 2 | 1u);
  return 0LL;
}
