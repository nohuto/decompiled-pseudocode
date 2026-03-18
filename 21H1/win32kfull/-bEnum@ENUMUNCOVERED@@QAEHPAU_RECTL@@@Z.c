/*
 * XREFs of ?bEnum@ENUMUNCOVERED@@QAEHPAU_RECTL@@@Z @ 0xA0906
 * Callers:
 *     ?vComputeUncoveredSpriteRegion@RGNOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0xA07DE (-vComputeUncoveredSpriteRegion@RGNOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall ENUMUNCOVERED::bEnum(ENUMUNCOVERED *this, struct _RECTL *a2)
{
  LONG *v3; // edi
  LONG *v4; // edx
  unsigned int v5; // ecx
  int result; // eax

  v3 = (LONG *)*((_DWORD *)this + 1);
  v4 = (LONG *)*((_DWORD *)this + 3);
  do
  {
    v5 = *((_DWORD *)this + 2);
    v4 += 3;
    if ( (unsigned int)v4 >= v5 )
    {
      if ( v3[1] >= *(_DWORD *)this )
        return 0;
      v3 = (LONG *)*((_DWORD *)this + 2);
      *((_DWORD *)this + 2) = v5 + *(_DWORD *)(v5 + 8);
      v4 = (LONG *)(v5 + 16);
    }
  }
  while ( v4[2] );
  a2->top = *v3;
  a2->bottom = v3[1];
  a2->left = *v4;
  a2->right = v4[1];
  *((_DWORD *)this + 1) = v3;
  result = 1;
  *((_DWORD *)this + 3) = v4;
  return result;
}
