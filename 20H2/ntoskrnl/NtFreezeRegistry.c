/*
 * XREFs of NtFreezeRegistry @ 0x14086A8A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmFreezeRegistry @ 0x1408748A0 (CmFreezeRegistry.c)
 */

__int64 __fastcall NtFreezeRegistry(unsigned int a1)
{
  unsigned int v2; // ebx
  _OWORD v4[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v4, 0, sizeof(v4));
  if ( a1 <= 0x384 )
  {
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    {
      CmpAttachToRegistryProcess((__int64)v4);
      v2 = CmFreezeRegistry(a1);
      CmpDetachFromRegistryProcess((__int64)v4);
    }
    else
    {
      return (unsigned int)-1073741727;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
