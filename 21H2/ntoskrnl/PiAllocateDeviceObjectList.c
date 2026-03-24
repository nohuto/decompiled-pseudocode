/*
 * XREFs of PiAllocateDeviceObjectList @ 0x1407392E8
 * Callers:
 *     IopAllocateRelationList @ 0x14073928C (IopAllocateRelationList.c)
 *     PipGrowDeviceObjectList @ 0x1408B28D0 (PipGrowDeviceObjectList.c)
 * Callees:
 *     PiClearDeviceObjectList @ 0x1407393A0 (PiClearDeviceObjectList.c)
 *     PnpAllocateCriticalMemory @ 0x14073947C (PnpAllocateCriticalMemory.c)
 */

_DWORD *__fastcall PiAllocateDeviceObjectList(__int64 a1, int a2)
{
  int v3; // esi
  _DWORD *CriticalMemory; // rax
  _DWORD *v5; // rbx

  v3 = a1;
  CriticalMemory = (_DWORD *)PnpAllocateCriticalMemory(a1, 1LL, 24 * a2 + 16LL, 1416654416LL);
  v5 = CriticalMemory;
  if ( CriticalMemory )
  {
    *CriticalMemory = 0;
    CriticalMemory[2] = 0;
    CriticalMemory[3] = v3;
    CriticalMemory[1] = a2;
    PiClearDeviceObjectList(CriticalMemory);
  }
  return v5;
}
