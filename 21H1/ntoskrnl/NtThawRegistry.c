/*
 * XREFs of NtThawRegistry @ 0x140865070
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmThawRegistry @ 0x14086D4C8 (CmThawRegistry.c)
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
  __int64 v8; // r8
  _DWORD *v9; // r9
  _OWORD v11[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
  {
    CmpAttachToRegistryProcess((__int64)v11, v0, v1, v2);
    v3 = CmThawRegistry(v5, v4, v6, v7, *(_QWORD *)&v11[0], *((_QWORD *)&v11[0] + 1));
    KiUnstackDetachProcess((__int64)v11, 0LL, v8, v9);
  }
  else
  {
    return (unsigned int)-1073741727;
  }
  return v3;
}
