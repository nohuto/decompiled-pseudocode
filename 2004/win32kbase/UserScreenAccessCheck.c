/*
 * XREFs of UserScreenAccessCheck @ 0x1C0023F50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 UserScreenAccessCheck()
{
  unsigned int v0; // edi
  __int64 v1; // rbp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // ebx
  int v16; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v0 = 0;
  v1 = 0LL;
  if ( grpdeskRitInput )
    v1 = ***((_QWORD ***)grpdeskRitInput + 1);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v5, v4),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  if ( !v1
    || (v11 = *(_QWORD *)(v3 + 448)) != 0 && (v12 = *(_QWORD **)(v11 + 8), v8 = (_QWORD *)*v12, *(_QWORD *)*v12 == v1)
    || (*(_DWORD *)(v3 + 480) & 8) != 0
    || (*(_DWORD *)(v3 + 1224) & 4) != 0 )
  {
    v14 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v8, v7, v9, v10) + 12);
    if ( (v14 & 0x10) != 0 && (v14 & 0x40000) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v13) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v13,
          10,
          470,
          (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
      }
      v15 = 0;
      if ( qword_1C0251E28 )
        v16 = qword_1C0251E28();
      else
        v16 = -1073741637;
      if ( v16 >= 0 && qword_1C0251E30 )
        v15 = qword_1C0251E30();
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v13) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v13,
          10,
          471,
          (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
      }
      if ( !v15 )
        return 1;
    }
  }
  return v0;
}
