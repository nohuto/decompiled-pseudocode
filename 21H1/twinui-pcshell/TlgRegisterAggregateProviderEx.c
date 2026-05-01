/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x18011A6E4
 * Callers:
 *     DllMain @ 0x1800919E8 (DllMain.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180085378 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     ComputeFlushPeriod @ 0x180119A00 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x180119CD4 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x180119DD8 (DestroyAggregateSession.c)
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
    return TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_180597718, 0LL, 0LL);
  TlgAggregateSession[39].Ptr = 0LL;
  TlgAggregateSession[40].Ptr = 0LL;
  TlgAggregateSession[41].Ptr = &dword_180597718;
  LODWORD(TlgAggregateSession[44].Ptr) = ComputeFlushPeriod((unsigned __int64)TlgAggregateSession);
  v3 = TraceLoggingRegisterEx_EventRegister_EventSetInformation(
         (ULONGLONG *)&dword_180597718,
         (unsigned __int16 *)TlgAggregateInternalRegisteredProviderEtwCallback,
         v1);
  if ( v3 >= 0 )
  {
    AcquireSRWLockExclusive(&stru_18059FD70);
    v4 = qword_1805A13E8;
    if ( !qword_1805A13E8 )
    {
      TraceLoggingRegisterEx_EventRegister_EventSetInformation(
        (ULONGLONG *)&dword_18059DB18,
        (unsigned __int16 *)TlgAggregateInternalProviderCallback,
        0LL);
      v4 = qword_1805A13E8;
    }
    v5 = &qword_1805A13E8;
    while ( v4 )
    {
      if ( *(int **)(v4 + 328) == &dword_180597718 )
        goto LABEL_12;
      v5 = (__int64 *)(v4 + 336);
      v4 = *(_QWORD *)(v4 + 336);
    }
    *v5 = (__int64)v1;
LABEL_12:
    ReleaseSRWLockExclusive(&stru_18059FD70);
    return 0LL;
  }
  else
  {
    DestroyAggregateSession(v1);
    return (unsigned int)v3;
  }
}
