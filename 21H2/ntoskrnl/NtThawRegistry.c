/*
 * XREFs of NtThawRegistry @ 0x1408699E0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 *     CmThawRegistry @ 0x140872330 (CmThawRegistry.c)
 */

__int64 NtThawRegistry()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  _DWORD *v2; // r9
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _OWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
  {
    CmpAttachToRegistryProcess((__int64)v9, v0, v1, v2);
    v3 = CmThawRegistry(v5, v4, v6, v7, *(_QWORD *)&v9[0], *((_QWORD *)&v9[0] + 1));
    KiUnstackDetachProcess((__int64)v9, 0);
  }
  else
  {
    return (unsigned int)-1073741727;
  }
  return v3;
}
