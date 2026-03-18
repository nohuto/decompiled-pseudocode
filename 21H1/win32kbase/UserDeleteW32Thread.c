/*
 * XREFs of UserDeleteW32Thread @ 0x1C0129350
 * Callers:
 *     <none>
 * Callees:
 *     IsFreeMessageListSupported @ 0x1C00303B4 (IsFreeMessageListSupported.c)
 *     FreeMessageList @ 0x1C0030FA0 (FreeMessageList.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0067980 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UnlockObjectAssignment @ 0x1C00701F0 (UnlockObjectAssignment.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00744E0 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C008A064 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreeToPagedLookasideList @ 0x1C008BD10 (Win32FreeToPagedLookasideList.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall UserDeleteW32Thread(__int64 a1)
{
  __int64 v1; // rsi
  void *ThreadWin32Thread; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // xmm1_8
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // ebx
  int v16; // eax
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h]
  int v19; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  ThreadWin32Thread = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v19);
  if ( *(_DWORD *)(a1 + 8) )
    goto LABEL_24;
  v7 = *(void **)(a1 + 728);
  if ( v7 )
    ObfDereferenceObject(v7);
  v8 = *(_QWORD *)(a1 + 872);
  if ( v8 )
    Win32FreePool(v8, v4, v6);
  v9 = *(_QWORD *)(a1 + 488);
  if ( v9 )
    Win32FreePool(v9, v4, v6);
  v10 = *(_QWORD *)(a1 + 424);
  if ( v10 )
  {
    if ( !*(_DWORD *)(v10 + 396) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
      v10 = *(_QWORD *)(a1 + 424);
    }
    --*(_DWORD *)(v10 + 396);
    v11 = *(_QWORD *)(a1 + 424);
    if ( !*(_DWORD *)(v11 + 396) && !*(_DWORD *)(v11 + 392) )
    {
      if ( (int)IsFreeMessageListSupported() >= 0 )
      {
        CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(
          (__int64)&v17,
          *(_QWORD *)(a1 + 424));
        FreeMessageList(*(_QWORD *)(a1 + 424) + 24LL);
      }
      Win32FreeToPagedLookasideList((__int64)QLookaside, *(_QWORD *)(a1 + 424));
    }
  }
  v12 = *(_QWORD *)(a1 + 400);
  v17 = *(_OWORD *)(a1 + 384);
  v18 = v12;
  if ( *(_QWORD *)(a1 + 448) )
    UnlockObjectAssignment((void **)(a1 + 448));
  ThreadWin32Thread = (void *)PsGetThreadWin32Thread(v1);
  Win32FreePool(a1, v13, v14);
  if ( !ThreadWin32Thread )
  {
LABEL_24:
    v16 = v19;
  }
  else
  {
    v15 = v19;
    if ( !v19 )
      EtwTraceReleaseUserCrit(v5);
    PsSetThreadWin32Thread(v1, 0LL, ThreadWin32Thread);
    if ( !v15 )
      UserSessionSwitchLeaveCrit(v5);
    v16 = 1;
  }
  if ( !v16 )
    UserSessionSwitchLeaveCrit(v5);
  if ( ThreadWin32Thread )
    ExFreePoolWithTag(ThreadWin32Thread, 0);
}
