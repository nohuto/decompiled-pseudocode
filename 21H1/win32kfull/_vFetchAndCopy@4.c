/*
 * XREFs of _vFetchAndCopy@4 @ 0xEDBC0
 * Callers:
 *     ?vPatCpyRect8@@YGXPAU_PATBLTFRAME@@@Z @ 0xA81C8 (-vPatCpyRect8@@YGXPAU_PATBLTFRAME@@@Z.c)
 *     ?vPatCpyRect8_8x8@@YGXPAU_PATBLTFRAME@@H@Z @ 0x22D79E (-vPatCpyRect8_8x8@@YGXPAU_PATBLTFRAME@@H@Z.c)
 *     ?vPatCpyRow8@@YGXPAU_PATBLTFRAME@@JH@Z @ 0x22DC80 (-vPatCpyRow8@@YGXPAU_PATBLTFRAME@@JH@Z.c)
 *     ?vPatCpyRow8_8x8@@YGXPAU_PATBLTFRAME@@JH@Z @ 0x22DE5B (-vPatCpyRow8_8x8@@YGXPAU_PATBLTFRAME@@JH@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall vFetchAndCopy(int a1)
{
  _DWORD *v1; // edi
  char *v2; // esi
  int v3; // ebx
  int v4; // edx
  int result; // eax
  int v6; // ecx
  bool v7; // cc

  v1 = *(_DWORD **)a1;
  v2 = *(char **)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  if ( v3 )
  {
    while ( 1 )
    {
      result = *(_DWORD *)&v2[v3];
      *v1++ = result;
      if ( !--v4 )
        break;
      v3 += 4;
      if ( v3 == *(_DWORD *)(a1 + 12) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    while ( 1 )
    {
      v6 = *(_DWORD *)(a1 + 20);
      v7 = v4 < v6;
      v4 -= v6;
      if ( v7 )
        break;
      qmemcpy(v1, v2, 4 * v6);
      v1 += v6;
      v2 = *(char **)(a1 + 4);
    }
    qmemcpy(v1, v2, 4 * (v6 + v4));
  }
  return result;
}
