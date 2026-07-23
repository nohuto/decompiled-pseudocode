/*
 * XREFs of _RtlpHpHeapProtect@8 @ 0x4B379008
 * Callers:
 *     _RtlProtectHeap@8 @ 0x4B2A9010 (_RtlProtectHeap@8.c)
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 *     _RtlpHpLargeAllocationProtect@8 @ 0x4B37A357 (_RtlpHpLargeAllocationProtect@8.c)
 *     _RtlpHpSegProtect@8 @ 0x4B37D295 (_RtlpHpSegProtect@8.c)
 */

NTSTATUS __fastcall RtlpHpHeapProtect(int *BaseAddress, ULONG NewProtect)
{
  ULONG v3; // ebx
  NTSTATUS VirtualMemory; // ecx
  int v5; // esi
  int v7; // eax
  char v8; // bl
  unsigned int i; // eax
  int v10; // edx
  ULONG_PTR *v11; // [esp+0h] [ebp-34h]
  _BYTE MemoryInformation[12]; // [esp+8h] [ebp-2Ch] BYREF
  int v13; // [esp+14h] [ebp-20h]
  ULONG OldProtect; // [esp+24h] [ebp-10h] BYREF
  PVOID BaseAddressa; // [esp+28h] [ebp-Ch] BYREF
  ULONG_PTR RegionSize; // [esp+2Ch] [ebp-8h] BYREF

  v3 = NewProtect;
  HIDWORD(RegionSize) = NewProtect;
  VirtualMemory = NtQueryVirtualMemory(
                    (HANDLE)0xFFFFFFFF,
                    BaseAddress,
                    MemoryBasicInformation,
                    MemoryInformation,
                    0x1CuLL,
                    v11);
  if ( VirtualMemory >= 0 )
  {
    LODWORD(RegionSize) = v13;
    BaseAddressa = BaseAddress;
    VirtualMemory = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddressa, &RegionSize, v3, &OldProtect);
    if ( VirtualMemory >= 0 )
    {
      VirtualMemory = RtlpHpSegProtect(BaseAddress + 64, v3);
      if ( VirtualMemory >= 0 )
      {
        VirtualMemory = RtlpHpSegProtect(BaseAddress + 96, v3);
        if ( VirtualMemory >= 0 )
        {
          v5 = BaseAddress[17];
          if ( !v5 )
            return 0;
          while ( 1 )
          {
            while ( 1 )
            {
              VirtualMemory = RtlpHpLargeAllocationProtect(v5, v3);
              if ( VirtualMemory < 0 )
                return VirtualMemory;
              if ( !*(_DWORD *)v5 )
                break;
              if ( (BaseAddress[18] & 1) != 0 )
                v5 ^= *(_DWORD *)v5;
              else
                v5 = *(_DWORD *)v5;
            }
            v7 = *(_DWORD *)(v5 + 4);
            v8 = BaseAddress[18] & 1;
            if ( !v7 )
              break;
            if ( v8 )
              v5 ^= v7;
            else
              v5 = *(_DWORD *)(v5 + 4);
LABEL_16:
            v3 = HIDWORD(RegionSize);
          }
          for ( i = v5; ; v5 = i )
          {
            i = *(_DWORD *)(i + 8) & 0xFFFFFFFC;
            if ( v8 )
            {
              if ( !i )
                return VirtualMemory;
              i ^= v5;
            }
            if ( !i )
              return VirtualMemory;
            v10 = *(_DWORD *)(i + 4);
            if ( v8 )
            {
              if ( !v10 )
                continue;
              v10 ^= i;
            }
            if ( v10 && v10 != v5 )
            {
              v5 = v10;
              goto LABEL_16;
            }
          }
        }
      }
    }
  }
  return VirtualMemory;
}
