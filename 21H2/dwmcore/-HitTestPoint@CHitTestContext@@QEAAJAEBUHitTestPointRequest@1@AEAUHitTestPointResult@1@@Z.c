/*
 * XREFs of ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x18004E454
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x18004E250 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180017D8C (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ?GetInputQueueType@CVisual@@QEBA?AW4CompositionInputQueueType@@W4InputType@@@Z @ 0x180018828 (-GetInputQueueType@CVisual@@QEBA-AW4CompositionInputQueueType@@W4InputType@@@Z.c)
 *     ?GetInputType@CInputSinkStruct@@SA?AW4CompositionInputType@@W4InputType@@@Z @ 0x18001D978 (-GetInputType@CInputSinkStruct@@SA-AW4CompositionInputType@@W4InputType@@@Z.c)
 *     ?HasInputSink@CInteraction@@QEBA_NXZ @ 0x18004E890 (-HasInputSink@CInteraction@@QEBA_NXZ.c)
 *     ?InteractionMatchesHitTest@CHitTestContext@@AEBA_NW4InputType@@PEBVCInteraction@@@Z @ 0x18004E8B0 (-InteractionMatchesHitTest@CHitTestContext@@AEBA_NW4InputType@@PEBVCInteraction@@@Z.c)
 *     ?AdjustInputTypeForInteraction@CHitTestContext@@AEBA?AW4InputType@@W42@PEBVCInteraction@@@Z @ 0x18004E8F8 (-AdjustInputTypeForInteraction@CHitTestContext@@AEBA-AW4InputType@@W42@PEBVCInteraction@@@Z.c)
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x18004E91C (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 *     ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x18004EB18 (-HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z.c)
 *     ?EvaluateHitTestAttributesAndInputType@CHitTestContext@@AEAAXW4DIT_HITTESTATTRIBUTES@@K@Z @ 0x18004EB94 (-EvaluateHitTestAttributesAndInputType@CHitTestContext@@AEAAXW4DIT_HITTESTATTRIBUTES@@K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18009EE18 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800B7380 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?EvaluateHitTestCandidate@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x180228D28 (-EvaluateHitTestCandidate@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     ?ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ @ 0x180228EAC (-ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ.c)
 *     McTemplateU0qqp_EventWriteTransfer @ 0x180228F2C (McTemplateU0qqp_EventWriteTransfer.c)
 */

__int64 __fastcall CHitTestContext::HitTestPoint(
        CVisual **this,
        const struct CHitTestContext::HitTestPointRequest *a2,
        struct CHitTestContext::HitTestPointResult *a3)
{
  void *v3; // rdi
  CInteraction *v4; // r15
  struct CHitTestContext::HitTestPointResult *v5; // r13
  CVisual **v8; // rdi
  CVisual *v9; // r12
  CVisual *v10; // r8
  int v11; // ecx
  int v12; // r12d
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  _DWORD *v16; // r8
  unsigned int v17; // ebx
  __int64 v19; // rdx
  _BYTE *v20; // rcx
  unsigned int i; // eax
  CInteraction **v22; // rdi
  CInteraction *v23; // rdi
  char v24; // al
  char v25; // r12
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  char v29; // al
  __int64 v30; // rdx
  int InputType; // ecx
  __int64 v32; // rax
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // eax
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  int v38; // eax
  __int128 v39; // xmm1
  bool v40; // al
  int v41; // eax
  const struct CInteraction *v42; // rbx
  unsigned int v43; // r13d
  int v44; // [rsp+20h] [rbp-89h]
  __int64 v45; // [rsp+30h] [rbp-79h]
  unsigned int v46; // [rsp+38h] [rbp-71h]
  unsigned int v47; // [rsp+3Ch] [rbp-6Dh]
  void *InputHandle; // [rsp+40h] [rbp-69h]
  CVisual *v49; // [rsp+48h] [rbp-61h]
  int v50; // [rsp+50h] [rbp-59h]
  CVisual *v51; // [rsp+58h] [rbp-51h]
  __int128 v52; // [rsp+60h] [rbp-49h] BYREF
  __int128 v53; // [rsp+70h] [rbp-39h]
  __int128 v54; // [rsp+80h] [rbp-29h]
  __int128 v55; // [rsp+90h] [rbp-19h]
  int v56; // [rsp+A0h] [rbp-9h]
  _QWORD v57[10]; // [rsp+B0h] [rbp+7h] BYREF
  bool v58; // [rsp+110h] [rbp+67h]
  char v59; // [rsp+118h] [rbp+6Fh]
  char v61; // [rsp+128h] [rbp+7Fh]

