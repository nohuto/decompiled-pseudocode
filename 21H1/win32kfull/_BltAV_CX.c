/*
 * XREFs of _BltAV_CX @ 0x1C4240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __cdecl BltAV_CX(_DWORD *a1)
{
  _BYTE *v1; // edx
  _BYTE *v2; // esi
  _BYTE *v3; // edi
  int v4; // ebx
  int v5; // eax
  unsigned int v6; // eax

  v1 = (_BYTE *)a1[54];
  v2 = (_BYTE *)(a1[39] + 3);
  v3 = (_BYTE *)a1[55];
  v4 = a1[56];
  if ( (*a1 & 0x2000) != 0 )
  {
    do
    {
      v5 = (unsigned __int8)*v2;
      v2 += 4;
      v6 = ((unsigned int)(unsigned __int8)*v1 + v5 + 1) >> 1;
      *v1 = v6;
      v1 += v4;
    }
    while ( v1 != v3 );
  }
  else
  {
    do
    {
      LOBYTE(v6) = *v2;
      v2 += 4;
      *v1 = v6;
      v1 += v4;
    }
    while ( v1 != v3 );
  }
  return v6;
}
