/*
 * XREFs of PiDmRemoveCacheReferenceForObject @ 0x1407488F8
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140635920 (PiPnpRtlCmActionCallback.c)
 *     IopRegisterDeviceInterface @ 0x140748470 (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x1407490DC (IopProcessSetInterfaceState.c)
 *     PiPnpRtlObjectEventWorker @ 0x14074A010 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x140771E2C (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmListInitEnumCallback @ 0x14078F090 (PiDmListInitEnumCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402648C0 (RtlDeleteElementGenericTableAvl.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     PiDmLookupObject @ 0x140636AFC (PiDmLookupObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140636D90 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectRelease @ 0x140636DF0 (PiDmObjectRelease.c)
 */

__int64 __fastcall PiDmRemoveCacheReferenceForObject(int a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // edi
  void *ObjectManagerForObjectType; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v7; // rax
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
