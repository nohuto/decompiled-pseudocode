/*
 * XREFs of GreSetPointer @ 0x1C0088550
 * Callers:
 *     GreHidePointer @ 0x1C004A8C0 (GreHidePointer.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C004DA10 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C0087670 (zzzUpdateCursorImage.c)
 *     _lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator() @ 0x1C02741E8 (_lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_--operator().c)
 * Callees:
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C00888A8 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 */

__int64 __fastcall GreSetPointer(struct _CURSINFO *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r14d
  __int64 v17; // rdi
  __int64 HDEV; // rax
  HDEV v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // r9
  int v22; // ecx
  __int64 v23; // r13
  int v24; // r8d
  int v25; // edx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v29; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 ***v31; // rcx
  __int64 **v32; // r12
  __int64 *v33; // rsi
  bool v34; // zf
  int v35; // [rsp+30h] [rbp-68h]
  char v36; // [rsp+34h] [rbp-64h]
  __int64 v37; // [rsp+38h] [rbp-60h] BYREF
  __int64 v38; // [rsp+40h] [rbp-58h]
  __int64 v39; // [rsp+48h] [rbp-50h]
  __int64 v40; // [rsp+50h] [rbp-48h]

  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v10, v9, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v29),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v8 = *ThreadWin32Thread;
  }
  LOBYTE(v16) = 0;
  v36 = 0;
  v17 = ghsemDynamicModeChange;
  v40 = ghsemDynamicModeChange;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange, v13, v14, v15);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", ghsemDynamicModeChange);
  HDEV = UserGetHDEV();
  v19 = (HDEV)HDEV;
  if ( HDEV )
  {
    v37 = HDEV;
    if ( v8 )
    {
      v16 = -(*(_DWORD *)(v8 + 328) & 1);
      v36 = v16;
      *(_DWORD *)(v8 + 328) &= ~1u;
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v37) )
    {
      GreAcquireSemaphore(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
    }
    v20 = *(_QWORD *)(v37 + 64);
    v39 = v20;
    GreAcquireSemaphore(v20);
    if ( a1 )
    {
      gCachedSetPointerState = a1;
      byte_1C033A324 = 1;
    }
    else
    {
      gCachedSetPointerState = 0LL;
      byte_1C033A324 = 0;
    }
    dword_1C033A31C = a3;
    dword_1C033A318 = a2;
    dword_1C033A320 = a4;
    if ( gulCachedPointerRefs )
    {
      v23 = 0LL;
      v38 = 1LL;
      bCachedSetPointerRefs = 1;
      v22 = 1;
      v21 = 1LL;
      if ( (a2 & 0x20) != 0 )
      {
        v24 = 1;
        a2 |= 0x40u;
        v23 = 1LL;
        goto LABEL_14;
      }
    }
    else
    {
      v21 = 0LL;
      v22 = 0;
      v38 = 0LL;
      v23 = 0LL;
    }
    v24 = 0;
LABEL_14:
    v25 = *(_DWORD *)(v37 + 40);
    if ( (v25 & 0x20000) != 0 )
    {
      v31 = *(__int64 ****)(v37 + 1800);
      v32 = *v31;
      v35 = *((_DWORD *)v31 + 4);
      do
      {
        v33 = v32[6];
        if ( !v21 || (v33[266] & 0x2000) != 0 || (v33[5] & 4) != 0 || v23 )
        {
          GreAcquireSemaphore(v33[8]);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", v33[8], 4LL);
          vSetPointer((HDEV)v32[6], a1, a2, a3, a4);
          EtwTraceGreLockReleaseSemaphore(L"poThis.hsemPointer()", v33[8]);
          GreReleaseSemaphoreInternal(v33[8]);
          v21 = v38;
        }
        v34 = v35-- == 1;
        v32 = (__int64 **)*v32;
      }
      while ( !v34 );
      v20 = v39;
      v17 = v40;
      LOBYTE(v16) = v36;
    }
    else if ( !v22 || (*(_DWORD *)(v37 + 2128) & 0x2000) != 0 || (v25 & 4) != 0 || v24 )
    {
      vSetPointer(v19, a1, a2, a3, a4);
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v37) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      GreReleaseSemaphoreInternal(ghsemGreLock);
    }
    if ( v20 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", v20);
      GreReleaseSemaphoreInternal(v20);
    }
    if ( v8 )
      *(_DWORD *)(v8 + 328) ^= (*(_DWORD *)(v8 + 328) ^ (unsigned __int8)v16) & 1;
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem", v17);
  return GreReleaseSemaphoreInternal(v17);
}
