/*
 * XREFs of SmpReadySubSys @ 0x1400028DC
 * Callers:
 *     SmpHandleConnectionRequest @ 0x140003020 (SmpHandleConnectionRequest.c)
 * Callees:
 *     SmpCompleteSubSysStatusChange @ 0x140002948 (SmpCompleteSubSysStatusChange.c)
 *     SmpUnlockKnownSubSysList @ 0x1400035B8 (SmpUnlockKnownSubSysList.c)
 *     SmpLockKnownSubSysList @ 0x140003A3C (SmpLockKnownSubSysList.c)
 */

__int64 __fastcall SmpReadySubSys(__int64 a1, _OWORD *a2)
{
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  SmpLockKnownSubSysList(*(unsigned int *)(a1 + 64), 0LL, v5);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    *(_OWORD *)(a1 + 48) = *a2;
  else
    *(_DWORD *)(a1 + 24) = *(_DWORD *)a2;
  SmpUnlockKnownSubSysList(v5);
  SmpCompleteSubSysStatusChange(a1);
  return RtlWakeAllConditionVariable(&SmpSubSysReadyCondition);
}
