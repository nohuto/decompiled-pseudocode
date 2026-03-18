/*
 * XREFs of ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180026448
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180025CC0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x18001B22C (-Pause@CKeyframeAnimation@@AEAAXXZ.c)
 *     ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x18002466C (-TimeSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x180024770 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x180027024 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z @ 0x18002761C (-GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z.c)
 *     ?ToMilliseconds@TimeDelta@@QEBAHXZ @ 0x1800276B8 (-ToMilliseconds@TimeDelta@@QEBAHXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800277EC (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1801D0FCC (-ProgressSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x1801D1268 (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1801D9BE8 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CKeyframeAnimation::ApplyPlaybackStateChanges(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  int v4; // ecx
  int v5; // eax
  unsigned int v6; // edi
  char v8; // cl
  char v9; // al
  char v10; // cl
  __int64 v11; // rcx
  struct CChannelContext *v12; // rdx
  __int64 v13; // rax
  CExpressionManager *v14; // rcx
  float GlobalPlaybackRate; // xmm0_4
  __int64 v16; // rcx
  float v17; // xmm1_4
  __int64 v18; // rcx
  float v19; // xmm1_4
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // ebp
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // ecx
  int v30; // eax
  unsigned int v31; // ecx
  __int64 v32; // rax
  int v33; // eax
  unsigned int v34; // ecx
  LONGLONG v35; // rax
  float v36; // xmm0_4
  int v37; // eax
  unsigned int v38; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v40; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_DWORD *)this + 131);
  v5 = *((_DWORD *)this + 130);
  if ( v4 != v5 )
  {
    if ( v5 )
    {
      if ( !v4 )
      {
        v24 = *((_QWORD *)this + 22);
        if ( v24 )
          v25 = *(_QWORD *)(v24 + 16);
        else
          v25 = 0LL;
        if ( v25 )
        {
          v26 = *((_DWORD *)a2 + 4);
          v27 = CKeyframeAnimation::Reset(this, 1, a2);
          v6 = v27;
          if ( v27 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x348u, 0LL);
            return v6;
          }
          v29 = *((_DWORD *)a2 + 4);
          if ( v29 == v26 + 1 )
          {
            v30 = CBaseExpression::SetOutputValue(
                    this,
                    (const struct CExpressionValue *)(*((_QWORD *)a2 + 3) + 80LL * (unsigned int)(v29 - 1)));
            v6 = v30;
            if ( v30 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x356u, 0LL);
              return v6;
            }
            --*((_DWORD *)a2 + 4);
          }
        }
        v32 = *((_QWORD *)this + 52);
        if ( v32 )
        {
          if ( (*(_BYTE *)(v32 + 112) & 4) != 0 )
          {
            v33 = CBaseExpression::NotifyAnimationCompleted(this);
            v6 = v33;
            if ( v33 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x35Fu, 0LL);
              return v6;
            }
          }
        }
        goto LABEL_14;
      }
      if ( v4 == 2 )
      {
LABEL_26:
        CKeyframeAnimation::Pause(this);
LABEL_14:
        *((_BYTE *)this + 540) &= ~1u;
        v5 = *((_DWORD *)this + 131);
        if ( v5 == 1 )
        {
          *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 272LL) + 416LL) |= 2u;
          *((_BYTE *)this + 540) |= 1u;
          v5 = *((_DWORD *)this + 131);
        }
        *((_DWORD *)this + 130) = v5;
        goto LABEL_2;
      }
    }
    else if ( v4 )
    {
      CKeyframeAnimation::Play(this, a2);
      v11 = *((_QWORD *)this + 2);
      v12 = (struct CChannelContext *)*((_QWORD *)this + 6);
      v13 = *(_QWORD *)(v11 + 456) - *((_QWORD *)this + 57);
      v14 = *(CExpressionManager **)(v11 + 272);
      v40 = v13;
      GlobalPlaybackRate = CExpressionManager::GetGlobalPlaybackRate(v14, v12);
      if ( (float)(GlobalPlaybackRate
                 * (float)((float)(int)TimeDelta::ToMilliseconds((TimeDelta *)&v40) * *((float *)this + 122))) > 0.0 )
        CKeyframeAnimation::UpdateTime(this, 0);
      if ( *((_DWORD *)this + 131) != 2 )
        goto LABEL_14;
      goto LABEL_26;
    }
    CKeyframeAnimation::Play(this, a2);
    *((_QWORD *)this + 58) = *(_QWORD *)(*((_QWORD *)this + 2) + 456LL);
    goto LABEL_14;
  }
LABEL_2:
  if ( v5 )
  {
    v8 = *((_BYTE *)this + 540);
    v9 = v8 & 4;
    v10 = v8 & 2;
    if ( v10 && v9 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    if ( v10 )
    {
      v16 = *((_QWORD *)this + 60);
      if ( v16 < 0 )
      {
        v23 = *((_QWORD *)this + 60) & 1LL | (*((_QWORD *)this + 60) >> 1);
        v17 = (float)(int)v23 + (float)(int)v23;
      }
      else
      {
        v17 = (float)(int)v16;
      }
      v18 = *((_QWORD *)this + 59);
      v19 = v17 / 10000000.0;
      v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 456LL);
      if ( v18 != v20 )
      {
        v35 = (unsigned __int64)(v20 - v18) / g_qpcFrequency.QuadPart;
        if ( v35 < 0 )
          v36 = (float)(v35 & 1 | (unsigned int)((unsigned __int64)v35 >> 1))
              + (float)(v35 & 1 | (unsigned int)((unsigned __int64)v35 >> 1));
        else
          v36 = (float)(int)v35;
        v19 = v19 + v36;
      }
      v21 = CKeyframeAnimation::TimeSeek(this, v19);
      v6 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x3A8u, 0LL);
        return v6;
      }
      *((_QWORD *)this + 58) = *(_QWORD *)(*((_QWORD *)this + 2) + 456LL);
    }
    else if ( v9 )
    {
      v37 = CKeyframeAnimation::ProgressSeek(this, *((float *)this + 123));
      v6 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x3B0u, 0LL);
        return v6;
      }
    }
  }
  return 0;
}
