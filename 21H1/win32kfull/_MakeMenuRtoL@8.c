/*
 * XREFs of _MakeMenuRtoL@8 @ 0x1AB8A6
 * Callers:
 *     _xxxSetMenuItemInfo@20 @ 0x1DCEA (_xxxSetMenuItemInfo@20.c)
 *     _xxxInsertMenuItem@20 @ 0x42D14 (_xxxInsertMenuItem@20.c)
 *     _MakeMenuRtoL@8 @ 0x1AB8A6 (_MakeMenuRtoL@8.c)
 * Callees:
 *     _MakeMenuRtoL@8 @ 0x1AB8A6 (_MakeMenuRtoL@8.c)
 */

int __fastcall MakeMenuRtoL(int a1, int a2)
{
  int v3; // esi
  int v4; // eax
  unsigned int v5; // eax
  int v6; // esi
  int v7; // ebx
  int **v8; // ecx
  int *v9; // edx
  int v10; // eax
  int *v11; // ecx

  v3 = *(_DWORD *)(a1 + 20);
  v4 = *(_DWORD *)(v3 + 20);
  if ( a2 )
    v5 = v4 | 0x20;
  else
    v5 = v4 & 0xFFFFFFDF;
  *(_DWORD *)(v3 + 20) = v5;
  v6 = 0;
  if ( *(int *)(*(_DWORD *)(a1 + 20) + 24) > 0 )
  {
    v7 = 0;
    do
    {
      v8 = (int **)(v7 + *(_DWORD *)(a1 + 56));
      v9 = *v8;
      v10 = **v8;
      if ( a2 )
      {
        *v9 = v10 | 0x4000;
        **v8 |= 0x2000u;
      }
      else
      {
        *v9 = v10 & 0xFFFFBFFF;
        **v8 &= ~0x2000u;
      }
      v11 = v8[2];
      if ( v11 )
        MakeMenuRtoL(v11, a2);
      ++v6;
      v7 += 80;
    }
    while ( v6 < *(_DWORD *)(*(_DWORD *)(a1 + 20) + 24) );
  }
  return a1;
}
