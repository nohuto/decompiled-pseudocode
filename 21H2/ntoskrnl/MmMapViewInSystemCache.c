/*
 * XREFs of MmMapViewInSystemCache @ 0x14031BB30
 * Callers:
 *     CcGetVacbMiss @ 0x14031B710 (CcGetVacbMiss.c)
 * Callees:
 *     MiCompareTbFlushTimeStamp @ 0x14022E74C (MiCompareTbFlushTimeStamp.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiManageSubsectionView @ 0x14031BE50 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x14031CD00 (MiGetSystemCacheReverseMap.c)
 *     MiObtainSystemCacheView @ 0x14031D250 (MiObtainSystemCacheView.c)
 *     MiGetPteLink @ 0x14031D930 (MiGetPteLink.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     MiAddViewsForSection @ 0x140320340 (MiAddViewsForSection.c)
 *     MiOffsetToProtos @ 0x14032B8A0 (MiOffsetToProtos.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiRemoveSystemCacheReferences @ 0x140537690 (MiRemoveSystemCacheReferences.c)
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
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // r14
  _QWORD *SystemCacheReverseMap; // r9
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  ULONG_PTR v32; // r15
  __int64 v33; // rbx
  __int64 v34; // rax
  int PteLink; // eax
  signed __int32 v36[8]; // [rsp+0h] [rbp-178h] BYREF
  __int64 v37; // [rsp+30h] [rbp-148h] BYREF
  _QWORD *v38; // [rsp+38h] [rbp-140h]
  __int64 *v39; // [rsp+40h] [rbp-138h]
  unsigned __int64 *v40; // [rsp+48h] [rbp-130h]
  ULONG_PTR v41; // [rsp+50h] [rbp-128h]
  _QWORD v42[24]; // [rsp+60h] [rbp-118h] BYREF

  v40 = a3;
  v39 = a2;
  v37 = 0LL;
  memset(v42, 0, 0xB8uLL);
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    return 3221225608LL;
  v8 = MiSectionControlArea(a1);
  v9 = v8;
  v10 = (*a4 & 0xFFF) != 0;
  v11 = *a4 >> 12;
  v12 = (unsigned int)(v10 + v11);
  if ( !(v10 + v11) )
    KeBugCheckEx(0x1Au, 0x103087uLL, v8, 0LL, 0LL);
  v41 = MiOffsetToProtos(v8, *a3, &v37);
  v13 = v41;
  result = MiAddViewsForSection(v41);
  if ( (int)result < 0 )
  {
    ++dword_140C4F860;
    return result;
  }
  v15 = *(_WORD *)(v9 + 60) & 0x3FF;
  v16 = *(_WORD **)(qword_140C4E688 + 8 * v15);
  if ( *a2 )
  {
    v18 = (((unsigned __int64)*a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( MiGetPteLink(*(_QWORD *)(v18 + 24)) == 2 )
    {
      PteLink = MiGetPteLink(*(_QWORD *)(v18 + 16));
      if ( MiCompareTbFlushTimeStamp(PteLink, 0xFFFFF) )
      {
        LODWORD(v42[1]) = 20;
        v42[3] = 0LL;
        MiInsertTbFlushEntry(v42, (__int64)(v18 << 25) >> 16, 64LL, 0LL);
        MiFlushTbList(v42);
      }
    }
  }
  else
  {
    v17 = MiObtainSystemCacheView(*(_QWORD *)(qword_140C4E688 + 8 * v15));
    v18 = v17;
    if ( !v17 )
    {
      ++dword_140C4F860;
      MiRemoveSystemCacheReferences(v13);
      return 3221225495LL;
    }
    *a2 = v17 << 25 >> 16;
  }
  v19 = ZeroPte;
  if ( !(unsigned int)MiPteInShadowRange(v18) )
    goto LABEL_8;
  if ( !(unsigned int)MiPteHasShadow() )
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
  if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
    v19 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)v18 = v19;
  MiWritePteShadow(v18, v19);
LABEL_9:
  v20 = ZeroPte;
  if ( !(unsigned int)MiPteInShadowRange(v18 + 8) )
  {
LABEL_10:
    *(_QWORD *)(v18 + 8) = v20;
    goto LABEL_11;
  }
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v20 = ZeroPte | 0x8000000000000000uLL;
    }
    goto LABEL_10;
  }
  if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
    v20 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)(v18 + 8) = v20;
  MiWritePteShadow(v18 + 8, v20);
LABEL_11:
  v21 = ZeroPte;
  if ( !(unsigned int)MiPteInShadowRange(v18 + 16) )
  {
LABEL_12:
    *(_QWORD *)(v18 + 16) = v21;
    goto LABEL_13;
  }
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v21 = ZeroPte | 0x8000000000000000uLL;
    }
    goto LABEL_12;
  }
  if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
    v21 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)(v18 + 16) = v21;
  MiWritePteShadow(v18 + 16, v21);
LABEL_13:
  v22 = ZeroPte;
  if ( (unsigned int)MiPteInShadowRange(v18 + 24) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
        v22 = ZeroPte | 0x8000000000000000uLL;
      *(_QWORD *)(v18 + 24) = v22;
      MiWritePteShadow(v18 + 24, v22);
      goto LABEL_15;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v22 = ZeroPte | 0x8000000000000000uLL;
    }
  }
  *(_QWORD *)(v18 + 24) = v22;
LABEL_15:
  v23 = *(_QWORD *)(v13 + 8);
  v24 = v23 + 8 * v37;
  v25 = *(unsigned int *)(v13 + 44);
  v26 = v18 + 8 * v12;
  v27 = v23 + 8 * v25;
  SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(*v39);
  v29 = (unsigned __int64)(*v16 & 0x3FF) << 6;
  v38 = SystemCacheReverseMap;
  v30 = *v40;
  SystemCacheReverseMap[2] &= 0xFFFFFFFFFFFFFFFCuLL;
  v31 = v12 & 0x3F | (v30 >> 2) & 0x3FFFFFFFFFFF0000LL | v29;
  v32 = v41;
  SystemCacheReverseMap[3] = v41;
  SystemCacheReverseMap[4] = v31;
  if ( !*(_QWORD *)(v9 + 64) )
    SystemCacheReverseMap[3] = v32 | 1;
  for ( ; v18 < v26; v24 += 8LL )
  {
    if ( v24 >= v27 )
    {
      v32 = *(_QWORD *)(v32 + 16);
      v24 = *(_QWORD *)(v32 + 8);
      v34 = *(unsigned int *)(v32 + 44);
      SystemCacheReverseMap[3] |= 1uLL;
      v27 = v24 + 8 * v34;
    }
    v33 = (v24 << 16) | 0x400;
    if ( qword_140C4DF80 )
    {
      if ( (qword_140C4DF80 & v33) != 0 )
        v33 = (v24 << 16) | 0x410;
      else
        v33 |= qword_140C4DF80;
    }
    if ( (unsigned int)MiPteInShadowRange(v18) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) && (v33 & 1) != 0 )
          v33 |= 0x8000000000000000uLL;
        *(_QWORD *)v18 = v33;
        MiWritePteShadow(v18, v33);
        goto LABEL_25;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v33 & 1) != 0 )
      {
        v33 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v18 = v33;
LABEL_25:
    SystemCacheReverseMap = v38;
    v18 += 8LL;
  }
  _InterlockedOr(v36, 0);
  SystemCacheReverseMap[2] = *v39;
  MiManageSubsectionView(v32, SystemCacheReverseMap, (2 * (unsigned __int8)SystemCacheReverseMap[3]) & 2 | 1u);
  return 0LL;
}
