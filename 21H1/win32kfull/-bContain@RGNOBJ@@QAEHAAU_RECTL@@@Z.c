/*
 * XREFs of ?bContain@RGNOBJ@@QAEHAAU_RECTL@@@Z @ 0xA8338
 * Callers:
 *     ?bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z @ 0x590DC (-bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YGXPAVSPRITE@@VERECTL@@@Z @ 0x1DFD02 (-vSpAddAndCompactDirtyRect@@YGXPAVSPRITE@@VERECTL@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall RGNOBJ::bContain(RGNOBJ *this, struct _RECTL *a2)
{
  _DWORD *v2; // ecx

  v2 = *(_DWORD **)this;
  return v2[16] <= a2->left && v2[18] >= a2->right && v2[17] <= a2->top && v2[19] >= a2->bottom;
}
