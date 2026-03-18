/*
 * XREFs of UserSurfaceAccessCheck @ 0x1C000ED30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserSurfaceAccessCheck(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // ebx
  int v14; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v6, v5),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  if ( !a1
    || (v9 = *(_QWORD *)(v3 + 448)) != 0 && (v10 = *(_QWORD **)(v9 + 8), v8 = (_QWORD *)*v10, *(_QWORD *)*v10 == a1)
    || (*(_DWORD *)(v3 + 480) & 8) != 0
    || (*(_DWORD *)(v3 + 1216) & 4) != 0 )
  {
    v12 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 12);
    if ( (v12 & 0x10) != 0 && (v12 & 0x40000) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v11) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v11,
          10,
          470,
          (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
      }
      v13 = 0;
      if ( qword_1C0257DE8 )
        v14 = qword_1C0257DE8();
      else
        v14 = -1073741637;
      if ( v14 >= 0 && qword_1C0257DF0 )
        v13 = qword_1C0257DF0();
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v11) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v11,
          10,
          471,
          (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
      }
      if ( !v13 )
        return 1;
    }
  }
  return v2;
}
