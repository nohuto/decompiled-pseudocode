/*
 * XREFs of _RtlpHpLfhOwnerMoveSubsegment@12 @ 0x4B3769A2
 * Callers:
 *     _RtlpHpLfhBucketAddSubsegment@16 @ 0x4B375FDC (_RtlpHpLfhBucketAddSubsegment@16.c)
 *     _RtlpHpLfhBucketGetSubsegment@8 @ 0x4B3760FA (_RtlpHpLfhBucketGetSubsegment@8.c)
 *     _RtlpHpLfhSlotAddSubsegment@8 @ 0x4B376A81 (_RtlpHpLfhSlotAddSubsegment@8.c)
 *     _RtlpHpLfhSlotReserveBlock@16 @ 0x4B376CD6 (_RtlpHpLfhSlotReserveBlock@16.c)
 *     _RtlpHpLfhSubsegmentFreeBlock@16 @ 0x4B377416 (_RtlpHpLfhSubsegmentFreeBlock@16.c)
 * Callees:
 *     <none>
 */

int *__fastcall RtlpHpLfhOwnerMoveSubsegment(_DWORD *a1, int *a2, int a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ebx
  _DWORD *v5; // edi
  int **v6; // eax
  _DWORD *v7; // ecx
  int *v8; // ebx
  int **v9; // esi
  int **v10; // edi
  int *v11; // esi

  v3 = a1;
  if ( *((_BYTE *)a2 + 22) )
  {
    if ( *((_BYTE *)a2 + 22) == 1 )
    {
      v4 = a1 + 5;
    }
    else
    {
      if ( *((_BYTE *)a2 + 22) != 2 )
        return a2;
      v4 = 0;
    }
    v5 = 0;
  }
  else
  {
    v4 = a1 + 3;
    v5 = a1 + 1;
  }
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v6 = (int **)(a1 + 5);
    }
    else
    {
      v6 = (int **)(a3 - 2);
      if ( a3 != 2 )
        return a2;
    }
    v7 = 0;
  }
  else
  {
    v6 = (int **)(a1 + 3);
    v7 = a1 + 1;
  }
  if ( v4 )
  {
    v8 = (int *)*a2;
    if ( *(int **)(*a2 + 4) != a2 )
      goto LABEL_33;
    v9 = (int **)a2[1];
    if ( *v9 != a2 )
      goto LABEL_33;
    *v9 = v8;
    v8[1] = (int)v9;
    v3 = a1;
    if ( v5 )
      --*v5;
  }
  *((_BYTE *)a2 + 22) = a3;
  if ( v6 )
  {
    v10 = (int **)v6[1];
    if ( *v10 != (int *)v6 )
      goto LABEL_33;
    *a2 = (int)v6;
    a2[1] = (int)v10;
    *v10 = a2;
    v6[1] = a2;
    if ( v7 )
      ++*v7;
    a2 = 0;
  }
  if ( (*(_BYTE *)v3 & 1) == 0 && v3[1] > 8u )
  {
    a2 = *v6;
    if ( (int **)(*v6)[1] == v6 )
    {
      v11 = (int *)*a2;
      if ( *(int **)(*a2 + 4) == a2 )
      {
        *v6 = v11;
        v11[1] = (int)v6;
        --*v7;
        *((_BYTE *)a2 + 22) = 2;
        goto LABEL_29;
      }
    }
LABEL_33:
    __fastfail(3u);
  }
LABEL_29:
  if ( a2 && *((_BYTE *)a2 + 22) == 2 )
    a2[2] = 0;
  return a2;
}
