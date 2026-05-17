/*
 * XREFs of _RtlpTraceDatabaseInternalFind@16 @ 0x4B36A614
 * Callers:
 *     _RtlTraceDatabaseFind@16 @ 0x4B36A3A0 (_RtlTraceDatabaseFind@16.c)
 *     _RtlpTraceDatabaseInternalAdd@16 @ 0x4B36A4C6 (_RtlpTraceDatabaseInternalAdd@16.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

char __fastcall RtlpTraceDatabaseInternalFind(int a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v6; // eax
  _DWORD *i; // ecx
  unsigned int v8; // edx
  _DWORD *v9; // esi

  v6 = (*(int (__thiscall **)(_DWORD, unsigned int, _DWORD *))(a1 + 60))(*(_DWORD *)(a1 + 60), a2, a3);
  ++*(_DWORD *)(a1 + 4 * (v6 & 0xF) + 72);
  for ( i = *(_DWORD **)(*(_DWORD *)(a1 + 56) + 4 * (v6 % *(_DWORD *)(a1 + 52))); ; i = (_DWORD *)i[6] )
  {
    if ( !i )
    {
      if ( a4 )
        *a4 = 0;
      return 0;
    }
    if ( a2 == i[2] )
    {
      v8 = 0;
      if ( a2 )
      {
        v9 = a3;
        do
        {
          if ( *(_DWORD *)((char *)v9 + i[7] - (_DWORD)a3) != *v9 )
            break;
          ++v8;
          ++v9;
        }
        while ( v8 < a2 );
      }
      if ( v8 == a2 )
        break;
    }
  }
  if ( a4 )
    *a4 = i;
  return 1;
}
