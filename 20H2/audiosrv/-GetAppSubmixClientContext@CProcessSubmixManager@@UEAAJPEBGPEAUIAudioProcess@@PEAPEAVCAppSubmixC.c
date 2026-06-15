/*
 * XREFs of ?GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJPEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800F0980
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800F09E8 (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 */

__int64 __fastcall CProcessSubmixManager::GetAppSubmixClientContext(
        CProcessSubmixManager *this,
        const unsigned __int16 *a2,
        struct IAudioProcess *a3,
        struct CAppSubmixClient **a4)
{
  return CProcessSubmixManager::GetAppSubmixClientContextHelper(this, 0LL, 4LL, a2, a3, a4);
}
