/*
 * XREFs of PnpDeviceCompletionRequestCreate @ 0x14074716C
 * Callers:
 *     PnpStartDeviceNode @ 0x14073E0C4 (PnpStartDeviceNode.c)
 *     PipEnumerateDevice @ 0x140746FE8 (PipEnumerateDevice.c)
 * Callees:
 *     PnpEnableWatchdog @ 0x14066AC94 (PnpEnableWatchdog.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall PnpDeviceCompletionRequestCreate(__int64 a1, int a2)
{
  _QWORD *PoolWithTag; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x31706E50u);
  if ( PoolWithTag )
  {
    PoolWithTag[1] = PoolWithTag;
    *PoolWithTag = PoolWithTag;
    *((_DWORD *)PoolWithTag + 14) = 1;
    *((_DWORD *)PoolWithTag + 9) = 0;
    PoolWithTag[3] = 0LL;
    PoolWithTag[2] = a1;
    *((_DWORD *)PoolWithTag + 8) = a2;
    *((_DWORD *)PoolWithTag + 10) = -1073741595;
    PoolWithTag[6] = 0LL;
    PoolWithTag[8] = PnpEnableWatchdog(2, (__int64)PoolWithTag);
  }
  return PoolWithTag;
}
