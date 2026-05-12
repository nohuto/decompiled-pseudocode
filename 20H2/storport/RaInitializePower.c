/*
 * XREFs of RaInitializePower @ 0x1C002B0FC
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x1C00140A8 (RaidPowerPassToMiniPort.c)
 *     RaidAdapterCompleteInitialization @ 0x1C002BA58 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     StorAllocateContiguousIoResources @ 0x1C0006B70 (StorAllocateContiguousIoResources.c)
 */

__int64 __fastcall RaInitializePower(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 4704) = 0;
  result = StorAllocateContiguousIoResources(((*(_DWORD *)(a1 + 468) + 7) & 0xFFFFFFF8) + 1088, a2, a1);
  *(_QWORD *)(a1 + 4696) = result;
  return result;
}
