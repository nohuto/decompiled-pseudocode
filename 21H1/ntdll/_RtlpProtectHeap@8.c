/*
 * XREFs of _RtlpProtectHeap@8 @ 0x4B2A90B8
 * Callers:
 *     _RtlProtectHeap@8 @ 0x4B2A9010 (_RtlProtectHeap@8.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 */

int __fastcall RtlpProtectHeap(int a1, int a2)
{
  _DWORD *v2; // ebx
  _DWORD *v3; // eax
  unsigned int v4; // esi
  int VirtualMemory; // edi
  _BYTE v7[12]; // [esp+10h] [ebp-30h] BYREF
  int v8; // [esp+1Ch] [ebp-24h]
  int v9; // [esp+20h] [ebp-20h]
  _BYTE v10[4]; // [esp+2Ch] [ebp-14h] BYREF
  _DWORD *v11; // [esp+30h] [ebp-10h]
  unsigned int v12; // [esp+34h] [ebp-Ch] BYREF
  int v13; // [esp+38h] [ebp-8h] BYREF
  int v14; // [esp+3Ch] [ebp-4h]

  v14 = a2;
  v2 = *(_DWORD **)(a1 + 164);
  v11 = (_DWORD *)(a1 + 164);
  if ( v2 == (_DWORD *)(a1 + 164) )
    return 0;
  while ( 1 )
  {
    v3 = v2 - 4;
    if ( v2 != (_DWORD *)16 )
    {
      v4 = v3[7];
      if ( v4 < v3[10] )
        break;
    }
LABEL_8:
    v2 = (_DWORD *)*v2;
    if ( v2 == v11 )
      return 0;
  }
  while ( 1 )
  {
    VirtualMemory = NtQueryVirtualMemory(-1, v4, 0, v7, 28, 0);
    if ( VirtualMemory < 0 )
      break;
    if ( v9 == 4096 )
    {
      v13 = v8;
      v12 = v4;
      VirtualMemory = ZwProtectVirtualMemory(-1, &v12, &v13, v14, v10);
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
    v4 += v8;
    if ( v4 >= v2[6] )
      goto LABEL_8;
  }
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("VirtualQuery Failed 0x%p %x\n", v4, VirtualMemory);
  return VirtualMemory;
}
