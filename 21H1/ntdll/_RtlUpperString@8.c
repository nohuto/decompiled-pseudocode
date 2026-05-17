/*
 * XREFs of _RtlUpperString@8 @ 0x4B34E1F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUpperChar@4 @ 0x4B2E0B70 (_RtlUpperChar@4.c)
 */

char __stdcall RtlUpperString(int a1, unsigned __int16 *a2)
{
  char *v2; // ebx
  int v3; // eax
  int v4; // esi
  _BYTE *v5; // edi

  v2 = (char *)*((_DWORD *)a2 + 1);
  v3 = *a2;
  v4 = v3;
  v5 = *(_BYTE **)(a1 + 4);
  if ( (unsigned __int16)v3 > *(_WORD *)(a1 + 2) )
    v4 = *(unsigned __int16 *)(a1 + 2);
  for ( *(_WORD *)a1 = v4; v4; --v4 )
  {
    LOBYTE(v3) = RtlUpperChar(*v2);
    *v5++ = v3;
    ++v2;
  }
  return v3;
}
