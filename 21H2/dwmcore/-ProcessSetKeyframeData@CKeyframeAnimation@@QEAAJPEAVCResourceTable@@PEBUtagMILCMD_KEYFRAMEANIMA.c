/*
 * XREFs of ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180046768
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180044760 (-GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x1800465AC (-SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnima.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x1800469AC (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x180046B58 (--$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18004A0F8 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x18004A1C4 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x18004D7F8 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 *     ??$ReleaseInterface@VCSharedSection@@@@YAXAEAPEAVCSharedSection@@@Z @ 0x18006FC24 (--$ReleaseInterface@VCSharedSection@@@@YAXAEAPEAVCSharedSection@@@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18006FCEC (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetKeyframeData(
        unsigned __int64 this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA *a3)
{
  CKeyframeAnimation *v5; // rdi
  __int64 v6; // rdx
  __int64 Resource; // rax
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  void *v11; // rbp
  int CacheSizeForType; // eax
  __int64 v14; // rax
  void *v15; // rax
  __int64 v16; // rax
  int v17; // r9d
  KeyframeSequence *v18; // rsi
  unsigned int v19; // [rsp+20h] [rbp-28h]

  v5 = (CKeyframeAnimation *)this;
  if ( *(_QWORD *)(this + 384) || *(_QWORD *)(this + 440) )
  {
    v19 = 231;
    goto LABEL_39;
  }
  v6 = *((unsigned int *)a3 + 3);
  if ( !(_DWORD)v6 )
  {
    v19 = 237;
    goto LABEL_39;
  }
  if ( *((_DWORD *)a3 + 13) )
  {
    CacheSizeForType = GetCacheSizeForType(*(_DWORD *)(this + 152));
    if ( *((_DWORD *)a3 + 13) != CacheSizeForType )
    {
      v19 = 244;
LABEL_39:
      v17 = -2003303421;
      goto LABEL_40;
    }
  }
  if ( !*((_DWORD *)a3 + 2) )
  {
    v19 = 250;
    goto LABEL_39;
  }
  this = 48LL * *((unsigned int *)a3 + 2);
  if ( *((unsigned int *)a3 + 5) < this )
  {
    v19 = 256;
    goto LABEL_39;
  }
  Resource = CResourceTable::GetResource(a2, v6, 168LL);
  if ( !Resource )
  {
    v19 = 263;
    goto LABEL_39;
  }
  ReplaceInterface<CSharedSection,CSharedSection>((char *)v5 + 344, Resource);
  v8 = *((unsigned int *)a3 + 11);
  if ( (_DWORD)v8 )
  {
    v16 = CResourceTable::GetResource(a2, v8, 2LL);
    if ( !v16 || *((_DWORD *)a3 + 8) != 4 )
    {
      v19 = 277;
      goto LABEL_39;
    }
    *((_QWORD *)v5 + 55) = v16;
  }
  *((_DWORD *)v5 + 88) = *((_DWORD *)a3 + 5);
  *((_DWORD *)v5 + 89) = *((_DWORD *)a3 + 4);
  *((_DWORD *)v5 + 90) = *((_DWORD *)a3 + 2);
  v9 = CBaseExpression::SetChannelHandle(v5, *((_DWORD *)a2 + 12));
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( *((_DWORD *)a3 + 13) )
    {
      v14 = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 12), 168LL);
      ReplaceInterface<CSharedSection,CSharedSection>((char *)v5 + 368, v14);
      v15 = CSharedSectionBase::ResolveAllocation(
              *((CSharedSectionBase **)v5 + 46),
              *((unsigned int *)a3 + 14),
              *((unsigned int *)a3 + 13));
      *((_QWORD *)v5 + 47) = v15;
      if ( !v15 )
      {
        v17 = -2147024882;
        v19 = 297;
        goto LABEL_40;
      }
      if ( *((_DWORD *)a3 + 15) )
        memset_0(v15, 0, *((unsigned int *)a3 + 13));
    }
    v11 = CSharedSectionBase::ResolveAllocation(
            *((CSharedSectionBase **)v5 + 43),
            *((unsigned int *)v5 + 89),
            *((unsigned int *)v5 + 88));
    if ( v11 )
    {
      v9 = CKeyframeAnimation::SetIterationInfo(
             (__int64)v5,
             *((float *)a3 + 7),
             *((_DWORD *)a3 + 8),
             *((float *)a3 + 6),
             *((_DWORD *)a3 + 9));
      v10 = v9;
      if ( v9 < 0 )
      {
        v19 = 313;
      }
      else
      {
        v9 = CKeyframeAnimation::SetKeyFrameData(v5, *((unsigned int *)a3 + 16), *((unsigned int *)a3 + 10), v11);
        v10 = v9;
        if ( v9 < 0 )
        {
          v19 = 318;
        }
        else
        {
          *((_BYTE *)v5 + 573) ^= (*((_BYTE *)v5 + 573) ^ (16 * *((_BYTE *)a3 + 68))) & 0x10;
          if ( (*((_BYTE *)v5 + 232) & 0x10) != 0 )
            return 0;
          v9 = CBaseExpression::TryRegisterWithExpressionManager(v5);
          v10 = v9;
          if ( v9 >= 0 )
            return 0;
          v19 = 324;
        }
      }
      goto LABEL_35;
    }
    v17 = -2147024882;
    v19 = 306;
LABEL_40:
    v10 = v17;
    goto LABEL_41;
  }
  v19 = 286;
LABEL_35:
  v17 = v9;
LABEL_41:
  MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v17, v19, 0LL);
  v18 = (KeyframeSequence *)*((_QWORD *)v5 + 48);
  *((_QWORD *)v5 + 48) = 0LL;
  if ( v18 )
  {
    KeyframeSequence::RemoveAllKeyFrames(v18);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)v18 + 64);
    DefaultHeap::Free(v18);
  }
  ReleaseInterface<CSharedSection>((char *)v5 + 344);
  return v10;
}
