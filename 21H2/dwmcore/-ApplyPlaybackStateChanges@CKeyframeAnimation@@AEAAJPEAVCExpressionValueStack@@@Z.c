/*
 * XREFs of ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18004E930
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004E1B0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180019498 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x180042190 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x18004F31C (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 *     ?ToMilliseconds@TimeDelta@@QEBAHXZ @ 0x18004F3E0 (-ToMilliseconds@TimeDelta@@QEBAHXZ.c)
 *     ?GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z @ 0x18004F468 (-GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z.c)
 *     ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x18004F718 (-Pause@CKeyframeAnimation@@AEAAXXZ.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x18004F74C (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18006FDA0 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800D8810 (-ProgressSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800EB7C0 (-TimeSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CKeyframeAnimation::ApplyPlaybackStateChanges(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  int v4; // ecx
  int v5; // eax
  __int64 v6; // rcx
  struct CChannelContext *v7; // rdx
  __int64 v8; // rax
  CExpressionManager *v9; // rcx
  float GlobalPlaybackRate; // xmm0_4
  __int64 v11; // rax
  int v12; // ebp
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // edi
  char IsEnabled; // al
  int v17; // edx
  __int64 v18; // rdx
  CExpressionValue *v19; // rax
  const struct CExpressionValue *v20; // rdi
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // ecx
  char v26; // cl
  char v27; // al
  __int64 v28; // rcx
  float v29; // xmm1_4
  __int64 v30; // rax
  __int64 v31; // rcx
  float v32; // xmm1_4
  __int64 v33; // rax
  LONGLONG v34; // rax
  float v35; // xmm0_4
  int v36; // eax
  unsigned int v37; // ecx
  int v39; // eax
  unsigned int v40; // ecx
  _BYTE v41[80]; // [rsp+30h] [rbp-58h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v43; // [rsp+90h] [rbp+8h] BYREF

  v4 = *((_DWORD *)this + 139);
  v5 = *((_DWORD *)this + 138);
  if ( v4 != v5 )
  {
    if ( !v5 )
    {
      if ( v4 )
      {
        CKeyframeAnimation::Play(this, a2);
        v6 = *((_QWORD *)this + 2);
        v7 = (struct CChannelContext *)*((_QWORD *)this + 6);
        v8 = *(_QWORD *)(v6 + 608) - *((_QWORD *)this + 61);
        v9 = *(CExpressionManager **)(v6 + 424);
        v43 = v8;
        GlobalPlaybackRate = CExpressionManager::GetGlobalPlaybackRate(v9, v7);
        if ( (float)(GlobalPlaybackRate
                   * (float)((float)(int)TimeDelta::ToMilliseconds((TimeDelta *)&v43) * *((float *)this + 130))) > 0.0 )
          CKeyframeAnimation::UpdateTime(this, 0);
        if ( *((_DWORD *)this + 139) != 2 )
          goto LABEL_28;
        goto LABEL_7;
      }
      goto LABEL_27;
    }
    if ( v4 )
    {
      if ( v4 == 2 )
      {
LABEL_7:
        CKeyframeAnimation::Pause(this);
LABEL_28:
        *((_BYTE *)this + 572) &= ~1u;
        v5 = *((_DWORD *)this + 139);
        if ( v5 == 1 )
        {
          *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL) + 448LL) |= 2u;
          *((_BYTE *)this + 572) |= 1u;
          v5 = *((_DWORD *)this + 139);
        }
        *((_DWORD *)this + 138) = v5;
        goto LABEL_31;
      }
LABEL_27:
      CKeyframeAnimation::Play(this, a2);
      *((_QWORD *)this + 62) = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL);
      goto LABEL_28;
    }
    v11 = *((_QWORD *)this + 23);
    if ( !v11 || !*(_QWORD *)(v11 + 16) )
      goto LABEL_20;
    v12 = *((_DWORD *)a2 + 4);
    v13 = CKeyframeAnimation::Reset(this, 1, a2);
    v15 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x355u, 0LL);
      return v15;
    }
    if ( *((_DWORD *)a2 + 4) != v12 + 1 )
    {
LABEL_20:
      v23 = *((_QWORD *)this + 55);
      if ( v23 )
      {
        if ( (*(_BYTE *)(v23 + 120) & 4) != 0 )
        {
          v24 = CBaseExpression::NotifyAnimationCompleted(this);
          v15 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x36Cu, 0LL);
            return v15;
          }
        }
      }
      goto LABEL_28;
    }
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v17 = *((_DWORD *)a2 + 4);
    if ( IsEnabled )
    {
      v18 = (unsigned int)(v17 - 1);
      if ( (unsigned int)v18 >= *((_DWORD *)a2 + 12) )
      {
        v19 = CExpressionValue::CExpressionValue((CExpressionValue *)v41);
        v20 = (const struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
        CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v19);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v41);
LABEL_18:
        v21 = CBaseExpression::SetOutputValue(this, v20);
        v15 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x363u, 0LL);
          return v15;
        }
        --*((_DWORD *)a2 + 4);
        goto LABEL_20;
      }
    }
    else
    {
      v18 = (unsigned int)(v17 - 1);
    }
    v20 = (const struct CExpressionValue *)DynArray<CExpressionValue,1>::operator[]((char *)a2 + 24, v18);
    goto LABEL_18;
  }
LABEL_31:
  if ( v5 )
  {
    v26 = *((_BYTE *)this + 572);
    v27 = v26 & 4;
    if ( (v26 & 2) != 0 )
    {
      if ( v27 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v28 = *((_QWORD *)this + 64);
      if ( v28 < 0 )
      {
        v30 = *((_QWORD *)this + 64) & 1LL | (*((_QWORD *)this + 64) >> 1);
        v29 = (float)(int)v30 + (float)(int)v30;
      }
      else
      {
        v29 = (float)(int)v28;
      }
      v31 = *((_QWORD *)this + 63);
      v32 = v29 / 10000000.0;
      v33 = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL);
      if ( v31 != v33 )
      {
        v34 = (unsigned __int64)(v33 - v31) / g_qpcFrequency.QuadPart;
        if ( v34 < 0 )
          v35 = (float)(v34 & 1 | (unsigned int)((unsigned __int64)v34 >> 1))
              + (float)(v34 & 1 | (unsigned int)((unsigned __int64)v34 >> 1));
        else
          v35 = (float)(int)v34;
        v32 = v32 + v35;
      }
      v36 = CKeyframeAnimation::TimeSeek(this, v32);
      v15 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x3B5u, 0LL);
        return v15;
      }
      *((_QWORD *)this + 62) = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL);
    }
    else if ( v27 )
    {
      v39 = CKeyframeAnimation::ProgressSeek(this, *((float *)this + 131));
      v15 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x3BDu, 0LL);
        return v15;
      }
    }
  }
  return 0;
}
