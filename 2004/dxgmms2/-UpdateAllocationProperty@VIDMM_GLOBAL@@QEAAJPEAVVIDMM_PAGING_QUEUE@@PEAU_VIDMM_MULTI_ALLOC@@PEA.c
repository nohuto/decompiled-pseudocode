/*
 * XREFs of ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00B5D84
 * Callers:
 *     ?VidMmUpdateAllocationProperty@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C0022750 (-VidMmUpdateAllocationProperty@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_AL.c)
 * Callees:
 *     ?IsXBoxOneDevice@DXGADAPTER@@QEBAEXZ @ 0x1C0015A98 (-IsXBoxOneDevice@DXGADAPTER@@QEBAEXZ.c)
 *     ?Feature_Servicing_2102c_29352024__private_IsEnabled@@YAHXZ @ 0x1C0015D08 (-Feature_Servicing_2102c_29352024__private_IsEnabled@@YAHXZ.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0065AE4 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C006E450 (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C00B136C (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C00B7224 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C00B7344 (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateAllocationProperty(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        struct _VIDMM_UPDATEALLOCPROPERTY *a4,
        unsigned __int64 *a5)
{
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *v11; // rax
  int v12; // r12d
  __int64 v13; // r15
  unsigned int v14; // r12d
  unsigned int v15; // r14d
  struct _D3DDDI_SEGMENTPREFERENCE v16; // ebx
  unsigned int v17; // edi
  __int64 v18; // rax
  __int64 v20; // rcx
  int v21; // eax
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  char v27; // di
  int v28; // esi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  _DWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD v38[16]; // [rsp+40h] [rbp-31h] BYREF
  int v40; // [rsp+E0h] [rbp+6Fh] BYREF
  __int64 v41; // [rsp+E8h] [rbp+77h]

  memset(v38, 0, 0x50uLL);
  v11 = *a3;
  v12 = *((_DWORD *)a3 + 8) >> 2;
  *(_OWORD *)((char *)&v38[4] + 4) = *(_OWORD *)a4;
  v13 = *v11;
  v14 = v12 & 0x3F;
  LODWORD(v38[0]) = 214;
  v41 = LODWORD(v38[5]);
  v15 = *(_DWORD *)(v13 + 68);
  v16.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v13 + 72);
  v38[2] = a3;
  if ( (_mm_srli_si128(*(__m128i *)(v38 + 36), 8).m128i_i8[4] & 2) != 0 )
  {
    v17 = HIDWORD(v38[4]);
    if ( !HIDWORD(v38[4]) )
      goto LABEL_3;
    v20 = *((_QWORD *)this + 5027) + 1584LL * v14;
    v9 = (unsigned __int8)(*(_WORD *)(v20 + 28) - *(_BYTE *)(v20 + 20));
    if ( _bittest((const int *)&v17, v9) || (*((_DWORD *)a3 + 7) & 8) != 0 && (~v15 & HIDWORD(v38[4])) != 0 )
      goto LABEL_3;
    v21 = *(_DWORD *)(v13 + 76);
    v22 = *(struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 **)(v13 + 496);
    v40 = 0;
    if ( !VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
            this,
            v14,
            HIDWORD(v38[4]),
            v22,
            *(_QWORD *)(v13 + 16),
            *(_QWORD *)(v13 + 24),
            (v21 & 0x8000000) != 0,
            (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v40) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v9, v8, v10);
      *(_QWORD *)(v23 + 24) = 5209LL;
      WdLogEvent5_WdAssertion(v23);
      return -1073741811LL;
    }
    LOBYTE(v9) = v40 & 1;
    BYTE4(v38[6]) = v40 & 1;
    BYTE5(v38[6]) = (v40 & 2) != 0;
    if ( v17 == v15 )
    {
      if ( (unsigned int)Feature_Servicing_2102c_29352024__private_IsEnabled() )
      {
        v26 = WdLogNewEntry5_WdWarning(v25, v24);
        *(_QWORD *)(v26 + 24) = 5220LL;
      }
      else
      {
        v26 = WdLogNewEntry5_WdWarning(v25, v24);
      }
      WdLogEvent5_WdWarning(v26);
    }
    v15 = v17;
  }
  v27 = v38[6];
  v28 = (LODWORD(v38[6]) >> 2) & 1;
  if ( v28 )
  {
    if ( (_DWORD)v41 == v16.0 )
    {
      if ( (unsigned int)Feature_Servicing_2102c_29352024__private_IsEnabled() )
      {
        v31 = WdLogNewEntry5_WdWarning(v30, v29);
        *(_QWORD *)(v31 + 24) = 5238LL;
      }
      else
      {
        v31 = WdLogNewEntry5_WdWarning(v30, v29);
      }
      WdLogEvent5_WdWarning(v31);
    }
    v16.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)v41;
  }
  if ( (v27 & 2) != 0 || v28 )
  {
    if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset((VIDMM_GLOBAL *)v9, v16, v15) )
      goto LABEL_3;
    MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(this, v14, v16, (bool *)&v40);
    if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
            this,
            v14,
            v15,
            MostPreferredSegment,
            (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v38[4]) )
      goto LABEL_3;
    v27 = v38[6];
  }
  if ( (v27 & 1) != 0 )
  {
    v33 = *(_DWORD **)(v13 + 496);
    v9 = *v33 & 0x8000;
    if ( (*v33 & 0x8000) != 0 && (v38[5] & 0x100000000LL) == 0 )
      goto LABEL_3;
    if ( (_DWORD)v9 )
    {
      if ( (unsigned int)Feature_Servicing_2102c_29352024__private_IsEnabled() )
      {
        v36 = WdLogNewEntry5_WdWarning(v35, v34);
        *(_QWORD *)(v36 + 24) = 5286LL;
      }
      else
      {
        v36 = WdLogNewEntry5_WdWarning(v35, v34);
      }
      WdLogEvent5_WdWarning(v36);
    }
  }
  if ( !(unsigned int)Feature_Servicing_2102c_29352024__private_IsEnabled() || (v27 & 8) == 0 )
    return VIDMM_GLOBAL::QueueDeferredCommand(this, a2, (struct _VIDMM_DEFERRED_COMMAND *)v38, 0, a5);
  if ( !DXGADAPTER::IsXBoxOneDevice(*((DXGADAPTER **)this + 3)) )
  {
LABEL_3:
    v18 = WdLogNewEntry5_WdAssertion(v9, v8, v10);
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v18);
    return 3221225485LL;
  }
  if ( (*(_DWORD *)(v13 + 80) & 0x100000) != 0 )
  {
    v37 = WdLogNewEntry5_WdWarning(v9, v8);
    *(_QWORD *)(v37 + 24) = 5310LL;
    WdLogEvent5_WdWarning(v37);
  }
  return VIDMM_GLOBAL::QueueDeferredCommand(this, a2, (struct _VIDMM_DEFERRED_COMMAND *)v38, 0, a5);
}
