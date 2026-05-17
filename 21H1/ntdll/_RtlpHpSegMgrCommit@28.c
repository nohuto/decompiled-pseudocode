/*
 * XREFs of _RtlpHpSegMgrCommit@28 @ 0x4B37BF36
 * Callers:
 *     _RtlpHpSegMgrAllocate@12 @ 0x4B37BE2B (_RtlpHpSegMgrAllocate@12.c)
 *     _RtlpHpSegMgrRelease@12 @ 0x4B37C3E1 (_RtlpHpSegMgrRelease@12.c)
 *     _RtlpHpSegPageRangeCommit@24 @ 0x4B37CC3B (_RtlpHpSegPageRangeCommit@24.c)
 * Callees:
 *     _RtlpHpHeapCheckCommitLimit@16 @ 0x4B2E68BA (_RtlpHpHeapCheckCommitLimit@16.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlpHpAllocVA@28 @ 0x4B377E59 (_RtlpHpAllocVA@28.c)
 *     _RtlpHpFreeVA@20 @ 0x4B378695 (_RtlpHpFreeVA@20.c)
 *     _RtlpHpQueryVA@20 @ 0x4B37951B (_RtlpHpQueryVA@20.c)
 *     _RtlpHpSegMgrCommitComplete@24 @ 0x4B37C1CE (_RtlpHpSegMgrCommitComplete@24.c)
 *     _RtlpHpSegMgrCommitInitiate@24 @ 0x4B37C275 (_RtlpHpSegMgrCommitInitiate@24.c)
 */

int __fastcall RtlpHpSegMgrCommit(int a1, int a2, unsigned int a3, size_t Size, int a5, int a6, char a7)
{
  signed int v8; // edi
  unsigned int v9; // esi
  int v10; // edi
  _WORD *v11; // edx
  void *v12; // ecx
  size_t v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  signed __int32 v18; // ecx
  char v20; // [esp+Fh] [ebp-39h] BYREF
  void *v21; // [esp+10h] [ebp-38h] BYREF
  _WORD *v22; // [esp+14h] [ebp-34h] BYREF
  int v23; // [esp+18h] [ebp-30h]
  size_t v24; // [esp+1Ch] [ebp-2Ch] BYREF
  int v25; // [esp+20h] [ebp-28h]
  int v26; // [esp+24h] [ebp-24h] BYREF
  void *v27; // [esp+28h] [ebp-20h]
  int v28; // [esp+2Ch] [ebp-1Ch] BYREF
  int v29; // [esp+30h] [ebp-18h]
  size_t Sizea; // [esp+54h] [ebp+Ch]

  v26 = 0;
  v23 = a2;
  v8 = a5;
  v9 = a6 & 0xBFFFFFFF;
  v20 = 0;
  v25 = a6 & 0x40000000;
  if ( a5 > 0 )
  {
    if ( !RtlpHpHeapCheckCommitLimit(
            a5 << 12,
            (*(_DWORD *)(*(_DWORD *)(a1 + 36) + 80) + *(_DWORD *)(*(_DWORD *)(a1 + 36) + 132)) << 12,
            *(_DWORD *)(a1 + 36),
            (int *)(*(_DWORD *)(a1 + 36) + 24)) )
      return -1073741523;
    a2 = v23;
  }
  if ( (*(_BYTE *)(a1 + 9) & 7) != 0 )
  {
    RtlpHpQueryVA(a2 & 0xFFE00000, &v22, 0, *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 32));
    v11 = &v22[a3 >> 9];
  }
  else
  {
    v11 = 0;
  }
  v12 = (void *)((a3 << 12) + v23);
  v22 = v11;
  v13 = Size << 12;
  v27 = v12;
  for ( Sizea = Size << 12; ; v13 = Sizea )
  {
    v21 = v12;
    v24 = v13;
    if ( !v11 )
      goto LABEL_14;
    v14 = RtlpHpSegMgrCommitInitiate(v8, a7, &v26, &v20);
    if ( v14 == -1073741568 )
      break;
    if ( v14 == -1073741566 )
    {
      v21 = (void *)((unsigned int)v21 & 0xFFE00000);
      v24 = 0x200000;
      if ( v8 <= 0 )
        goto LABEL_27;
      v9 |= 0x20000000u;
    }
LABEL_14:
    if ( v8 <= 0 )
    {
LABEL_27:
      v10 = RtlpHpFreeVA((int *)&v21, (int *)&v24, v9, *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 32));
      goto LABEL_28;
    }
    if ( v25 && (v9 & 0x20000000) == 0 )
      v9 |= 0x40000000u;
    v15 = *(_DWORD *)(a1 + 36);
    v23 = v15;
    v16 = (*(_DWORD *)(v15 + 12) & 0x40000000) != 0 ? 64 : 4;
    if ( (*(_DWORD *)(v15 + 12) & 0x40000000) != 0
      && (NtQueryVirtualMemory(-1, v15, 3, (int)&v28, 28, 0) < 0 || (v29 & 0x60) == 0 || v28 != v23) )
    {
      RtlpLogHeapFailure(0, v23, 1, v29, 0, 0);
      v16 = 4;
    }
    v17 = RtlpHpAllocVA(&v21, &v24, 0, v9, v16, *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 32));
    v10 = v17;
    if ( v25 && v17 >= 0 && (v9 & 0x40000000) == 0 )
      memset(v21, 0, Sizea);
LABEL_28:
    if ( !v22 )
      return v10;
    v18 = 0x4000;
    if ( (*v22 & 0x4000) != 0 && v10 >= 0 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + *(__int16 *)(a1 + 16) + 4), 2 * (a5 > 0) - 1);
      v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + *(__int16 *)(a1 + 16)), a5);
    }
    RtlpHpSegMgrCommitComplete(a5, v10 >= 0, &v26, v18);
    if ( (v9 & 0x20000000) == 0 || v10 >= 0 || (a7 & 2) != 0 )
      return v10;
    v8 = a5;
    v11 = v22;
    v9 &= ~0x20000000u;
    v12 = v27;
    a7 |= 1u;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + *(__int16 *)(a1 + 16)), v8);
  if ( v25 )
    memset(v21, 0, Sizea);
  return 0;
}
