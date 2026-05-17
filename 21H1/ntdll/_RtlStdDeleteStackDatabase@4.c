/*
 * XREFs of _RtlStdDeleteStackDatabase@4 @ 0x4B368E70
 * Callers:
 *     _RtlpInitializeStackTraceDatabase@12 @ 0x4B369163 (_RtlpInitializeStackTraceDatabase@12.c)
 * Callees:
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 */

int __thiscall RtlStdDeleteStackDatabase(void *this, int a2)
{
  void *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this;
  v3 = (void *)(*(_DWORD *)(a2 + 100) - a2);
  return NtFreeVirtualMemory(-1, (int)&a2, (int)&v3, 0x8000);
}
