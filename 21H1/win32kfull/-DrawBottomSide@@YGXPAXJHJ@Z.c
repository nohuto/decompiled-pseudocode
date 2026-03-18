/*
 * XREFs of ?DrawBottomSide@@YGXPAXJHJ@Z @ 0x19CA7E
 * Callers:
 *     ?DrawRoundedRectangularShadow@@YGXPAXJJHJ@Z @ 0x19CC15 (-DrawRoundedRectangularShadow@@YGXPAXJJHJ@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge DrawBottomSide(int a1@<edx>, int a2@<ecx>, void *a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v8; // eax
  int *v9; // edx
  int v10; // ecx
  char *v11; // ebx
  int v12; // ebx
  char *v13; // esi
  int v15; // [esp+1Ch] [ebp+Ch]

  v6 = 5 * a4;
  v8 = -4 * a1;
  v9 = (int *)byte_25885C;
  v15 = v8;
  if ( a3 )
  {
    v10 = a1 - 10;
    v11 = (char *)(a2 + 4 * (v6 + a1 * (v6 - 1)));
    do
    {
      if ( v6 < v10 )
      {
        memset32(v11, *v9, v10 - v6);
        v8 = v15;
        v10 = a1 - 10;
      }
      ++v9;
      v11 += v8;
    }
    while ( (int)v9 < (int)dword_258870 );
  }
  else
  {
    v12 = a1 - v6;
    v13 = (char *)(a1 * (4 * v6 - 4) + a2 + 40);
    do
    {
      if ( v12 > 10 )
      {
        memset32(v13, *v9, v12 - 10);
        v8 = v15;
      }
      ++v9;
      v13 += v8;
    }
    while ( (int)v9 < (int)dword_258870 );
  }
}
