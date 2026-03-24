/*
 * XREFs of MmMapViewInSystemCache @ 0x140310DE0
 * Callers:
 *     CcGetVacbMiss @ 0x1403109C0 (CcGetVacbMiss.c)
 * Callees:
 *     MiCompareTbFlushTimeStamp @ 0x1402B03EC (MiCompareTbFlushTimeStamp.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiManageSubsectionView @ 0x140311100 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x140311FB0 (MiGetSystemCacheReverseMap.c)
 *     MiObtainSystemCacheView @ 0x140312500 (MiObtainSystemCacheView.c)
 *     MiGetPteLink @ 0x140312BE0 (MiGetPteLink.c)
 *     MiSectionControlArea @ 0x140315260 (MiSectionControlArea.c)
 *     MiAddViewsForSection @ 0x1403155F0 (MiAddViewsForSection.c)
 *     MiOffsetToProtos @ 0x140320B50 (MiOffsetToProtos.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiRemoveSystemCacheReferences @ 0x140537450 (MiRemoveSystemCacheReferences.c)
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
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  __int64 v27; // rcx
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  unsigned __int64 v30; // rbp
  unsigned __int64 v31; // r14
  _QWORD *SystemCacheReverseMap; // r9
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // rdx
  ULONG_PTR v36; // r15
  __int64 v37; // rbx
  __int64 v38; // rax
  int PteLink; // eax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // r8
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
    ++dword_140C4F820;
    return result;
  }
  v15 = *(_WORD *)(v9 + 60) & 0x3FF;
  v16 = *(_WORD **)(qword_140C4E648 + 8 * v15);
  if ( *a2 )
  {
    v19 = (((unsigned __int64)*a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( MiGetPteLink(*(_QWORD *)(v19 + 24)) == 2 )
    {
      PteLink = MiGetPteLink(*(_QWORD *)(v19 + 16));
      if ( MiCompareTbFlushTimeStamp(PteLink, 0xFFFFFLL, v40, v41) )
      {
        LODWORD(v53[1]) = 20;
        v53[3] = 0LL;
        MiInsertTbFlushEntry(v53, (__int64)(v19 << 25) >> 16, 64LL, 0LL);
        MiFlushTbList(v53);
      }
    }
  }
  else
  {
    v17 = MiObtainSystemCacheView(*(_QWORD *)(qword_140C4E648 + 8 * v15));
    v19 = v17;
    if ( !v17 )
    {
      ++dword_140C4F820;
      MiRemoveSystemCacheReferences(v13);
      return 3221225495LL;
    }
    *a2 = v17 << 25 >> 16;
  }
  v20 = ZeroPte;
  if ( !(unsigned int)MiPteInShadowRange(v19, v18) )
    goto LABEL_8;
  if ( !(unsigned int)MiPteHasShadow() )
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
  if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
    v20 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)v19 = v20;
  MiWritePteShadow(v19, v20, v42);
LABEL_9:
  v22 = ZeroPte;
  if ( !(unsigned int)MiPteInShadowRange(v19 + 8, v21) )
  {
LABEL_10:
    *(_QWORD *)(v19 + 8) = v22;
    goto LABEL_11;
  }
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v22 = ZeroPte | 0x8000000000000000uLL;
    }
    goto LABEL_10;
  }
  if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
    v22 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)(v19 + 8) = v22;
  MiWritePteShadow(v19 + 8, v22, v43);
LABEL_11:
  v24 = ZeroPte;
  if ( !(unsigned int)MiPteInShadowRange(v19 + 16, v23) )
  {
LABEL_12:
    *(_QWORD *)(v19 + 16) = v24;
    goto LABEL_13;
  }
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v24 = ZeroPte | 0x8000000000000000uLL;
    }
    goto LABEL_12;
  }
  if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
    v24 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)(v19 + 16) = v24;
  MiWritePteShadow(v19 + 16, v24, v44);
LABEL_13:
  v26 = ZeroPte;
  if ( (unsigned int)MiPteInShadowRange(v19 + 24, v25) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
        v26 = ZeroPte | 0x8000000000000000uLL;
      *(_QWORD *)(v19 + 24) = v26;
      MiWritePteShadow(v19 + 24, v26, v45);
      goto LABEL_15;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v26 = ZeroPte | 0x8000000000000000uLL;
    }
  }
  *(_QWORD *)(v19 + 24) = v26;
LABEL_15:
  v27 = *(_QWORD *)(v13 + 8);
  v28 = v27 + 8 * v48;
  v29 = *(unsigned int *)(v13 + 44);
  v30 = v19 + 8 * v12;
  v31 = v27 + 8 * v29;
  SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(*v50);
  v33 = (unsigned __int64)(*v16 & 0x3FF) << 6;
  v49 = SystemCacheReverseMap;
  v34 = *v51;
  SystemCacheReverseMap[2] &= 0xFFFFFFFFFFFFFFFCuLL;
  v35 = v12 & 0x3F | (v34 >> 2) & 0x3FFFFFFFFFFF0000LL | v33;
  v36 = v52;
  SystemCacheReverseMap[3] = v52;
  SystemCacheReverseMap[4] = v35;
  if ( !*(_QWORD *)(v9 + 64) )
    SystemCacheReverseMap[3] = v36 | 1;
  for ( ; v19 < v30; v28 += 8LL )
  {
    if ( v28 >= v31 )
    {
      v36 = *(_QWORD *)(v36 + 16);
      v28 = *(_QWORD *)(v36 + 8);
      v38 = *(unsigned int *)(v36 + 44);
      SystemCacheReverseMap[3] |= 1uLL;
      v31 = v28 + 8 * v38;
    }
    v37 = (v28 << 16) | 0x400;
    if ( qword_140C4DF40 )
    {
      if ( (qword_140C4DF40 & v37) != 0 )
        v37 = (v28 << 16) | 0x410;
      else
        v37 |= qword_140C4DF40;
    }
    if ( (unsigned int)MiPteInShadowRange(v19, v35) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E008) && (v37 & 1) != 0 )
          v37 |= 0x8000000000000000uLL;
        *(_QWORD *)v19 = v37;
        MiWritePteShadow(v19, v37, v46);
        goto LABEL_25;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v37 & 1) != 0 )
      {
        v37 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v19 = v37;
LABEL_25:
    SystemCacheReverseMap = v49;
    v19 += 8LL;
  }
  _InterlockedOr(v47, 0);
  SystemCacheReverseMap[2] = *v50;
  MiManageSubsectionView(v36, SystemCacheReverseMap, (2 * (unsigned __int8)SystemCacheReverseMap[3]) & 2 | 1u);
  return 0LL;
}
