/*
 * XREFs of DpiRemoveMemoryTracker @ 0x1C0057A84
 * Callers:
 *     ?DxgkFreeMemoryTracker@@YAXQEAXPEAUDXG_DRIVER_MEMORY_TRACKER@@@Z @ 0x1C0042678 (-DxgkFreeMemoryTracker@@YAXQEAXPEAUDXG_DRIVER_MEMORY_TRACKER@@@Z.c)
 *     DxgkFreeContiguousMemoryCB @ 0x1C0042DA0 (DxgkFreeContiguousMemoryCB.c)
 *     ?UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z @ 0x1C020FD64 (-UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z.c)
 * Callees:
 *     DpiGetIoMmuContextFromDevice @ 0x1C0057704 (DpiGetIoMmuContextFromDevice.c)
 *     DpiUnmapMemoryTrackerFromIoMmu @ 0x1C0057D30 (DpiUnmapMemoryTrackerFromIoMmu.c)
 */

void __fastcall DpiRemoveMemoryTracker(__int64 a1, _QWORD *a2)
{
  __int64 IoMmuContextFromDevice; // rdi
  KIRQL v4; // si
  __int64 v5; // rcx
  _QWORD *v6; // rax

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)IoMmuContextFromDevice);
  if ( (*(_DWORD *)(IoMmuContextFromDevice + 136) & 1) != 0 )
    DpiUnmapMemoryTrackerFromIoMmu(IoMmuContextFromDevice, a2);
  v5 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v6 = (_QWORD *)a2[1], (_QWORD *)*v6 != a2) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  a2[1] = 0LL;
  *a2 = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)IoMmuContextFromDevice, v4);
}
