/*
 * XREFs of CheckSystemIOAddressValidity @ 0x1C0027330
 * Callers:
 *     AccessBaseField @ 0x1C0001970 (AccessBaseField.c)
 *     ReadSystemIO @ 0x1C00272C8 (ReadSystemIO.c)
 *     WriteSystemIO @ 0x1C0067E7C (WriteSystemIO.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CheckSystemIOAddressValidity(unsigned __int8 a1, const char *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v5; // edi
  unsigned __int8 v8; // r14
  __int64 v9; // rbx
  const char *v10; // r9
  _DWORD *v11; // rax
  __int64 v13; // rbp
  unsigned int v14; // r8d
  int v15; // ecx
  void (__fastcall *v16)(_QWORD, _QWORD, _QWORD, unsigned int *); // rax
  struct _DEVICE_OBJECT *v17; // rcx
  struct _IO_WORKITEM *WorkItem; // rsi
  int v19; // ecx
  _DWORD *PoolWithTag; // rax
  __int64 v21; // [rsp+20h] [rbp-38h]

  v5 = (unsigned int)a2;
  v8 = 1;
  if ( !gpBadIOAddressList )
    return v8;
  LODWORD(v9) = 0;
  if ( !*((_DWORD *)gpBadIOAddressList + 1) )
    return v8;
  v10 = 0LL;
  v11 = gpBadIOAddressList;
  while ( (unsigned int)a2 < *v11 || (unsigned int)a2 >= *v11 + v11[1] )
  {
    v9 = (unsigned int)(v9 + 1);
    v10 = (const char *)(unsigned int)v9;
    v11 = (char *)gpBadIOAddressList + 24 * v9;
    if ( !v11[1] )
      return v8;
  }
  v13 = 24LL * (_QWORD)v10;
  LODWORD(v10) = 0;
  v14 = 0;
  v21 = 0LL;
  if ( *(_DWORD *)((char *)gpBadIOAddressList + v13 + 8) > (unsigned int)gdwHighestOSVerQueried )
  {
    PrintDebugMessage(24, (_DWORD)a2, 0, 0, 0LL);
    v16 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned int *))((char *)gpBadIOAddressList + v13 + 16);
    if ( !v16 )
      goto LABEL_17;
    v8 = 0;
    v16(a1, v5, a3, a4);
    v21 = *a4;
    v10 = "Read";
    v14 = v5;
    if ( !a1 )
      v10 = "Wrote";
    a2 = "read";
    if ( !a1 )
      a2 = "write";
    v15 = 23;
  }
  else
  {
    v8 = 0;
    v15 = 25;
  }
  PrintDebugMessage(v15, (_DWORD)a2, v14, (_DWORD)v10, v21);
LABEL_17:
  if ( !RootDeviceExtension || (v17 = *(struct _DEVICE_OBJECT **)(RootDeviceExtension + 728)) == 0LL )
  {
    v19 = 22;
    goto LABEL_25;
  }
  WorkItem = IoAllocateWorkItem(v17);
  if ( !WorkItem )
  {
    v19 = 21;
LABEL_25:
    PrintDebugMessage(v19, 0, 0, 0, 0LL);
    return v8;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x496C6D41u);
  if ( PoolWithTag )
  {
    *(_BYTE *)PoolWithTag = a1;
    PoolWithTag[1] = v5;
    PoolWithTag[2] = v9;
    *((_QWORD *)PoolWithTag + 2) = WorkItem;
    IoQueueWorkItem(WorkItem, DelayedLogInErrorLog, DelayedWorkQueue, PoolWithTag);
  }
  else
  {
    PrintDebugMessage(20, 0, 0, 0, 0LL);
    IoFreeWorkItem(WorkItem);
  }
  return v8;
}
