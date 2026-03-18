/*
 * XREFs of ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x180038780
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180038060 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x1800259BC (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x180037F48 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x180038AB0 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x1800A2F98 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800D5388 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800D78C4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x1801AC84C (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801B2D9C (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@44@Z @ 0x1801C892C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x180200624 (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x180213294 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::ProcessReferenceNode(
        CExpressionValueStack *this,
        struct CExpression *a2,
        struct ExpressionReferenceNode *a3,
        LARGE_INTEGER a4)
{
  __int64 v4; // rax
  _DWORD *v8; // r12
  unsigned int v9; // ecx
  int v10; // esi
  unsigned int v11; // ebx
  __int64 v12; // rcx
  struct SubchannelMaskInfo *v13; // rbx
  struct CExpressionValue *v14; // r15
  __int64 v15; // rax
  LARGE_INTEGER v16; // rbx
  DWORD *v17; // rsi
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // r14d
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rbx
  __int64 v26; // rax
  LARGE_INTEGER v27; // rbx
  __int64 v28; // r14
  int ValueFromCache; // eax
  CExpressionValueStack *v30; // rcx
  unsigned int v31; // esi
  __int64 result; // rax
  int v33; // r9d
  __int64 v34; // r15
  int v35; // eax
  unsigned int v36; // ecx
  LARGE_INTEGER v37; // rbx
  __int64 Elapsed; // rax
  __int64 v39; // rcx
  int v40; // eax
  unsigned int v41; // ecx
  __int64 v42; // rax
  CVisual *QuadPart; // rbx
  struct CInteraction *InteractionInternal; // rax
  int v45; // ecx
  int v46; // r8d
  int v47; // r9d
  struct CInteraction *v48; // r10
  __int64 v49; // rax
  unsigned __int64 v50; // r9
  unsigned int v51; // [rsp+20h] [rbp-79h]
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-59h] BYREF
  CVisual *v53; // [rsp+48h] [rbp-51h] BYREF
  __int64 v54; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v55[64]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v56; // [rsp+A0h] [rbp+7h]
  int v57; // [rsp+A8h] [rbp+Fh]
  char v58; // [rsp+ACh] [rbp+13h]
  __int64 v59; // [rsp+100h] [rbp+67h] BYREF
  __int64 v60; // [rsp+108h] [rbp+6Fh] BYREF
  struct SubchannelMaskInfo *v61; // [rsp+110h] [rbp+77h] BYREF
  LARGE_INTEGER v62; // [rsp+118h] [rbp+7Fh] BYREF

  v62 = a4;
  v4 = *((unsigned int *)a3 + 1);
  if ( (unsigned int)v4 >= *((_DWORD *)a2 + 104) )
    v8 = 0LL;
  else
    v8 = (_DWORD *)(*((_QWORD *)a2 + 51) + 24 * v4);
  v9 = *((_DWORD *)this + 4);
  if ( (unsigned int)~*((_DWORD *)this + 4) < 5 )
  {
    v10 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      v9,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      0x52u,
      0LL);
    v11 = -2147418113;
LABEL_48:
    MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_180289A70, 2u, v10, 0x138u, 0LL);
    return v11;
  }
  if ( *((_DWORD *)this + 12) != v9 )
    goto LABEL_5;
  memset_0(v55, 0, sizeof(v55));
  v57 = 18;
  v34 = 5LL;
  v56 = 0LL;
  v58 = 0;
  v35 = DynArrayImpl<1>::AddMultiple((char *)this + 24, 80LL, 5LL, &v62);
  v10 = v35;
  if ( v35 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0xE5u, 0LL);
  }
  else
  {
    v37 = v62;
    do
    {
      ((void (__fastcall *)(_QWORD, _QWORD))CExpressionValue::operator=)((LARGE_INTEGER)v37.QuadPart, v55);
      v37.QuadPart += 80LL;
      --v34;
    }
    while ( v34 );
  }
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(
      v9,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v10,
      0x5Bu,
      0LL);
  else
LABEL_5:
    v10 = 0;
  v11 = v10;
  if ( v10 < 0 )
    goto LABEL_48;
  v12 = *((unsigned int *)this + 4);
  v13 = 0LL;
  v61 = 0LL;
  *((_DWORD *)this + 4) = v12 + 1;
  v14 = (struct CExpressionValue *)(*((_QWORD *)this + 3) + 80 * v12);
  if ( v8[4] == 1 )
  {
    v13 = (struct SubchannelMaskInfo *)*((_QWORD *)a2 + 24);
    v61 = v13;
  }
  if ( v8[2] == 1 )
  {
    ValueFromCache = CExpression::ReadValueFromCache(a2, v8[3], v14, (bool *)&v62);
    v31 = ValueFromCache;
    if ( ValueFromCache < 0 )
    {
      v51 = 383;
    }
    else
    {
      if ( LOBYTE(v62.LowPart) )
        return 0LL;
      ValueFromCache = CExpressionValueStack::QueryObjectPropertyValue(v30, a2, a3, v50, v14, v13);
      v31 = ValueFromCache;
      if ( ValueFromCache < 0 )
      {
        v51 = 393;
      }
      else
      {
        ValueFromCache = CExpression::StoreValueToCache(a2, v8[3], v14);
        v31 = ValueFromCache;
        if ( ValueFromCache >= 0 )
          return 0LL;
        v51 = 399;
      }
    }
    goto LABEL_87;
  }
  if ( v8[2] == 2 )
  {
    v15 = *((unsigned int *)a3 + 1);
    v16.QuadPart = 0LL;
    v59 = 0LL;
    v62.QuadPart = 0LL;
    v60 = 0LL;
    if ( (unsigned int)v15 >= *((_DWORD *)a2 + 104) )
      v17 = 0LL;
    else
      v17 = (DWORD *)(*((_QWORD *)a2 + 51) + 24 * v15);
    if ( *(int *)(*((_QWORD *)a2 + 38) + 4LL) < 0 || CCommonRegistryData::LogExpressionPerfStats )
    {
      v60 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 272LL) + 88LL;
      if ( QueryPerformanceCounter(&PerformanceCount) )
        v16 = PerformanceCount;
      v62 = v16;
    }
    v18 = (*(__int64 (__fastcall **)(struct CExpression *, _QWORD, __int64 *))(*(_QWORD *)a2 + 280LL))(a2, v17[5], &v59);
    v20 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_180289A70, 2u, v18, 0xF4u, 0LL);
    }
    else
    {
      if ( v16.QuadPart )
      {
        Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v62);
        v39 = v60;
        ++*(_DWORD *)(v60 + 12);
        *(_QWORD *)(v39 + 48) += Elapsed;
      }
      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct CExpressionValue *))(*(_QWORD *)v59 + 144LL))(
              v59,
              *v17,
              v14);
      v20 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, &dword_180289A70, 2u, v21, 0xFBu, 0LL);
      }
      else if ( v61 && *((_BYTE *)v61 + 4) && (v40 = CExpressionValue::ApplyMaskToValue(v14, v61), v20 = v40, v40 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v41, &dword_180289A70, 2u, v40, 0x10Bu, 0LL);
      }
      else
      {
        v23 = *((_QWORD *)a2 + 22);
        v24 = v59;
        if ( v23 )
          v25 = *(_QWORD *)(v23 + 16);
        else
          v25 = 0LL;
        if ( (unsigned int)dword_180342EF0 > 4
          && (qword_180342F00 & 2) != 0
          && (qword_180342F08 & 2) == qword_180342F08
          && v25
          && v59
          && *v17 - 1 <= 1
          && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 56LL))(v25, 195LL)
          && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 56LL))(v24, 88LL) )
        {
          wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
            &v62,
            v25);
          v42 = *(_QWORD *)v24;
          v54 = v24;
          (*(void (__fastcall **)(__int64))(v42 + 8))(v24);
          QuadPart = (CVisual *)v62.QuadPart;
          *(_BYTE *)(v62.QuadPart + 264) |= 4u;
          if ( InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v24 + 192)) )
          {
            if ( CVisual::GetInteractionInternal(QuadPart) )
            {
              InteractionInternal = CVisual::GetInteractionInternal(QuadPart);
              if ( InteractionInternal == v48
                && (unsigned int)dword_180342EF0 > 4
                && (qword_180342F00 & 2) != 0
                && (qword_180342F08 & 2) == qword_180342F08 )
              {
                v62.LowPart = *v17;
                v60 = (__int64)v48;
                v61 = (struct SubchannelMaskInfo *)v24;
                v53 = QuadPart;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                  v45,
                  (unsigned int)&unk_1802E6CD7,
                  v46,
                  v47,
                  (__int64)&v62,
                  (__int64)&v53,
                  (__int64)&v61,
                  (__int64)&v60);
              }
            }
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v54);
          (*(void (__fastcall **)(CVisual *))(*(_QWORD *)QuadPart + 16LL))(QuadPart);
        }
        v20 = 0;
      }
    }
    if ( v59 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
    if ( v20 >= 0 )
    {
      v26 = *((_QWORD *)a2 + 38);
      v27.QuadPart = 0LL;
      v28 = 0LL;
      v62.QuadPart = 0LL;
      if ( *(int *)(v26 + 4) < 0 )
      {
        v28 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 272LL) + 88LL;
        if ( QueryPerformanceCounter(&v62) )
          v27 = v62;
        v62 = v27;
      }
      ValueFromCache = CExpression::StoreValueToCache(a2, v8[3], v14);
      v31 = ValueFromCache;
      if ( ValueFromCache >= 0 )
      {
        if ( v27.QuadPart )
        {
          v49 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v62);
          ++*(_DWORD *)(v28 + 16);
          *(_QWORD *)(v28 + 56) += v49;
        }
        return 0LL;
      }
      v51 = 349;
      goto LABEL_87;
    }
    ValueFromCache = CExpression::ReadValueFromCache(a2, v8[3], v14, (bool *)&v62);
    v31 = ValueFromCache;
    if ( ValueFromCache >= 0 )
    {
      if ( !LOBYTE(v62.LowPart) )
      {
        v31 = v20;
        v51 = 370;
        v33 = v20;
LABEL_38:
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v30, &dword_180289A70, 2u, v33, v51, 0LL);
        goto LABEL_39;
      }
      return 0LL;
    }
    v51 = 366;
LABEL_87:
    v33 = ValueFromCache;
    goto LABEL_38;
  }
  v31 = -2147418113;
  MilInstrumentationCheckHR_MaybeFailFast(v8[2] - 1, &dword_180289A70, 2u, -2147418113, 0x195u, 0LL);
LABEL_39:
  result = v31;
  if ( v14 )
    --*((_DWORD *)this + 4);
  return result;
}
