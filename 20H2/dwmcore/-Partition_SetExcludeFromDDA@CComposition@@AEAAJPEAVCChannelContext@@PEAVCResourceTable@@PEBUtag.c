/*
 * XREFs of ?Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x1800E0848
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800ADC94 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800E08A8 (-AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x1801553B0 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     ?RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z @ 0x1801ABB84 (-RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::Partition_SetExcludeFromDDA(
        CVisualGroup **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_SETEXCLUDEFROMDDA *a4)
{
  struct CVisual *Resource; // rax
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rcx
  CVisualGroup *v11; // rcx

  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a3, *((_DWORD *)a4 + 1), 0xC3u);
  if ( !Resource )
    CComposition::FailFastOnMalformedPacket(this, 4065339059LL, 0LL, v7);
  if ( *((_BYTE *)a4 + 8) )
  {
    v8 = CComposition::AddToDDAExcludeVisualList((CComposition *)this, Resource);
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x5A2u, 0LL);
  }
  else
  {
    v11 = this[107];
    if ( v11 )
      CVisualGroup::RemoveVisual(v11, Resource);
  }
  return 0LL;
}
