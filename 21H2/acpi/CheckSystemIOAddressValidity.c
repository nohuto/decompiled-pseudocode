/*
 * XREFs of CheckSystemIOAddressValidity @ 0x1C001B5CC
 * Callers:
 *     WriteSystemIO @ 0x1C001B580 (WriteSystemIO.c)
 *     ReadSystemIO @ 0x1C001DEEC (ReadSystemIO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

char __fastcall CheckSystemIOAddressValidity(char a1, const char *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v5; // edi
  char v8; // bp
  __int64 v9; // rsi
  __int64 v10; // r8
  _DWORD *v11; // rax
  __int64 v13; // r14
  unsigned int v14; // r8d
  const char *v15; // r9
  int v16; // ecx
  __int64 v17; // rcx
  void (__fastcall *v18)(__int64, _QWORD, _QWORD, unsigned int *); // rax
  struct _DEVICE_OBJECT *v19; // rcx
  struct _IO_WORKITEM *WorkItem; // rbx
  int v21; // ecx
  _DWORD *Pool2; // rax
  __int64 v23; // [rsp+20h] [rbp-38h]

  v5 = (unsigned int)a2;
  v8 = 1;
  if ( !gpBadIOAddressList )
    return v8;
  LODWORD(v9) = 0;
  if ( !*((_DWORD *)gpBadIOAddressList + 1) )
    return v8;
  v10 = 0LL;
  v11 = gpBadIOAddressList;
  while ( (unsigned int)a2 < *v11 || (unsigned int)a2 >= v11[1] + *v11 )
  {
    v9 = (unsigned int)(v9 + 1);
    v10 = (unsigned int)v9;
    v11 = (char *)gpBadIOAddressList + 24 * v9;
    if ( !v11[1] )
      return v8;
  }
  v13 = 3 * v10;
  v14 = 0;
  v23 = 0LL;
  LODWORD(v15) = 0;
  if ( *((_DWORD *)gpBadIOAddressList + 2 * v13 + 2) > (unsigned int)gdwHighestOSVerQueried )
  {
    PrintDebugMessage(24, (_DWORD)a2, 0, 0, 0LL);
    v18 = (void (__fastcall *)(__int64, _QWORD, _QWORD, unsigned int *))*((_QWORD *)gpBadIOAddressList + v13 + 2);
    if ( !v18 )
      goto LABEL_17;
    LOBYTE(v17) = a1;
    v8 = 0;
    v18(v17, v5, a3, a4);
    v23 = *a4;
    v15 = "Read";
    v14 = v5;
    if ( !a1 )
      v15 = "Wrote";
    a2 = "read";
    if ( !a1 )
      a2 = "write";
    v16 = 23;
  }
  else
  {
    v8 = 0;
    v16 = 25;
  }
  PrintDebugMessage(v16, (_DWORD)a2, v14, (_DWORD)v15, v23);
LABEL_17:
  if ( !RootDeviceExtension || (v19 = *(struct _DEVICE_OBJECT **)(RootDeviceExtension + 768)) == 0LL )
  {
    v21 = 22;
    goto LABEL_25;
  }
  WorkItem = IoAllocateWorkItem(v19);
  if ( !WorkItem )
  {
    v21 = 21;
LABEL_25:
    PrintDebugMessage(v21, 0, 0, 0, 0LL);
    return v8;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 24LL, 1231842625LL);
  if ( Pool2 )
  {
    *(_BYTE *)Pool2 = a1;
    Pool2[1] = v5;
    Pool2[2] = v9;
    *((_QWORD *)Pool2 + 2) = WorkItem;
    IoQueueWorkItem(WorkItem, DelayedLogInErrorLog, DelayedWorkQueue, Pool2);
  }
  else
  {
    PrintDebugMessage(20, 0, 0, 0, 0LL);
    IoFreeWorkItem(WorkItem);
  }
  return v8;
}
