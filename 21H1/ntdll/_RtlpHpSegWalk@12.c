/*
 * XREFs of _RtlpHpSegWalk@12 @ 0x4B37DAD6
 * Callers:
 *     _RtlpHpHeapWalk@12 @ 0x4B37924D (_RtlpHpHeapWalk@12.c)
 * Callees:
 *     _RtlpHpLfhSubsegmentWalk@28 @ 0x4B377B9C (_RtlpHpLfhSubsegmentWalk@28.c)
 *     _RtlpHpSegReportBusyBlock@20 @ 0x4B37D486 (_RtlpHpSegReportBusyBlock@20.c)
 *     _RtlpHpSegReportPageRange@8 @ 0x4B37D4DB (_RtlpHpSegReportPageRange@8.c)
 *     _RtlpHpSegReportSegment@12 @ 0x4B37D51F (_RtlpHpSegReportSegment@12.c)
 *     _RtlpHpSegReportUncommittedRange@12 @ 0x4B37D5B2 (_RtlpHpSegReportUncommittedRange@12.c)
 *     _RtlpHpVsSubsegmentWalk@24 @ 0x4B37FF5E (_RtlpHpVsSubsegmentWalk@24.c)
 */

int __fastcall RtlpHpSegWalk(int a1, int a2, char a3)
{
  int *v3; // ebx
  int v4; // edi
  int *v5; // eax
  int v6; // ecx
  int *v7; // edx
  int i; // esi
  int v9; // eax
  int v10; // edx
  char v11; // cl
  unsigned int v12; // edx
  unsigned __int8 v13; // ah
  unsigned int v14; // edx
  int v15; // eax
  int v16; // eax
  __int16 v17; // ax
  int v18; // eax
  int v20; // [esp-4h] [ebp-28h]
  int v21; // [esp+10h] [ebp-14h]
  int *v22; // [esp+14h] [ebp-10h]
  int v23; // [esp+18h] [ebp-Ch] BYREF
  int v24; // [esp+1Ch] [ebp-8h] BYREF
  int v25; // [esp+20h] [ebp-4h] BYREF

  v3 = (int *)a2;
  v4 = a1;
  if ( !*(_DWORD *)a2 )
  {
    v5 = (int *)(a1 + 68);
    if ( (int *)*v5 != v5 )
    {
      v20 = *v5;
      goto LABEL_4;
    }
    return -2147483622;
  }
  if ( (*(_BYTE *)(a2 + 10) & 2) == 0 )
  {
    if ( !a3 )
      return -2147483622;
    v9 = *(_DWORD *)a1;
    v10 = *(_DWORD *)a2 & *(_DWORD *)a1;
    v11 = *(_BYTE *)(a1 + 4);
    i = v10 + 16 * ((unsigned int)(*v3 - v10) >> v11);
    v22 = (int *)(*v3 & *(_DWORD *)v4);
    if ( (*v3 & 0xFFF) != 0 )
    {
      if ( (*(_BYTE *)(i + 12) & 2) != 0 )
      {
LABEL_24:
        if ( (*(_BYTE *)(i + 12) & 0xC) == 8 )
          v16 = RtlpHpLfhSubsegmentWalk(
                  *(_DWORD *)(v4 + 20),
                  (i & v9) + ((i - (i & v9)) >> 4 << v11),
                  *v3,
                  *(_DWORD *)(*(_DWORD *)(v4 + 36) + 12),
                  (unsigned int *)&v23,
                  (unsigned int *)&v24,
                  &v25);
        else
          v16 = RtlpHpVsSubsegmentWalk(*v3, &v23, &v24, &v25);
        *v3 = v16;
        if ( !v16 )
          goto LABEL_14;
        RtlpHpSegReportBusyBlock(v4, (int)v3, v23, v24, v25);
        v6 = 0;
        v17 = 0x8000;
        if ( (*(_BYTE *)(i + 12) & 0xC) != 8 )
          v17 = 0;
        *((_WORD *)v3 + 5) |= v17;
        return v6;
      }
    }
    else if ( (*(_BYTE *)(i + 12) & 2) != 0 )
    {
      goto LABEL_14;
    }
    i += -16 * *(unsigned __int8 *)(i + 15);
    v9 = *(_DWORD *)v4;
    goto LABEL_24;
  }
  v7 = *(int **)a2;
  v22 = (int *)*v3;
  if ( a3 )
  {
    for ( i = (int)&v7[4 * *(unsigned __int8 *)(a1 + 6)]; ; i += 16 * *(unsigned __int8 *)(i + 15) )
    {
      v21 = i & *(_DWORD *)v4;
      v12 = (i - v21) >> 4;
      if ( v12 >= 0x100 )
        break;
      if ( (*(_BYTE *)(i + 12) & 0x11) != 1 || (v13 = *(_BYTE *)(i + 12) & 0xC, v13 == 4) )
      {
        RtlpHpSegReportUncommittedRange(v4, (int)v3, i);
        return 0;
      }
      v14 = v21 + (v12 << *(_BYTE *)(v4 + 4));
      if ( v13 < 8u )
      {
        *v3 = v14;
        RtlpHpSegReportPageRange(v4, v3);
        return 0;
      }
      if ( v13 == 8 )
      {
        v15 = RtlpHpLfhSubsegmentWalk(
                *(_DWORD *)(v4 + 20),
                v14,
                v14,
                *(_DWORD *)(*(_DWORD *)(v4 + 36) + 12),
                (unsigned int *)&v23,
                (unsigned int *)&v24,
                &v25);
        *v3 = v15;
        if ( v15 )
        {
          RtlpHpSegReportBusyBlock(v4, (int)v3, v23, v24, v25);
          *((_WORD *)v3 + 5) |= 0x8000u;
          return 0;
        }
      }
      else
      {
        v18 = RtlpHpVsSubsegmentWalk(v14, &v23, &v24, &v25);
        *v3 = v18;
        if ( v18 )
        {
          RtlpHpSegReportBusyBlock(v4, (int)v3, v23, v24, v25);
          return 0;
        }
      }
LABEL_14:
      ;
    }
    if ( *v22 == v4 + 68 )
      return -2147483622;
    v20 = *v22;
    a1 = v4;
  }
  else
  {
    if ( *v7 == a1 + 68 )
      return -2147483622;
    v20 = *v7;
  }
  a2 = (int)v3;
LABEL_4:
  RtlpHpSegReportSegment(a1, a2, v20);
  return 0;
}
