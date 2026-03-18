/*
 * XREFs of ?Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x180193560
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180192DC0 (-AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x1801931C0 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     ?RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z @ 0x1801FF458 (-RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::Partition_SetExcludeFromDDA(
        CVisualGroup **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_SETEXCLUDEFROMDDA *a4)
{
  struct CVisual *Resource; // rax
  int v7; // eax
  __int64 v8; // rcx
  CVisualGroup *v9; // rcx

  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a3, *((_DWORD *)a4 + 1), 0xC3u);
  if ( !Resource )
    CComposition::FailFastOnMalformedPacket((__int64)this, -229628237, 0LL);
  if ( *((_BYTE *)a4 + 8) )
  {
    v7 = CComposition::AddToDDAExcludeVisualList((CComposition *)this, Resource);
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x63Du);
  }
  else
  {
    v9 = this[126];
    if ( v9 )
      CVisualGroup::RemoveVisual(v9, Resource);
  }
  return 0LL;
}
