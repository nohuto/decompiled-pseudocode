/*
 * XREFs of _RtlMoveMemory@12 @ 0x4B308070
 * Callers:
 *     sub_4B308064 @ 0x4B308064 (sub_4B308064.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlMoveMemory(_BYTE *a1, _BYTE *a2, unsigned int a3)
{
  unsigned int v3; // ecx
  int result; // eax
  _BYTE *v5; // esi
  _BYTE *v6; // edi

  v3 = a3;
  if ( a2 > a1 )
    goto LABEL_2;
  if ( a2 == a1 )
    return result;
  result = a1 - a2;
  if ( a3 <= a1 - a2 )
  {
LABEL_2:
    qmemcpy(a1, a2, 4 * (a3 >> 2));
    if ( (a3 & 3) != 0 )
      qmemcpy(&a1[4 * (a3 >> 2)], &a2[4 * (a3 >> 2)], a3 & 3);
  }
  else
  {
    v5 = &a2[a3 - 1];
    v6 = &a1[a3 - 1];
    while ( v3 )
    {
      *v6-- = *v5--;
      --v3;
    }
  }
  return result;
}
