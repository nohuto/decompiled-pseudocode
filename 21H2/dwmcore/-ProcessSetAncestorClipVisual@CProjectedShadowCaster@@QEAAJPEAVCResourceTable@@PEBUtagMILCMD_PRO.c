/*
 * XREFs of ?ProcessSetAncestorClipVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETANCESTORCLIPVISUAL@@@Z @ 0x180201A78
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x180201D00 (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 */

__int64 __fastcall CProjectedShadowCaster::ProcessSetAncestorClipVisual(
        CProjectedShadowCaster *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWCASTER_SETANCESTORCLIPVISUAL *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  __int64 Resource; // rax
  __int64 v8; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = CResourceTable::GetResource((__int64)a2, v5, 0xC3u)) != 0 )
  {
    if ( *((_QWORD *)this + 9) != Resource )
    {
      *((_QWORD *)this + 9) = Resource;
      CProjectedShadowCaster::RequestRedraw(this);
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, -2003303421, 0x6Cu);
  }
  return v4;
}
