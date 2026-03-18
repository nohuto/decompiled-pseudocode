/*
 * XREFs of ?bLoadIncr@PFFOBJ@@QAEHK@Z @ 0xDDBFA
 * Callers:
 *     ?chpfeIncrPFF@PFTOBJ@@QAEKPAVPFF@@PAHKPAU_EUDCLOAD@@@Z @ 0xDDB5C (-chpfeIncrPFF@PFTOBJ@@QAEKPAVPFF@@PAHKPAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall PFFOBJ::bLoadIncr(PFFOBJ *this, char a2)
{
  int v3; // esi
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // esi
  int v12; // eax

  v3 = *(_DWORD *)this;
  v4 = 4 * ((a2 & 0x20) != 0) + 36;
  v5 = *(_DWORD *)(v4 + *(_DWORD *)this);
  if ( v5 == -1 )
    return 0;
  if ( (a2 & 0x40) == 0 )
  {
    v6 = *(_DWORD *)(v3 + 32);
    if ( (v6 & 0x80u) != 0 )
      *(_DWORD *)(v3 + 32) = v6 & 0xFFFFFF7F;
    else
      *(_DWORD *)(v4 + v3) = v5 + 1;
    v7 = *(_DWORD *)(*(_DWORD *)this + 32);
    if ( (v7 & 1) != 0 )
    {
      v9 = 0;
      *(_DWORD *)(*(_DWORD *)this + 32) = v7 & 0xFFFFFFFE;
      v10 = *(_DWORD *)this;
      if ( *(_DWORD *)(*(_DWORD *)this + 124) )
      {
        v11 = 132;
        do
        {
          v12 = *(_DWORD *)(v11 + v10);
          if ( v12 )
          {
            *(_DWORD *)(v12 + 8) &= ~2u;
            v10 = *(_DWORD *)this;
          }
          ++v9;
          v11 += 4;
        }
        while ( v9 < *(_DWORD *)(v10 + 124) );
      }
    }
  }
  return 1;
}
