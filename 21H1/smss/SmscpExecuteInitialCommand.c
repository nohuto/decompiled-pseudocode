/*
 * XREFs of SmscpExecuteInitialCommand @ 0x140004290
 * Callers:
 *     SmscMain @ 0x140003F4C (SmscMain.c)
 * Callees:
 *     SmExecPgmEx @ 0x140004338 (SmExecPgmEx.c)
 *     SmpExecuteCommand @ 0x140004558 (SmpExecuteCommand.c)
 *     memset_0 @ 0x14000EE13 (memset_0.c)
 */

__int64 __fastcall SmscpExecuteInitialCommand(__int64 a1, __int64 a2, int a3)
{
  int v4; // edx
  __int64 v5; // rcx
  __int64 result; // rax
  unsigned int v7; // ebx
  signed __int32 v8[8]; // [rsp+0h] [rbp-A8h] BYREF
  char v9; // [rsp+30h] [rbp-78h] BYREF
  HANDLE ProcessHandle; // [rsp+38h] [rbp-70h]

  memset_0(&v9, 0, 0x68uLL);
  v4 = SmpExecuteCommand(a3, (PRTL_USER_PROCESS_PARAMETERS)&v9);
  if ( v4 < 0 )
  {
    *(_DWORD *)SmscpSharedWindow = 1;
    _InterlockedOr(v8, 0);
    *((_DWORD *)SmscpSharedWindow + 2) = 1063;
    *((_DWORD *)SmscpSharedWindow + 1) = v4;
    *((_QWORD *)SmscpSharedWindow + 2) = SmscpExecuteInitialCommand;
    return (unsigned int)v4;
  }
  else
  {
    *(_DWORD *)SmscpSharedWindow = 2;
    result = SmExecPgmEx(v5, &v9);
    v7 = result;
    if ( (int)result < 0 )
    {
      *(_DWORD *)SmscpSharedWindow = 1;
      _InterlockedOr(v8, 0);
      *((_DWORD *)SmscpSharedWindow + 2) = 1088;
      *((_DWORD *)SmscpSharedWindow + 1) = result;
      *((_QWORD *)SmscpSharedWindow + 2) = SmscpExecuteInitialCommand;
      NtTerminateProcess(ProcessHandle, result);
      return v7;
    }
  }
  return result;
}
