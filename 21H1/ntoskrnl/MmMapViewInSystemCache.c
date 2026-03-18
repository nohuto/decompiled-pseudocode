/*
 * XREFs of MmMapViewInSystemCache @ 0x14022A1F0
 * Callers:
 *     CcGetVacbMiss @ 0x14022B6B0 (CcGetVacbMiss.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiObtainSystemCacheView @ 0x140226830 (MiObtainSystemCacheView.c)
 *     MiGetPteLink @ 0x140226F10 (MiGetPteLink.c)
 *     MiManageSubsectionView @ 0x14022A510 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x14022B3C0 (MiGetSystemCacheReverseMap.c)
 *     MiOffsetToProtos @ 0x140288040 (MiOffsetToProtos.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiSectionControlArea @ 0x1402A1930 (MiSectionControlArea.c)
 *     MiAddViewsForSection @ 0x1402A1CC0 (MiAddViewsForSection.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiCompareTbFlushTimeStamp @ 0x1403002B4 (MiCompareTbFlushTimeStamp.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiRemoveSystemCacheReferences @ 0x140531930 (MiRemoveSystemCacheReferences.c)
 */

__int64 __fastcall MmMapViewInSystemCache(__int64 a1, __int64 *a2, unsigned __int64 *a3, _DWORD *a4)
{
  ULONG_PTR v8; // rax
  ULONG_PTR v9; // r12
  BOOL v10; // edx
  int v11; // ecx
  __int64 v12; // r15
  ULONG_PTR v13; // rbp
  __int64 result; // rax
  __int64 v15; // rcx
  _WORD *v16; // r13
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  unsigned __int64 v34; // rsi
  __int64 v35; // rax
  unsigned __int64 v36; // rbp
  unsigned __int64 v37; // r14
  _QWORD *SystemCacheReverseMap; // r9
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  ULONG_PTR v42; // r15
  __int64 v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int64 PteLink; // rax
  signed __int32 v47[8]; // [rsp+0h] [rbp-178h] BYREF
  __int64 v48; // [rsp+30h] [rbp-148h] BYREF
  _QWORD *v49; // [rsp+38h] [rbp-140h]
  __int64 *v50; // [rsp+40h] [rbp-138h]
  unsigned __int64 *v51; // [rsp+48h] [rbp-130h]
  ULONG_PTR v52; // [rsp+50h] [rbp-128h]
  _QWORD v53[24]; // [rsp+60h] [rbp-118h] BYREF

  v51 = a3;
  v50 = a2;
  v48 = 0LL;
  memset(v53, 0, 0xB8uLL);
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    return 3221225608LL;
  v8 = MiSectionControlArea(a1);
  v9 = v8;
  v10 = (*a4 & 0xFFF) != 0;
  v11 = *a4 >> 12;
  v12 = (unsigned int)(v10 + v11);
  if ( !(v10 + v11) )
    KeBugCheckEx(0x1Au, 0x103087uLL, v8, 0LL, 0LL);
  v52 = MiOffsetToProtos(v8, *a3, &v48);
  v13 = v52;
  result = MiAddViewsForSection(v52);
  if ( (int)result < 0 )
  {
    ++dword_140C4F760;
    return result;
  }
  v15 = *(_WORD *)(v9 + 60) & 0x3FF;
  v16 = *(_WORD **)(qword_140C4E588 + 8 * v15);
  if ( *a2 )
  {
    v19 = (((unsigned __int64)*a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( MiGetPteLink(*(_QWORD *)(v19 + 24)) == 2 )
    {
      PteLink = MiGetPteLink(*(_QWORD *)(v19 + 16));
      if ( (unsigned __int8)MiCompareTbFlushTimeStamp(PteLink, 0xFFFFFLL) )
      {
        LODWORD(v53[1]) = 20;
        v53[3] = 0LL;
        MiInsertTbFlushEntry((__int64)v53, (__int64)(v19 << 25) >> 16, 64LL, 0);
        MiFlushTbList(v53);
      }
    }
  }
  else
  {
    v17 = MiObtainSystemCacheView(*(_QWORD *)(qword_140C4E588 + 8 * v15));
    v19 = v17;
    if ( !v17 )
    {
      ++dword_140C4F760;
      MiRemoveSystemCacheReferences(v13);
      return 3221225495LL;
    }
    *a2 = (__int64)(v17 << 25) >> 16;
  }
  v20 = ZeroPte;
  if ( !(unsigned int)MiPteInShadowRange(v19, v18) )
    goto LABEL_8;
  if ( !(unsigned int)MiPteHasShadow(v22, v21) )
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
  if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
    v20 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)v19 = v20;
  MiWritePteShadow(v19, v20);
LABEL_9:
  v23 = ZeroPte;
  if ( !(unsigned int)MiPteInShadowRange(v19 + 8, v21) )
  {
LABEL_10:
    *(_QWORD *)(v19 + 8) = v23;
    goto LABEL_11;
  }
  if ( !(unsigned int)MiPteHasShadow(v25, v24) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v23 = ZeroPte | 0x8000000000000000uLL;
    }
    goto LABEL_10;
  }
  if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
    v23 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)(v19 + 8) = v23;
  MiWritePteShadow(v19 + 8, v23);
