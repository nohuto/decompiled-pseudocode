/*
 * XREFs of _TppPHExtractMin@4 @ 0x4B2B755C
 * Callers:
 *     _TppPHDelete@8 @ 0x4B2B750C (_TppPHDelete@8.c)
 * Callees:
 *     <none>
 */

int __thiscall TppPHExtractMin(int *this)
{
  int v2; // edi
  int *v3; // eax
  int *v4; // edx
  int **v6; // ecx
  int *v7; // ecx
  int *v8; // eax
  int **v9; // ebx
  int **v10; // eax
  int v11; // ebx

  v2 = *this;
  if ( *this )
  {
    v3 = (int *)(v2 + 8);
    v4 = *(int **)(v2 + 8);
    if ( v4 == (int *)(v2 + 8) )
    {
      *this = 0;
    }
    else
    {
      if ( (int *)v4[1] != v3 || (v6 = *(int ***)(v2 + 12), *v6 != v3) )
LABEL_16:
        __fastfail(3u);
      *v6 = v4;
      v4[1] = (int)v6;
      *(_DWORD *)(v2 + 12) = v2 + 8;
      *v3 = (int)v3;
      while ( 1 )
      {
        v7 = (int *)*v4;
        if ( (int *)*v4 == v4 )
          break;
        if ( *((_QWORD *)v7 + 2) < *((_QWORD *)v4 + 2) )
        {
          v7 = v4;
          v4 = (int *)*v4;
        }
        v8 = (int *)*v7;
        if ( *(int **)(*v7 + 4) != v7 )
          goto LABEL_16;
        v9 = (int **)v7[1];
        if ( *v9 != v7 )
          goto LABEL_16;
        *v9 = v8;
        v8[1] = (int)v9;
        v10 = (int **)(v4 + 2);
        v11 = v4[2];
        if ( *(int **)(v11 + 4) != v4 + 2 )
          goto LABEL_16;
        *v7 = v11;
        v7[1] = (int)v10;
        *(_DWORD *)(v11 + 4) = v7;
        *v10 = v7;
        v4 = (int *)*v4;
      }
      *this = (int)v4;
    }
  }
  return v2;
}
