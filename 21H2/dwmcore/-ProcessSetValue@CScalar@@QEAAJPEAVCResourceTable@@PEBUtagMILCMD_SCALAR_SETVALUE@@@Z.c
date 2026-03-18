/*
 * XREFs of ?ProcessSetValue@CScalar@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCALAR_SETVALUE@@@Z @ 0x18023B89C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800E65D4 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 */

__int64 __fastcall CScalar::ProcessSetValue(
        CScalar *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SCALAR_SETVALUE *a3)
{
  unsigned int v3; // ebx
  float v4; // xmm6_4
  int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  v4 = *((float *)a3 + 2);
  if ( v4 != *((float *)this + 28) )
  {
    v6 = CBaseAnimation::RegisterAnimateResource(this);
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x1Fu);
    else
      *((float *)this + 28) = v4;
  }
  return v3;
}
