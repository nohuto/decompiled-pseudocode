/*
 * XREFs of NtThawRegistry @ 0x14086BDB0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmThawRegistry @ 0x140874AE0 (CmThawRegistry.c)
 */

NTSTATUS NtThawRegistry(void)
{
  NTSTATUS v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  _OWORD v6[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v6, 0, sizeof(v6));
  if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    return -1073741727;
  CmpAttachToRegistryProcess((__int64)v6);
  v0 = CmThawRegistry(v2, v1, v3, v4, *(_QWORD *)&v6[0], *((_QWORD *)&v6[0] + 1));
  KiUnstackDetachProcess((__int64)v6, 0);
  return v0;
}
