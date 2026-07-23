/*
 * XREFs of CmpComputeLogFillLevel @ 0x140763E58
 * Callers:
 *     CmpTransWriteLog @ 0x140763D58 (CmpTransWriteLog.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpComputeLogFillLevel(
        PLOG_FILE_OBJECT plfoLog,
        PCLFS_LSN plsnStart,
        PCLFS_LSN plsnFinish,
        ULONG cbContainer,
        int a5,
        _DWORD *a6)
{
  NTSTATUS LogFileInformation; // ebx
  CLFS_INFORMATION *PoolWithTag; // rax
  CLFS_INFORMATION *v12; // rdi
  unsigned __int64 v13; // rax
  ULONG pcbInfoBuffer; // [rsp+30h] [rbp-99h] BYREF
  ULONG v16; // [rsp+34h] [rbp-95h] BYREF
  LONGLONG pcbDifference; // [rsp+38h] [rbp-91h] BYREF
  CLFS_INFORMATION pinfoBuffer; // [rsp+40h] [rbp-89h] BYREF

  memset(&pinfoBuffer, 0, sizeof(pinfoBuffer));
  pcbDifference = 0LL;
  LogFileInformation = -1073741267;
  if ( !ClfsLsnInvalid(plsnStart) && !ClfsLsnInvalid(plsnFinish) && !ClfsLsnEqual(plsnStart, plsnFinish) )
    LogFileInformation = ClfsLsnDifference(plsnStart, plsnFinish, cbContainer, 0x1000u, &pcbDifference);
  pcbInfoBuffer = 120;
  PoolWithTag = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    ClfsGetLogFileInformation(plfoLog, PoolWithTag, &pcbInfoBuffer);
    ExFreePoolWithTag(v12, 0);
  }
  if ( LogFileInformation < 0 )
  {
    v16 = 120;
    LogFileInformation = ClfsGetLogFileInformation(plfoLog, &pinfoBuffer, &v16);
    if ( LogFileInformation < 0 )
      return (unsigned int)LogFileInformation;
    v13 = pinfoBuffer.TotalAvailable - pinfoBuffer.CurrentAvailable;
  }
  else
  {
    v13 = pcbDifference;
  }
  *a6 = v13 / (a5 * cbContainer / 0x64);
  return (unsigned int)LogFileInformation;
}
