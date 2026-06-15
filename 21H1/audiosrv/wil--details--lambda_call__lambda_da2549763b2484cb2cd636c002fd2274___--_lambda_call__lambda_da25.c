/*
 * XREFs of wil::details::lambda_call__lambda_da2549763b2484cb2cd636c002fd2274___::_lambda_call__lambda_da2549763b2484cb2cd636c002fd2274___ @ 0x1800CE5D0
 * Callers:
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$7 @ 0x180077C00 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x1800D0A10 (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_da2549763b2484cb2cd636c002fd2274___::_lambda_call__lambda_da2549763b2484cb2cd636c002fd2274___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
      *(_QWORD *)a1 + 56LL,
      *(_QWORD *)(a1 + 8));
    return (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 16) + 16LL))(**(_QWORD **)(a1 + 16));
  }
  return result;
}
