/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x14078C0BC
 * Callers:
 *     TlgRegisterAggregateProvider @ 0x14078C0A0 (TlgRegisterAggregateProvider.c)
 *     CmpRegisterTraceLoggingProvider @ 0x1407BE5D4 (CmpRegisterTraceLoggingProvider.c)
 *     EtwpInitialize @ 0x140A46B98 (EtwpInitialize.c)
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1407788A4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ComputeFlushPeriod @ 0x14078C1EC (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x14078C290 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x14097B748 (DestroyAggregateSession.c)
 */

__int64 __fastcall TlgRegisterAggregateProviderEx(
        ULONGLONG *CallbackContext,
        unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  unsigned __int16 *v3; // rbp
  __int64 TlgAggregateSession; // rax
  unsigned __int16 *v7; // rbx
  int v8; // edi
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 *v13; // rcx
  char v14; // al

  v3 = a2;
  LOBYTE(a2) = 1;
  TlgAggregateSession = CreateTlgAggregateSession(0LL, a2);
  v7 = (unsigned __int16 *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(CallbackContext, v3, a3);
  *(_QWORD *)(TlgAggregateSession + 328) = v3;
  *(_QWORD *)(TlgAggregateSession + 336) = a3;
  *(_QWORD *)(TlgAggregateSession + 344) = CallbackContext;
  *(_BYTE *)(TlgAggregateSession + 373) = 0;
  *(_DWORD *)(TlgAggregateSession + 368) = ComputeFlushPeriod(TlgAggregateSession);
  v8 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
         CallbackContext,
         (unsigned __int16 *)TlgAggregateInternalRegisteredProviderEtwCallback,
         v7);
  if ( v8 < 0 )
  {
    DestroyAggregateSession(v7);
    return (unsigned int)v8;
  }
  else
  {
    v9 = KeAbPreAcquire((ULONG_PTR)&qword_140CDB450, 0LL, 0);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140CDB450, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&qword_140CDB450, v9, (ULONG_PTR)&qword_140CDB450);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    v12 = qword_140CF49A0;
    if ( !qword_140CF49A0 )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
        (ULONGLONG *)&dword_140C04748,
        (unsigned __int16 *)TlgAggregateInternalProviderCallback,
        0LL);
      v12 = qword_140CF49A0;
    }
    v13 = &qword_140CF49A0;
    while ( v12 )
    {
      if ( *(ULONGLONG **)(v12 + 344) == CallbackContext )
        goto LABEL_14;
      v13 = (__int64 *)(v12 + 352);
      v12 = *(_QWORD *)(v12 + 352);
    }
    *v13 = (__int64)v7;
LABEL_14:
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CDB450, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140CDB450);
    KeAbPostRelease((ULONG_PTR)&qword_140CDB450);
    return 0LL;
  }
}
