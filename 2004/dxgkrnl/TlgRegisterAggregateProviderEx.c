/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C0192D78
 * Callers:
 *     ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C00234C0 (-DxgkInitializeTelemetry@@YAXXZ.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C0192EB4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ComputeFlushPeriod @ 0x1C0192F54 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x1C0192FF8 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1C0300A10 (DestroyAggregateSession.c)
 */

__int64 __fastcall TlgRegisterAggregateProviderEx(PVOID CallbackContext, __int64 a2, __int64 a3, __int16 a4)
{
  unsigned int v4; // esi
  bool v5; // di
  __int64 v6; // r14
  PVOID v7; // rbp
  __int64 TlgAggregateSession; // rax
  void *v9; // rbx
  int v10; // edi
  __int64 v11; // rax
  __int64 *v12; // rcx

  v4 = a4 & 0xF;
  v5 = a4 < 0;
  v6 = a2;
  v7 = CallbackContext;
  if ( v4 >= 3 )
    return 3221225485LL;
  LOBYTE(CallbackContext) = a4 < 0;
  LOBYTE(a2) = v4 != 0;
  TlgAggregateSession = CreateTlgAggregateSession(CallbackContext, a2);
  v9 = (void *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(v7);
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 328) = v6;
  *(_QWORD *)(TlgAggregateSession + 344) = v7;
  *(_BYTE *)(TlgAggregateSession + 373) = v5;
  if ( v4 )
    *(_DWORD *)(TlgAggregateSession + 368) = ComputeFlushPeriod(TlgAggregateSession, v4);
  v10 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(v7);
  if ( v10 < 0 )
  {
    DestroyAggregateSession(v9);
    return (unsigned int)v10;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C00B23F8, 0LL);
    v11 = qword_1C00B3008;
    if ( !qword_1C00B3008 )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00B0B38);
      v11 = qword_1C00B3008;
    }
    v12 = &qword_1C00B3008;
    while ( v11 )
    {
      if ( *(PVOID *)(v11 + 344) == v7 )
        goto LABEL_11;
      v12 = (__int64 *)(v11 + 352);
      v11 = *(_QWORD *)(v11 + 352);
    }
    *v12 = (__int64)v9;
LABEL_11:
    ExReleasePushLockExclusiveEx(&unk_1C00B23F8, 0LL);
    return 0LL;
  }
}
