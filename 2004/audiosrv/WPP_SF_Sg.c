/*
 * XREFs of WPP_SF_Sg @ 0x1800CBE10
 * Callers:
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x18002ECF0 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x18002EED0 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?GetVolume@CAudioSession@@UEAAJPEAM@Z @ 0x180047240 (-GetVolume@CAudioSession@@UEAAJPEAM@Z.c)
 *     _lambda_eb7b93c79ee7a0b64d2291cc6159d2b2_::operator() @ 0x18006E2AC (_lambda_eb7b93c79ee7a0b64d2291cc6159d2b2_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_Sg(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids, a2, a4);
}
