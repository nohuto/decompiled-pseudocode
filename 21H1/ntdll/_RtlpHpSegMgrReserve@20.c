/*
 * XREFs of _RtlpHpSegMgrReserve@20 @ 0x4B37C4D9
 * Callers:
 *     _RtlpHpSegMgrAllocate@12 @ 0x4B37BE2B (_RtlpHpSegMgrAllocate@12.c)
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlpHpAllocVA@28 @ 0x4B377E59 (_RtlpHpAllocVA@28.c)
 *     _RtlpHpFreeVA@20 @ 0x4B378695 (_RtlpHpFreeVA@20.c)
 *     _RtlpHpSegMgrVaCtxAlloc@12 @ 0x4B37C5EC (_RtlpHpSegMgrVaCtxAlloc@12.c)
 *     _RtlpHpSegMgrVaCtxInitialize@16 @ 0x4B37C7AB (_RtlpHpSegMgrVaCtxInitialize@16.c)
 */

NTSTATUS __fastcall RtlpHpSegMgrReserve(int a1, char a2, _DWORD *a3, unsigned int *a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  PVOID v7; // esi
  PVOID v8; // edx
  _DWORD *v9; // ecx
  ULONG v10; // esi
  NTSTATUS v11; // esi
  int v12; // ecx
  ULONG_PTR *v14; // [esp+0h] [ebp-34h]
  _DWORD *MemoryInformation; // [esp+Ch] [ebp-28h] BYREF
  int v16; // [esp+10h] [ebp-24h]
  _DWORD *v17; // [esp+28h] [ebp-Ch]
  PVOID BaseAddress; // [esp+2Ch] [ebp-8h] BYREF
  ULONG_PTR RegionSize; // [esp+30h] [ebp-4h] BYREF

  v6 = -*(_DWORD *)a1;
  LODWORD(RegionSize) = v6;
  v7 = (PVOID)RtlpHpSegMgrVaCtxAlloc(a2);
  v8 = 0;
  BaseAddress = v7;
  if ( v7 )
    goto LABEL_13;
  if ( (*(_BYTE *)(a1 + 9) & 7) != 0 && v6 < 0x200000 )
    LODWORD(RegionSize) = 0x200000;
  v9 = *(_DWORD **)(a1 + 36);
  v17 = v9;
  v10 = (v9[3] & 0x40000000) != 0 ? 64 : 4;
  if ( (v9[3] & 0x40000000) != 0
    && (NtQueryVirtualMemory((HANDLE)0xFFFFFFFF, v9, MemoryRegionInformation, &MemoryInformation, 0x1CuLL, v14) < 0
     || (v16 & 0x60) == 0
     || MemoryInformation != v17) )
  {
    RtlpLogHeapFailure(0, (int)v17, 1, v16, 0, 0);
    v10 = 4;
  }
  v11 = RtlpHpAllocVA(
          &BaseAddress,
          (int *)&RegionSize,
          RegionSize,
          0x2000,
          v10,
          *(_DWORD *)(a1 + 28),
          *(_DWORD *)(a1 + 32));
  if ( v11 >= 0 )
  {
    v12 = RegionSize;
    if ( v6 >= (unsigned int)RegionSize )
    {
      v7 = BaseAddress;
      v8 = 0;
      goto LABEL_14;
    }
    RtlpHpSegMgrVaCtxInitialize(v6, RegionSize);
    v7 = BaseAddress;
    v8 = 0;
LABEL_13:
    v12 = RegionSize;
LABEL_14:
    BaseAddress = 0;
    *a4 = v6;
    *a5 = v12;
    *a3 = v7;
    v11 = 0;
    goto LABEL_15;
  }
  v8 = BaseAddress;
LABEL_15:
  if ( v8 )
    RtlpHpFreeVA(&BaseAddress, &RegionSize, 0x8000, *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 32));
  return v11;
}
