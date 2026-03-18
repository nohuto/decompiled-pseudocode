/*
 * XREFs of ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007491C
 * Callers:
 *     NtUserRegisterSessionPort @ 0x1C00746A0 (NtUserRegisterSessionPort.c)
 * Callees:
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     GreLockDwmState @ 0x1C005E790 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C005E7D0 (GreUnlockDwmState.c)
 *     xxxDwmControl @ 0x1C0074EA0 (xxxDwmControl.c)
 *     IsUserEnableConsoleModeSupported @ 0x1C0074FFC (IsUserEnableConsoleModeSupported.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C0075028 (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x1C0075280 (CheckDwmProcessSecurityIdentifier.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C00BF0A0 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C00BF11C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     UserEnableConsoleMode @ 0x1C01F6994 (UserEnableConsoleMode.c)
 */

__int64 __fastcall xxxDwmProcessStartup(HANDLE Handle)
{
  bool v2; // r14
  PVOID v3; // rsi
  PVOID v4; // rdi
  NTSTATUS v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 i; // rcx
  __int64 v12; // rax
  LeaveEnterCrit *v14; // rcx
  LeaveEnterCrit *v15; // rcx
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  char v17; // [rsp+D0h] [rbp+18h] BYREF
  char v18; // [rsp+D8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  if ( g_pepDwm )
    v5 = -1073741768;
  else
    v5 = CheckDwmProcessSecurityIdentifier();
  if ( (int)IsUserEnableConsoleModeSupported() >= 0 )
  {
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v17);
    v5 = UserEnableConsoleMode(0LL);
    v2 = v5 >= 0;
    LeaveEnterCrit::~LeaveEnterCrit(v14);
  }
  if ( g_pepDwm )
    v5 = -1073741768;
  if ( v5 < 0 )
    goto LABEL_25;
  if ( Handle )
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(Handle, 1u, LpcPortObjectType, 1, &Object, 0LL);
    v3 = Object;
  }
  if ( v5 < 0 )
    goto LABEL_25;
  CurrentProcess = (void *)PsGetCurrentProcess(v7, v6);
  v5 = ObReferenceObjectByPointer(CurrentProcess, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  if ( v5 < 0 )
    goto LABEL_25;
  v4 = (PVOID)PsGetCurrentProcess(v10, v9);
  GreLockDwmState();
  if ( g_pepDwm )
  {
    v5 = -1073741768;
  }
  else
  {
    g_pepDwm = v4;
    SetDwmApiPort(v3);
  }
  GreUnlockDwmState();
  if ( v5 < 0 || (v5 = ((__int64 (*)(void))qword_1C024A9F0)(), v5 < 0) )
  {
LABEL_25:
    GreLockDwmState();
    if ( g_pepDwm == v4 )
    {
      SetDwmApiPort(0LL);
      g_pepDwm = 0LL;
    }
    GreUnlockDwmState();
    if ( v3 )
      ObfDereferenceObject(v3);
    if ( v4 )
      ObfDereferenceObject(v4);
    if ( !g_pepDwm && v2 )
    {
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v18);
      UserEnableConsoleMode(1LL);
      LeaveEnterCrit::~LeaveEnterCrit(v15);
    }
  }
  else
  {
    for ( i = *(_QWORD *)(PsGetProcessWin32Process(g_pepDwm) + 320); i; i = *(_QWORD *)(i + 664) )
    {
      *(_DWORD *)(i + 1232) |= 4u;
      v12 = *(_QWORD *)(i + 480);
      if ( v12 )
        *(_QWORD *)(v12 + 224) |= 1uLL;
    }
    xxxDwmControl(1037LL, 0LL);
  }
  return (unsigned int)v5;
}
