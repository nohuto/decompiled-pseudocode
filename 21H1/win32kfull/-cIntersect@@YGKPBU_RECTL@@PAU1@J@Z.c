/*
 * XREFs of ?cIntersect@@YGKPBU_RECTL@@PAU1@J@Z @ 0x1DEEE7
 * Callers:
 *     _bMoveDevDragRect@16 @ 0x1E3757 (_bMoveDevDragRect@16.c)
 * Callees:
 *     <none>
 */

int __userpurge cIntersect@<eax>(int a1@<edx>, int *a2@<ecx>, const struct _RECTL *a3, struct _RECTL *a4, int a5)
{
  int v5; // edi
  int *v6; // ebx
  int *v7; // edx
  int *v8; // eax
  int v9; // ecx
  int v10; // esi
  int v11; // ebx
  int v12; // ecx
  int v13; // esi
  int v16; // [esp+10h] [ebp-4h]

  v5 = 0;
  v16 = 4;
  v6 = a2;
  v7 = (int *)(a1 + 4);
  v8 = v7;
  do
  {
    v9 = *(v8 - 1);
    if ( v9 <= *v6 )
      v9 = *v6;
    *(v7 - 1) = v9;
    v10 = v8[1];
    v11 = v6[2];
    if ( v10 >= v11 )
      v10 = v11;
    v7[1] = v10;
    if ( v9 < v10 )
    {
      v12 = *v8;
      if ( *v8 <= a2[1] )
        v12 = a2[1];
      *v7 = v12;
      v13 = v8[2];
      if ( v13 >= a2[3] )
        v13 = a2[3];
      v7[2] = v13;
      if ( v12 < v13 )
      {
        v7 += 4;
        ++v5;
      }
    }
    v6 = a2;
    v8 += 4;
    --v16;
  }
  while ( v16 );
  return v5;
}
