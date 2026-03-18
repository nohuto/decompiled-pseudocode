/*
 * XREFs of UserDeleteW32Thread @ 0x1C0121020
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreeToPagedLookasideList @ 0x1C003C900 (Win32FreeToPagedLookasideList.c)
 *     EtwTraceReleaseUserCrit @ 0x1C004B064 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C004CB60 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UnlockObjectAssignment @ 0x1C0052170 (UnlockObjectAssignment.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0076B10 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     IsFreeMessageListSupported @ 0x1C00A1834 (IsFreeMessageListSupported.c)
 *     FreeMessageList @ 0x1C00A2120 (FreeMessageList.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall UserDeleteW32Thread(__int64 a1)
{
  __int64 v1; // rsi
  void *ThreadWin32Thread; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // xmm1_8
  int v16; // ebx
  int v17; // eax
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h]
  int v20; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  ThreadWin32Thread = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v20);
  if ( *(_DWORD *)(a1 + 8) )
    goto LABEL_24;
  v8 = *(void **)(a1 + 736);
  if ( v8 )
    ObfDereferenceObject(v8);
  v9 = *(_QWORD *)(a1 + 880);
  if ( v9 )
    Win32FreePool(v9);
  v10 = *(_QWORD *)(a1 + 496);
  if ( v10 )
    Win32FreePool(v10);
  v11 = *(_QWORD *)(a1 + 432);
  if ( v11 )
  {
    if ( !*(_DWORD *)(v11 + 396) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v4, v6, v7);
      v11 = *(_QWORD *)(a1 + 432);
    }
    --*(_DWORD *)(v11 + 396);
    v12 = *(_QWORD *)(a1 + 432);
    if ( !*(_DWORD *)(v12 + 396) && !*(_DWORD *)(v12 + 392) )
    {
      if ( (int)IsFreeMessageListSupported() >= 0 )
      {
        CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(
          (__int64)&v18,
          *(_QWORD *)(a1 + 432),
          v13,
          v14);
        FreeMessageList(*(_QWORD *)(a1 + 432) + 24LL);
      }
      Win32FreeToPagedLookasideList((__int64)QLookaside, *(_QWORD *)(a1 + 432));
    }
  }
  v15 = *(_QWORD *)(a1 + 408);
  v18 = *(_OWORD *)(a1 + 392);
  v19 = v15;
  if ( *(_QWORD *)(a1 + 456) )
    UnlockObjectAssignment((void **)(a1 + 456));
  ThreadWin32Thread = (void *)PsGetThreadWin32Thread(v1);
  Win32FreePool(a1);
  if ( !ThreadWin32Thread )
  {
LABEL_24:
    v17 = v20;
  }
  else
  {
    v16 = v20;
    if ( !v20 )
      EtwTraceReleaseUserCrit();
    PsSetThreadWin32Thread(v1, 0LL, ThreadWin32Thread);
    if ( !v16 )
      UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
    v17 = 1;
  }
  if ( !v17 )
    UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  if ( ThreadWin32Thread )
    ExFreePoolWithTag(ThreadWin32Thread, 0);
}
