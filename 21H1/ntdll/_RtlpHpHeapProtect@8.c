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

int __fastcall RtlpHpHeapProtect(int a1, int a2)
{
  int v3; // ebx
  int VirtualMemory; // ecx
  unsigned int v5; // esi
  int v7; // eax
  char v8; // bl
  unsigned int i; // eax
  unsigned int v10; // edx
  char v11[12]; // [esp+8h] [ebp-2Ch] BYREF
  int v12; // [esp+14h] [ebp-20h]
  char v13[4]; // [esp+24h] [ebp-10h] BYREF
  int v14; // [esp+28h] [ebp-Ch] BYREF
  int v15; // [esp+2Ch] [ebp-8h] BYREF
  int v16; // [esp+30h] [ebp-4h]

  v3 = a2;
  v16 = a2;
  VirtualMemory = NtQueryVirtualMemory(-1, a1, 0, (int)v11, 28, 0);
  if ( VirtualMemory >= 0 )
  {
    v15 = v12;
    v14 = a1;
    VirtualMemory = ZwProtectVirtualMemory(-1, (int)&v14, (int)&v15, v3, (int)v13);
    if ( VirtualMemory >= 0 )
    {
      VirtualMemory = RtlpHpSegProtect(a1 + 256, v3);
      if ( VirtualMemory >= 0 )
      {
        VirtualMemory = RtlpHpSegProtect(a1 + 384, v3);
        if ( VirtualMemory >= 0 )
        {
          v5 = *(_DWORD *)(a1 + 68);
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
              if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
                v5 ^= *(_DWORD *)v5;
              else
                v5 = *(_DWORD *)v5;
            }
            v7 = *(_DWORD *)(v5 + 4);
            v8 = *(_BYTE *)(a1 + 72) & 1;
            if ( !v7 )
              break;
            if ( v8 )
              v5 ^= v7;
            else
              v5 = *(_DWORD *)(v5 + 4);
LABEL_16:
            v3 = v16;
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
