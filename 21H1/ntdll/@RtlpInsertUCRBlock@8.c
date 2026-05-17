/*
 * XREFs of @RtlpInsertUCRBlock@8 @ 0x4B2AB9B6
 * Callers:
 *     _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2 (_RtlpDeCommitFreeBlock@16.c)
 * Callees:
 *     _RtlpHeapAddListEntry@24 @ 0x4B2B1B1D (_RtlpHeapAddListEntry@24.c)
 *     @RtlpFindUCREntry@8 @ 0x4B2C0A8E (@RtlpFindUCREntry@8.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

int __fastcall RtlpInsertUCRBlock(unsigned int a1, int *a2)
{
  int UCREntry; // eax
  int **v5; // ecx
  _DWORD *v6; // edx
  unsigned __int8 v7; // al
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  _DWORD *v10; // esi
  int result; // eax
  unsigned int v12; // eax

  if ( a2[5] )
  {
    UCREntry = RtlpFindUCREntry();
    v5 = *(int ***)(UCREntry + 4);
    if ( *v5 == (int *)UCREntry )
    {
      *a2 = UCREntry;
      a2[1] = (int)v5;
      *v5 = a2;
      *(_DWORD *)(UCREntry + 4) = a2;
    }
    else
    {
      RtlpLogHeapFailure(UCREntry, 0, *v5, 0);
    }
    v6 = *(_DWORD **)(a1 + 184);
    if ( v6 )
    {
      v12 = (unsigned int)a2[5] >> 12;
      while ( v12 >= v6[1] )
      {
        if ( !*v6 )
        {
          v12 = v6[1] - 1;
          break;
        }
        v6 = (_DWORD *)*v6;
      }
      RtlpHeapAddListEntry(0, a2, v12, a2[5]);
    }
  }
  v7 = *((_BYTE *)a2 - 2);
  if ( v7 )
    v8 = ((unsigned int)(a2 - 2) & 0xFFFF0000) - (v7 << 16) + 0x10000;
  else
    v8 = a1;
  v9 = v8 + 56;
  v10 = a2 + 2;
  result = *(_DWORD *)v9;
  if ( *(_DWORD *)(*(_DWORD *)v9 + 4) != v9 )
    return RtlpLogHeapFailure(v9, *(_DWORD *)(result + 4), 0, 0);
  *v10 = result;
  v10[1] = v9;
  *(_DWORD *)(result + 4) = v10;
  *(_DWORD *)v9 = v10;
  return result;
}
