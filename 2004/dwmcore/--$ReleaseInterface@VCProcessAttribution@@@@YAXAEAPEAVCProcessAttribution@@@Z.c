/*
 * XREFs of ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x18009747C
 * Callers:
 *     ??1CAsyncFlushResponse@@UEAA@XZ @ 0x1800353DC (--1CAsyncFlushResponse@@UEAA@XZ.c)
 *     ??1CChannelContext@@UEAA@XZ @ 0x180094D24 (--1CChannelContext@@UEAA@XZ.c)
 *     ??_ECResourceTable@@UEAAPEAXI@Z @ 0x180094E40 (--_ECResourceTable@@UEAAPEAXI@Z.c)
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x180096014 (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x1800961FC (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x1800999E4 (--1CWindowNode@@MEAA@XZ.c)
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x18009DA94 (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800CBA90 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180156718 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800574D0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CProcessAttribution>(CDrawListEntry **a1)
{
  CDrawListEntry *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CDrawListEntry::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
