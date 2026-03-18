/*
 * XREFs of _anonymous_namespace_::GNT_NextTopScan @ 0x1C000F910
 * Callers:
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C000F768 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     _anonymous_namespace_::NTW_GetNextTop @ 0x1C000F8BC (_anonymous_namespace_--NTW_GetNextTop.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::GNT_NextTopScan(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 result; // rax

  if ( a2 )
  {
    result = *(_QWORD *)(a2 + 88);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 456);
    if ( !v6 || (*(_DWORD *)(v6 + 48) & 2) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v6, a3, a4);
      v6 = *(_QWORD *)(a1 + 456);
    }
    if ( !v6 || (*(_DWORD *)(v6 + 48) & 2) != 0 )
      return 0LL;
    result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 24LL) + 112LL);
  }
  while ( result && *(_QWORD *)(result + 120) != a3 )
    result = *(_QWORD *)(result + 88);
  return result;
}
