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

int __fastcall RtlpHpSegMgrReserve(int a1, char a2, _DWORD *a3, unsigned int *a4, unsigned int *a5)
{
  unsigned int v6; // ebx
  void *v7; // esi
  void *v8; // edx
  int v9; // ecx
  int v10; // esi
  int v11; // esi
  unsigned int v12; // ecx
  int v14; // [esp+Ch] [ebp-28h] BYREF
  int v15; // [esp+10h] [ebp-24h]
  int v16; // [esp+28h] [ebp-Ch]
  void *v17; // [esp+2Ch] [ebp-8h] BYREF
  unsigned int v18; // [esp+30h] [ebp-4h] BYREF

  v6 = -*(_DWORD *)a1;
  v18 = v6;
  v7 = (void *)RtlpHpSegMgrVaCtxAlloc(a2);
  v8 = 0;
  v17 = v7;
  if ( v7 )
    goto LABEL_13;
  if ( (*(_BYTE *)(a1 + 9) & 7) != 0 && v6 < 0x200000 )
    v18 = 0x200000;
  v9 = *(_DWORD *)(a1 + 36);
  v16 = v9;
  v10 = (*(_DWORD *)(v9 + 12) & 0x40000000) != 0 ? 64 : 4;
  if ( (*(_DWORD *)(v9 + 12) & 0x40000000) != 0
    && (NtQueryVirtualMemory(-1, v9, 3, (int)&v14, 28, 0) < 0 || (v15 & 0x60) == 0 || v14 != v16) )
  {
    RtlpLogHeapFailure(0, v16, 1, v15, 0, 0);
    v10 = 4;
  }
  v11 = RtlpHpAllocVA(&v17, &v18, v18, 0x2000, v10, *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 32));
  if ( v11 >= 0 )
  {
    v12 = v18;
    if ( v6 >= v18 )
    {
      v7 = v17;
      v8 = 0;
      goto LABEL_14;
    }
    RtlpHpSegMgrVaCtxInitialize(v6, v18);
    v7 = v17;
    v8 = 0;
LABEL_13:
    v12 = v18;
LABEL_14:
    v17 = 0;
    *a4 = v6;
    *a5 = v12;
    *a3 = v7;
    v11 = 0;
    goto LABEL_15;
  }
  v8 = v17;
LABEL_15:
  if ( v8 )
    RtlpHpFreeVA((int *)&v17, (int *)&v18, 0x8000, *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 32));
  return v11;
}
