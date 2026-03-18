/*
 * XREFs of HmgAllocateDcAttr @ 0x1C0083FC8
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0090550 (GreSetDCOwnerEx.c)
 *     GreCreateDisplayDC @ 0x1C0091A00 (GreCreateDisplayDC.c)
 * Callees:
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C0015284 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00821C0 (GreReleaseHmgrSemaphore.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00A5C20 (GreAcquireHmgrSemaphore.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C0143060 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 __fastcall HmgAllocateDcAttr(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // r8d
  _QWORD *v15; // rcx
  _QWORD *v16; // rsi
  __int64 *v17; // rax
  __int64 *v19; // rcx
  __int64 **v20; // rdx
  char *v21; // rsi
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v28; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v30; // rdx
  int v31; // ecx
  int v32; // r8d
  void *v33; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v28),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v8 = 0LL;
  if ( *(_QWORD *)(v3 + 24) )
  {
    v8 = *(_QWORD *)(v3 + 24);
    *(_QWORD *)(v3 + 24) = 0LL;
    return v8;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
  GreAcquireHmgrSemaphore(v12, v11);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 40) )
    goto LABEL_8;
  v33 = 0LL;
  v21 = (char *)HmgAllocateSecureUserMemory(&v33);
  if ( !v21 )
    goto LABEL_8;
  v22 = PALLOCMEM2(0x70uLL, 0x66636447u, 0);
  if ( v22 )
  {
    v23 = (_QWORD *)(CurrentProcessWin32Process + 192);
    v24 = *(_QWORD *)(CurrentProcessWin32Process + 192);
    if ( *(_QWORD *)(v24 + 8) != CurrentProcessWin32Process + 192 )
      goto LABEL_26;
    *v22 = v24;
    v22[1] = v23;
    *(_QWORD *)(v24 + 8) = v22;
    v13 = 11LL;
    *v23 = v22;
    v25 = v22 + 3;
    *((_DWORD *)v22 + 4) = 11;
    *(_QWORD *)(CurrentProcessWin32Process + 40) = v21 + 3520;
    do
    {
      *v25 = v21;
      v21 += 352;
      ++v25;
      --v13;
    }
    while ( v13 );
LABEL_8:
    v15 = *(_QWORD **)(CurrentProcessWin32Process + 40);
    if ( !v15 )
    {
LABEL_11:
      GreReleaseHmgrSemaphore((int)v15, v13, v14);
      return v8;
    }
    v16 = (_QWORD *)(CurrentProcessWin32Process + 192);
    v8 = *(_QWORD *)(CurrentProcessWin32Process + 40);
    v17 = *(__int64 **)(CurrentProcessWin32Process + 192);
    if ( (*((_DWORD *)v17 + 4))-- != 1 )
    {
      v15 = (_QWORD *)v17[(unsigned int)(*((_DWORD *)v17 + 4) - 1) + 3];
      *(_QWORD *)(CurrentProcessWin32Process + 40) = v15;
      goto LABEL_11;
    }
    v19 = (__int64 *)*v17;
    if ( *(__int64 **)(*v17 + 8) == v17 )
    {
      v20 = (__int64 **)v17[1];
      if ( *v20 == v17 )
      {
        *v20 = v19;
        v19[1] = (__int64)v20;
        Win32FreePool(v17);
        v15 = (_QWORD *)*v16;
        if ( (_QWORD *)*v16 != v16 )
          v2 = v15[(unsigned int)(*((_DWORD *)v15 + 4) - 1) + 3];
        *(_QWORD *)(CurrentProcessWin32Process + 40) = v2;
        goto LABEL_11;
      }
    }
LABEL_26:
    __fastfail(3u);
  }
  HmgFreeAllocateSecureUserMemory(v21, v33);
  GreReleaseHmgrSemaphore(v31, v30, v32);
  return 0LL;
}
