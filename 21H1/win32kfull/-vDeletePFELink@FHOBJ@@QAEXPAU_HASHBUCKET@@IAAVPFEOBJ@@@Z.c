/*
 * XREFs of ?vDeletePFELink@FHOBJ@@QAEXPAU_HASHBUCKET@@IAAVPFEOBJ@@@Z @ 0xCE504
 * Callers:
 *     ?vDelete@FHOBJ@@QAEXAAVPFEOBJ@@@Z @ 0xCE3DA (-vDelete@FHOBJ@@QAEXAAVPFEOBJ@@@Z.c)
 * Callees:
 *     ?flFontType@PFEOBJ@@QAEKXZ @ 0x8487E (-flFontType@PFEOBJ@@QAEKXZ.c)
 */

void __thiscall FHOBJ::vDeletePFELink(FHOBJ *this, struct _HASHBUCKET *a2, unsigned int a3, struct PFEOBJ *a4)
{
  _DWORD *v5; // edx
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  struct _HASHBUCKET **v11; // edx
  struct _HASHBUCKET *i; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  struct _HASHBUCKET *v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // ecx
  _DWORD *v22; // eax

  if ( a2 )
  {
    v5 = (_DWORD *)*((_DWORD *)a2 + 1);
    if ( v5[1] == *(_DWORD *)a4 )
    {
      v6 = (_DWORD *)*v5;
      *((_DWORD *)a2 + 1) = *v5;
      if ( !v6 )
        *((_DWORD *)a2 + 2) = 0;
    }
    else
    {
      v21 = (_DWORD *)*((_DWORD *)a2 + 1);
      v5 = (_DWORD *)*v5;
      if ( !v5 )
        return;
      while ( 1 )
      {
        v22 = (_DWORD *)*v5;
        if ( v5[1] == *(_DWORD *)a4 )
          break;
        v21 = v5;
        v5 = (_DWORD *)*v5;
        if ( !v22 )
          return;
      }
      *v21 = v22;
      if ( !*v5 )
        *((_DWORD *)a2 + 2) = v21;
    }
    if ( v5 )
    {
      Win32FreePool(v5);
      if ( (PFEOBJ::flFontType(a4) & 4) != 0 )
        --*((_DWORD *)a2 + 3);
      if ( (PFEOBJ::flFontType(a4) & 1) != 0 )
        --*((_DWORD *)a2 + 4);
      v7 = *((_DWORD *)a2 + 1);
      if ( v7 )
      {
        v14 = *(_DWORD *)(*(_DWORD *)(v7 + 4) + 48);
        if ( *((_DWORD *)a2 + 8) != v14 )
        {
          *((_DWORD *)a2 + 8) = v14;
          v15 = a2;
          v16 = *((_DWORD *)a2 + 7);
          if ( v16 )
          {
            do
            {
              if ( *(_DWORD *)(v16 + 32) >= v14 )
                break;
              v15 = (struct _HASHBUCKET *)v16;
              v16 = *(_DWORD *)(v16 + 28);
            }
            while ( v16 );
            if ( v15 != a2 )
            {
              v17 = *((_DWORD *)a2 + 6);
              v18 = *((_DWORD *)a2 + 7);
              if ( v17 )
                *(_DWORD *)(v17 + 28) = v18;
              else
                *(_DWORD *)(*((_DWORD *)this + 1) + 20) = v18;
              v19 = *((_DWORD *)a2 + 7);
              if ( v19 )
                *(_DWORD *)(v19 + 24) = *((_DWORD *)a2 + 6);
              *((_DWORD *)a2 + 6) = v15;
              *((_DWORD *)a2 + 7) = *((_DWORD *)v15 + 7);
              *((_DWORD *)v15 + 7) = a2;
              v20 = *((_DWORD *)a2 + 7);
              if ( !v20 )
                v20 = *((_DWORD *)this + 1);
              *(_DWORD *)(v20 + 24) = a2;
            }
          }
        }
      }
      else
      {
        v8 = *((_DWORD *)a2 + 6);
        v9 = *((_DWORD *)a2 + 7);
        if ( v8 )
          *(_DWORD *)(v8 + 28) = v9;
        else
          *(_DWORD *)(*((_DWORD *)this + 1) + 20) = v9;
        v10 = *((_DWORD *)a2 + 7);
        if ( !v10 )
          v10 = *((_DWORD *)this + 1);
        *(_DWORD *)(v10 + 24) = *((_DWORD *)a2 + 6);
        v11 = (struct _HASHBUCKET **)(*((_DWORD *)this + 1) + 4 * (a3 + 7));
        for ( i = *v11; i != a2; i = *(struct _HASHBUCKET **)i )
          v11 = (struct _HASHBUCKET **)i;
        *v11 = *(struct _HASHBUCKET **)a2;
        --*(_DWORD *)(*((_DWORD *)this + 1) + 12);
        v13 = *((_DWORD *)this + 1);
        if ( *(_DWORD *)(v13 + 4 * a3 + 28) )
          --*(_DWORD *)(v13 + 16);
        Win32FreePool(a2);
      }
    }
  }
}
