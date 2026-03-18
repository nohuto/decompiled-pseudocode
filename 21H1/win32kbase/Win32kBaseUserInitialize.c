/*
 * XREFs of Win32kBaseUserInitialize @ 0x1C0015790
 * Callers:
 *     <none>
 * Callees:
 *     InitializeGreCSRSS @ 0x1C000DCB0 (InitializeGreCSRSS.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C0014D10 (-UserInitialize@@YAJXZ.c)
 *     isInputVirtualizationEnabled @ 0x1C006588C (isInputVirtualizationEnabled.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     IVStartupWorkerThread @ 0x1C01BCCFC (IVStartupWorkerThread.c)
 *     InitializePowerRequestList @ 0x1C029AA70 (InitializePowerRequestList.c)
 */

__int64 __fastcall Win32kBaseUserInitialize(HANDLE Handle, __int64 a2)
{
  __int64 v2; // rbp
  __int64 BugCheckParameter4; // rdi
  int v5; // ebx
  int v6; // eax
  char v7; // al
  __int64 result; // rax
  int v9; // eax
  __int64 ProcessWin32Process; // rax
  __int64 v11; // rax
  int v12; // edx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      14,
      28,
      (__int64)&WPP_343d128d714e312b04193adc3f9faf5c_Traceguids);
  }
  if ( gpepCSRSS )
    return 3221225473LL;
  BugCheckParameter4 = PsGetCurrentProcess(Handle, a2);
  v5 = -1073741637;
  if ( qword_1C02588F8 )
    v6 = qword_1C02588F8();
  else
    v6 = -1073741637;
  if ( v6 >= 0 )
  {
    v7 = (char)qword_1C0258900;
    if ( qword_1C0258900 )
      v7 = qword_1C0258900();
    if ( !v7 )
      KeBugCheckEx(0x91u, 0LL, 0LL, 0LL, BugCheckParameter4);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&gpepCSRSS, BugCheckParameter4, 0LL) )
    return 3221225473LL;
  ObfReferenceObject(gpepCSRSS);
  result = InitializePowerRequestList(Handle);
  if ( (int)result < 0 )
    return result;
  if ( qword_1C0258908 )
    v9 = qword_1C0258908();
  else
    v9 = -1073741637;
  if ( v9 < 0 )
    goto LABEL_18;
  if ( qword_1C0258910 )
    v5 = qword_1C0258910(v2);
  if ( v5 >= 0 )
  {
LABEL_18:
    byte_1C0252710 = 0;
    if ( InitializeGreCSRSS() )
    {
      ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
      *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
      v11 = PsGetProcessWin32Process(gpepCSRSS);
      *(_DWORD *)(v11 + 820) |= 0x400000u;
      *(_DWORD *)(PsGetProcessWin32Process(gpepCSRSS) + 280) = 18;
      v5 = UserInitialize();
      if ( v5 >= 0 && (unsigned __int8)isInputVirtualizationEnabled() )
        v5 = IVStartupWorkerThread();
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v12,
          14,
          29,
          (__int64)&WPP_343d128d714e312b04193adc3f9faf5c_Traceguids);
      }
      return (unsigned int)v5;
    }
    return 3221225473LL;
  }
  return (unsigned int)v5;
}
