/*
 * XREFs of PiDmRemoveCacheReferenceForObject @ 0x14072DF88
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1406A78A0 (PiPnpRtlCmActionCallback.c)
 *     IopRegisterDeviceInterface @ 0x14072DB00 (IopRegisterDeviceInterface.c)
 *     PiPnpRtlObjectEventWorker @ 0x14072EEE0 (PiPnpRtlObjectEventWorker.c)
 *     IopProcessSetInterfaceState @ 0x14072FAFC (IopProcessSetInterfaceState.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14075D1DC (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmListInitEnumCallback @ 0x14077E240 (PiDmListInitEnumCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402E5430 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmLookupObject @ 0x1406A8A7C (PiDmLookupObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1406A8D10 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectRelease @ 0x1406A8D70 (PiDmObjectRelease.c)
 */

__int64 __fastcall PiDmRemoveCacheReferenceForObject(int a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // edi
  void *ObjectManagerForObjectType; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int *Buffer; // [rsp+40h] [rbp+18h] BYREF

  Buffer = a3;
  v4 = 0;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)ObjectManagerForObjectType, 1u);
  v7 = (unsigned int *)PiDmLookupObject((__int64)ObjectManagerForObjectType, a2);
  Buffer = v7;
  if ( v7 )
  {
    --v7[3];
    if ( !Buffer[3] )
    {
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)ObjectManagerForObjectType + 1, &Buffer);
      PiDmObjectRelease(Buffer);
    }
  }
  else
  {
    v4 = -1073741772;
  }
  ExReleaseResourceLite((PERESOURCE)ObjectManagerForObjectType);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
  return v4;
}
