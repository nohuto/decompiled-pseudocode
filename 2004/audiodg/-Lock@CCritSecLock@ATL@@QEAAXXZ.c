/*
 * XREFs of ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140062BFC
 * Callers:
 *     ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x140062C60 (-Reset@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CSpatialCrossProcessControl@@UEAAJXZ @ 0x140062DD0 (-Start@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CSpatialCrossProcessControl@@UEAAJXZ @ 0x140062EF0 (-Stop@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?GetFrequency@CSpatialCrossProcessClientEndpoint@@UEAAJPEA_K@Z @ 0x140063020 (-GetFrequency@CSpatialCrossProcessClientEndpoint@@UEAAJPEA_K@Z.c)
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z @ 0x140063130 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x140064310 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1400336CC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CCritSecLock::Lock(LPCRITICAL_SECTION *this)
{
  EnterCriticalSection(*this);
  *((_BYTE *)this + 8) = 1;
}
