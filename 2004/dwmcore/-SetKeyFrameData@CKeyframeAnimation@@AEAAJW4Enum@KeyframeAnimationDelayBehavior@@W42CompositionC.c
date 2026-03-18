/*
 * XREFs of ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x18008A3E8
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18008998C (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801D2960 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18008A548 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ?DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@PEAW4KeyframeAnimationCoordinateSpace@@@Z @ 0x18008BEBC (-DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Composit.c)
 *     ??4?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008BF24 (--4-$unique_ptr@VKeyframeSequence@@U-$default_delete@VKeyframeSequence@@@std@@@std@@QEAAAEAV01@$.c)
 *     ??0KeyframeSequence@@QEAA@I@Z @ 0x18008BF64 (--0KeyframeSequence@@QEAA@I@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x180097A9C (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800A2588 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CKeyframeAnimation::SetKeyFrameData(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  KeyframeSequence *v7; // rax
  _QWORD *v8; // rbx
  int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // rbp
  float v13; // xmm6_4
  int v14; // r15d
  __int64 v15; // rcx
  __int64 v17; // rcx
  int v18; // r9d
  unsigned int v19; // [rsp+20h] [rbp-48h]
  void *lpMem; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v22; // [rsp+78h] [rbp+10h] BYREF

  if ( a2 > 1 )
  {
    v11 = -2003303421;
    v18 = -2003303421;
    v19 = 562;
    goto LABEL_22;
  }
  *(_DWORD *)(a1 + 528) = a2;
  v7 = (KeyframeSequence *)DefaultHeap::AllocClear(0x90uLL);
  if ( !v7 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  lpMem = KeyframeSequence::KeyframeSequence(v7, *(_DWORD *)(a1 + 336));
  std::unique_ptr<KeyframeSequence>::operator=(a1 + 360, &lpMem);
  v8 = lpMem;
  if ( lpMem )
  {
    KeyframeSequence::RemoveAllKeyFrames((KeyframeSequence *)lpMem);
    v17 = v8[8];
    if ( v17 )
    {
      v8[8] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    operator delete(v8);
  }
  v9 = CKeyframeAnimation::DetermineCoordinateSpace(*(unsigned int *)(a1 + 144), a3, &v22);
  v11 = v9;
  if ( v9 < 0 )
  {
    v19 = 575;
LABEL_20:
    v18 = v9;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v18, v19, 0LL);
    return v11;
  }
  v12 = 0LL;
  v13 = 0.0;
  if ( *(_DWORD *)(a1 + 336) )
  {
    v14 = v22;
    while ( 1 )
    {
      if ( (_DWORD)v12 )
      {
        v15 = (unsigned int)v12;
        v13 = fmaxf(v13 + 0.001, *(float *)(a4 + 48 * v12));
      }
      else
      {
        v13 = 0.0;
        v15 = 0LL;
      }
      v9 = CKeyframeAnimation::AddKeyframeData(a1, (unsigned int)v12, v10, a4 + 48 * v15, v14);
      v11 = v9;
      if ( v9 < 0 )
        break;
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 336) )
        goto LABEL_11;
    }
    v19 = 600;
    goto LABEL_20;
  }
LABEL_11:
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_DWORD *)(a1 + 492) = 0;
  *(_DWORD *)(a1 + 520) = 0;
  *(_DWORD *)(a1 + 524) = 0;
  return v11;
}
