/*
 * XREFs of PopDripsWatchdogCallbackWorker @ 0x1408EF0E0
 * Callers:
 *     <none>
 * Callees:
 *     PopDirectedDripsClearDisengageReason @ 0x14037A02C (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14037A094 (PopDirectedDripsSetDisengageReason.c)
 *     PopCalculateIdleInformation @ 0x140570650 (PopCalculateIdleInformation.c)
 *     PopDripsWatchdogAcquireContextLock @ 0x1408EEF10 (PopDripsWatchdogAcquireContextLock.c)
 *     PopDripsWatchdogCallbackHandler @ 0x1408EEF38 (PopDripsWatchdogCallbackHandler.c)
 *     PopDripsWatchdogReleaseContextLock @ 0x1408EF620 (PopDripsWatchdogReleaseContextLock.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408EF644 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopDripsWatchdogCallbackWorker(__int64 a1)
{
  char v2; // bp
  __int64 v3; // rsi
  int v4; // r14d
  __int128 v5; // xmm0
  int v6; // eax
  __int128 v7; // xmm1
  unsigned int v8; // eax
  int v9; // eax
  int v10; // r13d
  __int64 v11; // r15
  unsigned __int64 v12; // r12
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int128 v17; // [rsp+30h] [rbp-58h] BYREF
  __int128 v18; // [rsp+40h] [rbp-48h]
  char v19; // [rsp+90h] [rbp+8h]
  unsigned int v20; // [rsp+98h] [rbp+10h]
  __int64 v21; // [rsp+A0h] [rbp+18h]

  v17 = 0LL;
  v18 = 0LL;
  PopDripsWatchdogAcquireContextLock((struct _ERESOURCE *)a1);
  if ( (*(_DWORD *)(a1 + 104) & 4) != 0 && (*(_DWORD *)(a1 + 292) & 2) != 0 )
  {
    v2 = 1;
    ++*(_DWORD *)(a1 + 640);
    ++*(_DWORD *)(a1 + 308);
    PopDripsWatchdogScheduleNextTimer(a1 + 112);
    v3 = MEMORY[0xFFFFF78000000008];
    PopCalculateIdleInformation((__int64)&v17);
    v4 = DWORD2(v18) - *(_DWORD *)(a1 + 368);
    if ( DWORD2(v18) != *(_DWORD *)(a1 + 368) )
    {
      v5 = v17;
      v6 = PopDripsWatchdogDebounceTickInterval;
      v7 = v18;
      *(_DWORD *)(a1 + 308) = 0;
      *(_OWORD *)(a1 + 344) = v5;
      *(_QWORD *)(a1 + 328) = v3;
      *(_OWORD *)(a1 + 360) = v7;
      *(_DWORD *)(a1 + 312) = v6;
      *(_QWORD *)(a1 + 320) = v3;
    }
    v8 = *(_DWORD *)(a1 + 312);
    if ( v8 )
    {
      if ( *(_DWORD *)(a1 + 308) < v8 )
      {
        PopDirectedDripsClearDisengageReason(0);
      }
      else
      {
        PopDirectedDripsSetDisengageReason(0);
        *(_DWORD *)(a1 + 312) = PopDripsWatchdogDebounceTickInterval + *(_DWORD *)(a1 + 308);
      }
    }
    v9 = *(_DWORD *)(a1 + 292);
    if ( (v9 & 4) == 0 )
    {
      v10 = *(_DWORD *)(a1 + 108);
      v11 = v3 - *(_QWORD *)(a1 + 320);
      v12 = v3 - *(_QWORD *)(a1 + 328);
      v20 = *(_DWORD *)(a1 + 304);
      v21 = *(_QWORD *)(a1 + 648);
      v19 = *(_BYTE *)(a1 + 336);
      *(_DWORD *)(a1 + 292) = v9 | 4;
      PopDripsWatchdogReleaseContextLock(a1);
      PopAcquirePolicyLock(v13);
      if ( v4 || qword_140C4FF98 )
        v2 = 0;
      PopReleasePolicyLock(v15, v14);
      if ( v2 )
        PopDripsWatchdogCallbackHandler(v10, v20, v11, v12, v21, v19);
      PopDripsWatchdogAcquireContextLock((struct _ERESOURCE *)a1);
      *(_QWORD *)(a1 + 320) = v3;
      *(_DWORD *)(a1 + 292) &= ~4u;
    }
  }
  return PopDripsWatchdogReleaseContextLock(a1);
}
