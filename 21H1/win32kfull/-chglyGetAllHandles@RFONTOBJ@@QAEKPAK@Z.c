/*
 * XREFs of ?chglyGetAllHandles@RFONTOBJ@@QAEKPAK@Z @ 0x22ED9E
 * Callers:
 *     _FONTOBJ_cGetAllGlyphHandles@8 @ 0x1F34D6 (_FONTOBJ_cGetAllGlyphHandles@8.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall RFONTOBJ::chglyGetAllHandles(RFONTOBJ *this, unsigned int *a2)
{
  int v2; // ecx
  int v3; // eax
  unsigned int result; // eax
  unsigned int *v5; // ecx
  unsigned int i; // edx
  int v7; // ecx
  unsigned int *v8; // esi
  unsigned int v9; // ebx
  unsigned __int16 *v10; // edx
  __int16 v11; // ax
  unsigned int v12; // edi

  v2 = *(_DWORD *)this;
  v3 = *(_DWORD *)(*(_DWORD *)(v2 + 80) + 20);
  if ( *(_DWORD *)(v3 + 4) > 8u && (result = *(_DWORD *)(v3 + 192)) != 0 )
  {
    v5 = a2;
    if ( a2 )
    {
      for ( i = 0; i < result; ++i )
        *v5++ = i;
    }
  }
  else
  {
    v7 = *(_DWORD *)(v2 + 532);
    v8 = a2;
    if ( a2 )
    {
      v9 = 0;
      if ( *(_DWORD *)(v7 + 12) )
      {
        v10 = (unsigned __int16 *)(v7 + 18);
        do
        {
          v11 = *v10;
          v12 = 0;
          if ( *(_DWORD *)(v10 + 1) )
          {
            if ( v11 )
            {
              do
                *v8++ = *(_DWORD *)(*(_DWORD *)(v10 + 1) + 4 * v12++);
              while ( v12 < *v10 );
            }
          }
          else if ( v11 )
          {
            do
            {
              *v8++ = v12 + *(v10 - 1);
              ++v12;
            }
            while ( v12 < *v10 );
          }
          ++v9;
          v10 += 4;
        }
        while ( v9 < *(_DWORD *)(v7 + 12) );
      }
    }
    return *(_DWORD *)(v7 + 8);
  }
  return result;
}
