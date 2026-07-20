/*
 * XREFs of SmpUnlockKnownSubSysList @ 0x1400035B8
 * Callers:
 *     wmain @ 0x140001840 (wmain.c)
 *     SmpReadySubSys @ 0x1400028DC (SmpReadySubSys.c)
 *     SmpHandleConnectionRequest @ 0x140003020 (SmpHandleConnectionRequest.c)
 *     SmpSearchKnownSubSysDatabase @ 0x1400034EC (SmpSearchKnownSubSysDatabase.c)
 *     SmpWaitForSingleSubSys @ 0x140003B30 (SmpWaitForSingleSubSys.c)
 *     SmpTerminateCSR @ 0x1400058B4 (SmpTerminateCSR.c)
 *     SmpLoadSubSystem @ 0x14001466C (SmpLoadSubSystem.c)
 *     SmpDeleteSubSys @ 0x140015678 (SmpDeleteSubSys.c)
 *     SmpWaitForStatusChange @ 0x1400158A8 (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpUnlockKnownSubSysList(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rcx

  v1 = *(_DWORD *)a1 == 1;
  v2 = *(_QWORD *)(a1 + 8) + 16LL;
  if ( v1 )
    return RtlReleaseSRWLockShared(v2);
  else
    return RtlReleaseSRWLockExclusive(v2);
}
