/*
 * XREFs of _RtlpWalkLowFragHeapSegment@12 @ 0x4B372377
 * Callers:
 *     _RtlpWalkHeap@12 @ 0x4B359AF8 (_RtlpWalkHeap@12.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall RtlpWalkLowFragHeapSegment(int a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // ecx
  _DWORD *result; // eax

  if ( *(_BYTE *)(a1 + 234) == 2 )
    v3 = *(_DWORD *)(a1 + 228);
  else
    v3 = 0;
  *a2 = v3;
  a2[1] = 2000;
  a2[2] = -2147352576;
  a2[3] = *(_DWORD *)(v3 + 20) - v3;
  a2[4] = *(_DWORD *)(v3 + 24) - *(_DWORD *)(v3 + 20);
  a2[5] = v3;
  a2[6] = *(_DWORD *)(v3 + 24);
  result = a3;
  *a3 = 0;
  return result;
}
