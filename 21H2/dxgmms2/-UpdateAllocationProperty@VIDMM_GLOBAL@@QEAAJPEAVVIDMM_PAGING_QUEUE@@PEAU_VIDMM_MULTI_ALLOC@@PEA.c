/*
 * XREFs of ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00DA7C4
 * Callers:
 *     ?VidMmUpdateAllocationProperty@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C002D0B0 (-VidMmUpdateAllocationProperty@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_AL.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0089010 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C008E370 (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C008EA7C (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C00D755C (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C00DBCA0 (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateAllocationProperty(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        struct _VIDMM_UPDATEALLOCPROPERTY *a4,
        unsigned __int64 *a5)
{
  unsigned int v8; // edx
  VIDMM_GLOBAL *v9; // rcx
  __int64 v10; // r15
  unsigned int v11; // r12d
  struct _D3DDDI_SEGMENTPREFERENCE v12; // ebx
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v16; // rcx
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *v17; // r9
  bool v18; // al
  __int64 v19; // rcx
  char v20; // si
  int v21; // r14d
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  VIDMM_GLOBAL *v23; // [rsp+50h] [rbp-41h]
  _QWORD v24[16]; // [rsp+60h] [rbp-31h] BYREF
  int v26; // [rsp+100h] [rbp+6Fh] BYREF
  unsigned int v27; // [rsp+108h] [rbp+77h]

  memset(v24, 0, 0x50uLL);
  v8 = (*((_DWORD *)a3 + 8) >> 2) & 0x3F;
  v9 = (VIDMM_GLOBAL *)HIDWORD(*(_QWORD *)a4);
  v10 = **a3;
  *(_OWORD *)((char *)&v24[4] + 4) = *(_OWORD *)a4;
  LODWORD(v24[0]) = 214;
  v11 = *(_DWORD *)(v10 + 60);
  v12.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v10 + 64);
  v24[2] = a3;
  v27 = v8;
  v23 = v9;
  if ( (_mm_srli_si128(*(__m128i *)(v24 + 36), 8).m128i_i8[4] & 2) != 0 )
  {
    v13 = HIDWORD(v24[4]);
    if ( !HIDWORD(v24[4]) )
      goto LABEL_3;
    v16 = *((_QWORD *)this + 5028) + 1584LL * v8;
    if ( _bittest((const int *)&v13, (unsigned __int8)(*(_WORD *)(v16 + 28) - *(_BYTE *)(v16 + 20)))
      || (~v11 & HIDWORD(v24[4])) != 0 && (*((_BYTE *)a3 + 28) & 8) != 0 )
    {
      goto LABEL_3;
    }
    v17 = *(struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 **)(v10 + 528);
    v18 = (*(_DWORD *)(v10 + 68) & 0x10000000) != 0;
    v26 = 0;
    if ( !VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
            this,
            v8,
            HIDWORD(v24[4]),
            v17,
            *(_QWORD *)(v10 + 16),
            *(_QWORD *)(v10 + 24),
            v18,
            (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v26) )
    {
      WdLogSingleEntry1(1LL, 5548LL);
      DxgkLogInternalTriageEvent(v19, 0x40000LL);
      return -1073741811LL;
    }
    BYTE4(v24[6]) = v26 & 1;
    BYTE5(v24[6]) = (v26 & 2) != 0;
    if ( v13 == v11 )
      WdLogSingleEntry1(3LL, 5557LL);
    v9 = v23;
    v11 = v13;
  }
  v20 = v24[6];
  v21 = (LODWORD(v24[6]) >> 2) & 1;
  if ( v21 )
  {
    if ( (_DWORD)v9 == v12.0 )
    {
      WdLogSingleEntry1(3LL, 5568LL);
      v9 = v23;
    }
    v12.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)v9;
  }
  if ( (v20 & 2) != 0 || v21 )
  {
    if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(v9, v12, v11) )
      goto LABEL_3;
    MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(this, v27, v12, (bool *)&v26);
    if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
            this,
            v27,
            v11,
            MostPreferredSegment,
            (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v24[4]) )
      goto LABEL_3;
    v20 = v24[6];
  }
  if ( (v20 & 1) != 0 && (**(_DWORD **)(v10 + 528) & 0x8000) != 0 )
  {
    if ( (v24[5] & 0x100000000LL) == 0 )
    {
LABEL_3:
      WdLogSingleEntry1(1LL, -1073741811LL);
      DxgkLogInternalTriageEvent(v14, 0x40000LL);
      return 3221225485LL;
    }
    WdLogSingleEntry1(3LL, 5609LL);
  }
  if ( (v20 & 8) != 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 436LL) & 0x200) == 0 )
      goto LABEL_3;
    if ( (*(_DWORD *)(v10 + 72) & 0x200000) != 0 )
      WdLogSingleEntry1(3LL, 5626LL);
  }
  return VIDMM_GLOBAL::QueueDeferredCommand(this, a2, (struct _VIDMM_DEFERRED_COMMAND *)v24, 0, a5);
}
