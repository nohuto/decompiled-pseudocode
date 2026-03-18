/*
 * XREFs of CmpQueryFileSecurityDescriptor @ 0x1406FAF88
 * Callers:
 *     CmpInitHiveFromFile @ 0x14064EC08 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x14064F528 (CmpOpenHiveFile.c)
 *     CmpLogHiveFileInaccessible @ 0x1406FB038 (CmpLogHiveFileInaccessible.c)
 *     CmpInitCmRM @ 0x14071037C (CmpInitCmRM.c)
 *     CmpStartRMLog @ 0x140779704 (CmpStartRMLog.c)
 * Callees:
 *     ZwQuerySecurityObject @ 0x1403FACF0 (ZwQuerySecurityObject.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpQueryFileSecurityDescriptor(HANDLE Handle, _QWORD *a2)
{
  PVOID PoolWithTag; // rdi
  NTSTATUS SecurityObject; // ebx
  __int64 result; // rax
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp+10h] BYREF

  PoolWithTag = 0LL;
  LODWORD(NumberOfBytes) = 0;
  SecurityObject = ZwQuerySecurityObject(Handle, 4u, 0LL, 0, (PULONG)&NumberOfBytes);
  if ( SecurityObject == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64734D43u);
    if ( PoolWithTag )
    {
      SecurityObject = ZwQuerySecurityObject(Handle, 4u, PoolWithTag, NumberOfBytes, (PULONG)&NumberOfBytes);
      if ( SecurityObject < 0 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
    }
    else
    {
      SecurityObject = -1073741670;
    }
  }
  else if ( !SecurityObject )
  {
    SecurityObject = -1073741823;
  }
  result = (unsigned int)SecurityObject;
  *a2 = PoolWithTag;
  return result;
}
