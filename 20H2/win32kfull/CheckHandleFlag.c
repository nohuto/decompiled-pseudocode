/*
 * XREFs of CheckHandleFlag @ 0x1C00D78A8
 * Callers:
 *     OkayToCloseDesktop @ 0x1C00D7480 (OkayToCloseDesktop.c)
 *     zzzSetDesktop @ 0x1C00D7E10 (zzzSetDesktop.c)
 *     _GetUserObjectInformation @ 0x1C00F2590 (_GetUserObjectInformation.c)
 *     OkayToCloseWindowStation @ 0x1C0107180 (OkayToCloseWindowStation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall CheckHandleFlag(PRKPROCESS PROCESS, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  unsigned int v6; // ebx
  int v7; // ebp
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 ProcessWin32Process; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  v4 = a2;
  v6 = 0;
  v7 = 0;
  v8 = a4 + 2 * ((unsigned int)a3 >> 2) + ((unsigned int)a3 >> 2);
  memset(&ApcState.ApcListHead[1], 0, 32);
  EnterHandleFlagsCrit(PROCESS, a2, a3, a4, 0LL, 0LL);
  if ( PROCESS )
  {
    if ( (unsigned int)PsGetProcessSessionId(PROCESS) != v4 )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      v7 = 1;
    }
    ProcessWin32Process = PsGetProcessWin32Process(PROCESS);
  }
  else
  {
    ProcessWin32Process = PsGetCurrentProcessWin32Process(v10, v9, v11);
  }
  if ( ProcessWin32Process
    && v8 < *(_DWORD *)(ProcessWin32Process + 720)
    && _bittest64(*(const signed __int64 **)(ProcessWin32Process + 728), v8) )
  {
    v6 = 1;
  }
  if ( v7 )
    KeUnstackDetachProcess(&ApcState);
  LeaveHandleFlagsCrit();
  return v6;
}
