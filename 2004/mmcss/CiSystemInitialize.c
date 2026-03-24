/*
 * XREFs of CiSystemInitialize @ 0x1C000E0B0
 * Callers:
 *     CsInitialize @ 0x1C000D150 (CsInitialize.c)
 * Callees:
 *     memset @ 0x1C0003440 (memset.c)
 *     CiSystemTerminate @ 0x1C000C888 (CiSystemTerminate.c)
 */

__int64 CiSystemInitialize()
{
  NTSTATUS SystemInformation; // eax
  SIZE_T v1; // rdi
  int v2; // ebx
  PVOID PoolWithTag; // rax

  SystemInformation = ZwQuerySystemInformation(SystemBasicInformation, &CiSystemBasicInfo, 0x40u, 0LL);
  v1 = 8LL * byte_1C0007218;
  v2 = SystemInformation;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v1, 0x74727641u);
  CiLastIdleTime = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v2 = -1073741801;
    goto LABEL_4;
  }
  memset(PoolWithTag, 0, v1);
  if ( v2 < 0 )
LABEL_4:
    CiSystemTerminate();
  return (unsigned int)v2;
}
