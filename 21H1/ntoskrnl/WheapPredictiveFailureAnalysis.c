/*
 * XREFs of WheapPredictiveFailureAnalysis @ 0x140959D60
 * Callers:
 *     WheapProcessWorkQueueItem @ 0x1405B5F00 (WheapProcessWorkQueueItem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140958970 (WheaAttemptPhysicalPageOffline.c)
 *     WheapPfaMemoryCheck @ 0x140959A34 (WheapPfaMemoryCheck.c)
 */

char __fastcall WheapPredictiveFailureAnalysis(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  char v4; // r9
  unsigned int v5; // edx
  unsigned int *v6; // rcx
  unsigned int *v7; // r10
  unsigned int *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  _DWORD *v13; // r9
  signed __int8 v14; // cf
  __int64 v15; // rbx

  v1 = a1 + 40;
  LODWORD(v3) = PshedDoPfa(a1 + 40);
  if ( (_DWORD)v3 != 1
    && !WheapPolicyDisableOffline
    && WheapPfaInitialized
    && *(_WORD *)(v1 + 10)
    && *(_DWORD *)(v1 + 12) == 2
    && (*(_BYTE *)(v1 + 104) & 1) == 0 )
  {
    v4 = 0;
    v5 = 0;
    v6 = (unsigned int *)(v1 + 128);
    while ( 1 )
    {
      v7 = v6;
      if ( (v6[3] & 1) != 0 )
        break;
      ++v5;
      v6 += 18;
      if ( v5 >= *(unsigned __int16 *)(v1 + 10) )
        goto LABEL_13;
    }
    v4 = 1;
LABEL_13:
    v8 = (unsigned int *)(v1 + 128);
    if ( v4 )
      v8 = v7;
    v3 = *((_QWORD *)v8 + 2) - *(_QWORD *)&MEMORY_ERROR_SECTION_GUID.Data1;
    if ( !v3 )
      v3 = *((_QWORD *)v8 + 3) - *(_QWORD *)MEMORY_ERROR_SECTION_GUID.Data4;
    if ( !v3 )
    {
      LODWORD(v3) = *(_DWORD *)(a1 + 24);
      v9 = v1 + *v8;
      if ( (v3 & 4) != 0 )
      {
        if ( (v3 & 8) != 0 && (*(_BYTE *)v9 & 2) != 0 )
          LOBYTE(v3) = WheaAttemptPhysicalPageOffline(*(_QWORD *)(v9 + 16) >> 12, 1, 0);
      }
      else
      {
        v10 = KeAbPreAcquire((ULONG_PTR)&WheapPfaLock, 0LL, 0);
        v14 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock, 0LL);
        v15 = v10;
        if ( v14 )
          ExfAcquirePushLockExclusiveEx(&WheapPfaLock, v10, (ULONG_PTR)&WheapPfaLock);
        if ( v15 )
          *(_BYTE *)(v15 + 26) |= 1u;
        WheapPfaMemoryCheck(v11, v9, v12, v13);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapPfaLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&WheapPfaLock);
        LOBYTE(v3) = KeAbPostRelease((ULONG_PTR)&WheapPfaLock);
      }
    }
  }
  return v3;
}
