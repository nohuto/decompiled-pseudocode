/*
 * XREFs of UserScreenAccessCheck @ 0x1C0015B00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
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
  _QWORD *v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // ebx
  int v13; // eax
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
    || (v8 = *(_QWORD *)(v3 + 448)) != 0 && (v9 = *(_QWORD **)(v8 + 8), v7 = (_QWORD *)*v9, *(_QWORD *)*v9 == v1)
    || (*(_DWORD *)(v3 + 480) & 8) != 0
    || (*(_DWORD *)(v3 + 1216) & 4) != 0 )
  {
    v11 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 12);
    if ( (v11 & 0x10) != 0 && (v11 & 0x40000) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v10) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          10,
          470,
          (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
      }
      v12 = 0;
      if ( qword_1C0257DE8 )
        v13 = qword_1C0257DE8();
      else
        v13 = -1073741637;
      if ( v13 >= 0 && qword_1C0257DF0 )
        v12 = qword_1C0257DF0();
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v10) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          10,
          471,
          (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
      }
      if ( !v12 )
        return 1;
    }
  }
  return v0;
}
