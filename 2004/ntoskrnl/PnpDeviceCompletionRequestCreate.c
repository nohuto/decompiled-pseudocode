/*
 * XREFs of PnpDeviceCompletionRequestCreate @ 0x1407292BC
 * Callers:
 *     PipEnumerateDevice @ 0x140729138 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x14072C52C (PnpStartDeviceNode.c)
 * Callees:
 *     PnpEnableWatchdog @ 0x140649940 (PnpEnableWatchdog.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
