/*
 * XREFs of PnpAllocateDeviceInstancePath @ 0x14078E5A0
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x140739284 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x1408B0B6C (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpAllocateDeviceInstancePath(__int64 a1, unsigned int a2)
{
  PVOID PoolWithTag; // rax

  *(_WORD *)(a1 + 42) = a2;
  *(_WORD *)(a1 + 40) = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a2, 0x49706E50u);
  *(_QWORD *)(a1 + 48) = PoolWithTag;
  return PoolWithTag == 0LL ? 0xC000009A : 0;
}
