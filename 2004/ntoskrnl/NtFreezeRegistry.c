/*
 * XREFs of NtFreezeRegistry @ 0x140864E80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405EC100 (CmpDetachFromRegistryProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     CmFreezeRegistry @ 0x14086ED48 (CmFreezeRegistry.c)
 */

NTSTATUS __cdecl NtFreezeRegistry(ULONG TimeOutInSeconds)
{
  NTSTATUS v2; // ebx
  _OWORD v4[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v4, 0, sizeof(v4));
  if ( TimeOutInSeconds > 0x384 )
    return -1073741811;
  if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    return -1073741727;
  CmpAttachToRegistryProcess((__int64)v4);
  v2 = CmFreezeRegistry(TimeOutInSeconds);
  CmpDetachFromRegistryProcess((__int64)v4);
  return v2;
}
