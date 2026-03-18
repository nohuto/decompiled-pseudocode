/*
 * XREFs of DrvEscapeRemoteDrivers @ 0x1C00C9B60
 * Callers:
 *     xxxRemoteConnect @ 0x1C011C440 (xxxRemoteConnect.c)
 * Callees:
 *     DrvGetDisplayDriverNames @ 0x1C00156E0 (DrvGetDisplayDriverNames.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     HDXDrvEscape @ 0x1C00C9D50 (HDXDrvEscape.c)
 */

__int64 __fastcall DrvEscapeRemoteDrivers(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // r12
  __int64 v7; // r15
  unsigned int v8; // r13d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  unsigned int v15; // ebp
  unsigned int *DisplayDriverNames; // rax
  unsigned int *v17; // rdi
  int v18; // r14d
  unsigned __int16 *v19; // rax
  __int64 v20; // r8
  int v21; // edx
  int v22; // ecx
  __int64 v23; // rdx
  PERESOURCE v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v28; // rax
  __int64 v29; // [rsp+20h] [rbp-48h]
  __int64 v30; // [rsp+70h] [rbp+8h]

  v6 = 0LL;
  v7 = a4;
  v8 = 0;
  v11 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v11 + 24) = a1;
  WdLogEvent5_WdEvent(v11);
  if ( gRemoteSessionUseWddm )
  {
    v28 = WdLogNewEntry5_WdTrace(v13, v12);
    *(_QWORD *)(v28 + 24) = v7;
    WdLogEvent5_WdTrace(v28);
    return 1LL;
  }
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu || !a3 )
    return HDXDrvEscape(*(_QWORD *)(a1 + 40), (unsigned int)v7, a5, a6);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  v15 = 0;
  if ( !*(_DWORD *)(a1 + 20) )
    goto LABEL_18;
  while ( 1 )
  {
    v29 = 56LL * v15;
    v30 = *(_QWORD *)(*(_QWORD *)(v29 + a1 + 40) + 2576LL);
    DisplayDriverNames = DrvGetDisplayDriverNames(v30);
    v17 = DisplayDriverNames;
    if ( DisplayDriverNames )
      break;
LABEL_15:
    if ( ++v15 >= *(_DWORD *)(a1 + 20) )
      goto LABEL_16;
  }
  v18 = 0;
  if ( !*DisplayDriverNames )
  {
LABEL_14:
    Win32FreePool((__int64)v17);
    v17 = 0LL;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v19 = *(unsigned __int16 **)&v17[4 * v18 + 4];
    v20 = a3 - (_QWORD)v19;
    do
    {
      v21 = *(unsigned __int16 *)((char *)v19 + v20);
      v22 = *v19 - v21;
      if ( v22 )
        break;
      ++v19;
    }
    while ( v21 );
    if ( !v22 && (*(_DWORD *)(v30 + 160) & 0x4000000) != 0 )
    {
      v6 = *(_QWORD *)(v29 + a1 + 40);
      v8 = HDXDrvEscape(v6, (unsigned int)v7, a5, a6);
      if ( v8 != 1 )
        break;
    }
    if ( ++v18 >= *v17 )
      goto LABEL_14;
  }
LABEL_16:
  if ( v17 )
    Win32FreePool((__int64)v17);
LABEL_18:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v14);
  v24 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v25);
  }
  v26 = WdLogNewEntry5_WdTrace(v24, v23);
  *(_QWORD *)(v26 + 24) = v6;
  WdLogEvent5_WdTrace(v26);
  return v8;
}
