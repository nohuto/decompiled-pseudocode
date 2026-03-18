/*
 * XREFs of ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C004E330
 * Callers:
 *     xxxDoPaint @ 0x1C004DFE8 (xxxDoPaint.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C004E330 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C004E330 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ThreadLockExchange @ 0x1C00D750C (ThreadLockExchange.c)
 *     xxxCompositedPaint @ 0x1C023E150 (xxxCompositedPaint.c)
 */

struct tagWND *__fastcall xxxInternalDoPaint(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  __int64 v3; // rbp
  struct tagWND *v4; // rbx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct tagWND *v13; // rdi
  struct tagWND *v15; // rax
  struct tagWND *v16; // rdi
  __int64 v17; // rbx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v20; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v22; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v23; // [rsp+28h] [rbp-20h]
  __int64 v24; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v24 = 0LL;
  v4 = a1;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v7, v6, v8),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v20),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v22 = *(_QWORD *)(v3 + 416);
  *(_QWORD *)(v3 + 416) = &v22;
  v23 = v4;
  if ( !v4 )
    return (struct tagWND *)ThreadUnlock1(v11, v10, v12);
  HMLockObject(v4);
  while ( 1 )
  {
    if ( *((struct tagTHREADINFO **)v4 + 2) == a2 )
    {
      v11 = *((_QWORD *)v4 + 5);
      if ( (*(_BYTE *)(v11 + 27) & 2) != 0 )
      {
        xxxCompositedPaint(v4);
        v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
        ThreadLockExchange(v4, &v22);
        goto LABEL_12;
      }
      if ( *(_QWORD *)(v11 + 136) || (*(_BYTE *)(v11 + 17) & 0x10) != 0 )
        break;
    }
    v11 = *((_QWORD *)v4 + 14);
    if ( v11 )
    {
      v15 = xxxInternalDoPaint((struct tagWND *)v11, a2);
      v16 = v15;
      if ( v15 )
      {
        if ( v15 == v4 )
          return (struct tagWND *)ThreadUnlock1(v11, v10, v12);
        ThreadUnlock1(v11, v10, v12);
        return v16;
      }
    }
    v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
    v13 = v23;
    v23 = v4;
    if ( v4 )
      HMLockObject(v4);
    if ( v13 )
      HMUnlockObject(v13);
LABEL_12:
    if ( !v4 )
      return (struct tagWND *)ThreadUnlock1(v11, v10, v12);
  }
  if ( (*(_BYTE *)(v11 + 24) & 0x20) == 0 )
    return (struct tagWND *)ThreadUnlock1(v11, v10, v12);
  v17 = *((_QWORD *)v4 + 11);
  if ( !v17 )
    return (struct tagWND *)ThreadUnlock1(v11, v10, v12);
  while ( 1 )
  {
    if ( *(struct tagTHREADINFO **)(v17 + 16) == a2 )
    {
      v11 = *(_QWORD *)(v17 + 40);
      if ( (*(_QWORD *)(v11 + 136) || (*(_BYTE *)(v11 + 17) & 0x10) != 0) && (*(_BYTE *)(v11 + 24) & 0x20) == 0 )
        break;
    }
    v17 = *(_QWORD *)(v17 + 88);
    if ( !v17 )
      return (struct tagWND *)ThreadUnlock1(v11, v10, v12);
  }
  ThreadUnlock1(v11, v10, v12);
  return (struct tagWND *)v17;
}
