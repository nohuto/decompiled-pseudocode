/*
 * XREFs of ?vGetEUDC@PFFOBJ@@QAEXPAU_EUDCLOAD@@@Z @ 0xDDC50
 * Callers:
 *     ?chpfeIncrPFF@PFTOBJ@@QAEKPAVPFF@@PAHKPAU_EUDCLOAD@@@Z @ 0xDDB5C (-chpfeIncrPFF@PFTOBJ@@QAEKPAVPFF@@PAHKPAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     ?bCheckFamilyName@PFEOBJ@@QAEHPBGHPAH@Z @ 0xDDD0C (-bCheckFamilyName@PFEOBJ@@QAEHPBGHPAH@Z.c)
 */

void __thiscall PFFOBJ::vGetEUDC(PFFOBJ *this, struct _EUDCLOAD *a2)
{
  int v4; // eax
  int v5; // edx
  int v6; // esi
  _WORD *v7; // eax
  BOOL v8; // ebx
  int *v9; // ecx
  int v10; // eax
  int v11; // eax
  int v13; // [esp+8h] [ebp-8h] BYREF
  int v14; // [esp+Ch] [ebp-4h]
  struct _EUDCLOAD *v15; // [esp+18h] [ebp+8h]

  **(_DWORD **)a2 = 0;
  *(_DWORD *)(*(_DWORD *)a2 + 4) = 0;
  v4 = *(_DWORD *)this;
  if ( !*((_DWORD *)a2 + 1) )
  {
    **(_DWORD **)a2 = *(_DWORD *)(v4 + 132);
    v11 = *(_DWORD *)this;
    v9 = *(int **)a2;
    if ( *(_DWORD *)(*(_DWORD *)this + 124) == 2 )
      v10 = *(_DWORD *)(v11 + 136);
    else
      v10 = *(_DWORD *)(v11 + 132);
    goto LABEL_13;
  }
  v15 = 0;
  if ( *(_DWORD *)(v4 + 124) )
  {
    v5 = 132;
    v14 = 132;
    do
    {
      v6 = *(_DWORD *)(v5 + v4);
      v13 = v6;
      v7 = (_WORD *)(*(_DWORD *)(v6 + 20) + *(_DWORD *)(*(_DWORD *)(v6 + 20) + 16));
      v8 = *v7 == 64;
      if ( !__wcsicmp(*((const wchar_t **)a2 + 1), &v7[v8]) )
        *(_DWORD *)(*(_DWORD *)a2 + 4 * v8) = v6;
      if ( !*(_DWORD *)(*(_DWORD *)a2 + 4 * v8) )
      {
        if ( PFEOBJ::bCheckFamilyName((PFEOBJ *)&v13, *((wchar_t **)a2 + 1), v8, 0) )
          *(_DWORD *)(*(_DWORD *)a2 + 4 * v8) = v6;
      }
      v5 = v14 + 4;
      v15 = (struct _EUDCLOAD *)((char *)v15 + 1);
      v4 = *(_DWORD *)this;
      v14 += 4;
    }
    while ( (unsigned int)v15 < *(_DWORD *)(v4 + 124) );
  }
  v9 = *(int **)a2;
  if ( !*(_DWORD *)(*(_DWORD *)a2 + 4) )
  {
    v10 = *v9;
LABEL_13:
    v9[1] = v10;
  }
}
