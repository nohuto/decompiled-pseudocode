/*
 * XREFs of PiDmRemoveCacheReferenceForObject @ 0x14076A0A8
 * Callers:
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x140768E44 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     IopProcessSetInterfaceState @ 0x140769170 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x140769C24 (IopRegisterDeviceInterface.c)
 *     PiPnpRtlObjectEventWorker @ 0x140778830 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 *     PiDmListInitEnumCallback @ 0x14083F090 (PiDmListInitEnumCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmLookupObject @ 0x14077B12C (PiDmLookupObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x14077B33C (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectRelease @ 0x14077B394 (PiDmObjectRelease.c)
 */

__int64 __fastcall PiDmRemoveCacheReferenceForObject(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 ObjectManagerForObjectType; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v6; // rax
  PVOID Buffer; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)ObjectManagerForObjectType, 1u);
  v6 = (_DWORD *)PiDmLookupObject(ObjectManagerForObjectType, a2);
  Buffer = v6;
  if ( v6 )
  {
    --v6[3];
    if ( !*((_DWORD *)Buffer + 3) )
    {
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(ObjectManagerForObjectType + 104), &Buffer);
      PiDmObjectRelease(Buffer);
    }
  }
  else
  {
    v3 = -1073741772;
  }
  ExReleaseResourceLite((PERESOURCE)ObjectManagerForObjectType);
  KeLeaveCriticalRegion();
  return v3;
}
