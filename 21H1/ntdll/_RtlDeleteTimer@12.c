/*
 * XREFs of _RtlDeleteTimer@12 @ 0x4B2A8C40
 * Callers:
 *     _RtlCancelTimer@8 @ 0x4B3851B0 (_RtlCancelTimer@8.c)
 * Callees:
 *     _RtlDeleteTimer@12 @ 0x4B2A8C40 (_RtlDeleteTimer@12.c)
 *     _RtlpTpTimerRundown@4 @ 0x4B2A8D8D (_RtlpTpTimerRundown@4.c)
 *     _TpTimerOutstandingCallbackCount@4 @ 0x4B2A8DD0 (_TpTimerOutstandingCallbackCount@4.c)
 *     _RtlpTpRevertCapture@8 @ 0x4B2B1FBA (_RtlpTpRevertCapture@8.c)
 *     _RtlpTpResumeImpersonation@4 @ 0x4B2B221A (_RtlpTpResumeImpersonation@4.c)
 *     _TpReleaseTimer@4 @ 0x4B2B3B90 (_TpReleaseTimer@4.c)
 *     _TpWaitForTimer@8 @ 0x4B2B3C20 (_TpWaitForTimer@8.c)
 *     _TpSetTimerEx@16 @ 0x4B2B4620 (_TpSetTimerEx@16.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __stdcall RtlDeleteTimer(int a1, int *a2, int a3)
{
  int v3; // edi
  int *v4; // ecx
  int **v5; // eax
  int v6; // edi
  int v8; // [esp+14h] [ebp-20h] BYREF
  int v9; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v9 = -1073741823;
  v8 = 0;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0;
  if ( !a1 )
    return -1073741585;
  if ( !a2 )
    return -1073741584;
  ms_exc.registration.TryLevel = 0;
  v3 = RtlpTpRevertCapture(&v8, 0);
  v9 = v3;
  if ( v3 >= 0 )
  {
    RtlAcquireSRWLockExclusive(a2[7] + 4);
    ms_exc.registration.TryLevel = 1;
    v4 = (int *)*a2;
    v5 = (int **)a2[1];
    if ( *(int **)(*a2 + 4) != a2 || *v5 != a2 )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = (int)v5;
    ms_exc.registration.TryLevel = 0;
    RtlReleaseSRWLockExclusive(a2[7] + 4);
    _InterlockedOr(a2 + 6, 1u);
    TpSetTimerEx(a2[8], 0, 0, 0);
    if ( a3 == -1 )
    {
      TpWaitForTimer(a2[8], 1);
    }
    else if ( a3 )
    {
      a2[9] = a3;
    }
    v6 = TpTimerOutstandingCallbackCount(a2[8]);
    TpReleaseTimer(a2[8]);
    if ( (_InterlockedAnd(a2 + 6, 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpTimerRundown(a2);
      v6 = 0;
    }
    v3 = v6 != 0 ? 0x103 : 0;
    v9 = v3;
  }
  ms_exc.registration.TryLevel = -2;
  RtlpTpResumeImpersonation(v8, 1261079877);
  return v3;
}
