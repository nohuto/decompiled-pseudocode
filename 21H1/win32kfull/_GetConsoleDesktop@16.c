/*
 * XREFs of _GetConsoleDesktop@16 @ 0x154940
 * Callers:
 *     __GetThreadDesktop@4 @ 0x9ACDC (__GetThreadDesktop@4.c)
 *     __OpenThreadDesktop@20 @ 0x154A0F (__OpenThreadDesktop@20.c)
 *     _NtUserCheckWindowThreadDesktop@8 @ 0x1601A2 (_NtUserCheckWindowThreadDesktop@8.c)
 * Callees:
 *     _LockProcessByClientId@8 @ 0x1AD58 (_LockProcessByClientId@8.c)
 *     ?GetConsoleHostProcess@@YGJKPAPAX@Z @ 0x154885 (-GetConsoleHostProcess@@YGJKPAPAX@Z.c)
 */

NTSTATUS __fastcall GetConsoleDesktop(void **a1, _DWORD *a2, _DWORD *a3, int *a4)
{
  NTSTATUS result; // eax
  int ProcessWin32Process; // eax
  PVOID v7; // ecx
  int v8; // ecx
  int v9; // eax
  HANDLE ProcessId; // [esp+4h] [ebp-8h] BYREF
  PVOID Object; // [esp+8h] [ebp-4h] BYREF

  ProcessId = 0;
  Object = 0;
  if ( GetConsoleHostProcess(a1, (unsigned int *)&ProcessId) < 0 || !ProcessId )
    return -1073741811;
  result = LockProcessByClientId(ProcessId, (PEPROCESS *)&Object);
  if ( result >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    v7 = Object;
    *a4 = ProcessWin32Process;
    ObfDereferenceObject(v7);
    v8 = *a4;
    if ( *a4 && (v9 = *(_DWORD *)(v8 + 184)) != 0 )
    {
      *a2 = *(_DWORD *)(v9 + 316);
      if ( a3 )
        *a3 = *(_DWORD *)(*(_DWORD *)(v8 + 184) + 248);
      return 0;
    }
    else
    {
      return -1073741816;
    }
  }
  return result;
}
