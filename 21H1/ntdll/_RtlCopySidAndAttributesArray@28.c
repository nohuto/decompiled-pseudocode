/*
 * XREFs of _RtlCopySidAndAttributesArray@28 @ 0x4B346110
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCopySid@12 @ 0x4B2D6820 (_RtlCopySid@12.c)
 */

int __stdcall RtlCopySidAndAttributesArray(
        unsigned int a1,
        int a2,
        unsigned int a3,
        int a4,
        char *a5,
        _DWORD *a6,
        unsigned int *a7)
{
  unsigned int v9; // edi
  _DWORD *v10; // ecx
  unsigned int v11; // edx
  unsigned int v13; // [esp+Ch] [ebp-Ch]
  int v14; // [esp+14h] [ebp-4h]

  v9 = 0;
  if ( a1 )
  {
    v10 = (_DWORD *)(a4 + 4);
    v14 = a4 + 4;
    while ( 1 )
    {
      v11 = 4 * *(unsigned __int8 *)(*(_DWORD *)(a2 + 8 * v9) + 1) + 8;
      v13 = v11;
      if ( v11 > a3 )
        return -1073741789;
      a3 -= v11;
      *(v10 - 1) = a5;
      *v10 = *(_DWORD *)((char *)v10 + a2 - a4);
      RtlCopySid(v11, a5, *(unsigned __int8 **)(a2 + 8 * v9));
      a5 += v13;
      ++v9;
      v10 = (_DWORD *)(v14 + 8);
      v14 += 8;
      if ( v9 >= a1 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    *a6 = a5;
    *a7 = a3;
    return 0;
  }
}
