/*
 * XREFs of wil::details::lambda_call__lambda_0ae8ac5f33288deaf7276a705a073b29___::_lambda_call__lambda_0ae8ac5f33288deaf7276a705a073b29___ @ 0x180111B14
 * Callers:
 *     _DynamicAudioEndpointManager::AddRule_::_1_::dtor$5 @ 0x180112427 (_DynamicAudioEndpointManager--AddRule_--_1_--dtor$5.c)
 * Callees:
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z @ 0x18011386C (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_0ae8ac5f33288deaf7276a705a073b29___::_lambda_call__lambda_0ae8ac5f33288deaf7276a705a073b29___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return DynamicAudioEndpointManager::RemoveRule(
             *(DynamicAudioEndpointManager **)a1,
             **(struct IAudioProcess ***)(a1 + 8),
             **(struct IUnknown ***)(a1 + 16),
             1,
             *(bool (*const *)[9])(a1 + 24));
  }
  return result;
}
