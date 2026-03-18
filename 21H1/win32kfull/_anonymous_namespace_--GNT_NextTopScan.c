/*
 * XREFs of _anonymous_namespace_::GNT_NextTopScan @ 0x924A6
 * Callers:
 *     ?NextTopWindow@FindNextTopWindow@@YGPAUtagWND@@PBU2@0W4FindOption@1@@Z @ 0x92358 (-NextTopWindow@FindNextTopWindow@@YGPAUtagWND@@PBU2@0W4FindOption@1@@Z.c)
 *     _anonymous_namespace_::NTW_GetNextTop @ 0x92470 (_anonymous_namespace_--NTW_GetNextTop.c)
 * Callees:
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __fastcall anonymous_namespace_::GNT_NextTopScan(int a1, int a2, int a3)
{
  int v4; // eax
  int result; // eax

  if ( a2 )
  {
    result = *(_DWORD *)(a2 + 48);
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 248);
    if ( !v4 || (*(_BYTE *)(v4 + 24) & 2) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v4 = *(_DWORD *)(a1 + 248);
    }
    if ( !v4 || (*(_BYTE *)(v4 + 24) & 2) != 0 )
      return 0;
    result = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 4) + 12) + 60);
  }
  for ( ; result; result = *(_DWORD *)(result + 48) )
  {
    if ( *(_DWORD *)(result + 64) == a3 )
      break;
  }
  return result;
}
