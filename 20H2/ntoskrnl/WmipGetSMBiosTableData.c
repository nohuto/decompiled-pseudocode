/*
 * XREFs of WmipGetSMBiosTableData @ 0x14065C898
 * Callers:
 *     WmipRawSMBiosTableHandler @ 0x14025F230 (WmipRawSMBiosTableHandler.c)
 *     WmipQueryWmiDataBlock @ 0x14065C130 (WmipQueryWmiDataBlock.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     MmMapIoSpaceEx @ 0x14025FEE0 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x1402611D0 (MmUnmapIoSpace.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     WmipGetRegistryHideMachine @ 0x14065C998 (WmipGetRegistryHideMachine.c)
 *     WmipSMBiosHideMachine @ 0x140934A1C (WmipSMBiosHideMachine.c)
 */

__int64 __fastcall WmipGetSMBiosTableData(void *a1, _DWORD *a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  void *v9; // rax
  void *v10; // rsi
  unsigned int v11; // ebx

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
      v9 = (void *)MmMapIoSpaceEx(WmipSMBiosTablePhysicalAddress, (unsigned int)WmipSMBiosTableLength, 4u);
      v10 = v9;
      if ( v9 )
      {
        v11 = WmipSMBiosTableLength;
        memmove(a1, v9, (unsigned int)WmipSMBiosTableLength);
        MmUnmapIoSpace(v10, v11);
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v7;
}
