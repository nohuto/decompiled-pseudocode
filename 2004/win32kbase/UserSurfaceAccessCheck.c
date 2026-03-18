/*
 * XREFs of UserSurfaceAccessCheck @ 0x1C0020930
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserSurfaceAccessCheck(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // ebx
  int v17; // eax
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
    || (v12 = *(_QWORD *)(v3 + 448)) != 0 && (v13 = *(_QWORD **)(v12 + 8), v9 = (_QWORD *)*v13, *(_QWORD *)*v13 == a1)
    || (*(_DWORD *)(v3 + 480) & 8) != 0
    || (*(_DWORD *)(v3 + 1224) & 4) != 0 )
  {
    v15 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v9, v8, v10, v11) + 12);
    if ( (v15 & 0x10) != 0 && (v15 & 0x40000) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v14) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          10,
          470,
          (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
      }
      v16 = 0;
      if ( qword_1C0251E28 )
        v17 = qword_1C0251E28();
      else
        v17 = -1073741637;
      if ( v17 >= 0 && qword_1C0251E30 )
        v16 = qword_1C0251E30();
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v14) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          10,
          471,
          (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
      }
      if ( !v16 )
        return 1;
    }
  }
  return v2;
}
