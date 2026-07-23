/*
 * XREFs of _RtlpHpVaMgrRangeFree@8 @ 0x4B37B24F
 * Callers:
 *     _RtlpHpVaMgrCtxFree@12 @ 0x4B37AC12 (_RtlpHpVaMgrCtxFree@12.c)
 * Callees:
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _RtlpHpVaMgrRangeCleanup@8 @ 0x4B37AF05 (_RtlpHpVaMgrRangeCleanup@8.c)
 */

NTSTATUS __fastcall RtlpHpVaMgrRangeFree(int a1, int a2)
{
  bool v2; // zf
  int v3; // eax
  PVOID BaseAddress; // [esp+8h] [ebp-8h] BYREF
  ULONG_PTR RegionSize; // [esp+Ch] [ebp-4h] BYREF

  v2 = (*(_BYTE *)a2 & 4) == 0;
  BaseAddress = (PVOID)(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 4)
                      + ((unsigned int)(a2 - *(_DWORD *)(*(_DWORD *)(a1 + 12) + 20)) >> *(_DWORD *)(*(_DWORD *)(a1 + 12)
                                                                                                  + 12) << 20));
  if ( v2 )
    v3 = *(unsigned __int16 *)(a2 + 12);
  else
    v3 = *(_DWORD *)(a2 + 12);
  LODWORD(RegionSize) = v3 << 20;
  RtlpHpVaMgrRangeCleanup(a1, (char *)a2);
  return NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
}
