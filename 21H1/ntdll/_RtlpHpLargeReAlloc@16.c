/*
 * XREFs of _RtlpHpLargeReAlloc@16 @ 0x4B37A510
 * Callers:
 *     _RtlpHpReAllocateHeap@24 @ 0x4B37955B (_RtlpHpReAllocateHeap@24.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpHpSegLockAcquire@8 @ 0x4B307A34 (_RtlpHpSegLockAcquire@8.c)
 *     _RtlpHpLargeLockRelease@12 @ 0x4B307A6C (_RtlpHpLargeLockRelease@12.c)
 *     _RtlpHeapLogRangeRelease@12 @ 0x4B36D880 (_RtlpHeapLogRangeRelease@12.c)
 *     _RtlpHpExtrasMove@20 @ 0x4B378400 (_RtlpHpExtrasMove@20.c)
 *     _RtlpHpFreeVA@20 @ 0x4B378695 (_RtlpHpFreeVA@20.c)
 *     _RtlpHpReallocMove@16 @ 0x4B37981A (_RtlpHpReallocMove@16.c)
 */

int __fastcall RtlpHpLargeReAlloc(int a1, int a2, char *a3, int *a4)
{
  unsigned int v5; // eax
  char v6; // di
  char *v7; // edi
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  unsigned int v10; // edi
  int v11; // edx
  int v12; // esi
  int v13; // ecx
  int v14; // eax
  _RTL_SRWLOCK *v15; // esi
  int v16; // eax
  bool v17; // zf
  char *v18; // ecx
  int v19; // ecx
  int v21; // [esp-8h] [ebp-38h]
  int v22; // [esp-4h] [ebp-34h]
  int v24; // [esp+Ch] [ebp-24h]
  unsigned int v25; // [esp+10h] [ebp-20h]
  unsigned int v26; // [esp+14h] [ebp-1Ch]
  int v28; // [esp+20h] [ebp-10h]
  unsigned int v29; // [esp+20h] [ebp-10h]
  unsigned int v30; // [esp+24h] [ebp-Ch]
  PVOID BaseAddress; // [esp+28h] [ebp-8h] BYREF
  ULONG_PTR RegionSize; // [esp+2Ch] [ebp-4h] BYREF

  v5 = a4[4];
  v6 = a2;
  v30 = (v5 + 4095) >> 12 << 12;
  v25 = (unsigned int)(a4[1] + 4095) >> 12;
  v26 = (v5 + 4095) >> 12;
  if ( v30 < v5 )
    return 0;
  if ( (v5 + 4095) >> 12 > (unsigned int)(a4[1] + 4095) >> 12
    || BYTE1(*(_DWORD *)a1) >= 2u && (*(_BYTE *)a1 & 6) == 0
    || (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 )
  {
    if ( (a2 & 0x2000000) == 0 )
      return (int)RtlpHpReallocMove((unsigned __int16 *)a1, a3, a4, a2);
    return 0;
  }
  RtlpHpSegLockAcquire((_RTL_SRWLOCK *)a1, a2);
  v9 = *(_DWORD *)(a1 + 68);
  if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
  {
    if ( v9 )
      v9 ^= a1 + 68;
    else
      v9 = 0;
  }
  while ( v9 )
  {
    v8 = *(_DWORD *)(v9 + 12) & 0xFFFF0000;
    if ( (unsigned int)a3 < v8 )
    {
      v8 = *(_DWORD *)v9;
    }
    else
    {
      if ( (unsigned int)a3 <= v8 )
        break;
      v8 = *(_DWORD *)(v9 + 4);
    }
    if ( (*(_BYTE *)(a1 + 72) & 1) != 0 && v8 )
      v9 ^= v8;
    else
      v9 = v8;
  }
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 16);
    v11 = 1 << ((v10 >> 2) & 0x3F);
    v12 = ((v10 >> 12) + ((v10 >> 1) & 1)) << 12;
    v13 = (v11 - 1) & (v11 + v12 - 1);
    v14 = v12 - 1;
    v15 = (_RTL_SRWLOCK *)a1;
    v28 = v11 - v13 + v14;
    *(_DWORD *)(v9 + 16) = (v26 << 12) | v10 & 0xFFF;
    *(_WORD *)(v9 + 12) = ((_WORD)v26 << 12) - *((_WORD *)a4 + 6);
    RtlpHpLargeLockRelease((_RTL_SRWLOCK *)a1, a2, (int)a4);
    v7 = a3;
    if ( a4[2] )
      RtlpHpExtrasMove((int)a3, *a4, (int)a3, a4[3], a2);
    if ( v26 < v25 )
    {
      v22 = *(_DWORD *)(a1 + 4);
      v21 = *(_DWORD *)a1;
      BaseAddress = &a3[4096 * (v26 + ((*(_DWORD *)(v9 + 16) >> 1) & 1))];
      LODWORD(RegionSize) = &a3[v28 - (_DWORD)BaseAddress];
      RtlpHpFreeVA(&BaseAddress, &RegionSize, 0x8000, v21, v22);
      if ( RtlGetCurrentServiceSessionId() )
        v16 = (int)NtCurrentPeb()->SharedData + 558;
      else
        v16 = 2147353480;
      if ( *(_BYTE *)v16 )
        RtlpHeapLogRangeRelease(a1, (int)BaseAddress, RegionSize);
      v29 = v28 - RegionSize;
      v18 = (char *)((_BYTE *)BaseAddress - &a3[v30]);
      v17 = BaseAddress == &a3[v30];
      BaseAddress = &a3[v30];
      LODWORD(RegionSize) = v18;
      if ( !v17 )
        RtlpHpFreeVA(&BaseAddress, &RegionSize, 0x4000, *(_DWORD *)a1, *(_DWORD *)(a1 + 4));
      _BitScanForward((unsigned int *)&v19, v29);
      v24 = v19;
      if ( v19 != ((*(_DWORD *)(v9 + 16) >> 2) & 0x3F) )
      {
        RtlpHpSegLockAcquire(v15, a2);
        *(_DWORD *)(v9 + 16) ^= (*(_DWORD *)(v9 + 16) ^ (4 * v24)) & 0xFC;
        RtlpHpLargeLockRelease(v15, a2, v24);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)&v15[20], v26 - v25);
      _InterlockedExchangeAdd((volatile signed __int32 *)&v15[19], v26 - v25);
    }
  }
  else
  {
    RtlpHpLargeLockRelease((_RTL_SRWLOCK *)a1, v6, v8);
    return -1;
  }
  return (int)v7;
}
