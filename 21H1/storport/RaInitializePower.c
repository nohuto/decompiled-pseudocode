/*
 * XREFs of RaInitializePower @ 0x1C0029D0C
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x1C0010CD8 (RaidPowerPassToMiniPort.c)
 *     RaidAdapterCompleteInitialization @ 0x1C002A664 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     StorAllocateContiguousIoResources @ 0x1C00074A8 (StorAllocateContiguousIoResources.c)
 */

__int64 __fastcall RaInitializePower(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 4704) = 0;
  result = StorAllocateContiguousIoResources(((*(_DWORD *)(a1 + 452) + 7) & 0xFFFFFFF8) + 1088, a2, a1);
  *(_QWORD *)(a1 + 4696) = result;
  return result;
}
