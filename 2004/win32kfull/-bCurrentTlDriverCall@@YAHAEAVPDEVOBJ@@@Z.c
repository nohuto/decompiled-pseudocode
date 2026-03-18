/*
 * XREFs of ?bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00FC3A0
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0083800 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00A7EE8 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall bCurrentTlDriverCall(struct PDEVOBJ *a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // edi
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbp
  struct _KTHREAD *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v20; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v22; // rax
  int v23; // ebx
  __int64 v24; // rcx
  __int64 v25; // rax

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  if ( (unsigned __int8)KeIsAttachedProcess(a1) )
  {
    CurrentProcess = PsGetCurrentProcess(v4, v3, v5);
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess(v20);
    if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
      return 0LL;
  }
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread )
    return 0LL;
  v8 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread || !PDEVOBJ::bAllowShareAccess(a1) || !*(_DWORD *)(v8 + 104) && !*(_DWORD *)(v8 + 108) )
    return 0LL;
  v10 = 0LL;
  v11 = KeGetCurrentThread();
  v12 = *(_QWORD *)a1 + 88LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v9)
    || (v22 = PsGetCurrentProcess(v14, v13, v15),
        v23 = PsGetProcessSessionIdEx(v22),
        v25 = PsGetCurrentThreadProcess(v24),
        v23 == (unsigned int)PsGetProcessSessionIdEx(v25)) )
  {
    v16 = (__int64 *)PsGetThreadWin32Thread(v11);
    if ( v16 )
      v10 = *v16;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v10 + 280) + 32LL) == v12 )
    return **(unsigned int **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280);
  return v6;
}
