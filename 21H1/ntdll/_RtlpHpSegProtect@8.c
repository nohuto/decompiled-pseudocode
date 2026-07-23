/*
 * XREFs of _RtlpHpSegProtect@8 @ 0x4B37D295
 * Callers:
 *     _RtlpHpHeapProtect@8 @ 0x4B379008 (_RtlpHpHeapProtect@8.c)
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 */

NTSTATUS __fastcall RtlpHpSegProtect(_DWORD *a1, int a2)
{
  char *v3; // edi
  char *i; // esi
  char *v5; // ecx
  bool j; // cf
  NTSTATUS result; // eax
  ULONG_PTR *v8; // [esp+0h] [ebp-3Ch]
  _BYTE MemoryInformation[12]; // [esp+Ch] [ebp-30h] BYREF
  int v10; // [esp+18h] [ebp-24h]
  int v11; // [esp+1Ch] [ebp-20h]
  ULONG OldProtect; // [esp+28h] [ebp-14h] BYREF
  char *v13; // [esp+2Ch] [ebp-10h]
  ULONG_PTR RegionSize; // [esp+30h] [ebp-Ch] BYREF
  PVOID BaseAddress; // [esp+38h] [ebp-4h] BYREF

  HIDWORD(RegionSize) = a2;
  v3 = (char *)(a1 + 17);
  for ( i = (char *)a1[17]; i != v3; i = *(char **)i )
  {
    v5 = i;
    v13 = &i[-*a1];
    for ( j = i < v13; ; j = (char *)BaseAddress + v10 < v13 )
    {
      BaseAddress = v5;
      if ( !j )
        break;
      result = NtQueryVirtualMemory((HANDLE)0xFFFFFFFF, v5, MemoryBasicInformation, MemoryInformation, 0x1CuLL, v8);
      if ( result < 0 )
        return result;
      if ( v11 == 4096 )
      {
        LODWORD(RegionSize) = v10;
        result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, HIDWORD(RegionSize), &OldProtect);
        if ( result < 0 )
          return result;
      }
      v5 = (char *)BaseAddress + v10;
    }
  }
  return 0;
}
