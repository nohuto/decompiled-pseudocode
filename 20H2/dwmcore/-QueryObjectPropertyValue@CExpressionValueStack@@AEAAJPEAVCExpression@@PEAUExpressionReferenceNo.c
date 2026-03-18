/*
 * XREFs of ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x1801FE7E4
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800679D0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z @ 0x1800BD68C (--$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x1801AA94C (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x1801AAA8C (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801B0EAC (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 *     ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x1801C8230 (-CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCReso.c)
 *     ?ShouldLogPerfStats@CBaseExpression@@IEAA_NXZ @ 0x1801D9D60 (-ShouldLogPerfStats@CBaseExpression@@IEAA_NXZ.c)
 *     ?GetReferenceInfoFromNode@CExpression@@QEAAPEAUExpressionReferenceInfo@@PEAUExpressionReferenceNode@@@Z @ 0x1801FB670 (-GetReferenceInfoFromNode@CExpression@@QEAAPEAUExpressionReferenceInfo@@PEAUExpressionReferenceN.c)
 */

__int64 __fastcall CExpressionValueStack::QueryObjectPropertyValue(
        CExpressionValueStack *this,
        struct CExpression *a2,
        struct ExpressionReferenceNode *a3,
        __int64 a4,
        struct CExpressionValue *a5,
        struct SubchannelMaskInfo *a6)
{
  __int64 v7; // rbx
  __int64 v8; // rsi
  struct ExpressionReferenceInfo *ReferenceInfoFromNode; // r15
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  LONGLONG Elapsed; // rax
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  struct CResource *v19; // rdx
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF
  struct CResource *v22; // [rsp+68h] [rbp+20h] BYREF

  v22 = 0LL;
  v7 = 0LL;
  v21 = 0LL;
  v8 = 0LL;
  ReferenceInfoFromNode = CExpression::GetReferenceInfoFromNode(a2, a3);
  if ( CBaseExpression::ShouldLogPerfStats(a2) )
  {
    v8 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 272LL) + 88LL;
    QpcStopwatch::Start((QpcStopwatch *)&v21);
    v7 = v21;
  }
  v10 = (*(__int64 (__fastcall **)(struct CExpression *, _QWORD, struct CResource **))(*(_QWORD *)a2 + 288LL))(
          a2,
          *((unsigned int *)ReferenceInfoFromNode + 5),
          &v22);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180288F50, 2u, v10, 0xF4u, 0LL);
  }
  else
  {
    if ( v7 )
    {
      Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v21);
      ++*(_DWORD *)(v8 + 12);
      *(_QWORD *)(v8 + 48) += Elapsed;
    }
    v14 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, struct CExpressionValue *))(*(_QWORD *)v22 + 144LL))(
            v22,
            *(unsigned int *)ReferenceInfoFromNode,
            a5);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_180288F50, 2u, v14, 0xFBu, 0LL);
    }
    else if ( a6 && *((_BYTE *)a6 + 4) && (v16 = CExpressionValue::ApplyMaskToValue(a5, a6), v12 = v16, v16 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_180288F50, 2u, v16, 0x10Bu, 0LL);
    }
    else
    {
      v18 = *((_QWORD *)a2 + 22);
      if ( v18 )
        v19 = *(struct CResource **)(v18 + 16);
      else
        v19 = 0LL;
      CInteractionTracker::CheckTargetsForInteractionSource(ReferenceInfoFromNode, v19, v22);
      v12 = 0;
    }
  }
  ReleaseInterface<CResource>((__int64 *)&v22);
  return v12;
}
