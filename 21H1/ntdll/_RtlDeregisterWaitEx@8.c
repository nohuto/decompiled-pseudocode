/*
 * XREFs of _RtlDeregisterWaitEx@8 @ 0x4B2A8010
 * Callers:
 *     _RtlDeregisterWait@4 @ 0x4B385450 (_RtlDeregisterWait@4.c)
 * Callees:
 *     _RtlDeregisterWaitEx@8 @ 0x4B2A8010 (_RtlDeregisterWaitEx@8.c)
 *     _TpWaitOutstandingCallbackCount@4 @ 0x4B2A8156 (_TpWaitOutstandingCallbackCount@4.c)
 *     _RtlpTpWaitRundown@4 @ 0x4B2A81AB (_RtlpTpWaitRundown@4.c)
 *     _TpWaitForWait@8 @ 0x4B2B1D80 (_TpWaitForWait@8.c)
 *     _TpReleaseWait@4 @ 0x4B2B1E70 (_TpReleaseWait@4.c)
 *     _RtlpTpRevertCapture@8 @ 0x4B2B1FBA (_RtlpTpRevertCapture@8.c)
 *     _RtlpTpResumeImpersonation@4 @ 0x4B2B221A (_RtlpTpResumeImpersonation@4.c)
 *     _TpSetWaitEx@16 @ 0x4B2B7AB0 (_TpSetWaitEx@16.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __stdcall RtlDeregisterWaitEx(int a1, int a2)
{
  int v2; // esi
  int v3; // esi
  int v4; // eax
  int v6; // [esp+10h] [ebp-28h]
  int v7; // [esp+18h] [ebp-20h] BYREF
  int v8; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v8 = -1073741823;
  v7 = 0;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0;
  if ( !a1 )
    return -1073741585;
  ms_exc.registration.TryLevel = 0;
  v2 = RtlpTpRevertCapture(&v7, 0);
  v8 = v2;
  if ( v2 >= 0 )
  {
    RtlAcquireSRWLockExclusive(a1 + 8);
    v3 = 1;
    ms_exc.registration.TryLevel = 1;
    *(_DWORD *)(a1 + 4) |= 8u;
    TpSetWaitEx(*(_DWORD *)(a1 + 24), 0, 0, 0);
    ms_exc.registration.TryLevel = 0;
    RtlReleaseSRWLockExclusive(a1 + 8);
    _InterlockedOr((volatile signed __int32 *)(a1 + 12), 1u);
    if ( (*(_BYTE *)(a1 + 4) & 4) == 0 || *(void **)(a1 + 48) != NtCurrentTeb()->ClientId.UniqueThread )
      v3 = 0;
    if ( a2 == -1 )
    {
      if ( !v3 )
        TpWaitForWait(*(_DWORD *)(a1 + 24), 0);
    }
    else if ( a2 )
    {
      *(_DWORD *)(a1 + 44) = a2;
    }
    v6 = TpWaitOutstandingCallbackCount(*(_DWORD *)(a1 + 24));
    TpReleaseWait(*(_DWORD *)(a1 + 24));
    if ( (_InterlockedAnd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpWaitRundown(a1);
      v4 = 0;
    }
    else
    {
      v4 = v6;
    }
    if ( v4 )
      v2 = v3 != 0 ? 0 : 259;
    else
      v2 = 0;
    v8 = v2;
  }
  ms_exc.registration.TryLevel = -2;
  RtlpTpResumeImpersonation(v7, 1261076738);
  return v2;
}
