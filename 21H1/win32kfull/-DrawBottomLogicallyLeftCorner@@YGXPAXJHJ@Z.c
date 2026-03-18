/*
 * XREFs of ?DrawBottomLogicallyLeftCorner@@YGXPAXJHJ@Z @ 0x19C971
 * Callers:
 *     ?DrawRoundedRectangularShadow@@YGXPAXJJHJ@Z @ 0x19CC15 (-DrawRoundedRectangularShadow@@YGXPAXJJHJ@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge DrawBottomLogicallyLeftCorner(int a1@<edx>, int a2@<ecx>, void *a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v8; // ebx
  int *v10; // ecx
  int v11; // edx
  _DWORD *v12; // esi
  int *v13; // edi
  int v14; // ebx
  int v15; // eax
  char *v16; // edx
  char *v17; // eax
  char *v18; // esi
  char *v19; // edi
  int v20; // [esp+18h] [ebp+Ch]

  v6 = 5 * a4;
  v8 = -4 * a1;
  v20 = -4 * a1;
  if ( a3 )
  {
    v10 = (int *)&unk_258808;
    v11 = a2 - 40 + 4 * a1 * v6;
    do
    {
      v12 = (_DWORD *)v11;
      v13 = v10;
      v14 = 5;
      do
      {
        v15 = *v13--;
        *v12++ = v15;
        --v14;
      }
      while ( v14 );
      v11 += v20;
      v10 += 5;
    }
    while ( (int)v10 < (int)&dword_25886C );
  }
  else
  {
    v16 = (char *)&unk_2587F8;
    v17 = (char *)(a2 + a1 * (4 * v6 - 4) + 20);
    do
    {
      v18 = v16;
      v19 = v17;
      v16 += 20;
      v17 += v8;
      qmemcpy(v19, v18, 0x14u);
    }
    while ( (int)v16 < (int)byte_25885C );
  }
}
