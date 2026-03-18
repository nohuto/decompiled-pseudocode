/*
 * XREFs of ?EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0261A14
 * Callers:
 *     ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02409B0 (-VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C026233C (-ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000AE88 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C0037CF4 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?ProcessNextFile@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C02623F4 (-ProcessNextFile@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 */

void __fastcall CDriverStoreCopy::EnumDirectory(
        CDriverStoreCopy *this,
        struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *a2)
{
  void **v2; // rsi
  bool v3; // zf
  PVOID PoolWithTag; // rax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  v2 = (void **)((char *)this + 16);
  v3 = *((_QWORD *)this + 2) == -1LL;
  IoStatusBlock = 0LL;
  if ( !v3 )
    goto LABEL_13;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v3 = *(_QWORD *)this == 0LL;
  DestinationString = 0LL;
  if ( v3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, *((unsigned int *)this + 2), 0x4B677844u);
    *(_QWORD *)this = PoolWithTag;
    if ( !PoolWithTag )
    {
      *((_DWORD *)a2 + 4) = -1073741801;
      return;
    }
    memset(PoolWithTag, 0, *((unsigned int *)this + 2));
  }
  v7 = RtlStringCbCopyW((unsigned __int16 *)this + 272, 0x208uLL, (size_t *)((char *)a2 + 60));
  *((_DWORD *)a2 + 4) = v7;
  if ( v7 >= 0 )
  {
    v8 = RtlStringCbCopyW((unsigned __int16 *)this + 532, 0x208uLL, (size_t *)this + 3);
    *((_DWORD *)a2 + 4) = v8;
    if ( v8 >= 0 )
    {
      v10 = RtlStringCbCatW((unsigned __int16 *)this + 532, v9, (size_t *)((char *)a2 + 60));
      *((_DWORD *)a2 + 4) = v10;
      if ( v10 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, (PCWSTR)this + 532);
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v11 = ZwOpenFile(v2, 0x100001u, &ObjectAttributes, &IoStatusBlock, 1u, 0x21u);
        *((_DWORD *)a2 + 4) = v11;
        if ( v11 < 0 )
        {
          v15 = WdLogNewEntry5_WdWarning(v13, v12, v14);
          *(_QWORD *)(v15 + 24) = *((int *)a2 + 4);
          WdLogEvent5_WdWarning(v15);
          if ( *((int *)a2 + 4) >= 0 )
            return;
          goto LABEL_11;
        }
LABEL_13:
        CDriverStoreCopy::ProcessNextFile(this, a2);
        return;
      }
    }
  }
LABEL_11:
  if ( *v2 != (void *)-1LL )
  {
    ZwClose(*v2);
    *v2 = (void *)-1LL;
  }
}
