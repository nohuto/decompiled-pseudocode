/*
 * XREFs of ?ProcessAppendSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_APPENDSHAREDLIGHTS@@PEBXI@Z @ 0x1801F7A9C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddSharedLights@CVisual@@AEAAJAEAV?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@W4LightBehavior@@PEBVCResourceTable@@PEBII@Z @ 0x1801F6B2C (-AddSharedLights@CVisual@@AEAAJAEAV-$vector@ULightEntry@CVisual@@V-$allocator@ULightEntry@CVisua.c)
 */

__int64 __fastcall CVisual::ProcessAppendSharedLights(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_APPENDSHAREDLIGHTS *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx

  v5 = *((_DWORD *)a3 + 2);
  if ( a5 < v5 || (v5 & 3) != 0 )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2003303421, 0xB74u);
  }
  else
  {
    v6 = CVisual::AddSharedLights((__int64)this, (_QWORD **)this + 35, 0, a2, a4, v5 >> 2);
    v8 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0xB7Bu);
  }
  return v8;
}
