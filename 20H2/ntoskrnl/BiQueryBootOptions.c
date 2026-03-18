/*
 * XREFs of BiQueryBootOptions @ 0x14097521C
 * Callers:
 *     BiBindEfiBootManager @ 0x140972CD4 (BiBindEfiBootManager.c)
 *     BiExportEfiBootManager @ 0x1409744A8 (BiExportEfiBootManager.c)
 * Callees:
 *     ZwQueryBootOptions @ 0x1403FA990 (ZwQueryBootOptions.c)
 *     BiLogMessage @ 0x140780FBC (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x140781E58 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140781EB0 (BiAcquirePrivilege.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiQueryBootOptions(_QWORD *a1, _DWORD *a2)
{
  void *v2; // rdi
  int BootOptions; // ebx
  PVOID PoolWithTag; // rax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  *a2 = 0;
  v9 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  BootOptions = BiAcquirePrivilege(0x16u, (__int64)&v9);
  if ( BootOptions >= 0 )
  {
    BootOptions = ZwQueryBootOptions(0LL, (__int64)&NumberOfBytes);
    if ( BootOptions != -1073741789 )
      goto LABEL_6;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B444342u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
    {
      BootOptions = -1073741670;
LABEL_10:
      BiReleasePrivilege((unsigned int *)&v9);
      return (unsigned int)BootOptions;
    }
    BootOptions = ZwQueryBootOptions((__int64)PoolWithTag, (__int64)&NumberOfBytes);
    if ( BootOptions < 0 )
    {
LABEL_6:
      BiLogMessage(4LL, L"Failed to query boot options. Status: %x", (unsigned int)BootOptions);
      if ( BootOptions < 0 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0x4B444342u);
        goto LABEL_10;
      }
    }
    *a2 = NumberOfBytes;
    *a1 = v2;
    goto LABEL_10;
  }
  return (unsigned int)BootOptions;
}
