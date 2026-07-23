/*
 * XREFs of NtFreezeRegistry @ 0x140868620
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmFreezeRegistry @ 0x140872250 (CmFreezeRegistry.c)
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
