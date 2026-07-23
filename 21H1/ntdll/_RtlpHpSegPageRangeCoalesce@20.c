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

_RTL_BALANCED_NODE *__fastcall RtlpHpSegPageRangeCoalesce(int a1, _RTL_BALANCED_NODE *a2, char a3, int a4, char *a5)
{
  int Left_high; // ecx
  int v8; // ebx
  unsigned int v9; // edx
  _RTL_BALANCED_NODE *v10; // eax
  _RTL_BALANCED_NODE *v11; // edx
  int v12; // ecx
  unsigned __int8 v13; // dl
  int v14; // ecx
  char v15; // dl
  int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // ebx
  unsigned int v19; // eax
  char v21[4]; // [esp+10h] [ebp-Ch] BYREF
  _RTL_BALANCED_NODE *v22; // [esp+14h] [ebp-8h]
  int v23; // [esp+18h] [ebp-4h]

  while ( 1 )
  {
    Left_high = HIBYTE(a2[1].Left);
    v8 = 0;
    v9 = (int)((int)a2 - ((unsigned int)a2 & *(_DWORD *)a1)) >> 4;
    v23 = (unsigned __int16)~((unsigned int)a2[1].Children[0] >> 8);
    if ( Left_high + v9 < 0x100 )
    {
      Left_high = (int)a2 + 16 * Left_high;
      v8 = (*(_BYTE *)(Left_high + 12) & 1) == 0 ? Left_high : 0;
    }
    if ( v9 > *(unsigned __int8 *)(a1 + 6) )
    {
      Left_high = (int)&a2[-2].8;
      if ( (*(_BYTE *)&a2[-1].0 & 2) == 0 )
        Left_high += -16 * *(unsigned __int8 *)(Left_high + 15);
      v10 = (*(_BYTE *)(Left_high + 12) & 1) == 0 ? (_RTL_BALANCED_NODE *)Left_high : 0;
      v22 = v10;
      if ( v10 )
      {
        RtlpHpSegFreeRangeRemove(a1, v10);
        v11 = v22;
        v12 = v23;
        HIBYTE(v22[1].Left) += HIBYTE(a2[1].Left);
        v23 = (unsigned __int16)~((unsigned int)v11[1].Children[0] >> 8) + v12;
        v11[1].Children[0] = (_RTL_BALANCED_NODE *)((int)v11[1].Children[0] ^ ((int)v11[1].Children[0] ^ (~v23 << 8)) & 0xFFFF00);
        LOBYTE(a2[1].Children[0]) &= -(HIBYTE(a2[1].Left) > 1u) - 3;
        a2 = v11;
        Left_high = HIBYTE(v11[1].Left) - 1;
        *((_BYTE *)&v11[1].Left + 16 * Left_high + 3) = Left_high;
      }
    }
    LOBYTE(a2[1].Children[0]) |= 0x11u;
    if ( v8 )
    {
      RtlpHpSegFreeRangeRemove(a1, (_RTL_BALANCED_NODE *)v8);
      v13 = HIBYTE(a2[1].Left);
      if ( v13 != 1 )
      {
        *((_BYTE *)a2 + 16 * v13 - 4) &= ~1u;
        v13 = HIBYTE(a2[1].Left);
      }
      v14 = v23;
      HIBYTE(a2[1].Left) = v13 + *(_BYTE *)(v8 + 15);
      v23 = (unsigned __int16)~(*(_DWORD *)(v8 + 12) >> 8) + v14;
      a2[1].Children[0] = (_RTL_BALANCED_NODE *)((int)a2[1].Children[0] ^ ((int)a2[1].Children[0] ^ (~v23 << 8)) & 0xFFFF00);
      *(_BYTE *)(v8 + 12) &= ~2u;
      v15 = HIBYTE(a2[1].Left) - 1;
      Left_high = 16 * (HIBYTE(a2[1].Left) - 1);
      *((_BYTE *)a2[1].Children + Left_high) |= 1u;
      *((_BYTE *)&a2[1].Left + Left_high + 3) = v15;
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
      Left_high = v23;
      v19 = v23 + *(_DWORD *)(a1 + *(__int16 *)(a1 + 18) + 8) + *(_DWORD *)(v16 + a1 + 12);
      v22 = (_RTL_BALANCED_NODE *)v19;
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
    RtlpHpLargeLockRelease((_RTL_SRWLOCK *)a1, a3, Left_high);
    RtlpHpSegPageRangeCommit(0, -(HIBYTE(a2[1].Left) << *(_BYTE *)(a1 + 5)), 0, v21);
    *a5 = RtlpHpSegLockAcquire((_RTL_SRWLOCK *)a1, a3);
    LOBYTE(a2[1].Children[0]) &= ~0x10u;
  }
  LOBYTE(a2->Children[4 * HIBYTE(a2[1].Left) - 1]) &= ~1u;
  LOBYTE(a2[1].Children[0]) &= 0xEEu;
  return a2;
}
