/*
 * XREFs of FsRtlQueryOpen @ 0x1405CFB60
 * Callers:
 *     IopQueryInformation @ 0x1406DABE0 (IopQueryInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     FsFilterCtrlFree @ 0x140228F58 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140228F80 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140229010 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x140229330 (FsFilterCtrlInit.c)
 *     IoGetAttachedDevice @ 0x140290C30 (IoGetAttachedDevice.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall FsRtlQueryOpen(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 v10; // r9
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // eax
  int v14; // ebx
  _DWORD v15[4]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v16[72]; // [rsp+40h] [rbp-C0h] BYREF

  v15[0] = 0;
  memset(v16, 0, 0x238uLL);
  AttachedDevice = IoGetAttachedDevice(DeviceObject);
  result = FsFilterCtrlInit(
             (__int64)v16,
             249,
             (__int64)AttachedDevice,
             v10,
             *(_QWORD *)(*(_QWORD *)(a2 + 184) - 24LL),
             1u);
  if ( (int)result >= 0 )
  {
    LODWORD(v16[6]) = a5;
    v16[3] = a2;
    v16[4] = a3;
    v16[5] = a4;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = FsFilterPerformCallbacks((__int64)v16, 1, 1, v15);
    v14 = v13;
    if ( WORD1(v16[9]) )
      v14 = FsFilterPerformCompletionCallbacks((__int64)v16, v13);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    FsFilterCtrlFree((__int64)v16);
    if ( v14 >= 0 && (v15[0] & 2) == 0 )
      return (unsigned int)-1073741822;
    return (unsigned int)v14;
  }
  return result;
}
