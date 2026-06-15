/*
 * XREFs of _lambda_da2549763b2484cb2cd636c002fd2274_::operator() @ 0x1800CEB04
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001A4F0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x1800D0A10 (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 */

__int64 __fastcall lambda_da2549763b2484cb2cd636c002fd2274_::operator()(__int64 a1)
{
  ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
    *(_QWORD *)a1 + 56LL,
    *(_QWORD *)(a1 + 8));
  return (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 16) + 16LL))(**(_QWORD **)(a1 + 16));
}
