/*
 * XREFs of NtFreezeRegistry @ 0x140863B60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmFreezeRegistry @ 0x14086D288 (CmFreezeRegistry.c)
 */

NTSTATUS __cdecl NtFreezeRegistry(ULONG TimeOutInSeconds)
{
  NTSTATUS v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  _DWORD *v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  _OWORD v10[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  if ( TimeOutInSeconds > 0x384 )
    return -1073741811;
  if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    return -1073741727;
  CmpAttachToRegistryProcess((__int64)v10, v3, v4, v5);
  v2 = CmFreezeRegistry(TimeOutInSeconds);
  CmpDetachFromRegistryProcess((__int64)v10, v6, v7, v8);
  return v2;
}
