/*
 * XREFs of ?FBitsTouch@@YGHPAUtagWND@@PAUtagRECT@@PAUtagSPB@@K@Z @ 0x17E08B
 * Callers:
 *     ?SpbCheckRect2@@YGHPAUtagSPB@@PAUtagWND@@PAUtagRECT@@K@Z @ 0x17E205 (-SpbCheckRect2@@YGHPAUtagSPB@@PAUtagWND@@PAUtagRECT@@K@Z.c)
 * Callees:
 *     _IsVisible@4 @ 0x2D3FC (_IsVisible@4.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _SubtractRect@12 @ 0x9A66A (_SubtractRect@12.c)
 */

int __userpurge FBitsTouch@<eax>(
        int *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagWND *a3,
        struct tagRECT *a4,
        struct tagSPB *a5,
        unsigned int a6)
{
  int v6; // ecx
  _DWORD *k; // esi
  int v8; // edx
  _DWORD *v9; // edi
  int i; // ebx
  _DWORD *j; // eax
  int v12; // eax
  struct tagRECT *v15; // [esp+1Ch] [ebp+Ch]

  if ( !a2 )
    return IntersectRect(a1, a1, (int *)a3 + 3);
  if ( !IsVisible(a2) )
    return 0;
  k = (_DWORD *)*((_DWORD *)a3 + 1);
  if ( (*((_DWORD *)a3 + 8) & 2) != 0 && ((unsigned __int16)a4 & 0x400) != 0 )
    return 0;
  v8 = k[14];
  if ( v6 == v8 )
    return IntersectRect(a1, a1, (int *)a3 + 3);
  v9 = (_DWORD *)v6;
  v15 = (struct tagRECT *)(v6 + 56);
  for ( i = *(_DWORD *)(v6 + 56); v8 != i; i = *(_DWORD *)(i + 56) )
  {
    v6 = i;
    if ( !i )
      return 0;
  }
  if ( (_DWORD *)v6 == k )
  {
    if ( (*((_DWORD *)a3 + 8) & 2) != 0 )
    {
      if ( v9 != k )
      {
        for ( j = (_DWORD *)v15->left; k != j; j = (_DWORD *)j[14] )
          v9 = j;
        for ( k = (_DWORD *)k[15]; k && k != v9; k = (_DWORD *)k[12] )
        {
          v12 = k[5];
          if ( (*(_BYTE *)(v12 + 23) & 0x10) != 0
            && !*(_DWORD *)(v12 + 108)
            && (*(_BYTE *)(v12 + 18) & 8) == 0
            && !SubtractRect(a1, a1, (int *)(v12 + 52)) )
          {
            return 0;
          }
LABEL_26:
          ;
        }
      }
      return IntersectRect(a1, a1, (int *)a3 + 3);
    }
  }
  else
  {
    v9 = (_DWORD *)v6;
    while ( (_DWORD *)v6 != k )
    {
      v6 = *(_DWORD *)(v6 + 48);
      if ( !v6 )
        goto LABEL_26;
    }
  }
  return 0;
}
