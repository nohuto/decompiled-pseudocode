/*
 * XREFs of _RtlpGetExtraStuffPointerUnsafe@8 @ 0x4B357FC7
 * Callers:
 *     _RtlpWalkHeap@12 @ 0x4B359AF8 (_RtlpWalkHeap@12.c)
 * Callees:
 *     <none>
 */

int *__fastcall RtlpGetExtraStuffPointerUnsafe(int a1, int *a2)
{
  int v3; // eax

  if ( *((_BYTE *)a2 + 7) == 4 )
    return a2 - 4;
  if ( *(_DWORD *)(a1 + 76) )
  {
    v3 = *a2;
    if ( (*a2 & *(_DWORD *)(a1 + 76)) != 0 )
      v3 ^= *(_DWORD *)(a1 + 80);
  }
  else
  {
    LOWORD(v3) = *(_WORD *)a2;
  }
  return &a2[2 * (unsigned __int16)v3 - 2];
}
