/*
 * XREFs of _RtlpStackDbEntryIsEqual@8 @ 0x4B38AA48
 * Callers:
 *     _RtlpStackDbStackComparitor@8 @ 0x4B38B0F2 (_RtlpStackDbStackComparitor@8.c)
 * Callees:
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

int __usercall RtlpStackDbEntryIsEqual@<eax>(_DWORD *a1@<edx>, int a2@<ecx>, int a3@<esi>)
{
  unsigned int v3; // edi
  char *v5; // ebx
  unsigned int v6; // esi
  int v7; // edi
  size_t v8; // [esp-Ch] [ebp-14h]
  unsigned int v9; // [esp+4h] [ebp-4h]

  v3 = *(unsigned __int8 *)(a2 + 11);
  if ( v3 != *a1 )
    return 0;
  v5 = (char *)a1[1];
  HIDWORD(v8) = a3;
  v6 = a2 + 12;
  v9 = a2 + 4 * ((v3 >> 3) + 3);
  if ( a2 + 12 < v9 )
  {
    do
    {
      LODWORD(v8) = 32;
      if ( memcmp((const void *)(*(_DWORD *)v6 + 12), v5, v8) )
        return 0;
      v6 += 4;
      v5 += 32;
    }
    while ( v6 < v9 );
  }
  v7 = v3 & 7;
  if ( v7 )
  {
    LODWORD(v8) = 4 * v7;
    if ( memcmp((const void *)(*(_DWORD *)v6 + 12), v5, v8) )
      return 0;
  }
  return 1;
}
