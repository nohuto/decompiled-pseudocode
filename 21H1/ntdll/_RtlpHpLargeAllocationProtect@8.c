/*
 * XREFs of _RtlpHpLargeAllocationProtect@8 @ 0x4B37A357
 * Callers:
 *     _RtlpHpHeapProtect@8 @ 0x4B379008 (_RtlpHpHeapProtect@8.c)
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 */

int __stdcall RtlpHpLargeAllocationProtect(int a1, int a2)
{
  int result; // eax
  _BYTE v3[12]; // [esp+0h] [ebp-28h] BYREF
  int v4; // [esp+Ch] [ebp-1Ch]
  _BYTE v5[4]; // [esp+1Ch] [ebp-Ch] BYREF
  unsigned int v6; // [esp+20h] [ebp-8h] BYREF
  int v7; // [esp+24h] [ebp-4h] BYREF

  v6 = *(_DWORD *)(a1 + 12) & 0xFFFF0000;
  result = NtQueryVirtualMemory(-1, v6, 0, (int)v3, 28, 0);
  if ( result >= 0 )
  {
    v7 = v4;
    return ZwProtectVirtualMemory(-1, (int)&v6, (int)&v7, a2, (int)v5);
  }
  return result;
}
