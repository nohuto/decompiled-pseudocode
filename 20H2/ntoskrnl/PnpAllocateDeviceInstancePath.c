/*
 * XREFs of PnpAllocateDeviceInstancePath @ 0x14079ACE0
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x140748194 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x1408B669C (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
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
