/*
 * XREFs of CmpDoFileSetSizeEx @ 0x14068EC28
 * Callers:
 *     CmShutdownSystem2 @ 0x14053EE38 (CmShutdownSystem2.c)
 *     HvWriteExternal @ 0x14065A848 (HvWriteExternal.c)
 *     CmpCompleteUnloadKey @ 0x14067BE48 (CmpCompleteUnloadKey.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x140689B38 (HvTruncateCurrentLogFileIfRequired.c)
 *     HvWriteLogFile @ 0x14068A060 (HvWriteLogFile.c)
 *     HvpAddBin @ 0x14068C820 (HvpAddBin.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1406E9C5C (HvTruncateAllLogFilesIfRequired.c)
 *     CmpMountPreloadedHives @ 0x14083200C (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x14083C870 (CmpLoadHiveThread.c)
 *     HvpPerformLogFileRecovery @ 0x14091ADA0 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1402A0800 (IoSetThreadHardErrorMode.c)
 *     ZwSetInformationFile @ 0x14041BC40 (ZwSetInformationFile.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140689DAC (HvpLogTypeToLogArrayIndex.c)
 *     CmpAdjustRequestedFileSize @ 0x14068EF5C (CmpAdjustRequestedFileSize.c)
 */

__int64 __fastcall CmpDoFileSetSizeEx(__int64 a1, unsigned int a2, unsigned __int64 a3, char a4)
{
  void *v6; // r14
  unsigned __int64 v7; // rdi
  unsigned __int64 v9; // rbp
  BOOLEAN v10; // r15
  NTSTATUS v11; // eax
  unsigned int v12; // edi
  unsigned __int64 FileInformation; // [rsp+30h] [rbp-38h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  FileInformation = 0LL;
  v15 = 0LL;
  IoStatusBlock = 0LL;
  v6 = *(void **)(a1 + 8LL * a2 + 1544);
  if ( !v6 )
    return 0LL;
  if ( a2 )
    v7 = a2 - 4 <= 1 || a2 == 1 ? *(_QWORD *)(a1 + 8LL * (unsigned int)HvpLogTypeToLogArrayIndex(a2) + 1808) : 0LL;
  else
    v7 = *(_QWORD *)(a1 + 1800);
  if ( (a4 & 1) != 0 && v7 && a3 <= v7 )
    return 0LL;
  v9 = CmpAdjustRequestedFileSize(a1, a2, v7, a3);
  v10 = IoSetThreadHardErrorMode(0);
  if ( v9 < v7 )
  {
    v15 = v9;
    v11 = ZwSetInformationFile(v6, &IoStatusBlock, &v15, 8u, FileAllocationInformation);
  }
  else
  {
    FileInformation = v9;
    v11 = ZwSetInformationFile(v6, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
  }
  v12 = v11;
  if ( v11 < 0 )
  {
    CmRegistryIODebug = 3;
    qword_140D3CE08 = (__int64)v6;
    dword_140D3CE10 = v11;
  }
  else if ( a2 )
  {
    if ( a2 - 4 <= 1 || a2 == 1 )
      *(_QWORD *)(a1 + 8LL * (unsigned int)HvpLogTypeToLogArrayIndex(a2) + 1808) = v9;
  }
  else
  {
    *(_QWORD *)(a1 + 1800) = v9;
  }
  IoSetThreadHardErrorMode(v10);
  return v12;
}
