/*
 * XREFs of ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800716AC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCVisual@@@Z @ 0x1800458B4 (--0-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCVisual@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180049584 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x18006EF2C (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x1800719E4 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800EF978 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x1801FDC90 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x1801FDDFC (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801FE380 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@44@Z @ 0x1802185C8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x18025008C (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x180264F84 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::ProcessReferenceNode(
        CExpressionValueStack *this,
        struct CExpression *a2,
        struct ExpressionReferenceNode *a3,
        __int64 a4)
{
  __int64 v4; // rax
  CExpressionValueStack *v6; // r14
  _DWORD *v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rcx
  struct SubchannelMaskInfo *v10; // r12
  struct CExpressionValue *v11; // r15
  struct ExpressionReferenceNode *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // r14d
  _DWORD *v20; // rdi
  int v21; // eax
  unsigned int v22; // ecx
  _QWORD *v23; // rbx
  __int64 v24; // r14
  __int64 v25; // rax
  struct ExpressionReferenceNode *v26; // rbx
  __int64 v27; // r14
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // edi
  int v32; // r9d
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // ebx
  __int64 v36; // rbx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  __int64 v39; // rbx
  __int64 Elapsed; // rax
  CVisual *v41; // rcx
  int v42; // eax
  unsigned int v43; // ecx
  __int64 v44; // rax
  CVisual *v45; // rbx
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v47; // r10
  int v48; // ecx
  int v49; // r8d
  int v50; // r9d
  _DWORD *v51; // r10
  __int64 v52; // rax
  int ValueFromCache; // eax
  CExpressionValueStack *v54; // rcx
  unsigned __int64 v55; // r9
  unsigned int v56; // [rsp+28h] [rbp-79h]
  unsigned int v57; // [rsp+28h] [rbp-79h]
  _DWORD *v58; // [rsp+48h] [rbp-59h] BYREF
  __int64 v59; // [rsp+50h] [rbp-51h] BYREF
  CVisual *v60; // [rsp+58h] [rbp-49h] BYREF
  __int64 v61; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v62[64]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v63; // [rsp+A8h] [rbp+7h] BYREF
  int v64; // [rsp+B0h] [rbp+Fh]
  char v65; // [rsp+B4h] [rbp+13h]
  CExpressionValueStack *v66; // [rsp+108h] [rbp+67h] BYREF
  CVisual *v67; // [rsp+110h] [rbp+6Fh] BYREF
  struct ExpressionReferenceNode *v68; // [rsp+118h] [rbp+77h] BYREF
  __int64 v69; // [rsp+120h] [rbp+7Fh] BYREF

  v69 = a4;
  v68 = a3;
  v66 = this;
  v4 = *((unsigned int *)a3 + 1);
  v6 = this;
  if ( (unsigned int)v4 >= *((_DWORD *)a2 + 110) )
  {
    v7 = 0LL;
  }
  else
  {
    LODWORD(this) = 3 * v4;
    v7 = (_DWORD *)(*((_QWORD *)a2 + 54) + 24 * v4);
  }
  v8 = 5LL;
  if ( (unsigned int)~*((_DWORD *)v6 + 4) < 5 )
  {
    v35 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      0x53u,
      0LL);
    v30 = -2147418113;
LABEL_49:
    MilInstrumentationCheckHR_MaybeFailFast(v37, &dword_18032C888, 2u, v35, 0x148u, 0LL);
    return v30;
  }
  if ( *((_DWORD *)v6 + 12) != *((_DWORD *)v6 + 4) )
    goto LABEL_5;
  memset_0(v62, 0, sizeof(v62));
  v63 = 0LL;
  v64 = 18;
  v65 = 0;
  v33 = DynArrayImpl<1>::AddMultiple((char *)v6 + 24, 80LL, 5LL, &v69);
  v35 = v33;
  if ( v33 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0xE5u, 0LL);
    v30 = v35;
    MilInstrumentationCheckHR_MaybeFailFast(
      v38,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v35,
      0x5Cu,
      0LL);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v63);
    goto LABEL_49;
  }
  v36 = v69;
  do
  {
    CExpressionValue::operator=(v36, v62);
    v36 += 80LL;
    --v8;
  }
  while ( v8 );
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v63);
  a3 = v68;
LABEL_5:
  v9 = *((unsigned int *)v6 + 4);
  v10 = 0LL;
  *((_DWORD *)v6 + 4) = v9 + 1;
  v11 = (struct CExpressionValue *)(*((_QWORD *)v6 + 3) + 80 * v9);
  if ( v7[4] == 1 )
    v10 = (struct SubchannelMaskInfo *)*((_QWORD *)a2 + 25);
  if ( v7[2] == 1 )
  {
    ValueFromCache = CExpression::ReadValueFromCache(a2, v7[3], v11, (bool *)&v66);
    v30 = ValueFromCache;
    if ( ValueFromCache < 0 )
    {
      v57 = 399;
    }
    else
    {
      if ( (_BYTE)v66 )
        return 0;
      ValueFromCache = CExpressionValueStack::QueryObjectPropertyValue(v54, a2, v68, v55, v11, v10);
      v30 = ValueFromCache;
      if ( ValueFromCache < 0 )
      {
        v57 = 409;
      }
      else
      {
        ValueFromCache = CExpression::StoreValueToCache(a2, v7[3], v11);
        v30 = ValueFromCache;
        if ( ValueFromCache >= 0 )
          return 0;
        v57 = 415;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v54, &dword_18032C888, 2u, ValueFromCache, v57, 0LL);
  }
  else
  {
    if ( v7[2] == 2 )
    {
      v69 = 0LL;
      v12 = 0LL;
      v13 = *((unsigned int *)a3 + 1);
      v68 = 0LL;
      if ( (unsigned int)v13 >= *((_DWORD *)a2 + 110) )
        v14 = 0LL;
      else
        v14 = *((_QWORD *)a2 + 54) + 24 * v13;
      v15 = *((_QWORD *)a2 + 41);
      v58 = (_DWORD *)v14;
      if ( (*(_DWORD *)(v15 + 4) & 0x20000000) != 0 || CCommonRegistryData::LogExpressionPerfStats )
      {
        v39 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 424LL);
        QpcStopwatch::Start((QpcStopwatch *)&v68);
        v16 = v39 + 100;
        v67 = (CVisual *)(v39 + 136);
        v12 = v68;
      }
      else
      {
        v16 = 12LL;
        v67 = (CVisual *)48;
      }
      v17 = (*(__int64 (__fastcall **)(struct CExpression *, _QWORD, __int64 *))(*(_QWORD *)a2 + 288LL))(
              a2,
              *(unsigned int *)(v14 + 20),
              &v69);
      v19 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, &dword_18032C888, 2u, v17, 0x104u, 0LL);
      }
      else
      {
        if ( v12 )
        {
          Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v68);
          v41 = v67;
          ++*(_DWORD *)v16;
          *(_QWORD *)v41 += Elapsed;
        }
        v20 = v58;
        v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct CExpressionValue *))(*(_QWORD *)v69 + 136LL))(
                v69,
                (unsigned int)*v58,
                v11);
        v19 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, &dword_18032C888, 2u, v21, 0x10Bu, 0LL);
        }
        else if ( v10 && *((_BYTE *)v10 + 4) && (v42 = CExpressionValue::ApplyMaskToValue(v11, v10), v19 = v42, v42 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v43, &dword_18032C888, 2u, v42, 0x11Bu, 0LL);
        }
        else
        {
          v23 = (_QWORD *)*((_QWORD *)a2 + 23);
          v24 = v69;
          if ( v23 )
            v23 = (_QWORD *)v23[2];
          if ( (unsigned int)dword_1803D0EF0 > 4
            && (unsigned __int8)tlgKeywordOn(&dword_1803D0EF0, 2LL)
            && v23
            && v69
            && (unsigned int)(*v58 - 1) <= 1
            && (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v23 + 56LL))(v23, 195LL)
            && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 56LL))(v24, 88LL) )
          {
            wil::com_ptr_t<CVisual,wil::err_returncode_policy>::com_ptr_t<CVisual,wil::err_returncode_policy>(
              &v67,
              (__int64)v23);
            v44 = *(_QWORD *)v24;
            v61 = v24;
            (*(void (__fastcall **)(__int64))(v44 + 8))(v24);
            v45 = v67;
            *((_BYTE *)v67 + 272) |= 8u;
            if ( InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v24 + 200)) )
            {
              if ( CVisual::GetInteractionInternal(v45) )
              {
                InteractionInternal = CVisual::GetInteractionInternal(v45);
                if ( InteractionInternal == v47
                  && (unsigned int)dword_1803D0EF0 > 4
                  && (unsigned __int8)tlgKeywordOn(&dword_1803D0EF0, 2LL) )
                {
                  LODWORD(v68) = *v20;
                  v58 = v51;
                  v59 = v24;
                  v60 = v45;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                    v48,
                    (unsigned int)&unk_180371393,
                    v49,
                    v50,
                    (__int64)&v68,
                    (__int64)&v60,
                    (__int64)&v59,
                    (__int64)&v58);
                }
              }
            }
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v61);
            wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v67);
          }
          v19 = 0;
        }
      }
      if ( v69 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
      if ( v19 >= 0 )
      {
        v25 = *((_QWORD *)a2 + 41);
        v26 = 0LL;
        v27 = 0LL;
        v68 = 0LL;
        if ( (*(_DWORD *)(v25 + 4) & 0x20000000) != 0 )
        {
          v27 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 424LL) + 88LL;
          QpcStopwatch::Start((QpcStopwatch *)&v68);
          v26 = v68;
        }
        v28 = CExpression::StoreValueToCache(a2, v7[3], v11);
        v30 = v28;
        if ( v28 >= 0 )
        {
          if ( v26 )
          {
            v52 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v68);
            ++*(_DWORD *)(v27 + 16);
            *(_QWORD *)(v27 + 56) += v52;
          }
          return 0;
        }
        v56 = 365;
        goto LABEL_71;
      }
      v28 = CExpression::ReadValueFromCache(a2, v7[3], v11, (bool *)&v68);
      v30 = v28;
      if ( v28 < 0 )
      {
        v56 = 382;
LABEL_71:
        v32 = v28;
        goto LABEL_39;
      }
      if ( !(_BYTE)v68 )
      {
        v30 = v19;
        v56 = 386;
        v32 = v19;
LABEL_39:
        MilInstrumentationCheckHR_MaybeFailFast(v29, &dword_18032C888, 2u, v32, v56, 0LL);
        v6 = v66;
        goto LABEL_40;
      }
      return 0;
    }
    v30 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(v7[2] - 1, &dword_18032C888, 2u, -2147418113, 0x1A5u, 0LL);
  }
LABEL_40:
  if ( v11 )
    --*((_DWORD *)v6 + 4);
  return v30;
}
