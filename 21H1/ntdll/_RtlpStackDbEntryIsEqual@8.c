/*
 * XREFs of _RtlpStackDbEntryIsEqual@8 @ 0x4B38AA48
 * Callers:
 *     _RtlpStackDbStackComparitor@8 @ 0x4B38B0F2 (_RtlpStackDbStackComparitor@8.c)
 * Callees:
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

BOOL __fastcall RtlpStackDbEntryIsEqual(int a1, _DWORD *a2)
{
  unsigned int v2; // edi
  char *v4; // ebx
  unsigned int v5; // esi
  int v6; // edi
  unsigned int v7; // [esp+4h] [ebp-4h]

  v2 = *(unsigned __int8 *)(a1 + 11);
  if ( v2 != *a2 )
    return 0;
  v4 = (char *)a2[1];
  v5 = a1 + 12;
  v7 = a1 + 4 * ((v2 >> 3) + 3);
  if ( a1 + 12 < v7 )
  {
    while ( !memcmp((const void *)(*(_DWORD *)v5 + 12), v4, 0x20u) )
    {
      v5 += 4;
      v4 += 32;
      if ( v5 >= v7 )
        goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  v6 = v2 & 7;
  return !v6 || !memcmp((const void *)(*(_DWORD *)v5 + 12), v4, 4 * v6);
}
