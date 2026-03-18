/*
 * XREFs of FsRtlQueryOpen @ 0x1405CE790
 * Callers:
 *     IopQueryInformation @ 0x1406B98D0 (IopQueryInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     IoGetAttachedDevice @ 0x1402543B0 (IoGetAttachedDevice.c)
 *     FsFilterCtrlFree @ 0x140281FA8 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140281FD0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140282060 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x140282380 (FsFilterCtrlInit.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall FsRtlQueryOpen(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 v10; // r9
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ebx
  _DWORD v18[4]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v19[72]; // [rsp+40h] [rbp-C0h] BYREF

  v18[0] = 0;
  memset(v19, 0, 0x238uLL);
  AttachedDevice = IoGetAttachedDevice(DeviceObject);
  result = FsFilterCtrlInit(
             (__int64)v19,
             249,
             (__int64)AttachedDevice,
             v10,
             *(_QWORD *)(*(_QWORD *)(a2 + 184) - 24LL),
             1u);
  if ( (int)result >= 0 )
  {
    LODWORD(v19[6]) = a5;
    v19[3] = a2;
    v19[4] = a3;
    v19[5] = a4;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = FsFilterPerformCallbacks((__int64)v19, 1, 1, v18);
    v17 = v13;
    if ( WORD1(v19[9]) )
      v17 = FsFilterPerformCompletionCallbacks((__int64)v19, v13);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
    FsFilterCtrlFree((__int64)v19);
    if ( v17 >= 0 && (v18[0] & 2) == 0 )
      return (unsigned int)-1073741822;
    return (unsigned int)v17;
  }
  return result;
}
