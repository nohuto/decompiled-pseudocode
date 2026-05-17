/*
 * XREFs of _ComputeNameLength@4 @ 0x4B3450EB
 * Callers:
 *     _PfxFindPrefix@8 @ 0x4B345160 (_PfxFindPrefix@8.c)
 *     _PfxInsertPrefix@12 @ 0x4B345220 (_PfxInsertPrefix@12.c)
 * Callees:
 *     <none>
 */

int __thiscall ComputeNameLength(unsigned __int16 *this)
{
  unsigned int v2; // eax
  int v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // edi
  int v6; // esi
  unsigned __int8 v7; // bl
  int v8; // eax
  int v9; // esi

  v2 = 0;
  v3 = 1;
  v4 = *this - 1;
  if ( NlsMbCodePageTag )
  {
    v5 = 0;
    if ( *this != 1 )
    {
      v6 = *((_DWORD *)this + 1);
      do
      {
        v7 = *(_BYTE *)(v6 + v5);
        if ( NlsLeadByteInfoTable[v7] )
        {
          v8 = 2;
        }
        else
        {
          if ( v7 == 92 )
            ++v3;
          v8 = 1;
        }
        v5 += v8;
      }
      while ( v5 < v4 );
    }
  }
  else if ( v4 )
  {
    v9 = *((_DWORD *)this + 1);
    do
    {
      if ( *(_BYTE *)(v9 + v2) == 92 )
        ++v3;
      ++v2;
    }
    while ( v2 < v4 );
  }
  return v3;
}
