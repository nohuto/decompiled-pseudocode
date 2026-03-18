/*
 * XREFs of ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18009A0F8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x180038284 (--$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x180038464 (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800809A4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x180092F2C (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z @ 0x180094F8C (--$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x180096FFC (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x18009707C (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x180098078 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 *     ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x18009A320 (-SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnima.c)
 *     ?GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800CEE6C (-GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetKeyframeData(
        __int64 this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA *a3)
{
  CKeyframeAnimation *v5; // rsi
  unsigned int v6; // edx
  CMILCOMBase *Resource; // rax
  unsigned int v8; // edx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  void *v12; // rbp
  __int64 v14; // rax
  int CacheSizeForType; // eax
  CMILCOMBase *v16; // rax
  void *v17; // rax
  int v18; // r9d
  KeyframeSequence *v19; // rdi
  __int64 v20; // rcx
  unsigned int v21; // [rsp+20h] [rbp-28h]

  v5 = (CKeyframeAnimation *)this;
  if ( *(_QWORD *)(this + 360) || *(_QWORD *)(this + 416) )
  {
    v21 = 227;
    goto LABEL_38;
  }
  v6 = *((_DWORD *)a3 + 3);
  if ( !v6 )
  {
    v21 = 233;
    goto LABEL_38;
  }
  if ( *((_DWORD *)a3 + 13) )
  {
    CacheSizeForType = GetCacheSizeForType(*(unsigned int *)(this + 144));
    if ( *((_DWORD *)a3 + 13) != CacheSizeForType )
    {
      v21 = 240;
LABEL_38:
      v18 = -2003303421;
      goto LABEL_39;
    }
  }
  if ( !*((_DWORD *)a3 + 2) )
  {
    v21 = 246;
    goto LABEL_38;
  }
  this = 48LL * *((unsigned int *)a3 + 2);
  if ( *((unsigned int *)a3 + 5) < (unsigned __int64)this )
  {
    v21 = 252;
    goto LABEL_38;
  }
  Resource = (CMILCOMBase *)CResourceTable::GetResource((__int64)a2, v6, 0xA9u);
  if ( !Resource )
  {
    v21 = 259;
    goto LABEL_38;
  }
  ReplaceInterface<CSharedSection,CSharedSection>((CRenderTargetBitmap **)v5 + 40, Resource);
  v8 = *((_DWORD *)a3 + 11);
  if ( v8 )
  {
    v14 = CResourceTable::GetResource((__int64)a2, v8, 2u);
    if ( !v14 || *((_DWORD *)a3 + 8) != 4 )
    {
      v21 = 273;
      goto LABEL_38;
    }
    *((_QWORD *)v5 + 52) = v14;
  }
  *((_DWORD *)v5 + 82) = *((_DWORD *)a3 + 5);
  *((_DWORD *)v5 + 83) = *((_DWORD *)a3 + 4);
  *((_DWORD *)v5 + 84) = *((_DWORD *)a3 + 2);
  v9 = CBaseExpression::SetChannelHandle(v5, *((_DWORD *)a2 + 12));
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( *((_DWORD *)a3 + 13) )
    {
      v16 = (CMILCOMBase *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 12), 0xA9u);
      ReplaceInterface<CSharedSection,CSharedSection>((CRenderTargetBitmap **)v5 + 43, v16);
      v17 = CSharedSectionBase::ResolveAllocation(
              *((CSharedSectionBase **)v5 + 43),
              *((unsigned int *)a3 + 14),
              *((unsigned int *)a3 + 13));
      *((_QWORD *)v5 + 44) = v17;
      if ( !v17 )
      {
        v18 = -2147024882;
        v21 = 293;
        goto LABEL_39;
      }
      if ( *((_DWORD *)a3 + 15) )
        memset_0(v17, 0, *((unsigned int *)a3 + 13));
    }
    v12 = CSharedSectionBase::ResolveAllocation(
            *((CSharedSectionBase **)v5 + 40),
            *((unsigned int *)v5 + 83),
            *((unsigned int *)v5 + 82));
    if ( v12 )
    {
      v9 = CKeyframeAnimation::SetIterationInfo(v5, v11, *((unsigned int *)a3 + 8));
      v10 = v9;
      if ( v9 < 0 )
      {
        v21 = 309;
      }
      else
      {
        v9 = CKeyframeAnimation::SetKeyFrameData((__int64)v5, *((_DWORD *)a3 + 16), *((_DWORD *)a3 + 10), (__int64)v12);
        v10 = v9;
        if ( v9 < 0 )
        {
          v21 = 314;
        }
        else
        {
          v9 = CBaseExpression::TryRegisterWithExpressionManager(v5);
          v10 = v9;
          if ( v9 >= 0 )
            return 0;
          v21 = 316;
        }
      }
      goto LABEL_34;
    }
    v18 = -2147024882;
    v21 = 302;
LABEL_39:
    v10 = v18;
    goto LABEL_40;
  }
  v21 = 282;
LABEL_34:
  v18 = v9;
LABEL_40:
  MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v18, v21, 0LL);
  v19 = (KeyframeSequence *)*((_QWORD *)v5 + 45);
  *((_QWORD *)v5 + 45) = 0LL;
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
  ReleaseInterface<CD2DSharedBuffer>((CRenderTargetBitmap **)v5 + 40);
  return v10;
}
