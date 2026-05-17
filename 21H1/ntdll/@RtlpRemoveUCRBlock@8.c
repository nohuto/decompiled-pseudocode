/*
 * XREFs of @RtlpRemoveUCRBlock@8 @ 0x4B2A9E29
 * Callers:
 *     _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2 (_RtlpDeCommitFreeBlock@16.c)
 * Callees:
 *     _RtlpHeapRemoveListEntry@24 @ 0x4B2C032A (_RtlpHeapRemoveListEntry@24.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

_DWORD *__fastcall RtlpRemoveUCRBlock(int a1, _DWORD *a2)
{
  _DWORD *result; // eax
  int v5; // edx
  _DWORD *v6; // edi
  int v7; // ecx
  unsigned int v8; // ecx
  _DWORD *v9; // edx
  _DWORD *v10; // ecx
  int v11; // edx
  unsigned int v12; // eax

  result = a2 + 2;
  v5 = a2[2];
  v6 = (_DWORD *)result[1];
  v7 = *(_DWORD *)(v5 + 4);
  if ( *v6 == v7 && (_DWORD *)*v6 == result )
  {
    *v6 = v5;
    *(_DWORD *)(v5 + 4) = v6;
  }
  else
  {
    result = (_DWORD *)RtlpLogHeapFailure(result, v7, *v6, 0);
  }
  v8 = a2[5];
  if ( v8 )
  {
    v9 = *(_DWORD **)(a1 + 184);
    if ( v9 )
    {
      v12 = v8 >> 12;
      while ( v12 >= v9[1] )
      {
        if ( !*v9 )
        {
          v12 = v9[1] - 1;
          break;
        }
        v9 = (_DWORD *)*v9;
      }
      RtlpHeapRemoveListEntry(0, a2, v12, a2[5]);
    }
    result = (_DWORD *)*a2;
    v10 = (_DWORD *)a2[1];
    v11 = *(_DWORD *)(*a2 + 4);
    if ( *v10 == v11 && (_DWORD *)*v10 == a2 )
    {
      *v10 = result;
      result[1] = v10;
    }
    else
    {
      return (_DWORD *)RtlpLogHeapFailure(a2, v11, *v10, 0);
    }
  }
  return result;
}
