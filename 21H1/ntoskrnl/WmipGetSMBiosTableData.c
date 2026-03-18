/*
 * XREFs of WmipGetSMBiosTableData @ 0x1406BD244
 * Callers:
 *     WmipRawSMBiosTableHandler @ 0x1402F8A00 (WmipRawSMBiosTableHandler.c)
 *     WmipQueryWmiDataBlock @ 0x1406BCBE0 (WmipQueryWmiDataBlock.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     MmMapIoSpaceEx @ 0x1402F8F10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x1402FA3B0 (MmUnmapIoSpace.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     WmipGetRegistryHideMachine @ 0x1406BD344 (WmipGetRegistryHideMachine.c)
 *     WmipSMBiosHideMachine @ 0x14092D93C (WmipSMBiosHideMachine.c)
 */

__int64 __fastcall WmipGetSMBiosTableData(void *a1, _DWORD *a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v12; // rax
  void *v13; // rsi
  unsigned int v14; // ebx

  if ( !a2 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&WmipSMBiosLock, 1u);
  if ( a3 )
    *a3 = WmipSMBiosVersionInfo;
  if ( *a2 >= (unsigned int)WmipSMBiosTableLength )
  {
    if ( WmipSMBiosTablePhysicalAddress )
    {
      v12 = (void *)MmMapIoSpaceEx(WmipSMBiosTablePhysicalAddress, (unsigned int)WmipSMBiosTableLength, 4u);
      v13 = v12;
      if ( v12 )
      {
        v14 = WmipSMBiosTableLength;
        memmove(a1, v12, (unsigned int)WmipSMBiosTableLength);
        MmUnmapIoSpace(v13, v14);
        v7 = 0;
      }
      else
      {
        v7 = -1073741670;
      }
    }
    else
    {
      v7 = -1073741808;
    }
  }
  else
  {
    v7 = -1073741789;
  }
  *a2 = WmipSMBiosTableLength;
  if ( (unsigned __int8)WmipGetRegistryHideMachine() )
  {
    if ( v7 >= 0 )
      WmipSMBiosHideMachine(a1, (unsigned int)*a2);
  }
  ExReleaseResourceLite(&WmipSMBiosLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
  return (unsigned int)v7;
}
