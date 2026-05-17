/*
 * XREFs of _RtlpHpSegPageRangeCoalesce@20 @ 0x4B37CA1F
 * Callers:
 *     _RtlpHpSegContextCompact@8 @ 0x4B37B591 (_RtlpHpSegContextCompact@8.c)
 *     _RtlpHpSegPageRangeShrink@16 @ 0x4B37D0E7 (_RtlpHpSegPageRangeShrink@16.c)
 * Callees:
 *     _RtlpHpSegLockAcquire@8 @ 0x4B307A34 (_RtlpHpSegLockAcquire@8.c)
 *     _RtlpHpLargeLockRelease@12 @ 0x4B307A6C (_RtlpHpLargeLockRelease@12.c)
 *     _RtlpHpScheduleCompaction@4 @ 0x4B358965 (_RtlpHpScheduleCompaction@4.c)
 *     _RtlpHpSegFreeRangeRemove@8 @ 0x4B37BAC9 (_RtlpHpSegFreeRangeRemove@8.c)
 *     _RtlpHpSegPageRangeCommit@24 @ 0x4B37CC3B (_RtlpHpSegPageRangeCommit@24.c)
 */

int __fastcall RtlpHpSegPageRangeCoalesce(int a1, int a2, char a3, int a4, char *a5)
{
  int v7; // ecx
  int v8; // ebx
  unsigned int v9; // edx
  _DWORD *v10; // eax
  _DWORD *v11; // edx
  int v12; // ecx
  unsigned __int8 v13; // dl
  int v14; // ecx
  char v15; // dl
  int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // ebx
  unsigned int v19; // eax
  char v21[4]; // [esp+10h] [ebp-Ch] BYREF
  _DWORD *v22; // [esp+14h] [ebp-8h]
  int v23; // [esp+18h] [ebp-4h]

  while ( 1 )
  {
    v7 = *(unsigned __int8 *)(a2 + 15);
    v8 = 0;
    v9 = (a2 - (a2 & *(_DWORD *)a1)) >> 4;
    v23 = (unsigned __int16)~(*(_DWORD *)(a2 + 12) >> 8);
    if ( v7 + v9 < 0x100 )
    {
      v7 = a2 + 16 * v7;
      v8 = (*(_BYTE *)(v7 + 12) & 1) == 0 ? v7 : 0;
    }
    if ( v9 > *(unsigned __int8 *)(a1 + 6) )
    {
      v7 = a2 - 16;
      if ( (*(_BYTE *)(a2 - 16 + 12) & 2) == 0 )
        v7 += -16 * *(unsigned __int8 *)(v7 + 15);
      v10 = (*(_BYTE *)(v7 + 12) & 1) == 0 ? (_DWORD *)v7 : 0;
      v22 = v10;
      if ( v10 )
      {
        RtlpHpSegFreeRangeRemove(a1, v10);
        v11 = v22;
        v12 = v23;
        *((_BYTE *)v22 + 15) += *(_BYTE *)(a2 + 15);
        v23 = (unsigned __int16)~(v11[3] >> 8) + v12;
        v11[3] ^= (v11[3] ^ (~v23 << 8)) & 0xFFFF00;
        *(_BYTE *)(a2 + 12) &= -(*(_BYTE *)(a2 + 15) > 1u) - 3;
        a2 = (int)v11;
        v7 = *((unsigned __int8 *)v11 + 15) - 1;
        HIBYTE(v11[4 * v7 + 3]) = v7;
      }
    }
    *(_BYTE *)(a2 + 12) |= 0x11u;
    if ( v8 )
    {
      RtlpHpSegFreeRangeRemove(a1, (_DWORD *)v8);
      v13 = *(_BYTE *)(a2 + 15);
      if ( v13 != 1 )
      {
        *(_BYTE *)(a2 + 16 * (v13 - 1) + 12) &= ~1u;
        v13 = *(_BYTE *)(a2 + 15);
      }
      v14 = v23;
      *(_BYTE *)(a2 + 15) = v13 + *(_BYTE *)(v8 + 15);
      v23 = (unsigned __int16)~(*(_DWORD *)(v8 + 12) >> 8) + v14;
      *(_DWORD *)(a2 + 12) ^= (*(_DWORD *)(a2 + 12) ^ (~v23 << 8)) & 0xFFFF00;
      *(_BYTE *)(v8 + 12) &= ~2u;
      v15 = *(_BYTE *)(a2 + 15) - 1;
      v7 = 16 * (*(unsigned __int8 *)(a2 + 15) - 1);
      *(_BYTE *)(v7 + a2 + 12) |= 1u;
      *(_BYTE *)(v7 + a2 + 15) = v15;
    }
    if ( !v23 )
      break;
    if ( !a4 && (*(_BYTE *)(a1 + 9) & 8) == 0 )
    {
      v16 = *(__int16 *)(a1 + 18);
      v17 = *(_DWORD *)(v16 + a1 + 4) >> *(_BYTE *)(a1 + 7);
      if ( v17 <= 8 )
        v17 = 8;
      v18 = *(_DWORD *)(v16 + a1 + 4) >> *(_BYTE *)(a1 + 8);
      if ( v18 <= 8 )
        v18 = 8;
      v7 = v23;
      v19 = v23 + *(_DWORD *)(a1 + *(__int16 *)(a1 + 18) + 8) + *(_DWORD *)(v16 + a1 + 12);
      v22 = (_DWORD *)v19;
      if ( v19 > v17 )
      {
        if ( RtlpHpScheduleCompaction() < 0 )
          goto LABEL_23;
        v19 = (unsigned int)v22;
      }
      if ( v19 <= v18 )
        break;
    }
LABEL_23:
    RtlpHpLargeLockRelease(a1, a3, v7);
    RtlpHpSegPageRangeCommit(0, -(*(unsigned __int8 *)(a2 + 15) << *(_BYTE *)(a1 + 5)), 0, v21);
    *a5 = RtlpHpSegLockAcquire(a1, a3);
    *(_BYTE *)(a2 + 12) &= ~0x10u;
  }
  *(_BYTE *)(a2 + 16 * *(unsigned __int8 *)(a2 + 15) - 4) &= ~1u;
  *(_BYTE *)(a2 + 12) &= 0xEEu;
  return a2;
}
