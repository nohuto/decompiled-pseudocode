/*
 * XREFs of WPP_SF_SSg @ 0x1800CDD90
 * Callers:
 *     ?SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x18002F070 (-SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SSg(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  bool v7; // zf

  v5 = -1LL;
  if ( a5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(a5 + 2 * v6) );
  }
  v7 = a4 == 0LL;
  if ( a4 )
  {
    do
      ++v5;
    while ( a4[v5] );
    v7 = a4 == 0LL;
  }
  if ( v7 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, 27LL, a4);
}
