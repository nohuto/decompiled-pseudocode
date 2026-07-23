/*
 * XREFs of _RtlpCoalesceHeap@4 @ 0x4B35776F
 * Callers:
 *     _RtlpExtendHeap@8 @ 0x4B2C0405 (_RtlpExtendHeap@8.c)
 *     _RtlCompactHeap@8 @ 0x4B3567C0 (_RtlCompactHeap@8.c)
 * Callees:
 *     _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2 (_RtlpDeCommitFreeBlock@16.c)
 *     @RtlpCommitBlock@8 @ 0x4B2AF586 (@RtlpCommitBlock@8.c)
 *     _RtlpHeapRemoveListEntry@24 @ 0x4B2C032A (_RtlpHeapRemoveListEntry@24.c)
 *     _RtlpInsertFreeBlock@12 @ 0x4B2C0AD0 (_RtlpInsertFreeBlock@12.c)
 *     _RtlpCoalesceFreeBlocks@16 @ 0x4B2C1E63 (_RtlpCoalesceFreeBlocks@16.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

unsigned __int16 *__thiscall RtlpCoalesceHeap(_DWORD *BaseAddress)
{
  unsigned __int16 *v2; // ebx
  int *v3; // edi
  int *v4; // ecx
  unsigned __int16 *v5; // edi
  bool v6; // zf
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int *v10; // ecx
  _DWORD *v11; // edx
  unsigned int v12; // eax
  int v13; // eax
  unsigned __int16 *v14; // ecx
  int v16; // [esp+10h] [ebp-10h]
  int *v17; // [esp+14h] [ebp-Ch]
  int v18; // [esp+18h] [ebp-8h] BYREF
  int *v19; // [esp+1Ch] [ebp-4h]

  v2 = 0;
  v3 = BaseAddress + 48;
  v4 = (int *)BaseAddress[49];
  v19 = v4;
  if ( v3 == v4 )
    return v2;
  do
  {
    v5 = (unsigned __int16 *)(v4 - 2);
    v17 = v4;
    if ( BaseAddress[19] )
    {
      *(_DWORD *)v5 ^= BaseAddress[20];
      if ( *((_BYTE *)v5 + 3) != (*(_BYTE *)v5 ^ (unsigned __int8)(*((_BYTE *)v5 + 1) ^ *((_BYTE *)v5 + 2))) )
      {
        RtlpAnalyzeHeapFailure(v4);
        v4 = v19;
      }
    }
    v6 = (v5[1] & 8) == 0;
    v7 = *v5;
    v8 = *v4;
    v19 = (int *)v8;
    v16 = v7;
    v18 = v7;
    if ( !v6 )
    {
      v18 = *((_DWORD *)v5 + 3);
      v9 = *(_DWORD *)(v8 + 4);
      if ( *(_DWORD *)v18 == v9 && (v10 = v19, *(int **)v18 == v17) )
      {
        BaseAddress[29] -= v7;
        v11 = (_DWORD *)BaseAddress[45];
        if ( v11 )
        {
          while ( 1 )
          {
            if ( (unsigned int)*v5 < v11[1] )
            {
              v12 = *v5;
              goto LABEL_14;
            }
            if ( !*v11 )
              break;
            v11 = (_DWORD *)*v11;
          }
          v12 = v11[1] - 1;
LABEL_14:
          RtlpHeapRemoveListEntry((int)BaseAddress, v11, 1, v17, v12, *v5);
          v10 = v19;
        }
        v13 = v18;
        *(_DWORD *)v18 = v10;
        v10[1] = v13;
        if ( (v5[1] & 8) != 0 )
          RtlpCommitBlock(BaseAddress, (int)v5);
        RtlpDeCommitFreeBlock(BaseAddress, (int)v5, *v5, 1);
      }
      else
      {
        RtlpLogHeapFailure(v17, v9, *(_DWORD *)v18, 0);
      }
      goto LABEL_26;
    }
    v14 = RtlpCoalesceFreeBlocks(BaseAddress, v5, &v18, 1);
    if ( v18 != v16 )
    {
      if ( v14 == v5 || *v14 >= 0x200u && *((_WORD *)BaseAddress + 42) == v14[2] )
        RtlpDeCommitFreeBlock(BaseAddress, (int)v14, v18, 1);
      else
        RtlpInsertFreeBlock((int)BaseAddress, v14, v18);
LABEL_26:
      v4 = (int *)BaseAddress[49];
      v19 = v4;
      continue;
    }
    if ( !v2 || *v2 < *v14 )
      v2 = v14;
    if ( BaseAddress[19] )
    {
      *((_BYTE *)v14 + 3) = *(_BYTE *)v14 ^ *((_BYTE *)v14 + 1) ^ *((_BYTE *)v14 + 2);
      *(_DWORD *)v14 ^= BaseAddress[20];
    }
    v4 = v19;
  }
  while ( BaseAddress + 48 != v4 );
  if ( v2 )
  {
    if ( BaseAddress[19] )
    {
      *(_DWORD *)v2 ^= BaseAddress[20];
      LOBYTE(v4) = *(_BYTE *)v2 ^ *((_BYTE *)v2 + 1) ^ *((_BYTE *)v2 + 2);
      if ( *((_BYTE *)v2 + 3) != (_BYTE)v4 )
        RtlpAnalyzeHeapFailure(v4);
    }
  }
  return v2;
}
