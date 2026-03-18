/*
 * XREFs of DrvEscapeRemoteDrivers @ 0x1C00CA410
 * Callers:
 *     xxxRemoteConnect @ 0x1C0054D30 (xxxRemoteConnect.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     DrvGetDisplayDriverNames @ 0x1C00ADF70 (DrvGetDisplayDriverNames.c)
 *     HDXDrvEscape @ 0x1C00CA600 (HDXDrvEscape.c)
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
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebp
  unsigned int *DisplayDriverNames; // rax
  __int64 v16; // rdx
  unsigned int *v17; // rdi
  int v18; // r14d
  unsigned __int16 *v19; // rax
  int v20; // ecx
  PERESOURCE v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+20h] [rbp-48h]
  __int64 v27; // [rsp+70h] [rbp+8h]

  v6 = 0LL;
  v7 = a4;
  v8 = 0;
  v11 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v11 + 24) = a1;
  WdLogEvent5_WdEvent(v11);
  if ( gRemoteSessionUseWddm )
  {
    v25 = WdLogNewEntry5_WdTrace(v12);
    *(_QWORD *)(v25 + 24) = v7;
    WdLogEvent5_WdTrace(v25);
    return 1LL;
  }
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu || !a3 )
    return HDXDrvEscape(*(_QWORD *)(a1 + 40), (unsigned int)v7, a5, a6);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  v14 = 0;
  if ( !*(_DWORD *)(a1 + 20) )
    goto LABEL_18;
  while ( 1 )
  {
    v26 = 56LL * v14;
    v27 = *(_QWORD *)(*(_QWORD *)(v26 + a1 + 40) + 2576LL);
    DisplayDriverNames = DrvGetDisplayDriverNames(v27);
    v17 = DisplayDriverNames;
    if ( DisplayDriverNames )
      break;
LABEL_15:
    if ( ++v14 >= *(_DWORD *)(a1 + 20) )
      goto LABEL_16;
  }
  v18 = 0;
  if ( !*DisplayDriverNames )
  {
LABEL_14:
    Win32FreePool((__int64)v17, v16, v13);
    v17 = 0LL;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v19 = *(unsigned __int16 **)&v17[4 * v18 + 4];
    v13 = a3 - (_QWORD)v19;
    do
    {
      v16 = *(unsigned __int16 *)((char *)v19 + v13);
      v20 = *v19 - (_DWORD)v16;
      if ( v20 )
        break;
      ++v19;
    }
    while ( (_DWORD)v16 );
    if ( !v20 && (*(_DWORD *)(v27 + 160) & 0x4000000) != 0 )
    {
      v6 = *(_QWORD *)(v26 + a1 + 40);
      v8 = HDXDrvEscape(v6, (unsigned int)v7, a5, a6);
      if ( v8 != 1 )
        break;
    }
    if ( ++v18 >= *v17 )
      goto LABEL_14;
  }
LABEL_16:
  if ( v17 )
    Win32FreePool((__int64)v17, v16, v13);
LABEL_18:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v13);
  v21 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v22);
  }
  v23 = WdLogNewEntry5_WdTrace(v21);
  *(_QWORD *)(v23 + 24) = v6;
  WdLogEvent5_WdTrace(v23);
  return v8;
}
