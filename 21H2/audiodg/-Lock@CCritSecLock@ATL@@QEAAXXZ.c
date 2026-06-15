/*
 * XREFs of ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14006B87C
 * Callers:
 *     ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14006B8E0 (-Reset@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14006BA60 (-Start@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14006BB80 (-Stop@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?GetFrequency@CSpatialCrossProcessClientEndpoint@@UEAAJPEA_K@Z @ 0x14006BCB0 (-GetFrequency@CSpatialCrossProcessClientEndpoint@@UEAAJPEA_K@Z.c)
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z @ 0x14006BDC0 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x14006CFF0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DEFC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CCritSecLock::Lock(LPCRITICAL_SECTION *this)
{
  EnterCriticalSection(*this);
  *((_BYTE *)this + 8) = 1;
}