LABEL_11:
  v26 = ZeroPte;
  if ( !(unsigned int)MiPteInShadowRange(v19 + 16, v24) )
  {
LABEL_12:
    *(_QWORD *)(v19 + 16) = v26;
    goto LABEL_13;
  }
  if ( !(unsigned int)MiPteHasShadow(v28, v27) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v26 = ZeroPte | 0x8000000000000000uLL;
    }
    goto LABEL_12;
  }
  if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
    v26 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)(v19 + 16) = v26;
  MiWritePteShadow(v19 + 16, v26);
LABEL_13:
  v29 = ZeroPte;
  if ( (unsigned int)MiPteInShadowRange(v19 + 24, v27) )
  {
    if ( (unsigned int)MiPteHasShadow(v31, v30) )
    {
      if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
        v29 = ZeroPte | 0x8000000000000000uLL;
      *(_QWORD *)(v19 + 24) = v29;
      MiWritePteShadow(v19 + 24, v29);
      goto LABEL_15;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v29 = ZeroPte | 0x8000000000000000uLL;
    }
  }
  *(_QWORD *)(v19 + 24) = v29;
LABEL_15:
  v33 = *(_QWORD *)(v13 + 8);
  v34 = v33 + 8 * v48;
  v35 = *(unsigned int *)(v13 + 44);
  v36 = v19 + 8 * v12;
  v37 = v33 + 8 * v35;
  SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(*v50, v30, v32);
  v39 = (unsigned __int64)(*v16 & 0x3FF) << 6;
  v49 = SystemCacheReverseMap;
  v40 = *v51;
  SystemCacheReverseMap[2] &= 0xFFFFFFFFFFFFFFFCuLL;
  v41 = v12 & 0x3F | (v40 >> 2) & 0x3FFFFFFFFFFF0000LL | v39;
  v42 = v52;
  SystemCacheReverseMap[3] = v52;
  SystemCacheReverseMap[4] = v41;
  if ( !*(_QWORD *)(v9 + 64) )
    SystemCacheReverseMap[3] = v42 | 1;
  for ( ; v19 < v36; v34 += 8LL )
  {
    if ( v34 >= v37 )
    {
      v42 = *(_QWORD *)(v42 + 16);
      v34 = *(_QWORD *)(v42 + 8);
      v45 = *(unsigned int *)(v42 + 44);
      SystemCacheReverseMap[3] |= 1uLL;
      v37 = v34 + 8 * v45;
    }
    v43 = (v34 << 16) | 0x400;
    if ( qword_140C4DE80 )
    {
      if ( (qword_140C4DE80 & v43) != 0 )
        v43 = (v34 << 16) | 0x410;
      else
        v43 |= qword_140C4DE80;
    }
    if ( (unsigned int)MiPteInShadowRange(v19, v41) )
    {
      if ( (unsigned int)MiPteHasShadow(v44, v41) )
      {
        if ( !HIBYTE(word_140C4DF48) && (v43 & 1) != 0 )
          v43 |= 0x8000000000000000uLL;
        *(_QWORD *)v19 = v43;
        MiWritePteShadow(v19, v43);
        goto LABEL_25;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v43 & 1) != 0 )
      {
        v43 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v19 = v43;
LABEL_25:
    SystemCacheReverseMap = v49;
    v19 += 8LL;
  }
  _InterlockedOr(v47, 0);
  SystemCacheReverseMap[2] = *v50;
  MiManageSubsectionView(v42, SystemCacheReverseMap, (2 * (unsigned __int8)SystemCacheReverseMap[3]) & 2 | 1u);
  return 0LL;
}
