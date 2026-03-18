/*
 * XREFs of HmgAllocateDcAttr @ 0x1C008AE30
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0089500 (GreSetDCOwnerEx.c)
 *     GreCreateDisplayDC @ 0x1C008A9B0 (GreCreateDisplayDC.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C00A9A1C (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C01493B0 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
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
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // rdx
  int v15; // r8d
  _QWORD *v16; // rcx
  _QWORD *v17; // rsi
  __int64 *v18; // rax
  __int64 *v20; // rcx
  __int64 **v21; // rdx
  char *v22; // rsi
  __int64 v23; // rax
  __int64 *v24; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v29; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v31; // rdx
  int v32; // ecx
  int v33; // r8d
  void *v34; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v29),
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
  GreAcquireHmgrSemaphore(v12, v11, v13);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 40) )
    goto LABEL_8;
  v34 = 0LL;
  v22 = (char *)HmgAllocateSecureUserMemory(&v34);
  if ( !v22 )
    goto LABEL_8;
  v23 = PALLOCMEM2(0x70uLL);
  if ( v23 )
  {
    v24 = (__int64 *)(CurrentProcessWin32Process + 192);
    v25 = *(_QWORD *)(CurrentProcessWin32Process + 192);
    if ( *(_QWORD *)(v25 + 8) != CurrentProcessWin32Process + 192 )
      goto LABEL_26;
    *(_QWORD *)v23 = v25;
    *(_QWORD *)(v23 + 8) = v24;
    *(_QWORD *)(v25 + 8) = v23;
    v14 = 11LL;
    *v24 = v23;
    v26 = (_QWORD *)(v23 + 24);
    *(_DWORD *)(v23 + 16) = 11;
    *(_QWORD *)(CurrentProcessWin32Process + 40) = v22 + 3520;
    do
    {
      *v26 = v22;
      v22 += 352;
      ++v26;
      --v14;
    }
    while ( v14 );
LABEL_8:
    v16 = *(_QWORD **)(CurrentProcessWin32Process + 40);
    if ( !v16 )
    {
LABEL_11:
      GreReleaseHmgrSemaphore((int)v16, v14, v15);
      return v8;
    }
    v17 = (_QWORD *)(CurrentProcessWin32Process + 192);
    v8 = *(_QWORD *)(CurrentProcessWin32Process + 40);
    v18 = *(__int64 **)(CurrentProcessWin32Process + 192);
    if ( (*((_DWORD *)v18 + 4))-- != 1 )
    {
      v16 = (_QWORD *)v18[(unsigned int)(*((_DWORD *)v18 + 4) - 1) + 3];
      *(_QWORD *)(CurrentProcessWin32Process + 40) = v16;
      goto LABEL_11;
    }
    v20 = (__int64 *)*v18;
    if ( *(__int64 **)(*v18 + 8) == v18 )
    {
      v21 = (__int64 **)v18[1];
      if ( *v21 == v18 )
      {
        *v21 = v20;
        v20[1] = (__int64)v21;
        Win32FreePool(v18);
        v16 = (_QWORD *)*v17;
        if ( (_QWORD *)*v17 != v17 )
          v2 = v16[(unsigned int)(*((_DWORD *)v16 + 4) - 1) + 3];
        *(_QWORD *)(CurrentProcessWin32Process + 40) = v2;
        goto LABEL_11;
      }
    }
LABEL_26:
    __fastfail(3u);
  }
  HmgFreeAllocateSecureUserMemory(v22, v34);
  GreReleaseHmgrSemaphore(v32, v31, v33);
  return 0LL;
}
