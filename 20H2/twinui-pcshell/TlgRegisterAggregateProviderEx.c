/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x18013EBC4
 * Callers:
 *     DllMain @ 0x180092088 (DllMain.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180084508 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     ComputeFlushPeriod @ 0x18013DEE0 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x18013E1B4 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x18013E2B8 (DestroyAggregateSession.c)
 */

__int64 TlgRegisterAggregateProviderEx()
{
  RTL_SRWLOCK *TlgAggregateSession; // rax
  unsigned __int16 *v1; // rbx
  int v3; // esi
  __int64 v4; // rax
  __int64 *v5; // rcx

  TlgAggregateSession = CreateTlgAggregateSession(1);
  v1 = (unsigned __int16 *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_1805C3780, 0LL, 0LL);
  TlgAggregateSession[39].Ptr = 0LL;
  TlgAggregateSession[40].Ptr = 0LL;
  TlgAggregateSession[41].Ptr = &dword_1805C3780;
  LODWORD(TlgAggregateSession[44].Ptr) = ComputeFlushPeriod((unsigned __int64)TlgAggregateSession);
  v3 = TraceLoggingRegisterEx_EventRegister_EventSetInformation(
         (ULONGLONG *)&dword_1805C3780,
         (unsigned __int16 *)TlgAggregateInternalRegisteredProviderEtwCallback,
         v1);
  if ( v3 >= 0 )
  {
    AcquireSRWLockExclusive(&stru_1805CC0A0);
    v4 = qword_1805CD830;
    if ( !qword_1805CD830 )
    {
      TraceLoggingRegisterEx_EventRegister_EventSetInformation(
        (ULONGLONG *)&dword_1805C9D48,
        (unsigned __int16 *)TlgAggregateInternalProviderCallback,
        0LL);
      v4 = qword_1805CD830;
    }
    v5 = &qword_1805CD830;
    while ( v4 )
    {
      if ( *(int **)(v4 + 328) == &dword_1805C3780 )
        goto LABEL_12;
      v5 = (__int64 *)(v4 + 336);
      v4 = *(_QWORD *)(v4 + 336);
    }
    *v5 = (__int64)v1;
LABEL_12:
    ReleaseSRWLockExclusive(&stru_1805CC0A0);
    return 0LL;
  }
  else
  {
    DestroyAggregateSession(v1);
    return (unsigned int)v3;
  }
}
