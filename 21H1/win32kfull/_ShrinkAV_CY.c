/*
 * XREFs of _ShrinkAV_CY @ 0x1C5E11
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl ShrinkAV_CY(int *a1)
{
  int v1; // ebx
  int v2; // edx
  unsigned __int16 *v3; // eax
  int v4; // edi
  int result; // eax

  v1 = *a1;
  v2 = a1[48];
  *a1 &= ~0x2000u;
  v3 = *(unsigned __int16 **)(v2 + 168);
  v4 = *v3;
  result = (int)(v3 + 1);
  for ( *(_DWORD *)(v2 + 168) = result; v4; --v4 )
  {
    ((void (__cdecl *)(int *))a1[37])(a1);
    result = a1[41];
    a1[39] += result;
    *a1 = v1;
  }
  return result;
}
