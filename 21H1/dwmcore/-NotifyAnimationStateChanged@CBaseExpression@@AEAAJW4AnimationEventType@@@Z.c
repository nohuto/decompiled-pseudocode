/*
 * XREFs of ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180097AAC
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180042060 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180096E5C (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800965EC (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x180097F2C (-TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800993C0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z @ 0x1800CD2E0 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@@@Z @ 0x1801B43B4 (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x1801DDA8C (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 *     ?GetPathData@CPathData@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ @ 0x1801DDAA8 (-GetPathData@CPathData@@QEBA-AV-$span@$$CBE$0-0@gsl@@XZ.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationStateChanged(__int64 a1, int a2)
{
  unsigned int v4; // esi
  int v5; // edi
  __int64 v6; // r14
  const struct SubchannelMaskInfo *v7; // r8
  float v8; // xmm0_4
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  __int64 v14; // rax
  unsigned int v15; // ecx
  int v16; // eax
  __int64 v17; // rcx
  int v19; // edi
  int v20; // edi
  int v21; // edi
  __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int16 v25; // cx
  void *v26; // rax
  __int128 *v27; // rdx
  __int64 v28; // rax
  unsigned int v29; // ecx
  __int64 v30; // rax
  unsigned int v31; // ecx
  __int64 v32; // rax
  int v33; // edi
  __int64 v34; // rax
  unsigned int v35; // ecx
  __int64 v36; // rax
  unsigned int v37; // ecx
  __int64 v38; // rax
  struct CAnimationLoggingManager *AnimationLoggingManagerNoRef; // rax
  __int64 v40; // r8
  int v41; // eax
  __int64 v42; // rcx
  void (*v43)(void); // rax
  __int64 v44; // rax
  unsigned int v45; // ecx
  __int64 v46; // rax
  unsigned int v47; // ecx
  __int64 v48; // rax
  unsigned int v49; // ecx
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // ecx
  unsigned int v53; // [rsp+20h] [rbp-E0h]
  __int64 v54; // [rsp+38h] [rbp-C8h]
  __int128 *v55; // [rsp+38h] [rbp-C8h]
  __int128 v56; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v57; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v58; // [rsp+70h] [rbp-90h]
  _OWORD v59[4]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v60; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v61; // [rsp+D0h] [rbp-30h]
  __int128 v62; // [rsp+E0h] [rbp-20h]
  __int128 v63; // [rsp+F0h] [rbp-10h]
  __int64 v64; // [rsp+100h] [rbp+0h]
  int v65; // [rsp+108h] [rbp+8h]
  char v66; // [rsp+10Ch] [rbp+Ch]
  _DWORD v67[16]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v68; // [rsp+150h] [rbp+50h]
  int v69; // [rsp+158h] [rbp+58h]
  char v70; // [rsp+15Ch] [rbp+5Ch]

  v4 = 0;
  memset_0(v67, 0, sizeof(v67));
  v5 = 18;
  v68 = 0LL;
  v69 = 18;
  v70 = 0;
  if ( a2 == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 8LL, a1);
    if ( (*(_BYTE *)(a1 + 208) & 0x40) != 0 )
    {
      AnimationLoggingManagerNoRef = CBaseExpression::GetAnimationLoggingManagerNoRef((CBaseExpression *)a1);
      CAnimationLoggingManager::LogAnimationEnded(
        AnimationLoggingManagerNoRef,
        *(_QWORD *)(a1 + 160),
        v40,
        *(unsigned int *)(a1 + 200),
        *(_DWORD *)(a1 + 184),
        0);
    }
  }
  else if ( a2 == 2 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 9LL, a1);
  }
  if ( CNotificationResource::ShouldNotify((CNotificationResource *)a1) )
  {
    memset_0(&v60, 0, 0x40uLL);
    v64 = 0LL;
    v65 = 18;
    v6 = 0LL;
    v66 = 0;
    if ( a2 == 8 && ((*(_BYTE *)(a1 + 208) & 2) == 0 || !*(_BYTE *)(a1 + 140)) || a2 == 16 )
    {
      a2 = 16;
      goto LABEL_48;
    }
    if ( CBaseExpression::TryGetTargetValue((CBaseExpression *)a1, (struct CExpressionValue *)v67) )
    {
      v7 = *(const struct SubchannelMaskInfo **)(a1 + 192);
      if ( v7 )
      {
        v41 = CBaseExpression::MergeValueWithMask(
                (const struct CExpressionValue *)v67,
                (const struct CExpressionValue *)(a1 + 64),
                v7,
                (struct CExpressionValue *)&v60);
        v4 = v41;
        if ( v41 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x57Cu, 0LL);
          if ( !v64 )
            goto LABEL_28;
          v43 = *(void (**)(void))(*(_QWORD *)v64 + 16LL);
          goto LABEL_89;
        }
      }
      else
      {
        if ( *(_DWORD *)(a1 + 144) == 11 )
          goto LABEL_14;
        CExpressionValue::CopyFrom((CExpressionValue *)&v60, (const struct CExpressionValue *)(a1 + 64));
      }
      v6 = v64;
    }
    else
    {
      a2 = 16;
    }
LABEL_14:
    if ( a2 != 16 )
    {
      v5 = v69;
      LODWORD(v8) = v60;
      goto LABEL_16;
    }
LABEL_48:
    v67[0] = 0;
    v8 = 0.0;
    LODWORD(v60) = 0;
    v69 = 18;
    v70 = 1;
LABEL_16:
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1080LL);
    v10 = *(_QWORD *)(v9 + 48);
    if ( v5 > 69 )
    {
      v19 = v5 - 70;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( !v20 )
        {
          v56 = v60;
          v51 = *(_QWORD *)(a1 + 48);
          if ( v51 )
            v52 = *(_DWORD *)(v51 + 68);
          else
            v52 = 0;
          *(_QWORD *)&v57 = v52;
          *((_QWORD *)&v57 + 1) = *(unsigned int *)(a1 + 56);
          LOWORD(v53) = 6;
          v16 = CoreUICallSend(v10, &v57, 2LL, 0LL, v53, &unk_1802CFAB0, a2, &v56);
          goto LABEL_25;
        }
        v21 = v20 - 33;
        if ( !v21 )
        {
          v22 = *(_QWORD *)(a1 + 48);
          v57 = v60;
          v58 = v61;
          if ( v22 )
            v23 = *(_DWORD *)(v22 + 68);
          else
            v23 = 0;
          v24 = v23;
          v25 = 7;
          *(_QWORD *)&v56 = v24;
          *((_QWORD *)&v56 + 1) = *(unsigned int *)(a1 + 56);
          v55 = &v57;
          v26 = &unk_1802CFAB6;
          goto LABEL_39;
        }
        if ( v21 == 161 )
        {
          v28 = *(_QWORD *)(a1 + 48);
          v59[0] = v60;
          v59[1] = v61;
          v59[2] = v62;
          v59[3] = v63;
          if ( v28 )
            v29 = *(_DWORD *)(v28 + 68);
          else
            v29 = 0;
          *(_QWORD *)&v56 = v29;
          *((_QWORD *)&v56 + 1) = *(unsigned int *)(a1 + 56);
          LOWORD(v53) = 8;
          v16 = CoreUICallSend(v10, &v56, 2LL, 0LL, v53, &unk_1802CFABC, a2, v59);
          goto LABEL_25;
        }
LABEL_80:
        v4 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024809, 0x608u, 0LL);
LABEL_27:
        if ( !v6 )
          goto LABEL_28;
        v43 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
LABEL_89:
        v43();
        goto LABEL_28;
      }
      v56 = v60;
      v30 = *(_QWORD *)(a1 + 48);
      if ( v30 )
        v31 = *(_DWORD *)(v30 + 68);
      else
        v31 = 0;
      v32 = v31;
      v25 = 5;
      *(_QWORD *)&v57 = v32;
      *((_QWORD *)&v57 + 1) = *(unsigned int *)(a1 + 56);
      v55 = &v56;
      v26 = &unk_1802CFAAA;
    }
    else
    {
      if ( v5 != 69 )
      {
        v11 = v5 - 11;
        if ( !v11 )
        {
          CPathData::GetPathData(*(_QWORD *)(a1 + 128), &v56);
          v46 = *(_QWORD *)(a1 + 48);
          if ( v46 )
            v47 = *(_DWORD *)(v46 + 68);
          else
            v47 = 0;
          *(_QWORD *)&v57 = v47;
          *((_QWORD *)&v57 + 1) = *(unsigned int *)(a1 + 56);
          LOWORD(v53) = 9;
          v16 = CoreUICallSend(v10, &v57, 2LL, 0LL, v53, &unk_1802CFAC2, a2, *((_QWORD *)&v56 + 1));
          goto LABEL_25;
        }
        v12 = v11 - 6;
        if ( !v12 )
        {
          v44 = *(_QWORD *)(a1 + 48);
          if ( v44 )
            v45 = *(_DWORD *)(v44 + 68);
          else
            v45 = 0;
          *(_QWORD *)&v56 = v45;
          *((_QWORD *)&v56 + 1) = *(unsigned int *)(a1 + 56);
          LODWORD(v54) = (unsigned __int8)v60;
          LOWORD(v53) = 0;
          v16 = CoreUICallSend(
                  v10,
                  &v56,
                  2LL,
                  0LL,
                  v53,
                  &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_7Gt_wATPZFc_PkcSd78VpZYfR44,
                  a2,
                  v54);
          goto LABEL_25;
        }
        v13 = v12 - 1;
        if ( !v13 )
        {
          v14 = *(_QWORD *)(a1 + 48);
          if ( v14 )
            v15 = *(_DWORD *)(v14 + 68);
          else
            v15 = 0;
          *(_QWORD *)&v56 = v15;
          *((_QWORD *)&v56 + 1) = *(unsigned int *)(a1 + 56);
          LOWORD(v53) = 1;
          v16 = CoreUICallSend(v10, &v56, 2LL, 0LL, v53, &unk_1802CFA94, a2, v8);
          goto LABEL_25;
        }
        v33 = v13 - 17;
        if ( !v33 )
        {
          v34 = *(_QWORD *)(a1 + 48);
          *(_QWORD *)&v57 = __PAIR64__(DWORD1(v60), LODWORD(v8));
          if ( v34 )
            v35 = *(_DWORD *)(v34 + 68);
          else
            v35 = 0;
          *(_QWORD *)&v56 = v35;
          *((_QWORD *)&v56 + 1) = *(unsigned int *)(a1 + 56);
          LOWORD(v53) = 2;
          v16 = CoreUICallSend(v10, &v56, 2LL, 0LL, v53, &unk_1802CFA98, a2, &v57);
          goto LABEL_25;
        }
        if ( v33 == 17 )
        {
          DWORD2(v57) = DWORD2(v60);
          v36 = *(_QWORD *)(a1 + 48);
          *(_QWORD *)&v57 = v60;
          if ( v36 )
            v37 = *(_DWORD *)(v36 + 68);
          else
            v37 = 0;
          v38 = v37;
          v25 = 3;
          *(_QWORD *)&v56 = v38;
          *((_QWORD *)&v56 + 1) = *(unsigned int *)(a1 + 56);
          v55 = &v57;
          v26 = &unk_1802CFA9E;
LABEL_39:
          v27 = &v56;
LABEL_40:
          LOWORD(v53) = v25;
          v16 = CoreUICallSend(v10, v27, 2LL, 0LL, v53, v26, a2, v55);
LABEL_25:
          v4 = v16;
          if ( (int)(v16 + 0x80000000) < 0 || v16 == -2018375675 )
            v4 = 0;
          else
            MilInstrumentationCheckHR_MaybeFailFast(0x80000000LL, 0LL, 0, v16, 0x60Fu, 0LL);
          goto LABEL_27;
        }
        goto LABEL_80;
      }
      v56 = v60;
      v48 = *(_QWORD *)(a1 + 48);
      if ( v48 )
        v49 = *(_DWORD *)(v48 + 68);
      else
        v49 = 0;
      v50 = v49;
      v25 = 4;
      *(_QWORD *)&v57 = v50;
      *((_QWORD *)&v57 + 1) = *(unsigned int *)(a1 + 56);
      v55 = &v56;
      v26 = &unk_1802CFAA4;
    }
    v27 = &v57;
    goto LABEL_40;
  }
LABEL_28:
  v17 = v68;
  if ( v68 )
  {
    v68 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v4;
}
