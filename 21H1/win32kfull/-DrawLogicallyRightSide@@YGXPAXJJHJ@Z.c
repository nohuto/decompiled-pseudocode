/*
 * XREFs of ?DrawLogicallyRightSide@@YGXPAXJJHJ@Z @ 0x19CB14
 * Callers:
 *     ?DrawRoundedRectangularShadow@@YGXPAXJJHJ@Z @ 0x19CC15 (-DrawRoundedRectangularShadow@@YGXPAXJJHJ@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge DrawLogicallyRightSide(int a1@<edx>, int a2@<ecx>, char *a3, int a4, int a5, int a6, int a7)
{
  int v8; // edx
  int v9; // esi
  int v10; // ecx
  int v11; // ebx
  int *v12; // esi
  int i; // edx
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // edx
  char *v18; // eax
  char *v19; // edi
  int v21; // [esp+20h] [ebp+10h]

  v8 = 5 * a5;
  v9 = (int)&a3[-5 * a5];
  v21 = 5 * a5;
  if ( a4 )
  {
    if ( v9 > 10 )
    {
      v10 = a1 * (_DWORD)(a3 - 11);
      v11 = v9 - 10;
      do
      {
        v12 = (int *)(a2 + 4 * (v10 + v8 - 5));
        for ( i = 0; i > -5; --i )
        {
          v14 = dword_25886C[i];
          *v12++ = v14;
        }
        v8 = v21;
        v10 -= a1;
        --v11;
      }
      while ( v11 );
    }
  }
  else if ( v9 > 10 )
  {
    v15 = -4 * a1;
    v16 = a1 * (_DWORD)(a3 - 10) - v8;
    v17 = v9 - 10;
    v18 = (char *)(a2 + 4 * v16);
    do
    {
      v19 = v18;
      v18 += v15;
      qmemcpy(v19, byte_25885C, 0x14u);
      --v17;
    }
    while ( v17 );
  }
}
