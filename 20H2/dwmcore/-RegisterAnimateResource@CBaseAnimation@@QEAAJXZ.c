/*
 * XREFs of ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x180036AB0
 * Callers:
 *     ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x180017FA8 (-ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_APPEND@@PEBXI@Z.c)
 *     ?ProcessTrigger@CLegacyAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYANIMATIONTRIGGER_TRIGGER@@@Z @ 0x180020C88 (-ProcessTrigger@CLegacyAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYANIMATIONT.c)
 *     ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x180036A14 (-ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETPRIMITIVES.c)
 *     ?OnAddBinding@CScalar@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x1801E7CA0 (-OnAddBinding@CScalar@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z.c)
 *     ?ProcessSetValue@CScalar@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCALAR_SETVALUE@@@Z @ 0x1801E7CDC (-ProcessSetValue@CScalar@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCALAR_SETVALUE@@@Z.c)
 * Callees:
 *     ?RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x180036AF4 (-RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBaseAnimation::RegisterAnimateResource(CComposition **this)
{
  unsigned int v1; // ebx
  int v3; // eax
  unsigned int v4; // ecx

  v1 = 0;
  if ( !*((_BYTE *)this + 96) )
  {
    v3 = CComposition::RegisterAnimateResource(this[2], (struct IAnimationResource *)(this + 7));
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x78u, 0LL);
    else
      *((_BYTE *)this + 96) = 1;
  }
  return v1;
}
