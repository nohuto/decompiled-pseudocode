/*
 * XREFs of PspFreeUserFiberShadowStackInternal @ 0x140905C28
 * Callers:
 *     PspFreeUserFiberShadowStack @ 0x140905AC4 (PspFreeUserFiberShadowStack.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1403F2790 (ZwQueryVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x14062E1C0 (MmFreeVirtualMemory.c)
 */

NTSTATUS __fastcall PspFreeUserFiberShadowStackInternal(PVOID BaseAddress)
{
  NTSTATUS result; // eax
  unsigned __int64 v2[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v3; // [rsp+78h] [rbp+10h] BYREF

  memset(v2, 0, 48);
  result = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, MemoryRegionInformation, v2, 0x30uLL, 0LL);
  if ( result >= 0 )
  {
    v3 = 0LL;
    return MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, v2, &v3, 0x8000, 0, 0x40000000u);
  }
  return result;
}
