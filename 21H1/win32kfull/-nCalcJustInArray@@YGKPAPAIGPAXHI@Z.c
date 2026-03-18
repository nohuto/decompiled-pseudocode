/*
 * XREFs of ?nCalcJustInArray@@YGKPAPAIGPAXHI@Z @ 0x222085
 * Callers:
 *     _GreGetCharacterPlacementW@24 @ 0x2221E7 (_GreGetCharacterPlacementW@24.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 */

int __userpurge nCalcJustInArray@<eax>(
        unsigned __int16 a1@<dx>,
        _DWORD *a2@<ecx>,
        unsigned int **a3,
        int a4,
        void *a5,
        int a6,
        unsigned int a7)
{
  unsigned int **v7; // esi
  int v9; // ebx
  unsigned int v10; // edx
  unsigned int **v11; // ecx
  unsigned int **v12; // ecx
  int v13; // edi
  void *v14; // eax
  void *v15; // edx
  int *v16; // ecx
  unsigned int **v17; // eax
  unsigned int **v18; // eax
  unsigned int *v21; // [esp+10h] [ebp-10h]
  unsigned int **v22; // [esp+14h] [ebp-Ch]
  unsigned int **v23; // [esp+18h] [ebp-8h]
  void *v25; // [esp+30h] [ebp+10h]
  void *v26; // [esp+30h] [ebp+10h]
  void *v27; // [esp+30h] [ebp+10h]

  v7 = a3;
  v9 = 0;
  v10 = 0;
  v22 = 0;
  v23 = 0;
  v21 = 0;
  if ( a4 )
  {
    v21 = (unsigned int *)a1;
    v23 = &a3[(_DWORD)a5];
    v11 = a3;
    v25 = v23 >= a3 ? (void *)((unsigned int)(4 * (_DWORD)a5) >> 2) : 0;
    if ( !v25 )
      goto LABEL_25;
    do
    {
      if ( *v11 == (unsigned int *)a1 )
        ++v9;
      ++v11;
      ++v10;
    }
    while ( v10 < (unsigned int)v25 );
  }
  else
  {
    v22 = (unsigned int **)((char *)a3 + 2 * (_DWORD)a5);
    v12 = a3;
    v26 = v22 >= a3 ? (void *)((unsigned int)(2 * (_DWORD)a5) >> 1) : 0;
    if ( !v26 )
      goto LABEL_25;
    do
    {
      if ( *(_WORD *)v12 == a1 )
        ++v9;
      v12 = (unsigned int **)((char *)v12 + 2);
      ++v10;
    }
    while ( v10 < (unsigned int)v26 );
  }
  v13 = 0;
  if ( v9 )
  {
    v14 = PALLOCMEM2(4 * v9, 2037147463, 1);
    v15 = v14;
    v27 = v14;
    if ( v14 )
    {
      v16 = (int *)v14;
      if ( a4 )
      {
        v17 = v23;
        if ( a3 < v23 )
        {
          do
          {
            if ( *v7 == v21 )
            {
              *v16++ = v13 >> 2;
              v17 = v23;
            }
            ++v7;
            v13 += 4;
          }
          while ( v7 < v17 );
LABEL_23:
          v15 = v27;
        }
      }
      else
      {
        v18 = v22;
        if ( a3 < v22 )
        {
          do
          {
            if ( *(_WORD *)v7 == a1 )
            {
              *v16++ = v13 >> 1;
              v18 = v22;
            }
            v7 = (unsigned int **)((char *)v7 + 2);
            v13 += 2;
          }
          while ( v7 < v18 );
          goto LABEL_23;
        }
      }
      *a2 = v15;
      return v9;
    }
  }
LABEL_25:
  *a2 = 0;
  return 0;
}
