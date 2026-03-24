/*
 * XREFs of ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00B4B64
 * Callers:
 *     ?VidMmUpdateAllocationProperty@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C0022B50 (-VidMmUpdateAllocationProperty@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_AL.c)
 * Callees:
 *     ?IsXBoxOneDevice@DXGADAPTER@@QEBAEXZ @ 0x1C00176A8 (-IsXBoxOneDevice@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0067994 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C00863A0 (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C0086880 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C0086F50 (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C00871AC (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateAllocationProperty(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        struct _VIDMM_UPDATEALLOCPROPERTY *a4,
        unsigned __int64 *a5)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  unsigned int v11; // r12d
  __int64 v12; // r15
  unsigned int v13; // r14d
  struct _D3DDDI_SEGMENTPREFERENCE v14; // ebx
  unsigned int v15; // edi
  __int64 v16; // rax
  __int64 v18; // rcx
  int v19; // eax
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  char v24; // di
  int v25; // esi
  __int64 v26; // rax
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  _DWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD v31[16]; // [rsp+40h] [rbp-31h] BYREF
  int v33; // [rsp+E0h] [rbp+6Fh] BYREF
  VIDMM_GLOBAL *v34; // [rsp+E8h] [rbp+77h]

  memset(v31, 0, 0x50uLL);
  v10 = HIDWORD(*(_QWORD *)a4);
  v11 = (*((_DWORD *)a3 + 8) >> 2) & 0x3F;
  v12 = **a3;
  *(_OWORD *)((char *)&v31[4] + 4) = *(_OWORD *)a4;
  LODWORD(v31[0]) = 214;
  v13 = *(_DWORD *)(v12 + 68);
  v14.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v12 + 72);
  v31[2] = a3;
  v34 = (VIDMM_GLOBAL *)v10;
  if ( (_mm_srli_si128(*(__m128i *)(v31 + 36), 8).m128i_i8[4] & 2) != 0 )
  {
    v15 = HIDWORD(v31[4]);
    if ( !HIDWORD(v31[4]) )
      goto LABEL_3;
    v18 = *((_QWORD *)this + 5027) + 1584LL * v11;
    v10 = (unsigned __int8)(*(_WORD *)(v18 + 28) - *(_BYTE *)(v18 + 20));
    if ( _bittest((const int *)&v15, v10) || (*((_DWORD *)a3 + 7) & 8) != 0 && (~v13 & HIDWORD(v31[4])) != 0 )
      goto LABEL_3;
    v19 = *(_DWORD *)(v12 + 76);
    v20 = *(struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 **)(v12 + 512);
    v33 = 0;
    if ( !VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
            this,
            v11,
            HIDWORD(v31[4]),
            v20,
            *(_QWORD *)(v12 + 16),
            *(_QWORD *)(v12 + 24),
            (v19 & 0x8000000) != 0,
            (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v33) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v21, v8, v9);
      *(_QWORD *)(v22 + 24) = 5333LL;
      WdLogEvent5_WdAssertion(v22);
      return -1073741811LL;
    }
    BYTE4(v31[6]) = v33 & 1;
    BYTE5(v31[6]) = (v33 & 2) != 0;
    if ( v15 == v13 )
    {
      LOBYTE(v21) = v33 & 1;
      v23 = WdLogNewEntry5_WdWarning(v21, v8);
      *(_QWORD *)(v23 + 24) = 5342LL;
      WdLogEvent5_WdWarning(v23);
    }
    v10 = (unsigned __int64)v34;
    v13 = v15;
  }
  v24 = v31[6];
  v25 = (LODWORD(v31[6]) >> 2) & 1;
  if ( v25 )
  {
    if ( (_DWORD)v10 == v14.0 )
    {
      v26 = WdLogNewEntry5_WdWarning(v10, v8);
      *(_QWORD *)(v26 + 24) = 5353LL;
      WdLogEvent5_WdWarning(v26);
      v10 = (unsigned __int64)v34;
    }
    v14.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)v10;
  }
  if ( (v24 & 2) != 0 || v25 )
  {
    if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset((VIDMM_GLOBAL *)v10, v14, v13) )
      goto LABEL_3;
    MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(this, v11, v14, (bool *)&v33);
    if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
            this,
            v11,
            v13,
            MostPreferredSegment,
            (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v31[4]) )
      goto LABEL_3;
    v24 = v31[6];
  }
  if ( (v24 & 1) != 0 )
  {
    v28 = *(_DWORD **)(v12 + 512);
    v10 = *v28 & 0x8000;
    if ( (*v28 & 0x8000) != 0 && (v31[5] & 0x100000000LL) == 0 )
      goto LABEL_3;
    if ( (_DWORD)v10 )
    {
      v29 = WdLogNewEntry5_WdWarning(v10, v8);
      *(_QWORD *)(v29 + 24) = 5394LL;
      WdLogEvent5_WdWarning(v29);
    }
  }
  if ( (v24 & 8) != 0 )
  {
    if ( DXGADAPTER::IsXBoxOneDevice(*((DXGADAPTER **)this + 3)) )
    {
      if ( (*(_DWORD *)(v12 + 80) & 0x100000) != 0 )
      {
        v30 = WdLogNewEntry5_WdWarning(v10, v8);
        *(_QWORD *)(v30 + 24) = 5411LL;
        WdLogEvent5_WdWarning(v30);
      }
      return VIDMM_GLOBAL::QueueDeferredCommand(this, a2, (struct _VIDMM_DEFERRED_COMMAND *)v31, 0, a5);
    }
LABEL_3:
    v16 = WdLogNewEntry5_WdAssertion(v10, v8, v9);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v16);
    return 3221225485LL;
  }
  return VIDMM_GLOBAL::QueueDeferredCommand(this, a2, (struct _VIDMM_DEFERRED_COMMAND *)v31, 0, a5);
}
