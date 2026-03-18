/*
 * XREFs of ?_GetDisambiguationArcData@Edgy@@YGKABUtagEDGY_DATA@@ABUtagARC_DATA@1@@Z @ 0x16E7CB
 * Callers:
 *     ?_GetArcData@Edgy@@YG?AUtagARC_DATA@1@AAUtagEDGY_DATA@@QAX@Z @ 0x16E34D (-_GetArcData@Edgy@@YG-AUtagARC_DATA@1@AAUtagEDGY_DATA@@QAX@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall Edgy::_GetDisambiguationArcData(_DWORD *a1, _DWORD *a2)
{
  int v2; // edi
  int v4; // ebx
  int v5; // esi
  int v6; // edx
  int v7; // esi
  int v8; // ecx
  int v9; // [esp+Ch] [ebp-4h]

  v2 = a1[48];
  if ( (unsigned int)(a2[7] - a1[47]) > *(_DWORD *)(v2 + 20) )
    return 0;
  v4 = a2[5] - a1[45];
  v9 = a2[6] - a1[46];
  v5 = 1024;
  if ( v4 * v4 + v9 * v9 > (unsigned int)(*(_DWORD *)(v2 + 8) * *(_DWORD *)(v2 + 8)) )
  {
    v6 = 0;
    v7 = 0;
    if ( a1[49] )
    {
      if ( a1[49] == 1 )
      {
        v6 = v9;
        goto LABEL_9;
      }
      if ( a1[49] != 2 )
      {
        if ( a1[49] != 3 )
        {
LABEL_14:
          if ( v6 * *(__int16 *)(v2 + 12) + v7 * *(__int16 *)(v2 + 14) < 0 )
            return 1536;
          v8 = v7 * *(__int16 *)(v2 + 18);
          v5 = 1792;
          if ( v8 - v6 * *(__int16 *)(v2 + 16) > 0 )
            return 1536;
          return v5;
        }
        v6 = -v9;
LABEL_9:
        v7 = v4;
        goto LABEL_14;
      }
      v6 = -v4;
    }
    else
    {
      v6 = v4;
    }
    v7 = v9;
    goto LABEL_14;
  }
  return v5;
}
