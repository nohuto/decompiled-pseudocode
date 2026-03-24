/*
 * XREFs of ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x18020630C
 * Callers:
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x1801D01E4 (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x180204D74 (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x18020531C (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x18020EE90 (-EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800ABEB8 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800ACE18 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801B17D8 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1801D1848 (-ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValu.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall KeyframeValue::GetValue(
        KeyframeValue *this,
        struct CExpressionValueStack *a2,
        struct CExpressionValue *a3)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_DWORD *)this + 5) == 1 )
  {
    CExpressionValue::CopyFrom(a3, (KeyframeValue *)((char *)this + 24));
    return 0;
  }
  if ( *((_DWORD *)this + 5) == 2 )
  {
    v12 = CKeyframeAnimation::ProcessInnerExpression(*((LARGE_INTEGER **)this + 3), *((_DWORD *)this + 8), a2, a3);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x4Au, 0LL);
      return v10;
    }
    return 0;
  }
  if ( *((_DWORD *)this + 5) != 3 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v4 = *((_QWORD *)this + 3);
  v5 = *(_QWORD *)(v4 + 352);
  if ( !*(_DWORD *)v5 )
  {
    v6 = CKeyframeAnimation::SampleStartingValue(*((CKeyframeAnimation **)this + 3));
    v8 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x6B1u, 0LL);
      goto LABEL_30;
    }
  }
  if ( *(_DWORD *)v5 == 11 )
  {
    v11 = *(_QWORD *)(v4 + 424);
    *((_DWORD *)a3 + 18) = 11;
    *((_BYTE *)a3 + 76) = 1;
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)a3 + 8, v11);
    goto LABEL_29;
  }
  v9 = (unsigned int)(*(_DWORD *)v5 - 17);
  if ( *(_DWORD *)v5 == 17 )
  {
    *(_BYTE *)a3 = *(_BYTE *)(v5 + 8);
    *((_DWORD *)a3 + 18) = 17;
    goto LABEL_27;
  }
  v9 = (unsigned int)(*(_DWORD *)v5 - 18);
  if ( *(_DWORD *)v5 == 18 )
  {
    *(_DWORD *)a3 = *(_DWORD *)(v5 + 8);
    *((_DWORD *)a3 + 18) = 18;
    goto LABEL_27;
  }
  v9 = (unsigned int)(*(_DWORD *)v5 - 35);
  if ( *(_DWORD *)v5 == 35 )
  {
    *((_DWORD *)a3 + 18) = 35;
    *(_QWORD *)a3 = *(_QWORD *)(v5 + 8);
    goto LABEL_27;
  }
  v9 = (unsigned int)(*(_DWORD *)v5 - 42);
  if ( *(_DWORD *)v5 == 42 )
  {
    *((_DWORD *)a3 + 18) = 42;
    *(_DWORD *)a3 = *(_DWORD *)(v5 + 8);
    goto LABEL_27;
  }
  v9 = (unsigned int)(*(_DWORD *)v5 - 52);
  if ( *(_DWORD *)v5 == 52 )
  {
    *((_DWORD *)a3 + 18) = 52;
    *(_QWORD *)a3 = *(_QWORD *)(v5 + 8);
    *((_DWORD *)a3 + 2) = *(_DWORD *)(v5 + 16);
    goto LABEL_27;
  }
  v9 = (unsigned int)(*(_DWORD *)v5 - 69);
  if ( *(_DWORD *)v5 == 69 )
  {
    *((_DWORD *)a3 + 18) = 69;
    goto LABEL_21;
  }
  v9 = (unsigned int)(*(_DWORD *)v5 - 70);
  if ( *(_DWORD *)v5 == 70 )
  {
    *((_DWORD *)a3 + 18) = 70;
    goto LABEL_21;
  }
  if ( *(_DWORD *)v5 == 71 )
  {
    *((_DWORD *)a3 + 18) = 71;
LABEL_21:
    *(_OWORD *)a3 = *(_OWORD *)(v5 + 8);
LABEL_27:
    *((_BYTE *)a3 + 76) = 1;
LABEL_29:
    v8 = 0;
LABEL_30:
    v10 = v8;
    if ( v8 < 0 )
      goto LABEL_31;
    return 0;
  }
  v8 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147467259, 0x6E4u, 0LL);
  v10 = -2147467259;
LABEL_31:
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x50u, 0LL);
  return v10;
}
