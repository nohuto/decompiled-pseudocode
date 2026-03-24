/*
 * XREFs of FsRtlQueryOpen @ 0x1405D8FB0
 * Callers:
 *     IopQueryInformation @ 0x1406886C0 (IopQueryInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     IoGetAttachedDevice @ 0x140353740 (IoGetAttachedDevice.c)
 *     FsFilterCtrlFree @ 0x140356C58 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140356C80 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140356D10 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x140357030 (FsFilterCtrlInit.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
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
             *(_QWORD *)(*(_QWORD *)(a2 + 184) + 48LL),
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
