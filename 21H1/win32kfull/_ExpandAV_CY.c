/*
 * XREFs of _ExpandAV_CY @ 0x1C4738
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl ExpandAV_CY(int a1)
{
  int v1; // edx
  unsigned __int16 *v3; // ecx
  int result; // eax

  v1 = *(_DWORD *)(a1 + 192);
  if ( (*(_DWORD *)(v1 + 176))-- == 1 )
  {
    v3 = *(unsigned __int16 **)(v1 + 168);
    *(_DWORD *)(v1 + 176) = *v3;
    *(_DWORD *)(v1 + 168) = v3 + 1;
    (*(void (__cdecl **)(int))(a1 + 148))(a1);
    result = *(_DWORD *)(a1 + 164);
    *(_DWORD *)(a1 + 156) += result;
  }
  return result;
}
