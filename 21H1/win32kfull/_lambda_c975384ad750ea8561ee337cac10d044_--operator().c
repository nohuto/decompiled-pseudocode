/*
 * XREFs of _lambda_c975384ad750ea8561ee337cac10d044_::operator() @ 0xCFD16
 * Callers:
 *     ?UmfdZombifyAllUmfdFonts@@YGXXZ @ 0xCFC12 (-UmfdZombifyAllUmfdFonts@@YGXXZ.c)
 * Callees:
 *     <none>
 */

void __stdcall lambda_c975384ad750ea8561ee337cac10d044_::operator()(_DWORD *a1)
{
  unsigned int v1; // esi
  _DWORD *v2; // edi
  _DWORD *i; // ecx
  int v4; // eax
  unsigned int v5; // ebx

  if ( a1 )
  {
    if ( a1[4] )
    {
      v1 = 0;
      if ( a1[3] )
      {
        v2 = a1 + 6;
        do
        {
          for ( i = (_DWORD *)*v2; i; i = (_DWORD *)i[1] )
          {
            v4 = i[15];
            if ( v4 )
            {
              if ( (*(_DWORD *)(v4 + 24) & 0x8000) == 0 )
              {
                v5 = 0;
                for ( *(_BYTE *)(i[14] + 8) = 1; v5 < i[5]; ++v5 )
                  *(_DWORD *)(*(_DWORD *)(i[30] + 4 * v5) + 12) = 0;
              }
            }
          }
          ++v1;
          ++v2;
        }
        while ( v1 < a1[3] );
      }
    }
  }
}
