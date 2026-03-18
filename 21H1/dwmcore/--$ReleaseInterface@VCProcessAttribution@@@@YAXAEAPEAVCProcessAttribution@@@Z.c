/*
 * XREFs of ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x180036FB8
 * Callers:
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x180036F30 (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ??1CAsyncFlushResponse@@UEAA@XZ @ 0x18008C69C (--1CAsyncFlushResponse@@UEAA@XZ.c)
 *     ??1CChannelContext@@UEAA@XZ @ 0x180090404 (--1CChannelContext@@UEAA@XZ.c)
 *     ??_ECResourceTable@@UEAAPEAXI@Z @ 0x180090520 (--_ECResourceTable@@UEAAPEAXI@Z.c)
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x18009146C (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x180091654 (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x180093F04 (--1CWindowNode@@MEAA@XZ.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800B59E0 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180158E84 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18003A090 (-Release@CDrawListEntry@@UEAAKXZ.c)
 */

unsigned int __fastcall ReleaseInterface<CProcessAttribution>(CDrawListEntry **a1)
{
  CDrawListEntry *v2; // rcx
  unsigned int result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = CDrawListEntry::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
