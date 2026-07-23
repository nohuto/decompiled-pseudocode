/*
 * XREFs of FsRtlQueryOpen @ 0x1405D8FB0
 * Callers:
 *     IopQueryInformation @ 0x1405E7B50 (IopQueryInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     IoGetAttachedDevice @ 0x14035E490 (IoGetAttachedDevice.c)
 *     FsFilterCtrlFree @ 0x1403619A8 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x1403619D0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140361A60 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x140361D80 (FsFilterCtrlInit.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
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
             *(_QWORD *)(*(_QWORD *)(a2 + 184) + 48LL),
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
