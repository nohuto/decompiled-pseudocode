/*
 * XREFs of ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18006FA74
 * Callers:
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x18006F9B8 (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARG.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801D0AC0 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180201108 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180024E90 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18006FC14 (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18006FC48 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x18006FCC8 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18006FCFC (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x180070208 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseExpression::SetTarget(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        int a6,
        unsigned __int8 a7,
        __int64 a8)
{
  __int64 v8; // rsi
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  _QWORD *v16; // rbx
  bool v17; // cf
  void *v18; // rcx
  unsigned int v19; // ebx
  _BYTE *v21; // rax
  _DWORD *v22; // rax
  _DWORD *v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // [rsp+20h] [rbp-28h]
  __int64 v27; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0LL;
  v27 = 0LL;
  if ( !a3 )
  {
    if ( (*(_BYTE *)(a1 + 208) & 2) != 0 )
    {
      v13 = CBaseExpression::NotifyAnimationStateChanged(a1, 8);
      v15 = v13;
      if ( v13 < 0 )
      {
        v26 = 136;
        goto LABEL_40;
      }
    }
    else
    {
      v13 = CBaseExpression::NotifyAnimationStateChanged(a1, 16);
      v15 = v13;
      if ( v13 < 0 )
      {
        v26 = 140;
        goto LABEL_40;
      }
    }
  }
  CBaseExpression::EnsureExpressionIsUnregistered((CBaseExpression *)a1);
  if ( a3 )
  {
    v13 = CWeakReference<CVisual>::Create(a3, &v27);
    v15 = v13;
    if ( v13 >= 0 )
    {
      v8 = v27;
      goto LABEL_5;
    }
    v26 = 148;
LABEL_40:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, v26, 0LL);
    goto LABEL_16;
  }
LABEL_5:
  v16 = (_QWORD *)(a1 + 176);
  ReleaseInterface<CHwLightCollectionBuffer>(a1 + 176);
  if ( v8 && *(_QWORD *)(v8 + 16) )
  {
    v27 = 0LL;
    *v16 = v8;
  }
  *(_BYTE *)(a1 + 208) &= ~2u;
  v17 = *v16 != 0LL;
  *(_DWORD *)(a1 + 184) = a4;
  *(_BYTE *)(a1 + 208) |= v17 ? 2 : 0;
  v13 = CBaseExpression::SetChannelHandle((CBaseExpression *)a1, a2);
  v15 = v13;
  if ( v13 < 0 )
  {
    v26 = 162;
    goto LABEL_40;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 296LL))(a1, a5);
  v15 = v13;
  if ( v13 < 0 )
  {
    v26 = 163;
    goto LABEL_40;
  }
  v18 = *(void **)(a1 + 192);
  if ( v18 )
  {
    operator delete(v18);
    *(_QWORD *)(a1 + 192) = 0LL;
  }
  v19 = a7;
  if ( a7 )
  {
    if ( a6 == 1 )
    {
      v21 = operator new(0xCuLL);
      if ( v21 )
      {
        *(_DWORD *)v21 = 1;
        v21[4] = (unsigned __int8)v19 < 5u ? v19 : 0;
        v21[8] = a8;
      }
      *(_QWORD *)(a1 + 192) = v21;
    }
    else
    {
      if ( a6 != 2 )
      {
        v15 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v18, 0LL, 0, -2147467259, 0xB8u, 0LL);
        goto LABEL_16;
      }
      v22 = operator new(0x10uLL);
      v23 = v22;
      if ( v22 )
      {
        *v22 = 2;
        if ( (unsigned __int8)v19 > 0x10u || (v24 = 65631, !_bittest(&v24, v19)) )
          LOBYTE(v19) = 0;
        v25 = a8;
        *((_BYTE *)v23 + 4) = v19;
        *((_QWORD *)v23 + 1) = v25;
      }
      else
      {
        v23 = 0LL;
      }
      *(_QWORD *)(a1 + 192) = v23;
    }
  }
  if ( (*(_BYTE *)(a1 + 208) & 8) == 0 )
  {
    v13 = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)a1);
    v15 = v13;
    if ( v13 < 0 )
    {
      v26 = 190;
      goto LABEL_40;
    }
  }
  v15 = 0;
LABEL_16:
  ReleaseInterface<CHwLightCollectionBuffer>(&v27);
  return v15;
}
