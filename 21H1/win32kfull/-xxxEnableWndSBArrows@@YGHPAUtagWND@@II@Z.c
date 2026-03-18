/*
 * XREFs of ?xxxEnableWndSBArrows@@YGHPAUtagWND@@II@Z @ 0x8E114
 * Callers:
 *     _xxxSetScrollBar@16 @ 0x8DD18 (_xxxSetScrollBar@16.c)
 *     _xxxEnableScrollBar@12 @ 0x8E0EE (_xxxEnableScrollBar@12.c)
 * Callees:
 *     _IsVisible@4 @ 0x2D3FC (_IsVisible@4.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     __InitPwSB@4 @ 0x6E5B6 (__InitPwSB@4.c)
 *     _xxxDrawScrollBar@12 @ 0xC1AFC (_xxxDrawScrollBar@12.c)
 */

int __userpurge xxxEnableWndSBArrows@<eax>(
        int a1@<edx>,
        int *a2@<ecx>,
        struct tagWND *a3,
        unsigned int a4,
        unsigned int a5)
{
  int v6; // ebx
  unsigned int *inited; // esi
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned __int8 v11; // cl
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  int v15; // eax
  unsigned __int8 v16; // cl
  int v17; // eax
  unsigned int v18; // [esp+10h] [ebp-10h]
  int v20; // [esp+18h] [ebp-8h]
  int DCEx; // [esp+1Ch] [ebp-4h]

  v6 = 0;
  v20 = 0;
  inited = (unsigned int *)a2[21];
  if ( inited )
  {
    v18 = *inited;
  }
  else
  {
    if ( !a3 )
      return 0;
    v18 = 0;
    inited = (unsigned int *)_InitPwSB(a2);
    if ( !inited )
      return 0;
  }
  DCEx = _GetDCEx(a2, 0, 65537);
  if ( DCEx )
  {
    v8 = a1;
    if ( !a1 || a1 == 3 )
    {
      v9 = *inited;
      if ( a3 )
        v10 = (unsigned int)a3 | v9;
      else
        v10 = v9 & 0xFFFFFFFC;
      v11 = v18;
      *inited = v10;
      if ( v10 != v18 )
      {
        v18 = v10;
        v17 = a2[5];
        v20 = 1;
        if ( (*(_BYTE *)(v17 + 8) & 4) != 0 && (*(_BYTE *)(v17 + 23) & 0x20) == 0 )
        {
          if ( IsVisible(a2) )
          {
            xxxDrawScrollBar(0);
            if ( inited != (unsigned int *)a2[21] )
              goto LABEL_17;
          }
        }
        v11 = v18;
      }
      if ( ((v11 ^ *(_BYTE *)inited) & 1) != 0 )
      {
        xxxWindowEvent(0x800Au, (struct tagEVENTHOOK *)a2, 0xFFFFFFFA, (struct tagWND *)1, 1);
        if ( inited != (unsigned int *)a2[21] )
          goto LABEL_17;
        v11 = v18;
      }
      if ( ((v11 ^ *(_BYTE *)inited) & 2) != 0 )
      {
        xxxWindowEvent(0x800Au, (struct tagEVENTHOOK *)a2, 0xFFFFFFFA, (struct tagWND *)5, 1);
        if ( inited != (unsigned int *)a2[21] )
          goto LABEL_17;
      }
      v8 = a1;
    }
    if ( v8 == 3 || v8 == 1 )
    {
      v12 = *inited;
      v13 = a3 ? (4 * (_DWORD)a3) | v12 : v12 & 0xFFFFFFF3;
      *inited = v13;
      if ( v13 != v18 )
      {
        v15 = a2[5];
        v20 = 1;
        if ( (*(_BYTE *)(v15 + 8) & 2) != 0 && (*(_BYTE *)(v15 + 23) & 0x20) == 0 )
        {
          if ( IsVisible(a2) )
          {
            xxxDrawScrollBar(1);
            if ( inited != (unsigned int *)a2[21] )
              goto LABEL_17;
          }
        }
        v16 = v18;
        if ( (((unsigned __int8)v18 ^ *(_BYTE *)inited) & 4) != 0 )
        {
          xxxWindowEvent(0x800Au, (struct tagEVENTHOOK *)a2, 0xFFFFFFFB, (struct tagWND *)1, 1);
          if ( inited != (unsigned int *)a2[21] )
            goto LABEL_17;
          v16 = v18;
        }
        if ( ((v16 ^ *(_BYTE *)inited) & 8) != 0 )
          xxxWindowEvent(0x800Au, (struct tagEVENTHOOK *)a2, 0xFFFFFFFB, (struct tagWND *)5, 1);
      }
    }
    v6 = v20;
LABEL_17:
    _ReleaseDC(DCEx);
    return v6;
  }
  return 0;
}
