/*
 * XREFs of ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x18006FCC8
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800249F8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x180066374 (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18006FA74 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INJECTIONANIMATION_SETINJECTIONDATA@@@Z @ 0x1801C42CC (-ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INJECTIONAN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBaseExpression::SetChannelHandle(CBaseExpression *this, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = *((_DWORD *)this + 42);
  if ( v2 )
  {
    if ( v2 != a2 )
    {
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x292u, 0LL);
      return v3;
    }
  }
  else
  {
    *((_DWORD *)this + 42) = a2;
  }
  return 0;
}
