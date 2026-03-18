/*
 * XREFs of _TlgRegisterAggregateProviderEx@16 @ 0x27A62E
 * Callers:
 *     _EnableUserkTraceLogging@0 @ 0xE7544 (_EnableUserkTraceLogging@0.c)
 * Callees:
 *     DestroyAggregateSession @ 0x27A55C (DestroyAggregateSession.c)
 *     _TraceLoggingRegisterEx_EtwRegister_EtwSetInformation@12 @ 0x27A6CA (_TraceLoggingRegisterEx_EtwRegister_EtwSetInformation@12.c)
 *     CreateTlgAggregateSession @ 0x27A73A (CreateTlgAggregateSession.c)
 */

int __stdcall TlgRegisterAggregateProviderEx(int a1, int a2)
{
  int TlgAggregateSession; // eax
  _DWORD *v3; // esi
  int v4; // edi
  int v5; // eax
  int *v6; // ecx

  TlgAggregateSession = CreateTlgAggregateSession(1, 0);
  v3 = (_DWORD *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_266258, 0);
  *(_DWORD *)(TlgAggregateSession + 192) = 0;
  *(_DWORD *)(TlgAggregateSession + 196) = 0;
  *(_DWORD *)(TlgAggregateSession + 200) = &dword_266258;
  *(_BYTE *)(TlgAggregateSession + 217) = 1;
  v4 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_266258, TlgAggregateSession);
  if ( v4 < 0 )
  {
    DestroyAggregateSession(v3);
    return v4;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_274B44, 0);
    v5 = dword_275590;
    if ( !dword_275590 )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_266320, 0);
      v5 = dword_275590;
    }
    v6 = &dword_275590;
    while ( v5 )
    {
      if ( *(int **)(v5 + 200) == &dword_266258 )
        goto LABEL_8;
      v6 = (int *)(v5 + 204);
      v5 = *(_DWORD *)(v5 + 204);
    }
    *v6 = (int)v3;
LABEL_8:
    ExReleasePushLockExclusiveEx(&unk_274B44, 0);
    return 0;
  }
}
