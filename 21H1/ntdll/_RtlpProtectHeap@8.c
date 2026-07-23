/*
 * XREFs of _RtlpProtectHeap@8 @ 0x4B2A90B8
 * Callers:
 *     _RtlProtectHeap@8 @ 0x4B2A9010 (_RtlProtectHeap@8.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 */

NTSTATUS __fastcall RtlpProtectHeap(int a1, int a2)
{
  _DWORD *v2; // ebx
  _DWORD *v3; // eax
  char *v4; // esi
  NTSTATUS VirtualMemory; // edi
  ULONG_PTR *v7; // [esp+0h] [ebp-40h]
  char MemoryInformation[12]; // [esp+10h] [ebp-30h] BYREF
  int v9; // [esp+1Ch] [ebp-24h]
  int v10; // [esp+20h] [ebp-20h]
  ULONG OldProtect; // [esp+2Ch] [ebp-14h] BYREF
  _DWORD *v12; // [esp+30h] [ebp-10h]
  PVOID BaseAddress; // [esp+34h] [ebp-Ch] BYREF
  ULONG_PTR RegionSize; // [esp+38h] [ebp-8h] BYREF

  HIDWORD(RegionSize) = a2;
  v2 = *(_DWORD **)(a1 + 164);
  v12 = (_DWORD *)(a1 + 164);
  if ( v2 == (_DWORD *)(a1 + 164) )
    return 0;
  while ( 1 )
  {
    v3 = v2 - 4;
    if ( v2 != (_DWORD *)16 )
    {
      v4 = (char *)v3[7];
      if ( (unsigned int)v4 < v3[10] )
        break;
    }
LABEL_8:
    v2 = (_DWORD *)*v2;
    if ( v2 == v12 )
      return 0;
  }
  while ( 1 )
  {
    VirtualMemory = NtQueryVirtualMemory((HANDLE)0xFFFFFFFF, v4, MemoryBasicInformation, MemoryInformation, 0x1CuLL, v7);
    if ( VirtualMemory < 0 )
      break;
    if ( v10 == 4096 )
    {
      LODWORD(RegionSize) = v9;
      BaseAddress = v4;
      VirtualMemory = ZwProtectVirtualMemory(
                        (HANDLE)0xFFFFFFFF,
                        &BaseAddress,
                        &RegionSize,
                        HIDWORD(RegionSize),
                        &OldProtect);
      if ( VirtualMemory < 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("VirtualProtect Failed 0x%p %x\n", v4, VirtualMemory);
        return VirtualMemory;
      }
    }
    v4 += v9;
    if ( (unsigned int)v4 >= v2[6] )
      goto LABEL_8;
  }
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("VirtualQuery Failed 0x%p %x\n", v4, VirtualMemory);
  return VirtualMemory;
}
