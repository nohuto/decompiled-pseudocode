/*
 * XREFs of _RECTFromSIZERECT@8 @ 0x9C8EE
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxCheckFullScreen@8 @ 0x71BE6 (_xxxCheckFullScreen@8.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YGXPAUtagWND@@PAUtagSIZERECT@@@Z @ 0x13F619 (-ExtendArrangedRectangleByFrameMargin@@YGXPAUtagWND@@PAUtagSIZERECT@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall RECTFromSIZERECT(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // esi
  unsigned int v3; // esi
  int result; // eax

  *a1 = *a2;
  a1[1] = a2[1];
  v2 = a2[2] + *a2;
  a1[2] = v2;
  if ( v2 >> 31 != *a2 >> 31 && v2 >> 31 != a2[2] >> 31 )
    a1[2] = ((v2 & 0x80000000) == 0) + 0x7FFFFFFF;
  v3 = a2[3] + a2[1];
  a1[3] = v3;
  result = a2[1] >> 31;
  if ( v3 >> 31 != result )
  {
    result = a2[3] >> 31;
    if ( v3 >> 31 != result )
    {
      result = ((v3 & 0x80000000) == 0) + 0x7FFFFFFF;
      a1[3] = result;
    }
  }
  return result;
}
