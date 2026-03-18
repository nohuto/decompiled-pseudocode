/*
 * XREFs of _ExpandMask_CY @ 0x1C4810
 * Callers:
 *     <none>
 * Callees:
 *     _BltMask_CY @ 0x1C432B (_BltMask_CY.c)
 */

int __cdecl ExpandMask_CY(int a1)
{
  int v1; // edx
  unsigned __int16 *v3; // ecx
  int result; // eax

  v1 = *(_DWORD *)(a1 + 192);
  if ( (*(_DWORD *)(v1 + 128))-- == 1 )
  {
    v3 = *(unsigned __int16 **)(v1 + 120);
    *(_DWORD *)(v1 + 128) = *v3;
    *(_DWORD *)(v1 + 120) = v3 + 1;
    return BltMask_CY(a1);
  }
  return result;
}