  v3 = 0LL;
  InputHandle = 0LL;
  v4 = 0LL;
  v61 = 0;
  v5 = a3;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
    McTemplateU0qqp_EventWriteTransfer(
      (_DWORD)this,
      (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Start,
      *((_DWORD *)a2 + 2),
      *((_DWORD *)a2 + 3),
      *(_QWORD *)(*(_QWORD *)a2 + 56LL));
  CHitTestContext::EvaluateHitTestAttributesAndInputType(this, *((unsigned int *)a2 + 5), *((unsigned int *)a2 + 4));
  v44 = *((_DWORD *)this + 52);
  CHitTestContext::HitTestTreeWalk(this, *(_QWORD *)a2);
  if ( (unsigned int)(*((_DWORD *)this + 24) - 2) <= 4 )
  {
    v8 = (CVisual **)this[15];
    v9 = this[16];
    if ( v8 != (CVisual **)v9 )
    {
      while ( 1 )
      {
        v42 = v8[1];
        v43 = CHitTestContext::AdjustInputTypeForInteraction(this, *((unsigned int *)this + 24), v42);
        if ( (*((_BYTE *)v42 + 184) & 3) != 0 )
        {
          InputTraceLogging::GestureTargeting::ForcePalmRejection();
          v61 = 1;
        }
        if ( (*(unsigned int (__fastcall **)(const struct CInteraction *, _QWORD, _QWORD))(*(_QWORD *)v42 + 80LL))(
               v42,
               v43,
               0LL)
          && (unsigned __int8)CHitTestContext::InteractionMatchesHitTest(this, v43, v42) )
        {
          break;
        }
        InputTraceLogging::DWM::EvaluateHitTestCandidate(v42, 0);
        v8 += 2;
        if ( v8 == (CVisual **)v9 )
          goto LABEL_71;
      }
      InputTraceLogging::DWM::EvaluateHitTestCandidate(v42, 1);
      this[14] = *v8;
LABEL_71:
      v5 = a3;
    }
    v3 = 0LL;
  }
  v10 = this[14];
  v49 = v10;
  if ( !v10 )
    goto LABEL_14;
  v11 = *((_DWORD *)this + 24);
  v12 = 0;
  v13 = 0LL;
  v14 = *(_QWORD *)a2;
  v52 = _xmm;
  v53 = _xmm;
  v51 = *(CVisual **)(v14 + 56);
  v15 = 0LL;
  v50 = v11;
  v47 = 0;
  v58 = v11 == 0;
  v54 = _xmm;
  v55 = _xmm;
  v59 = 0;
  LOWORD(v56) = 32085;
  v45 = 0LL;
  do
  {
    if ( !v15 )
    {
      v15 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v10 + 304LL))(v10);
      v10 = v49;
      v45 = v15;
    }
    v16 = (_DWORD *)*((_QWORD *)v10 + 28);
    if ( (*v16 & 0x800000) == 0 )
      goto LABEL_11;
    v19 = (unsigned int)v16[1];
    v20 = v16 + 2;
    for ( i = 0; i < (unsigned int)v19; ++v20 )
    {
      if ( *v20 == 9 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v19 )
      v22 = 0LL;
    else
      v22 = (CInteraction **)((char *)v16 + 8LL * i - (((_BYTE)v19 + 15) & 7) + v19 + 15);
    v23 = *v22;
    if ( !v23 )
      goto LABEL_30;
    v46 = CHitTestContext::AdjustInputTypeForInteraction(this, *((unsigned int *)this + 24), v23);
    v24 = CHitTestContext::InteractionMatchesHitTest(this, v46, v23);
    v25 = v24;
    if ( *((_DWORD *)this + 24) != 6 )
      goto LABEL_24;
    if ( !v59 )
    {
      if ( v4 )
        goto LABEL_26;
      if ( v24 )
      {
LABEL_31:
        v4 = v23;
        goto LABEL_26;
      }
      if ( ((*(unsigned int (__fastcall **)(CInteraction *, __int64, __int64, _QWORD, int))(*(_QWORD *)v23 + 88LL))(
              v23,
              5LL,
              32831LL,
              0LL,
              v44)
         || (*(unsigned int (__fastcall **)(CInteraction *, __int64, __int64, _QWORD))(*(_QWORD *)v23 + 88LL))(
              v23,
              6LL,
              32831LL,
              0LL))
        && (*((_BYTE *)v23 + 184) & 8) == 0 )
      {
        v59 = 1;
        goto LABEL_26;
      }
      v59 = 0;
LABEL_24:
      if ( v4 )
        goto LABEL_26;
      goto LABEL_25;
    }
    if ( !v24 )
      goto LABEL_24;
    if ( v4 )
    {
      if ( (*((_BYTE *)v4 + 184) & 8) != 0 && (*((_BYTE *)v23 + 184) & 8) == 0 )
      {
        v4 = 0LL;
        InputHandle = 0LL;
        v58 = 0;
      }
      goto LABEL_24;
    }
LABEL_25:
    if ( v25 )
      goto LABEL_31;
LABEL_26:
    if ( !v58 )
      v58 = (*(unsigned int (__fastcall **)(CInteraction *, _QWORD, _QWORD))(*(_QWORD *)v23 + 80LL))(v23, v46, 0LL) != 0;
    if ( !CInteraction::HasInputSink(v23) )
    {
      v12 = v47;
LABEL_30:
      v15 = v45;
      goto LABEL_11;
    }
    if ( !InputHandle && v25 && (!v50 || (unsigned int)CVisual::GetInputQueueType(v49)) )
    {
      InputHandle = CVisual::GetInputHandle(v49);
      v13 = **(_QWORD **)&CVisual::GetInputLuid(v49, v57);
      CVisual::GetWorldTransform(v49, *(_QWORD *)a2, 4LL, &v52, 0LL, 0LL);
    }
    if ( v47 < *(_DWORD *)v5 )
    {
      v26 = *((_QWORD *)v23 + 12);
      v27 = 0LL;
      if ( v26 )
        v27 = *(_QWORD *)(v26 + 64);
      *(_QWORD *)(*((_QWORD *)v5 + 1) + 8LL * v47) = v27;
    }
    v15 = v45;
    v12 = ++v47;
    if ( !v45 )
    {
      v28 = *((_QWORD *)v23 + 12);
      if ( v28 )
        v29 = *(_BYTE *)(v28 + 104);
      else
        v29 = 0;
      if ( !v29 )
        goto LABEL_30;
      InputType = CInputSinkStruct::GetInputType(v46);
      if ( !v30 )
        goto LABEL_64;
      v32 = v30 + 64;
      while ( v30 != v32 )
      {
        if ( InputType == *(_DWORD *)v30 )
          goto LABEL_49;
        v30 += 16LL;
      }
      v30 = 0LL;
LABEL_49:
      if ( v30 )
        v15 = *(_QWORD *)(v30 + 8);
      else
LABEL_64:
        v15 = 0LL;
      v45 = v15;
    }
LABEL_11:
    if ( v49 == v51 )
      break;
    v10 = (CVisual *)*((_QWORD *)v49 + 10);
    v49 = v10;
  }
  while ( v10 );
  v3 = InputHandle;
  *((_QWORD *)v5 + 3) = v15;
  if ( !InputHandle || !v4 || !v58 )
    goto LABEL_14;
  v33 = NtDuplicateCompositionInputSink(InputHandle, (char *)v5 + 32);
  if ( v33 < 0 )
  {
    v17 = v33 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v34, &dword_1802DD020, 2u, v33 | 0x10000000, 0x29Eu, 0LL);
  }
  else
  {
    v35 = *((_DWORD *)v4 + 424);
    v36 = v53;
    *((_OWORD *)v5 + 3) = v52;
    *((_DWORD *)v5 + 29) = v35;
    v37 = v54;
    v38 = v56;
    *((_OWORD *)v5 + 4) = v36;
    *((_QWORD *)v5 + 5) = v13;
    v39 = v55;
    *((_OWORD *)v5 + 5) = v37;
    *((_DWORD *)v5 + 4) = v12;
    *((_OWORD *)v5 + 6) = v39;
    *((_DWORD *)v5 + 28) = v38;
    v40 = *((_DWORD *)a2 + 4) != 4
       || *((_DWORD *)this + 24) == 6
       && (*(unsigned int (__fastcall **)(CInteraction *, __int64))(*(_QWORD *)v4 + 80LL))(v4, 6LL);
    *((_BYTE *)v5 + 120) = v40;
    v41 = *((_DWORD *)a2 + 6);
    *((_BYTE *)v4 + 184) &= ~2u;
    *((_DWORD *)v4 + 428) = v41;
    *((_BYTE *)v4 + 184) |= 2 * (v61 & 1);
LABEL_14:
    InputTraceLogging::DWM::HitTestTreeWalkResult(
      *((unsigned int *)a2 + 4),
      *((unsigned int *)a2 + 5),
      *((_QWORD *)v5 + 4),
      *((_QWORD *)v5 + 3),
      v3,
      v4);
    v17 = 0;
  }
  *((_DWORD *)this + 36) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
    McTemplateU0qqp_EventWriteTransfer(
      (unsigned int)this[14],
      (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Stop,
      *((_DWORD *)a2 + 2),
      *((_DWORD *)a2 + 3),
      (char)this[14]);
  return v17;
}
