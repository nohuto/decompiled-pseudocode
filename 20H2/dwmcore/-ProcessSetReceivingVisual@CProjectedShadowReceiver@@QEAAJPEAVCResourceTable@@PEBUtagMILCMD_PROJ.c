/*
 * XREFs of ?ProcessSetReceivingVisual@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETRECEIVINGVISUAL@@@Z @ 0x18000F26C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x18000E6BC (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800ADC94 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CProjectedShadowReceiver::ProcessSetReceivingVisual(
        CVisual **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWRECEIVER_SETRECEIVINGVISUAL *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  struct CVisual *Resource; // rax
  unsigned int v8; // ecx

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  Resource = 0LL;
  if ( (_DWORD)v5 && (Resource = (struct CVisual *)CResourceTable::GetResource(a2, v5, 195LL)) == 0LL )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x4Eu, 0LL);
  }
  else
  {
    CProjectedShadowReceiver::SetReceivingVisual(this, Resource);
  }
  return v4;
}
