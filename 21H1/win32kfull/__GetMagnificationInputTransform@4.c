/*
 * XREFs of __GetMagnificationInputTransform@4 @ 0x178F35
 * Callers:
 *     _MagGetLensContextInformation@28 @ 0x13CB12 (_MagGetLensContextInformation@28.c)
 * Callees:
 *     <none>
 */

int __thiscall _GetMagnificationInputTransform(_DWORD *this)
{
  int v1; // eax
  _DWORD *v2; // esi
  int result; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // esi

  v1 = *(_DWORD *)(_gptiCurrent + 248);
  v2 = *(_DWORD **)(v1 + 128);
  if ( !v2 )
    return 0;
  *this = *v2;
  v4 = v2 + 1;
  this[1] = *v4++;
  this[2] = *v4;
  this[3] = v4[1];
  v5 = (_DWORD *)(*(_DWORD *)(v1 + 128) + 16);
  result = 1;
  this[4] = *v5++;
  this[5] = *v5++;
  this[6] = *v5;
  this[7] = v5[1];
  this[8] = 0;
  return result;
}
