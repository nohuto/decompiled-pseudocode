/*
 * XREFs of PiCreateDeviceInstanceKey @ 0x14074CCD4
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140744650 (PiProcessNewDeviceNode.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     _CmCreateDevice @ 0x14074CD88 (_CmCreateDevice.c)
 */

__int64 __fastcall PiCreateDeviceInstanceKey(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // ebx
  int Device; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char v12; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = (int)a2;
  *a3 = 0;
  v12 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  Device = CmCreateDevice(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), 983103, v5, (__int64)&v12, 0);
  if ( Device >= 0 )
    *a3 = 2 - (v12 != 0);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
  return (unsigned int)Device;
}
