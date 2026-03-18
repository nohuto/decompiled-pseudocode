/*
 * XREFs of ?bEqualRGB_In_Palette@@YGHVXEPALOBJ@@0@Z @ 0x9B3A0
 * Callers:
 *     ?CreateXlateObject@@YGPAVXLATE@@PAXJVXEPALOBJ@@111KKKK@Z @ 0x5D380 (-CreateXlateObject@@YGPAVXLATE@@PAXJVXEPALOBJ@@111KKKK@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall bEqualRGB_In_Palette(int a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // esi
  int v5; // ebx
  int v6; // edi
  int v7; // edx
  int v8; // eax
  _DWORD *v9; // edx

  v2 = a2[5];
  if ( *(_DWORD *)(a1 + 20) == v2 )
  {
    v3 = 256;
    if ( v2 == 256 )
    {
      if ( (a2[4] & 0x100) != 0 )
      {
        v5 = a2[13];
        if ( v5 )
        {
          v6 = 256;
          while ( 1 )
          {
            v7 = *(unsigned __int8 *)(v5 + v6-- + 3);
            if ( v7 != v6 )
              break;
            if ( !v6 )
              goto LABEL_9;
          }
        }
      }
      else
      {
LABEL_9:
        v8 = a2[19];
        v9 = (_DWORD *)(v8 + 1024);
        while ( 1 )
        {
          --v9;
          --v3;
          if ( ((*v9 ^ *(_DWORD *)((char *)v9 + *(_DWORD *)(a1 + 76) - v8)) & 0xFFFFFF) != 0 )
            break;
          if ( !v3 )
            return 1;
        }
      }
    }
  }
  return 0;
}
