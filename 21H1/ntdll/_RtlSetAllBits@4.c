/*
 * XREFs of _RtlSetAllBits@4 @ 0x4B34FA00
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFillMemoryUlong@12 @ 0x4B308020 (_RtlFillMemoryUlong@12.c)
 */

int __stdcall RtlSetAllBits(int a1)
{
  return RtlFillMemoryUlong(*(void **)(a1 + 4), 4 * ((*(_DWORD *)a1 >> 5) + ((*(_DWORD *)a1 & 0x1F) != 0)), -1);
}
