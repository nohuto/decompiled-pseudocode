/*
 * XREFs of ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800249F8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x180024494 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x180025458 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 *     ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x180027368 (-SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnima.c)
 *     ?GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18002799C (-GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x180069720 (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x1800697E8 (--$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     ??$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z @ 0x18006DE08 (--$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18006FC48 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x18006FCC8 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800ADC94 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetKeyframeData(
        unsigned __int64 this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA *a3)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 Resource; // rax
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  void *v12; // rbp
  __int64 v14; // rax
  int CacheSizeForType; // eax
  __int64 v16; // rax
  void *v17; // rax
  int v18; // r9d
  KeyframeSequence *v19; // rdi
  __int64 v20; // rcx
  unsigned int v21; // [rsp+20h] [rbp-28h]

  v5 = this;
  if ( *(_QWORD *)(this + 360) || *(_QWORD *)(this + 416) )
  {
    v21 = 229;
    goto LABEL_38;
  }
  v6 = *((unsigned int *)a3 + 3);
  if ( !(_DWORD)v6 )
  {
    v21 = 235;
    goto LABEL_38;
  }
  if ( *((_DWORD *)a3 + 13) )
  {
    CacheSizeForType = GetCacheSizeForType(*(unsigned int *)(this + 144));
    if ( *((_DWORD *)a3 + 13) != CacheSizeForType )
    {
      v21 = 242;
LABEL_38:
      v18 = -2003303421;
      goto LABEL_39;
    }
  }
  if ( !*((_DWORD *)a3 + 2) )
  {
    v21 = 248;
    goto LABEL_38;
  }
  this = 48LL * *((unsigned int *)a3 + 2);
  if ( *((unsigned int *)a3 + 5) < this )
  {
    v21 = 254;
    goto LABEL_38;
  }
  Resource = CResourceTable::GetResource(a2, v6, 169LL);
  if ( !Resource )
  {
    v21 = 261;
    goto LABEL_38;
  }
  ReplaceInterface<CSharedSection,CSharedSection>(v5 + 320, Resource);
  v8 = *((unsigned int *)a3 + 11);
  if ( (_DWORD)v8 )
  {
    v14 = CResourceTable::GetResource(a2, v8, 2LL);
    if ( !v14 || *((_DWORD *)a3 + 8) != 4 )
    {
      v21 = 275;
      goto LABEL_38;
    }
    *(_QWORD *)(v5 + 416) = v14;
  }
  *(_DWORD *)(v5 + 328) = *((_DWORD *)a3 + 5);
  *(_DWORD *)(v5 + 332) = *((_DWORD *)a3 + 4);
  *(_DWORD *)(v5 + 336) = *((_DWORD *)a3 + 2);
  v9 = CBaseExpression::SetChannelHandle((CBaseExpression *)v5, *((_DWORD *)a2 + 12));
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( *((_DWORD *)a3 + 13) )
    {
      v16 = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 12), 169LL);
      ReplaceInterface<CSharedSection,CSharedSection>(v5 + 344, v16);
      v17 = CSharedSectionBase::ResolveAllocation(
              *(CSharedSectionBase **)(v5 + 344),
              *((unsigned int *)a3 + 14),
              *((unsigned int *)a3 + 13));
      *(_QWORD *)(v5 + 352) = v17;
      if ( !v17 )
      {
        v18 = -2147024882;
        v21 = 295;
        goto LABEL_39;
      }
      if ( *((_DWORD *)a3 + 15) )
        memset_0(v17, 0, *((unsigned int *)a3 + 13));
    }
    v12 = CSharedSectionBase::ResolveAllocation(
            *(CSharedSectionBase **)(v5 + 320),
            *(unsigned int *)(v5 + 332),
            *(unsigned int *)(v5 + 328));
    if ( v12 )
    {
      v9 = CKeyframeAnimation::SetIterationInfo(v5, v11, *((unsigned int *)a3 + 8));
      v10 = v9;
      if ( v9 < 0 )
      {
        v21 = 311;
      }
      else
      {
        v9 = CKeyframeAnimation::SetKeyFrameData(v5, *((unsigned int *)a3 + 16), *((unsigned int *)a3 + 10), v12);
        v10 = v9;
        if ( v9 < 0 )
        {
          v21 = 316;
        }
        else
        {
          v9 = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)v5);
          v10 = v9;
          if ( v9 >= 0 )
            return 0;
          v21 = 318;
        }
      }
      goto LABEL_34;
    }
    v18 = -2147024882;
    v21 = 304;
LABEL_39:
    v10 = v18;
    goto LABEL_40;
  }
  v21 = 284;
LABEL_34:
  v18 = v9;
LABEL_40:
  MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v18, v21, 0LL);
  v19 = *(KeyframeSequence **)(v5 + 360);
  *(_QWORD *)(v5 + 360) = 0LL;
  if ( v19 )
  {
    KeyframeSequence::RemoveAllKeyFrames(v19);
    v20 = *((_QWORD *)v19 + 8);
    if ( v20 )
    {
      *((_QWORD *)v19 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    operator delete(v19);
  }
  ReleaseInterface<CD2DSharedBuffer>(v5 + 320);
  return v10;
}
