/*
 * XREFs of RaidResumeUnitQueue @ 0x1C0002B50
 * Callers:
 *     RaidSetUnitPauseTimer @ 0x1C0002898 (RaidSetUnitPauseTimer.c)
 *     RaidAdapterResumeUnit @ 0x1C00028E4 (RaidAdapterResumeUnit.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0012E48 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitPauseTimerDpcRoutine @ 0x1C0015A70 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidCompletionDpcRoutine @ 0x1C0030740 (RaidCompletionDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x1C0038C50 (StorPortCompleteRequest.c)
 *     RaUnitRequestPowerUp @ 0x1C003E610 (RaUnitRequestPowerUp.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0002BF8 (DbgLogRequest.c)
 *     RaidResumeIoQueue @ 0x1C0002C7C (RaidResumeIoQueue.c)
 */

__int64 __fastcall RaidResumeUnitQueue(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  unsigned __int8 v5; // dl
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v2 = RaidResumeIoQueue(a1 + 640);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = v2;
  if ( v3 )
    v5 = *(_BYTE *)(v3 + 56);
  else
    v5 = -1;
  if ( (qword_1C0069310 & 0x200) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      5,
      (_DWORD)retaddr,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) | (((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96)) | (((unsigned __int8)*(_DWORD *)(a1 + 96) | (v5 << 8)) << 8)) << 8),
      *(int *)(a1 + 684),
      v2,
      0LL);
  return v4;
}
