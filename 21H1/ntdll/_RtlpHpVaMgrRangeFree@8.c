/*
 * XREFs of _RtlpHpVaMgrRangeFree@8 @ 0x4B37B24F
 * Callers:
 *     _RtlpHpVaMgrCtxFree@12 @ 0x4B37AC12 (_RtlpHpVaMgrCtxFree@12.c)
 * Callees:
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _RtlpHpVaMgrRangeCleanup@8 @ 0x4B37AF05 (_RtlpHpVaMgrRangeCleanup@8.c)
 */

int __fastcall RtlpHpVaMgrRangeFree(int a1, int a2)
{
  bool v2; // zf
  int v3; // eax
  unsigned int v5; // [esp+8h] [ebp-8h] BYREF
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v2 = (*(_BYTE *)a2 & 4) == 0;
  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4)
     + ((unsigned int)(a2 - *(_DWORD *)(*(_DWORD *)(a1 + 12) + 20)) >> *(_DWORD *)(*(_DWORD *)(a1 + 12) + 12) << 20);
  if ( v2 )
    v3 = *(unsigned __int16 *)(a2 + 12);
  else
    v3 = *(_DWORD *)(a2 + 12);
  v6 = v3 << 20;
  RtlpHpVaMgrRangeCleanup(a1, (char *)a2);
  return NtFreeVirtualMemory(-1, (int)&v5, (int)&v6, 0x8000);
}
