/*
 * XREFs of GreSetPointer @ 0x1C00CDFB0
 * Callers:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C002B0C0 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     GreHidePointer @ 0x1C0097950 (GreHidePointer.c)
 *     zzzUpdateCursorImage @ 0x1C00CD0D0 (zzzUpdateCursorImage.c)
 *     _lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator() @ 0x1C0272BD8 (_lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_--operator().c)
 * Callees:
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C00CE308 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 */

__int64 __fastcall GreSetPointer(struct _CURSINFO *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *ThreadWin32Thread; // rax
  int v13; // r14d
  __int64 v14; // rdi
  __int64 HDEV; // rax
  HDEV v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // r9
  int v19; // ecx
  __int64 v20; // r13
  int v21; // r8d
  int v22; // edx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v26; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 ***v28; // rcx
  __int64 **v29; // r12
  __int64 *v30; // rsi
  bool v31; // zf
  int v32; // [rsp+30h] [rbp-68h]
  char v33; // [rsp+34h] [rbp-64h]
  __int64 v34; // [rsp+38h] [rbp-60h] BYREF
  __int64 v35; // [rsp+40h] [rbp-58h]
  __int64 v36; // [rsp+48h] [rbp-50h]
  __int64 v37; // [rsp+50h] [rbp-48h]

  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v10, v9, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v26),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v8 = *ThreadWin32Thread;
  }
  LOBYTE(v13) = 0;
  v33 = 0;
  v14 = ghsemDynamicModeChange;
  v37 = ghsemDynamicModeChange;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", ghsemDynamicModeChange);
  HDEV = UserGetHDEV();
  v16 = (HDEV)HDEV;
  if ( HDEV )
  {
    v34 = HDEV;
    if ( v8 )
    {
      v13 = -(*(_DWORD *)(v8 + 328) & 1);
      v33 = v13;
      *(_DWORD *)(v8 + 328) &= ~1u;
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v34) )
    {
      GreAcquireSemaphore(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
    }
    v17 = *(_QWORD *)(v34 + 64);
    v36 = v17;
    GreAcquireSemaphore(v17);
    if ( a1 )
    {
      gCachedSetPointerState = a1;
      byte_1C033934C = 1;
    }
    else
    {
      gCachedSetPointerState = 0LL;
      byte_1C033934C = 0;
    }
    dword_1C0339344 = a3;
    dword_1C0339340 = a2;
    dword_1C0339348 = a4;
    if ( gulCachedPointerRefs )
    {
      v20 = 0LL;
      v35 = 1LL;
      bCachedSetPointerRefs = 1;
      v19 = 1;
      v18 = 1LL;
      if ( (a2 & 0x20) != 0 )
      {
        v21 = 1;
        a2 |= 0x40u;
        v20 = 1LL;
        goto LABEL_14;
      }
    }
    else
    {
      v18 = 0LL;
      v19 = 0;
      v35 = 0LL;
      v20 = 0LL;
    }
    v21 = 0;
LABEL_14:
    v22 = *(_DWORD *)(v34 + 40);
    if ( (v22 & 0x20000) != 0 )
    {
      v28 = *(__int64 ****)(v34 + 1800);
      v29 = *v28;
      v32 = *((_DWORD *)v28 + 4);
      do
      {
        v30 = v29[6];
        if ( !v18 || (v30[266] & 0x2000) != 0 || (v30[5] & 4) != 0 || v20 )
        {
          GreAcquireSemaphore(v30[8]);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", v30[8], 4LL);
          vSetPointer((HDEV)v29[6], a1, a2, a3, a4);
          EtwTraceGreLockReleaseSemaphore(L"poThis.hsemPointer()", v30[8]);
          GreReleaseSemaphoreInternal(v30[8]);
          v18 = v35;
        }
        v31 = v32-- == 1;
        v29 = (__int64 **)*v29;
      }
      while ( !v31 );
      v17 = v36;
      v14 = v37;
      LOBYTE(v13) = v33;
    }
    else if ( !v19 || (*(_DWORD *)(v34 + 2128) & 0x2000) != 0 || (v22 & 4) != 0 || v21 )
    {
      vSetPointer(v16, a1, a2, a3, a4);
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v34) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      GreReleaseSemaphoreInternal(ghsemGreLock);
    }
    if ( v17 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", v17);
      GreReleaseSemaphoreInternal(v17);
    }
    if ( v8 )
      *(_DWORD *)(v8 + 328) ^= (*(_DWORD *)(v8 + 328) ^ (unsigned __int8)v13) & 1;
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem", v14);
  return GreReleaseSemaphoreInternal(v14);
}
