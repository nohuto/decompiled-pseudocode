/*
 * XREFs of CcSetupWatchForRegistryChanges @ 0x1403CCFD8
 * Callers:
 *     CcInitializeVolumeCacheMap @ 0x1402332F0 (CcInitializeVolumeCacheMap.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     CcOpenRegistryPath @ 0x1403CD14C (CcOpenRegistryPath.c)
 *     ZwNotifyChangeKey @ 0x1403FC8C0 (ZwNotifyChangeKey.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void CcSetupWatchForRegistryChanges()
{
  char *PoolWithTag; // rax
  char *v1; // rdi
  int v2; // eax
  int v3; // ebx
  NTSTATUS v4; // eax
  __int128 v5; // [rsp+A0h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x52576343u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x50uLL);
    RtlInitUnicodeString(
      (PUNICODE_STRING)(v1 + 56),
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management");
    *((_QWORD *)v1 + 5) = CcUpdateDynamicRegistrySettings;
    *((_QWORD *)v1 + 2) = CcRegistryChangeCallback;
    *((_QWORD *)v1 + 3) = v1;
    *(_QWORD *)v1 = 0LL;
    v2 = CcOpenRegistryPath(v1 + 56);
    v3 = v2;
    if ( v2 < 0 )
    {
      DbgPrintEx(
        0x7Fu,
        0,
        "CcSetupWatchForRegistryChanges: Failed to open Key, status=0x%08x \"%wZ\"\n",
        (unsigned int)v2,
        v1 + 56);
    }
    else
    {
      v4 = ZwNotifyChangeKey(
             *((HANDLE *)v1 + 4),
             0LL,
             (PIO_APC_ROUTINE)v1,
             (PVOID)1,
             &IoStatusBlock,
             5u,
             1u,
             0LL,
             0,
             1u);
      v3 = v4;
      if ( v4 == 259 )
      {
        DbgPrintEx(0x7Fu, 2u, "CcSetupWatchForRegistryChanges: Queued for \"%wZ\"\n", v1 + 56);
LABEL_5:
        CcRegistryWatchInitComplete = 1;
        goto LABEL_10;
      }
      if ( v4 >= 0 )
        goto LABEL_5;
      DbgPrintEx(
        0x7Fu,
        0,
        "CcSetupWatchForRegistryChanges: Failed, status=0x%08x for \"%wZ\"\n",
        (unsigned int)v4,
        v1 + 56);
    }
  }
  else
  {
    v3 = -1073741670;
  }
LABEL_10:
  if ( v1 )
  {
    if ( v3 < 0 )
    {
      v5 = *(_OWORD *)(v1 + 56);
      DbgPrintEx(
        0x7Fu,
        2u,
        "CcSetupWatchForRegistryChanges: Queuing worker thread, status=0x%08x for \"%wZ\"\n",
        (unsigned int)v3,
        &v5);
      v1[72] = 1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v1, DelayedWorkQueue);
    }
  }
  else
  {
    DbgPrintEx(0x7Fu, 0, "CcSetupWatchForRegistryChanges: Error-unexpected memory allocation!\n");
  }
}
